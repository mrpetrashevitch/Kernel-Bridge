#pragma once

#include <ntifs.h>
#include <ntdef.h>
#include <ntddk.h>

EXTERN_C
PVOID
PsGetProcessSectionBaseAddress(
    _In_ PEPROCESS Process
);