// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _INTERNET_BUFFERSA
    {
        unsigned int dwStructSize;
        _INTERNET_BUFFERSA *Next;
        const char *lpcszHeader;
        unsigned int dwHeadersLength;
        unsigned int dwHeadersTotal;
        void *lpvBuffer;
        unsigned int dwBufferLength;
        unsigned int dwBufferTotal;
        unsigned int dwOffsetLow;
        unsigned int dwOffsetHigh;
    };
END_ATF_NAMESPACE
