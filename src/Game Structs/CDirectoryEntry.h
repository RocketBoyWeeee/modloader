// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CDirectoryEntry	// sizeof = 0x20
{
	DWORD fileOffset;
	WORD sizePriority2;
	WORD sizePriority1;
	BYTE filename[24];
};
#pragma pack(pop)

static_assert(sizeof(CDirectoryEntry) == 0x20, "Incorrect struct size: CDirectoryEntry");