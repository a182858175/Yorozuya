// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HINSTANCE__.hpp>
#include <HWND__.hpp>
#include <tagPOINT.hpp>
#include <tagRECT.hpp>


START_ATF_NAMESPACE
    struct tagPSDA
    {
        unsigned int lStructSize;
        HWND__ *hwndOwner;
        void *hDevMode;
        void *hDevNames;
        unsigned int Flags;
        tagPOINT ptPaperSize;
        tagRECT rtMinMargin;
        tagRECT rtMargin;
        HINSTANCE__ *hInstance;
        __int64 lCustData;
        unsigned __int64 (WINAPIV *lpfnPageSetupHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        unsigned __int64 (WINAPIV *lpfnPagePaintHook)(HWND__ *, unsigned int, unsigned __int64, __int64);
        const char *lpPageSetupTemplateName;
        void *hPageSetupTemplate;
    };
END_ATF_NAMESPACE
