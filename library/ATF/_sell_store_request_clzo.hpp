// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _sell_store_request_clzo
    {
        struct _list
        {
            char byStorageCode;
             unsigned __int16 wSerial;
            char byAmount;
        };
        unsigned int dwStoreIndex;
        char bySellNum;
        int bUseNPCLinkIntem;
        _list Item[100];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
