// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CAsyncLogBuffer.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CAsyncLogBufferctor_CAsyncLogBuffer2_ptr = void (WINAPIV*)(struct CAsyncLogBuffer*);
        using CAsyncLogBufferctor_CAsyncLogBuffer2_clbk = void (WINAPIV*)(struct CAsyncLogBuffer*, CAsyncLogBufferctor_CAsyncLogBuffer2_ptr);
        using CAsyncLogBufferGetFileName4_ptr = char* (WINAPIV*)(struct CAsyncLogBuffer*);
        using CAsyncLogBufferGetFileName4_clbk = char* (WINAPIV*)(struct CAsyncLogBuffer*, CAsyncLogBufferGetFileName4_ptr);
        using CAsyncLogBufferGetLength6_ptr = int (WINAPIV*)(struct CAsyncLogBuffer*);
        using CAsyncLogBufferGetLength6_clbk = int (WINAPIV*)(struct CAsyncLogBuffer*, CAsyncLogBufferGetLength6_ptr);
        using CAsyncLogBufferGetStr8_ptr = char* (WINAPIV*)(struct CAsyncLogBuffer*);
        using CAsyncLogBufferGetStr8_clbk = char* (WINAPIV*)(struct CAsyncLogBuffer*, CAsyncLogBufferGetStr8_ptr);
        using CAsyncLogBufferInit10_ptr = bool (WINAPIV*)(struct CAsyncLogBuffer*, int);
        using CAsyncLogBufferInit10_clbk = bool (WINAPIV*)(struct CAsyncLogBuffer*, int, CAsyncLogBufferInit10_ptr);
        using CAsyncLogBufferLog12_ptr = bool (WINAPIV*)(struct CAsyncLogBuffer*, char*, char*, int);
        using CAsyncLogBufferLog12_clbk = bool (WINAPIV*)(struct CAsyncLogBuffer*, char*, char*, int, CAsyncLogBufferLog12_ptr);
        
        using CAsyncLogBufferdtor_CAsyncLogBuffer16_ptr = void (WINAPIV*)(struct CAsyncLogBuffer*);
        using CAsyncLogBufferdtor_CAsyncLogBuffer16_clbk = void (WINAPIV*)(struct CAsyncLogBuffer*, CAsyncLogBufferdtor_CAsyncLogBuffer16_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
