// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>
#include "RwObject.h"
#include "RwLLLink.h"


#pragma pack(push, 1)
struct RwObjectHasFrame	// sizeof = 0x14
{
	RwObject object;
	RwLLLink lFrame;
	DWORD sync;
};
#pragma pack(pop)

static_assert(sizeof(RwObjectHasFrame) == 0x14, "Incorrect struct size: RwObjectHasFrame");