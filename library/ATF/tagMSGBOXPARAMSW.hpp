// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HINSTANCE__.hpp>
#include <HWND__.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct tagMSGBOXPARAMSW
    {
        unsigned int cbSize;
        HWND__ *hwndOwner;
        HINSTANCE__ *hInstance;
        const wchar_t *lpszText;
        const wchar_t *lpszCaption;
        unsigned int dwStyle;
        const wchar_t *lpszIcon;
        unsigned __int64 dwContextHelpId;
        void (WINAPIV *lpfnMsgBoxCallback)(tagHELPINFO *);
        unsigned int dwLanguageId;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
