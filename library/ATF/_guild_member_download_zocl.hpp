// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _guild_member_download_zocl
    {
        char byDownType;
        unsigned int dwGuildSerial;
        char byGuildGrade;
        unsigned int dwEmblemBack;
        unsigned int dwEmblemMark;
        long double dDalant;
        long double dGold;
        char byGuildRoomType;
        int GuildRoomRestTime;
        char byCurTax;
        unsigned int dwTotWin;
        unsigned int dwTotDraw;
        unsigned int dwTotLose;
        bool bPossibleElectMaster;
        unsigned __int16 wDataSize;
        char sData[10000];
    public:
        void Clear();
        _guild_member_download_zocl();
        void ctor__guild_member_download_zocl();
        int size();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
