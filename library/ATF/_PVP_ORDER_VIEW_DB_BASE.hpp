// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _PVP_ORDER_VIEW_DB_BASE
    {
        __int64 tUpdatedate;
        int nDeath;
        int nKill;
        long double dTodayStacked;
        long double dPvpPoint;
        long double dPvpTempCash;
        long double dPvpCash;
        unsigned int dwKillerSerial[10];
        char byContHaveCash;
        char byContLoseCash;
        bool bRaceWarRecvr;
    public:
        void Init();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_PVP_ORDER_VIEW_DB_BASE, 91>(), "_PVP_ORDER_VIEW_DB_BASE");
END_ATF_NAMESPACE
