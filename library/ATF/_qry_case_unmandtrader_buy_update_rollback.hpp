// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _qry_case_unmandtrader_buy_update_rollback
    {
        struct __list
        {
            char byProcRet;
            unsigned int dwRegistSerial;
            char byOldState;
        };
        unsigned __int16 wInx;
        unsigned int dwBuyer;
        char byRace;
        char byType;
        char byNum;
        __list List[10];
    };
END_ATF_NAMESPACE
