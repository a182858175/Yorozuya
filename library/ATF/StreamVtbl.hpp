// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct StreamVtbl
    {
        int (WINAPIV *QueryCb)(Stream *_this);
        BYTE gap8[8];
        int (WINAPIV *Write)(Stream *_this, int, void *, int);
        int (WINAPIV *Replace)(Stream *_this, void *, int);
        int (WINAPIV *Append)(Stream *_this, void *, int);
        int (WINAPIV *Delete)(Stream *_this);
        int (WINAPIV *Release)(Stream *_this);
        int (WINAPIV *Read2)(Stream *_this, int, void *, int);
        int (WINAPIV *Truncate)(Stream *_this, int);
    };
END_ATF_NAMESPACE
