// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CTimer	// sizeof = 0x40
{
	DWORD globalVar;
	BYTE gxtEntry[10];
	BYTE displayedText[6];
	DWORD field_14;
	DWORD field_18;
	DWORD field_1C;
	DWORD field_20;
	DWORD field_24;
	WORD field_28;
	BYTE field_2A;
	BYTE field_2B;
	DWORD field_2C;
	DWORD field_30;
	DWORD field_34;
	BYTE enabled;
	BYTE timerType;
	BYTE field_3A;
	BYTE field_3B;
	DWORD enableSoundAtSec;
};
#pragma pack(pop)

static_assert(sizeof(CTimer) == 0x40, "Incorrect struct size: CTimer");