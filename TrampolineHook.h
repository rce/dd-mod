#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <iostream>
#include <Windows.h>

typedef uint8_t byte_t;

const size_t jmp_size = 5;


template <typename function_t>
class TrampolineHook {
public:
	TrampolineHook(void* target_function, function_t hook_function, size_t trampoline_size) :
		backup(std::make_unique<byte_t[]>(trampoline_size)),
		hook_function(reinterpret_cast<uintptr_t>(hook_function)),
		target_function(reinterpret_cast<uintptr_t>(target_function))
	{
		this->trampoline_size = trampoline_size; // TODO disassemble target function to automatically figure out size
		this->trampoline = VirtualAlloc(NULL, trampoline_size + jmp_size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
		this->apply();
	}

	~TrampolineHook()
	{
		if (this->trampoline != nullptr) {
			// Don't free the trampoline as it might still be executed
			//VirtualFree(this->trampoline, trampoline_size + jmp_size, MEM_RELEASE);
			this->trampoline = nullptr;
		}

		// Restore original function start from backup
		DWORD old_protect;
		VirtualProtect(reinterpret_cast<void*>(this->target_function), this->trampoline_size, PAGE_EXECUTE_READWRITE, &old_protect);
		memcpy(reinterpret_cast<void*>(this->target_function), this->backup.get(), this->trampoline_size);
		VirtualProtect(reinterpret_cast<void*>(this->target_function), this->trampoline_size, old_protect, NULL);
	}

	function_t original()
	{
		return reinterpret_cast<function_t>(this->trampoline);
	}


private:


	std::string _GetLastErrorString()
	{
		// Retrieve the system error message for the last-error cod
		CHAR buf[1024];
		DWORD dwError = GetLastError();

		DWORD charsReturned = FormatMessageA(
			FORMAT_MESSAGE_FROM_SYSTEM |
			FORMAT_MESSAGE_IGNORE_INSERTS,
			NULL,
			dwError,
			MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
			(LPSTR)&buf, 1024,
			NULL);
		return std::string(buf);
	}
	uintptr_t target_function, hook_function;
	size_t trampoline_size;
	std::unique_ptr<byte_t[]> backup;
	void* trampoline;

	void apply()
	{
		// Backup original function start
		memcpy(this->backup.get(), reinterpret_cast<void*>(this->target_function), this->trampoline_size);

		// Make trampoline that jumps past our patch
		memcpy(
			this->trampoline,
			reinterpret_cast<void*>(this->target_function),
			this->trampoline_size
		);
		write_jmp(
			target_function + this->trampoline_size,
			reinterpret_cast<uintptr_t>(this->trampoline) + this->trampoline_size
		);

		// Patch original function to jump to our hook
		DWORD old_protect;
		VirtualProtect(reinterpret_cast<void*>(this->target_function), this->trampoline_size, PAGE_EXECUTE_READWRITE, &old_protect);
		write_jmp(this->hook_function, this->target_function);
		VirtualProtect(reinterpret_cast<void*>(this->target_function), this->trampoline_size, old_protect, NULL);

		//TODO: FlushInstructionCache();
	}

	void write_jmp(uintptr_t dest, uintptr_t src)
	{
		*reinterpret_cast<byte_t*>(src) = 0xe9;
		*reinterpret_cast<uintptr_t*>(src + 1) = calculate_jump(dest, src);
	}

	uintptr_t calculate_jump(uintptr_t dest, uintptr_t src)
	{
		return dest - src - 5;
	}
};