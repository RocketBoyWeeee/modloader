// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CQueuedMode	// sizeof = 0xC
{
	WORD Mode;
	BYTE _undefined_0;
	BYTE _undefined_1;
	DWORD Duration;
	WORD MinZoom;
	WORD MaxZoom;
};
#pragma pack(pop)

static_assert(sizeof(CQueuedMode) == 0xC, "Incorrect struct size: CQueuedMode");