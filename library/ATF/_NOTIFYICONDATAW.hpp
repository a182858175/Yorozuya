// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$30417D6DC3305618FB171BBBD15A8541.hpp>
#include <HICON__.hpp>
#include <HWND__.hpp>



START_ATF_NAMESPACE
    struct _NOTIFYICONDATAW
    {
        unsigned int cbSize;
        HWND__ *hWnd;
        unsigned int uID;
        unsigned int uFlags;
        unsigned int uCallbackMessage;
        HICON__ *hIcon;
        wchar_t szTip[128];
        unsigned int dwState;
        unsigned int dwStateMask;
        wchar_t szInfo[256];
        $30417D6DC3305618FB171BBBD15A8541 ___u10;
        wchar_t szInfoTitle[64];
        unsigned int dwInfoFlags;
    };
END_ATF_NAMESPACE
