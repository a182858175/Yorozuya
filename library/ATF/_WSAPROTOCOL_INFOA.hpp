// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_GUID.hpp>
#include <_WSAPROTOCOLCHAIN.hpp>


START_ATF_NAMESPACE
    struct _WSAPROTOCOL_INFOA
    {
        unsigned int dwServiceFlags1;
        unsigned int dwServiceFlags2;
        unsigned int dwServiceFlags3;
        unsigned int dwServiceFlags4;
        unsigned int dwProviderFlags;
        _GUID ProviderId;
        unsigned int dwCatalogEntryId;
        _WSAPROTOCOLCHAIN ProtocolChain;
        int iVersion;
        int iAddressFamily;
        int iMaxSockAddr;
        int iMinSockAddr;
        int iSocketType;
        int iProtocol;
        int iProtocolMaxOffset;
        int iNetworkByteOrder;
        int iSecurityScheme;
        unsigned int dwMessageSize;
        unsigned int dwProviderReserved;
        char szProtocol[256];
    };
END_ATF_NAMESPACE
