#pragma once

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