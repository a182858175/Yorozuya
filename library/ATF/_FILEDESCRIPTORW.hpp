// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_FILETIME.hpp>
#include <_GUID.hpp>
#include <_POINTL.hpp>
#include <tagSIZE.hpp>



START_ATF_NAMESPACE
    struct _FILEDESCRIPTORW
    {
        unsigned int dwFlags;
        _GUID clsid;
        tagSIZE sizel;
        _POINTL pointl;
        unsigned int dwFileAttributes;
        _FILETIME ftCreationTime;
        _FILETIME ftLastAccessTime;
        _FILETIME ftLastWriteTime;
        unsigned int nFileSizeHigh;
        unsigned int nFileSizeLow;
        wchar_t cFileName[260];
    };
END_ATF_NAMESPACE
