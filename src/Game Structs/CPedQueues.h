// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CPedQueues	// sizeof = 0x300
{
	DWORD field_0[64];
	BYTE field_100[64];
	DWORD field_140[64];
	WORD m_awUniqueID[64];
	BYTE m_abUsed[64];
};
#pragma pack(pop)

static_assert(sizeof(CPedQueues) == 0x300, "Incorrect struct size: CPedQueues");