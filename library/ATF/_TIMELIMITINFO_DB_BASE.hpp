// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _TIMELIMITINFO_DB_BASE
    {
        unsigned int dwAccSerial;
        unsigned int dwFatigue;
        char byTLStatus;
        unsigned int dwLastLogoutTime;
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_TIMELIMITINFO_DB_BASE, 13>(), "_TIMELIMITINFO_DB_BASE");
END_ATF_NAMESPACE
