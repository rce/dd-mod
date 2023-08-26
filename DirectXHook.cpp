#include "DirectXHook.h"

#pragma comment (lib, "d3d9.lib")

#include <d3d9.h>
#include <iostream>
#include <vector>
#include "imgui.h"
#include "backends/imgui_impl_dx9.h"
#include "backends/imgui_impl_win32.h"

// These offsets have to be reverse engineered by hand. These might or
// might not be the same over different applications and Direct3D9 versions.
const size_t offsetPresent = 0x44;
const size_t offsetBeginScene = 0xA4;
const size_t offsetEndScene = 0xA8;
const size_t offsetClear = 0xAC;

bool g_ImGui_Initialized = false;
bool g_ImGui_Closing = false;

std::vector<std::string> g_LogLines{};

void RenderOverlay(IDirect3DDevice9* pDevice)
{
	HWND hWnd = NULL;
	if (!g_ImGui_Initialized) {
		hWnd = FindWindow(NULL, L"Dungeon Defenders");
		ImGui::CreateContext();
		ImGui_ImplWin32_Init(hWnd);
		ImGui_ImplDX9_Init(pDevice);
		g_ImGui_Initialized = true;
		g_ImGui_Closing = false;
		std::cout << "imgui initialized" << std::endl;
	}


	auto readyToRender = g_ImGui_Initialized && !g_ImGui_Closing;

	if (!readyToRender) return;

	ImGui_ImplDX9_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();


	ImGui::SetNextWindowPos(ImVec2(5, 5));
	ImGui::SetNextWindowSize(ImVec2(0, 0));
	ImGui::SetNextWindowBgAlpha(0.3f);

	ImGui::Begin("Log");
	for (auto& l : g_LogLines) {
		ImGui::Text(l.c_str());
	}
	ImGui::End();

	ImGui::EndFrame();
	ImGui::Render();
	ImGui_ImplDX9_RenderDrawData(ImGui::GetDrawData());

}

void ClearLog()
{
	g_LogLines.clear();
}

void AddLogLine(const std::string& str)
{
	const size_t MAX_LOG_SIZE = 100;
	if (g_LogLines.size() == MAX_LOG_SIZE) {
		g_LogLines.erase(g_LogLines.begin());
	}
	g_LogLines.push_back(str);
}

void ImGuiCleanup()
{
	if (g_ImGui_Initialized)
	{
		g_ImGui_Closing = true;
		Sleep(100);

		ImGui_ImplDX9_Shutdown();
		ImGui_ImplWin32_Shutdown();
		ImGui::DestroyContext();
		g_ImGui_Initialized = false;
		g_ImGui_Closing = false;
	}
}

typedef HRESULT(__stdcall* EndScene_t)(IDirect3DDevice9*);
EndScene_t originalEndScene = nullptr;
EndScene_t hookEndScene = [](IDirect3DDevice9* pDevice) -> HRESULT {
	RenderOverlay(pDevice);

	return originalEndScene(pDevice);
};

HWND GetDummyWindowHandle()
{
	HINSTANCE hInstance = NULL;
	WNDCLASSEX wc;
	ZeroMemory(&wc, sizeof(WNDCLASSEX));
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = DefWindowProc;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpszClassName = L"Dummy";
	RegisterClassEx(&wc);

	HWND hWnd = CreateWindowEx(NULL, wc.lpszClassName, L"Dummy", WS_OVERLAPPEDWINDOW, 300, 300, 500, 400, NULL, NULL, hInstance, NULL);
	return hWnd;
}

void* FindEndScene() {
	HWND hWnd = GetDummyWindowHandle();
	if (hWnd) {
		std::cout << "Found the following handle: " << hWnd << std::endl;
		IDirect3D9* dummy_pD3D = Direct3DCreate9(D3D_SDK_VERSION);
		if (dummy_pD3D)
		{
			D3DPRESENT_PARAMETERS d3dpp;
			ZeroMemory(&d3dpp, sizeof(d3dpp));
			d3dpp.Windowed = TRUE;
			d3dpp.SwapEffect = D3DSWAPEFFECT_DISCARD;
			d3dpp.hDeviceWindow = hWnd;

			IDirect3DDevice9* dummy_pDevice = nullptr;
			HRESULT hrCreateDevice = dummy_pD3D->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &dummy_pDevice);
			if (SUCCEEDED(hrCreateDevice))
			{
				std::cout << "pDevice == " << dummy_pDevice << std::endl;
				auto vmt = *reinterpret_cast<void***>(dummy_pDevice);
				std::cout << "vmt == " << vmt << std::endl;
				auto addrEndScene = vmt[offsetEndScene / sizeof(uintptr_t)];
				std::cout << "EndScene == " << std::hex << addrEndScene << std::endl;
				if (dummy_pDevice) dummy_pDevice->Release();
				return addrEndScene;
			}
			else
			{
				std::cout << "error: IDirect3DDevice9::CreateDevice(...)" << std::endl;
			}

			if (dummy_pD3D) dummy_pD3D->Release();
		}
		else
		{
			std::cout << "error: Direct3DCreate" << std::endl;
		}

		if (hWnd) CloseWindow(hWnd);
	}

	return 0;

}

const size_t jmpSize = 5;

void write_jmp(uintptr_t dest, uintptr_t src)
{
	*reinterpret_cast<uint8_t*>(src) = 0xE9;
	*reinterpret_cast<intptr_t*>(src + 1) = dest - src - 5;
}


template <typename Function>
Function HookWithTrampoline(Function hook, uintptr_t target, size_t trampolineSize)
{
	DWORD oldProtect;

	auto trampoline = new uint8_t[trampolineSize + jmpSize];
	memcpy(trampoline, reinterpret_cast<void*>(target), trampolineSize);
	write_jmp(target + trampolineSize, reinterpret_cast<uintptr_t>(trampoline) + trampolineSize);
	VirtualProtect(trampoline, trampolineSize + jmpSize, PAGE_EXECUTE_READWRITE, &oldProtect);


	VirtualProtect(reinterpret_cast<void*>(target), trampolineSize, PAGE_EXECUTE_READWRITE, &oldProtect);
	write_jmp(reinterpret_cast<uintptr_t>(hook), target);
	VirtualProtect(reinterpret_cast<void*>(target), trampolineSize, oldProtect, &oldProtect);

	return reinterpret_cast<Function>(trampoline);
}

template <typename Function>
void RevertHookWithTrampoline(Function original, uintptr_t target, size_t trampolineSize)
{
	auto trampoline = reinterpret_cast<uint8_t*>(original);

	// Copy bytes from trampoline back to target function
	DWORD oldProtect;
	VirtualProtect(reinterpret_cast<void*>(target), trampolineSize, PAGE_EXECUTE_READWRITE, &oldProtect);
	memcpy(reinterpret_cast<void*>(target), trampoline, 7);
	VirtualProtect(reinterpret_cast<void*>(target), trampolineSize, oldProtect, &oldProtect);

	// Free the allocated trampoline
	delete[] trampoline;
}


void* g_EndScene_addr = nullptr;
void SetupRenderHook() {
	g_EndScene_addr = FindEndScene();
	std::cout << std::hex << g_EndScene_addr << std::dec << std::endl;
	if (!g_EndScene_addr) {
		std::cout << "Failed to find EndScene" << std::endl;
		return;
	}
	originalEndScene = HookWithTrampoline(hookEndScene, (uintptr_t)g_EndScene_addr, 7);
}


void CleanupRenderHook() {
	ImGuiCleanup();
	RevertHookWithTrampoline(originalEndScene, (uintptr_t)g_EndScene_addr, 7);
}