// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ATL__CComPtr.hpp>
#include <CFormView.hpp>
#include <CWnd.hpp>


START_ATF_NAMESPACE
    struct  CHtmlView : CFormView
    {
        CWnd m_wndBrowser;
        ATL::CComPtr<IWebBrowser2> m_pBrowserApp;
    };
END_ATF_NAMESPACE
