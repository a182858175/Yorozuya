// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$BEF0FA01AFEFABB841B7CD1488043ADB.hpp>
#include <ATL__CStringT.hpp>
#include <CObject.hpp>


START_ATF_NAMESPACE
    struct  CCommandLineInfo : CObject
    {
        int m_bShowSplash;
        int m_bRunEmbedded;
        int m_bRunAutomated;
        $BEF0FA01AFEFABB841B7CD1488043ADB m_nShellCommand;
        ATL::CStringT<char> m_strFileName;
        ATL::CStringT<char> m_strPrinterName;
        ATL::CStringT<char> m_strDriverName;
        ATL::CStringT<char> m_strPortName;
    public:
        ~CCommandLineInfo();
        int64_t dtor_CCommandLineInfo();
    };    
    static_assert(ATF::checkSize<CCommandLineInfo, 56>(), "CCommandLineInfo");
END_ATF_NAMESPACE
