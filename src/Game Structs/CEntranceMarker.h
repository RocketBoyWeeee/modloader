// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwV3D.h"


#pragma pack(push, 1)
struct CEntranceMarker	// sizeof = 0x1C
{
	DWORD status;
	RwV3D pos;
	DWORD R;
	DWORD G;
	DWORD B;
};
#pragma pack(pop)

static_assert(sizeof(CEntranceMarker) == 0x1C, "Incorrect struct size: CEntranceMarker");