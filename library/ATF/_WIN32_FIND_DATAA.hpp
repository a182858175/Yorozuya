// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_FILETIME.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _WIN32_FIND_DATAA
    {
        unsigned int dwFileAttributes;
        _FILETIME ftCreationTime;
        _FILETIME ftLastAccessTime;
        _FILETIME ftLastWriteTime;
        unsigned int nFileSizeHigh;
        unsigned int nFileSizeLow;
        unsigned int dwReserved0;
        unsigned int dwReserved1;
        char cFileName[260];
        char cAlternateFileName[14];
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_WIN32_FIND_DATAA, 320>(), "_WIN32_FIND_DATAA");
END_ATF_NAMESPACE
