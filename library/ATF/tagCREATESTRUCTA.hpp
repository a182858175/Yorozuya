// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HINSTANCE__.hpp>
#include <HMENU__.hpp>
#include <HWND__.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagCREATESTRUCTA
    {
        void *lpCreateParams;
        HINSTANCE__ *hInstance;
        HMENU__ *hMenu;
        HWND__ *hwndParent;
        int cy;
        int cx;
        int y;
        int x;
        int style;
        const char *lpszName;
        const char *lpszClass;
        unsigned int dwExStyle;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
