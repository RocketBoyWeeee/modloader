// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct AudioFileExt	// sizeof = 0xC
{
	BYTE ext[8];
	DWORD type;
};
#pragma pack(pop)

static_assert(sizeof(AudioFileExt) == 0xC, "Incorrect struct size: AudioFileExt");