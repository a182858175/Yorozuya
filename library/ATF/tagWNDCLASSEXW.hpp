// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HBRUSH__.hpp>
#include <HICON__.hpp>
#include <HINSTANCE__.hpp>


START_ATF_NAMESPACE
    struct tagWNDCLASSEXW
    {
        unsigned int cbSize;
        unsigned int style;
        __int64 (WINAPIV *lpfnWndProc)(HWND__ *, unsigned int, unsigned __int64, __int64);
        int cbClsExtra;
        int cbWndExtra;
        HINSTANCE__ *hInstance;
        HICON__ *hIcon;
        HICON__ *hCursor;
        HBRUSH__ *hbrBackground;
        const wchar_t *lpszMenuName;
        const wchar_t *lpszClassName;
        HICON__ *hIconSm;
    };
END_ATF_NAMESPACE
