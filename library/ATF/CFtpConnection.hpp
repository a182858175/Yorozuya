// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ATL__CStringT.hpp>
#include <CInternetConnection.hpp>


START_ATF_NAMESPACE
    struct  CFtpConnection : CInternetConnection
    {
        enum CmdResponseType
        {
            CmdRespNone = 0x0,
            CmdRespRead = 0x1,
            CmdRespWrite = 0x2,
        };
        ATL::CStringT<char> m_strServerName;
    };
END_ATF_NAMESPACE
