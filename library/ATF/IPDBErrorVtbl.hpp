// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct IPDBErrorVtbl
    {
        int (WINAPIV *QueryLastError)(IPDBError *_this, wchar_t *, unsigned __int64);
        void (WINAPIV *SetLastError)(IPDBError *_this, int, const wchar_t *);
        void (WINAPIV *Destroy)(IPDBError *_this);
    };
END_ATF_NAMESPACE
