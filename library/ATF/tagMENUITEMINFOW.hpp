// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HBITMAP__.hpp>
#include <HMENU__.hpp>



START_ATF_NAMESPACE
    struct tagMENUITEMINFOW
    {
        unsigned int cbSize;
        unsigned int fMask;
        unsigned int fType;
        unsigned int fState;
        unsigned int wID;
        HMENU__ *hSubMenu;
        HBITMAP__ *hbmpChecked;
        HBITMAP__ *hbmpUnchecked;
        unsigned __int64 dwItemData;
        wchar_t *dwTypeData;
        unsigned int cch;
        HBITMAP__ *hbmpItem;
    };
END_ATF_NAMESPACE
