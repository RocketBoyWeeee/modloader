// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct ColFace	// sizeof = 0x8
{
	WORD a;
	WORD b;
	WORD c;
	BYTE material;
	BYTE light;
};
#pragma pack(pop)

static_assert(sizeof(ColFace) == 0x8, "Incorrect struct size: ColFace");