#pragma once

#include <Windows.h>

struct LockState {
	bool Locked;
	bool LockRequested;
};

class InjectionLock {
public:
	InjectionLock();
	~InjectionLock();
	bool IsLockRequested();
	void WaitForLockRequest();
private:
	HANDLE hMapping;
	LockState* pLock;
	void Acquire();
	void Release();
};