#pragma once


typedef void* function_t;
typedef function_t* vtable_t;
struct object_t { vtable_t vtable; };

struct VMTHookDetails {
	object_t* object;
	vtable_t original_vtable;
	vtable_t copy_of_vtable;
	void* original_function;
};

VMTHookDetails BareVMTHook(void* ptr, size_t index, void* hook_function)
{
	auto object = (object_t*)ptr;
	auto original_vtable = object->vtable;
	size_t vtable_size = 0;
	while (reinterpret_cast<void**>(object->vtable)[vtable_size]) vtable_size++;
	auto vtable_copy = new function_t[vtable_size];

	memcpy(vtable_copy, object->vtable, vtable_size * sizeof(void*));

	function_t original_Function = vtable_copy[index];
	vtable_copy[index] = hook_function;
	object->vtable = vtable_copy;

	return {
		object,
		original_vtable,
		vtable_copy,
		original_Function,
	};
}

void RevertVMTHook(VMTHookDetails hook_details)
{
	hook_details.object->vtable = hook_details.original_vtable;
	delete[] hook_details.copy_of_vtable;
}