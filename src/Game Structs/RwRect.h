// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct RwRect	// sizeof = 0x10
{
	DWORD x;
	DWORD y;
	DWORD w;
	DWORD h;
};
#pragma pack(pop)

static_assert(sizeof(RwRect) == 0x10, "Incorrect struct size: RwRect");