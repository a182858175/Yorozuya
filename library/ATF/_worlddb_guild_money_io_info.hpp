// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _worlddb_guild_money_io_info
    {
        struct __io_money_data
        {
            char wszIOerName[17];
            unsigned int dwIOerSerial;
            long double dIODalant;
            long double dIOGold;
            long double dLeftDalant;
            long double dLeftGold;
            char byDate[4];
        };
        unsigned __int16 wRecordCount;
        __io_money_data IOData[100];
    };
END_ATF_NAMESPACE
