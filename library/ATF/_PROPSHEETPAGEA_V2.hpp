// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$59FBEB831CD44585F919BE170CB35D25.hpp>
#include <$F11E48D1ADA518B8C9A94CE476B00947.hpp>
#include <HINSTANCE__.hpp>


START_ATF_NAMESPACE
    struct _PROPSHEETPAGEA_V2
    {
        unsigned int dwSize;
        unsigned int dwFlags;
        HINSTANCE__ *hInstance;
        $59FBEB831CD44585F919BE170CB35D25 ___u3;
        $F11E48D1ADA518B8C9A94CE476B00947 ___u4;
        const char *pszTitle;
        __int64 (WINAPIV *pfnDlgProc)(HWND__ *, unsigned int, unsigned __int64, __int64);
        __int64 lParam;
        unsigned int (WINAPIV *pfnCallback)(HWND__ *, unsigned int, _PROPSHEETPAGEA *);
        unsigned int *pcRefParent;
        const char *pszHeaderTitle;
        const char *pszHeaderSubTitle;
    };
END_ATF_NAMESPACE
