// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CLogFile.hpp>
#include <_guild_member_info.hpp>
#include <_io_money_data.hpp>
#include <_worlddb_guild_info.hpp>
#include <_guild_member_refresh_data.hpp>
#include <std__vector.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CGuildRanking
    {
        CLogFile *m_pkLogger;
        unsigned int m_dwCurProcIndex;
        unsigned int m_dwNextProcIndex;
        unsigned int m_dwAllGuildCount;
        std::vector<unsigned long> m_vecAllGuildSerial;
        std::vector<unsigned char> m_vecAllGuildGrade;
        std::vector<_guild_member_refresh_data *> m_vecGuildMemberRefresh;
        int m_nRankInGuildJobOffset;
    public:
        void ApplyGuildGrade();
        bool ApplyRankInGuild();
        CGuildRanking();
        void ctor_CGuildRanking();
        bool CheckAndCreateTodayGuildRankTable(char* szDate);
        bool CheckGuildCheckSum(unsigned int dwSerial, char* wszGuildName, long double* dDalant, long double* dGold);
        void CheckMaxGuildMoney(unsigned int dwGuildSerial, char* wszGuildName, long double* pdDalant, long double* pdGold);
        void ClearApplyRankInGuildJobOffset();
        void ClearGuildGrade();
        void ClearGuildSerial();
        void ClearRefreshData();
        unsigned int GetNextGuildSerial();
        int GetRankInGuildJobOffset();
        bool Init();
        bool Load();
        bool LoadAllGuildData(struct _worlddb_guild_info* pkInfo);
        bool LoadGuildMoneyIOInfo(unsigned int dwGuildSerial, struct _io_money_data* pkIOInfo, int* pnIOMonHisNum);
        bool LoadMemberInfo(unsigned int dwMasterSerial, unsigned int dwGuildSerial, struct _guild_member_info* pkMemberInfo, uint16_t* pwMemberCnt);
        bool SetLoadAllGuildInfo(struct _worlddb_guild_info* pkInfo);
        void SetLogger(struct CLogFile* pkLogger);
        char UpdateAndSelectGuildGrade(char* szData);
        char UpdateGuildRankStep1(char* szData);
        char UpdateGuildRankStep2(char* szData);
        char UpdateGuildRankStep3(char* szData);
        char UpdateGuildRankStep4(char* szData);
        bool UpdateRankAndGrade();
        char UpdateRankinGuildStep1(char* szData);
        char UpdateRankinGuildStep2(char* szData);
        char UpdateRankinGuildStep3(char* szData);
        char UpdateRankinGuildStep4(char* szData);
        char UpdateRankinGuildStep5(char* szData);
        char UpdateRankinGuildStep6(char* szData);
        ~CGuildRanking();
        void dtor_CGuildRanking();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
