// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNetIndexList.hpp>


START_ATF_NAMESPACE
    template<typename _Ty>
    struct ListHeap
    {
        struct  CIndexListEx : CNetIndexList
        {
        };
        _Ty *_pBuf;
        unsigned __int64 _nMaxSize;
        CIndexListEx _listEmpty;
        CIndexListEx _listData;
    };
END_ATF_NAMESPACE
