// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _guild_vote_process_inform_zocl
    {
        bool bStart;
        char byMatterType;
         unsigned int dwMatterDst;
         unsigned int dwMatterObj1;
         unsigned int dwMatterObj2;
         unsigned int dwMatterObj3;
         unsigned int dwMatterVoteSynKey;
         unsigned int dwSuggesterSerial;
        char byLoginSeniorNum;
        char byTotalSeniorNum;
        bool bActed;
        char byApprPoint;
        char byOppoPoint;
        char wszDestGuildName[17];
        char byDestGuildGrade;
        char byDestGuildRace;
        char byCommentLen;
        char wszComment[65];
    public:
        _guild_vote_process_inform_zocl();
        void ctor__guild_vote_process_inform_zocl();
        int size();
    };   
    #pragma pack(pop)
    static_assert(ATF::checkSize<_guild_vote_process_inform_zocl, 116>(), "_guild_vote_process_inform_zocl");
END_ATF_NAMESPACE
