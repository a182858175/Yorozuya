// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CDC.hpp>
#include <HWND__.hpp>


START_ATF_NAMESPACE
    struct  CClientDC : CDC
    {
        HWND__ *m_hWnd;
    public:
        ~CClientDC();
        int64_t dtor_CClientDC();
    };    
    static_assert(ATF::checkSize<CClientDC, 40>(), "CClientDC");
END_ATF_NAMESPACE
