// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_CONTEXT.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 16)
    struct _MINIDUMP_THREAD_EX_CALLBACK
    {
        unsigned int ThreadId;
         void *ThreadHandle;
        _CONTEXT Context;
        unsigned int SizeOfContext;
         unsigned __int64 StackBase;
         unsigned __int64 StackEnd;
         unsigned __int64 BackingStoreBase;
         unsigned __int64 BackingStoreEnd;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
