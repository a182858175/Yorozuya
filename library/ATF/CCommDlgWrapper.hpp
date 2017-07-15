// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CDllIsolationWrapperBase.hpp>


START_ATF_NAMESPACE
    struct  CCommDlgWrapper : CDllIsolationWrapperBase
    {
        struct GetOpenFileNameA_Type
        {
            int (WINAPIV *p)(tagOFNA *);
        };
        struct GetOpenFileNameW_Type
        {
            int (WINAPIV *p)(tagOFNW *);
        };
        struct GetSaveFileNameA_Type
        {
            int (WINAPIV *p)(tagOFNA *);
        };
        struct GetSaveFileNameW_Type
        {
            int (WINAPIV *p)(tagOFNW *);
        };
        struct GetFileTitleA_Type
        {
            __int16 (WINAPIV *p)(const char *, char *, unsigned __int16);
        };
        struct GetFileTitleW_Type
        {
            __int16 (WINAPIV *p)(const wchar_t *, wchar_t *, unsigned __int16);
        };
        struct ChooseColorA_Type
        {
            int (WINAPIV *p)(tagCHOOSECOLORA *);
        };
        struct ChooseColorW_Type
        {
            int (WINAPIV *p)(tagCHOOSECOLORW *);
        };
        struct FindTextA_Type
        {
            HWND__ *(WINAPIV *p)(tagFINDREPLACEA *);
        };
        struct FindTextW_Type
        {
            HWND__ *(WINAPIV *p)(tagFINDREPLACEW *);
        };
        struct ReplaceTextA_Type
        {
            HWND__ *(WINAPIV *p)(tagFINDREPLACEA *);
        };
        struct ReplaceTextW_Type
        {
            HWND__ *(WINAPIV *p)(tagFINDREPLACEW *);
        };
        struct ChooseFontA_Type
        {
            int (WINAPIV *p)(tagCHOOSEFONTA *);
        };
        struct ChooseFontW_Type
        {
            int (WINAPIV *p)(tagCHOOSEFONTW *);
        };
        struct PrintDlgA_Type
        {
            int (WINAPIV *p)(tagPDA *);
        };
        struct PrintDlgW_Type
        {
            int (WINAPIV *p)(tagPDW *);
        };
        struct CommDlgExtendedError_Type
        {
            unsigned int (WINAPIV *p)();
        };
        struct PageSetupDlgA_Type
        {
            int (WINAPIV *p)(tagPSDA *);
        };
        struct PageSetupDlgW_Type
        {
            int (WINAPIV *p)(tagPSDW *);
        };
        struct PrintDlgExA_Type
        {
            HRESULT (WINAPIV *p)(tagPDEXA *);
        };
        struct PrintDlgExW_Type
        {
            HRESULT (WINAPIV *p)(tagPDEXW *);
        };
        GetOpenFileNameA_Type m__GetOpenFileNameA;
        GetOpenFileNameW_Type m__GetOpenFileNameW;
        GetSaveFileNameA_Type m__GetSaveFileNameA;
        GetSaveFileNameW_Type m__GetSaveFileNameW;
        GetFileTitleA_Type m__GetFileTitleA;
        GetFileTitleW_Type m__GetFileTitleW;
        ChooseColorA_Type m__ChooseColorA;
        ChooseColorW_Type m__ChooseColorW;
        FindTextA_Type m__FindTextA;
        FindTextW_Type m__FindTextW;
        ReplaceTextA_Type m__ReplaceTextA;
        ReplaceTextW_Type m__ReplaceTextW;
        ChooseFontA_Type m__ChooseFontA;
        ChooseFontW_Type m__ChooseFontW;
        PrintDlgA_Type m__PrintDlgA;
        PrintDlgW_Type m__PrintDlgW;
        CommDlgExtendedError_Type m__CommDlgExtendedError;
        PageSetupDlgA_Type m__PageSetupDlgA;
        PageSetupDlgW_Type m__PageSetupDlgW;
        PrintDlgExA_Type m__PrintDlgExA;
        PrintDlgExW_Type m__PrintDlgExW;
    };
END_ATF_NAMESPACE
