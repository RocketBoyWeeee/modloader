// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CEventGroup	// sizeof = 0x4C
{
	DWORD __vmt;
	DWORD pPed;
	DWORD count;
	DWORD pEvents[16];
};
#pragma pack(pop)

static_assert(sizeof(CEventGroup) == 0x4C, "Incorrect struct size: CEventGroup");