// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_GUID.hpp>



START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct SHFOLDERCUSTOMSETTINGSW
    {
        unsigned int dwSize;
        unsigned int dwMask;
        _GUID *pvid;
        wchar_t *pszWebViewTemplate;
        unsigned int cchWebViewTemplate;
        wchar_t *pszWebViewTemplateVersion;
        wchar_t *pszInfoTip;
        unsigned int cchInfoTip;
        _GUID *pclsid;
        unsigned int dwFlags;
        wchar_t *pszIconFile;
        unsigned int cchIconFile;
        int iIconIndex;
        wchar_t *pszLogo;
        unsigned int cchLogo;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
