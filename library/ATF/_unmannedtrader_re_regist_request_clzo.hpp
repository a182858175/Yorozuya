// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _unmannedtrader_re_regist_request_clzo
    {
        struct  __list
        {
            bool bRegist;
            unsigned __int16 wItemSerial;
            char byAmount;
            char byItemTableCode;
            unsigned __int16 wItemIndex;
            unsigned int dwPrice;
            unsigned int dwRegistSerial;
        };
        char byTaxRate;
        char byRegedNum;
        __list List[10];
    };
END_ATF_NAMESPACE
