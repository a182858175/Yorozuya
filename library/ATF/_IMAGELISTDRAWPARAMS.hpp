// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HDC__.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _IMAGELISTDRAWPARAMS
    {
        unsigned int cbSize;
        struct _IMAGELIST *himl;
        int i;
        HDC__ *hdcDst;
        int x;
        int y;
        int cx;
        int cy;
        int xBitmap;
        int yBitmap;
        unsigned int rgbBk;
        unsigned int rgbFg;
        unsigned int fStyle;
        unsigned int dwRop;
        unsigned int fState;
        unsigned int Frame;
        unsigned int crEffect;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
