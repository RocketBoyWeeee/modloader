// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct DIMOUSE2	// sizeof = 0x14
{
	DWORD lX;
	DWORD lY;
	DWORD lZ;
	BYTE buttons[8];
};
#pragma pack(pop)

static_assert(sizeof(DIMOUSE2) == 0x14, "Incorrect struct size: DIMOUSE2");