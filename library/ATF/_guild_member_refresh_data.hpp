// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _guild_member_refresh_data
    {
        struct __refresh_data
        {
            unsigned int dwSerial;
            char byGrade;
            char byLv;
            unsigned int dwPvpPoint;
        };
        unsigned int dwGuildSerial;
        unsigned __int16 wMemberCount;
        __refresh_data rMemberData[50];
    };
END_ATF_NAMESPACE
