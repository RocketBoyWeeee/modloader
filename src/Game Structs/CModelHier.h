// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "CBaseModelInfo.h"


#pragma pack(push, 1)
struct CModelHier	// sizeof = 0x24
{
	CBaseModelInfo __parent;
	DWORD _ifp;
};
#pragma pack(pop)

static_assert(sizeof(CModelHier) == 0x24, "Incorrect struct size: CModelHier");