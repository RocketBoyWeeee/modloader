// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct IDirectInputDevice2AVtbl	// sizeof = 0x6C
{
	DWORD QueryInterface;
	DWORD AddRef;
	DWORD Release;
	DWORD GetCapabilities;
	DWORD EnumObjects;
	DWORD GetProperty;
	DWORD SetProperty;
	DWORD Acquire;
	DWORD Unacquire;
	DWORD GetDeviceState;
	DWORD GetDeviceData;
	DWORD SetDataFormat;
	DWORD SetEventNotification;
	DWORD SetCooperativeLevel;
	DWORD GetObjectInfo;
	DWORD GetDeviceInfo;
	DWORD RunControlPanel;
	DWORD Initialize;
	DWORD CreateEffect;
	DWORD EnumEffects;
	DWORD GetEffectInfo;
	DWORD GetForceFeedbackState;
	DWORD SendForceFeedbackCommand;
	DWORD EnumCreatedEffectObjects;
	DWORD Escape;
	DWORD Poll;
	DWORD SendDeviceData;
};
#pragma pack(pop)

static_assert(sizeof(IDirectInputDevice2AVtbl) == 0x6C, "Incorrect struct size: IDirectInputDevice2AVtbl");