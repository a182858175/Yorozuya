// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CDC.hpp>
#include <HWND__.hpp>
#include <tagPAINTSTRUCT.hpp>


START_ATF_NAMESPACE
    struct  CPaintDC : CDC
    {
        HWND__ *m_hWnd;
        tagPAINTSTRUCT m_ps;
    public:
        ~CPaintDC();
        int64_t dtor_CPaintDC();
    };    
    static_assert(ATF::checkSize<CPaintDC, 112>(), "CPaintDC");
END_ATF_NAMESPACE
