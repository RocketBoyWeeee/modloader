// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CScriptTrigger	// sizeof = 0x14
{
	WORD IMG_index;
	BYTE AttachType;
	BYTE Type;
	DWORD Status;
	DWORD Radius;
	WORD modelID;
	WORD priority;
	DWORD field_10;
};
#pragma pack(pop)

static_assert(sizeof(CScriptTrigger) == 0x14, "Incorrect struct size: CScriptTrigger");