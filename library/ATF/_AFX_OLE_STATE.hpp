// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNoTrackObject.hpp>
#include <COleDataSource.hpp>
#include <CView.hpp>
#include <HINSTANCE__.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  _AFX_OLE_STATE : CNoTrackObject
    {
        CView *m_pActivateView;
        COleDataSource *m_pClipboardSource;
        unsigned int m_dwReserved;
        HINSTANCE__ *m_hInstOLE;
        HINSTANCE__ *m_hInstOLEAUT;
        HINSTANCE__ *m_hInstOLEDLG;
        HINSTANCE__ *m_hInstUrlMon;
        int m_nReserved;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
