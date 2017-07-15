// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _worlddb_guild_info
    {
        struct __guild_info
        {
            unsigned int dwGuildSerial;
            char byGuildGrade;
            char byRace;
            char wszGuildName[17];
            unsigned int dwEmblemBack;
            unsigned int dwEmblemMark;
            long double dDalant;
            long double dGold;
            unsigned int dwMasterSerial;
            char byMasterPrevGrade;
            char wszGreetingMsg[256];
            unsigned int dwTotWin;
            unsigned int dwTotDraw;
            unsigned int dwTotLose;
        };
        unsigned __int16 wGuildCount;
        __guild_info GuildData[500];
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_worlddb_guild_info, 164008>(), "_worlddb_guild_info");
END_ATF_NAMESPACE
