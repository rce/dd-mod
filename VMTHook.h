#pragma once

#include "TrampolineHook.h"

#include <iostream>
#define HEX(value) std::setfill('0') << std::setw(8) << std::hex << value << std::dec << std::setfill(' ') << std::setw(0)

void* BareVMTHook(void* ptr, size_t index, void* hook_function)
{
	typedef void* function_t;
	typedef function_t* vtable_t;
	struct object_t { vtable_t vtable; };

	auto object = (object_t*)ptr;

	size_t vtable_size = 0;
	while (reinterpret_cast<void**>(object->vtable)[vtable_size]) vtable_size++;
	auto vtableCopy = new function_t[vtable_size];

	memcpy(vtableCopy, object->vtable, vtable_size * sizeof(void*));

	function_t original_Function = vtableCopy[index];
	vtableCopy[index] = hook_function;
	object->vtable = vtableCopy;

	return original_Function;
}

// Single method vmt hook
template <typename function_t>
class VMTHook
{
	typedef function_t* vtable_t;

	void* pObject;
	vtable_t originalVtable = nullptr;
	function_t* vtableCopy = nullptr;
	function_t original_function;
public:
	VMTHook(void* pObject, size_t index, function_t hook_function) :
		pObject(pObject)
	{
		originalVtable = *(vtable_t*)pObject;
		// calculate vtable size
		size_t size = 0;
		while (reinterpret_cast<void**>(originalVtable)[size]) size++;
		vtableCopy = new function_t[size];

		// copy original vtable to our copy
		memcpy(vtableCopy, originalVtable, size * sizeof(void*));

		original_function = vtableCopy[index];


		original_function = vtableCopy[index];
		// replace function pointer in our copy
		original_function = vtableCopy[index];
		vtableCopy[index] = hook_function;

		// replace vtable in pObject
		*(vtable_t*)pObject = vtableCopy;
	}

	function_t original()
	{
		return original_function;
	}

	~VMTHook()
	{
		*(vtable_t*)pObject = originalVtable;
		if (vtableCopy != nullptr) delete[] vtableCopy;
	}
};

// Single method vmt hook
template <typename function_t>
class VMTHookGlobal
{
	typedef function_t* vtable_t;
	TrampolineHook<function_t>* pTrampoline = nullptr;

public:
	VMTHookGlobal(void* pObject, size_t index, function_t hook_function, size_t trampoline_size)
	{
		vtable_t vtable = *(vtable_t*)pObject;
		std::cout << "Hooking function " << HEX(vtable[index]) << std::endl;
		pTrampoline = new TrampolineHook<function_t>(vtable[index], hook_function, trampoline_size);
	}

	function_t original()
	{
		return pTrampoline->original();
	}

	~VMTHookGlobal()
	{
		if (pTrampoline != nullptr) delete pTrampoline;
	}
};