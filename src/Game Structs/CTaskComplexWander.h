// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CTaskComplex.h"


#pragma pack(push, 1)
struct CTaskComplexWander	// sizeof = 0x28
{
	CTaskComplex __parent;
	DWORD field_C;
	BYTE field_10;
	BYTE _undefined_0;
	BYTE _undefined_1;
	BYTE _undefined_2;
	DWORD field_14;
	WORD field_18;
	BYTE _undefined_3;
	BYTE _undefined_4;
	WORD field_1C;
	BYTE _undefined_5;
	BYTE _undefined_6;
	DWORD field_20;
	BYTE field_24;
	BYTE field_25[3];
};
#pragma pack(pop)

static_assert(sizeof(CTaskComplexWander) == 0x28, "Incorrect struct size: CTaskComplexWander");