// Generated by IDAStruct_To_CHeader.py
#pragma once
#include <windows.h>


#pragma pack(push, 1)
struct CDirectory	// sizeof = 0x10
{
	DWORD m_pEntries;
	DWORD m_dwSize;
	DWORD m_dwCount;
	BYTE m_bDynamicAllocated;
	BYTE __pad[3];
};
#pragma pack(pop)

static_assert(sizeof(CDirectory) == 0x10, "Incorrect struct size: CDirectory");