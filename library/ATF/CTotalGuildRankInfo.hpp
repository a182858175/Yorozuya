// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CTotalGuildRankRecord.hpp>
#include <_total_guild_rank_info.hpp>
#include <_total_guild_rank_result_zocl.hpp>


START_ATF_NAMESPACE
    struct CTotalGuildRankInfo
    {
        bool m_bInit;
        bool m_bNoData;
        unsigned int m_dwRecordCnt[3];
        CTotalGuildRankRecord **m_ppkRaceStartPos[3];
        unsigned int m_dwMaxCnt;
        CTotalGuildRankRecord **m_ppkInfo;
        _total_guild_rank_result_zocl *m_pkSendList;
    public:
        CTotalGuildRankInfo();
        void ctor_CTotalGuildRankInfo();
        void Clear();
        int Find(char byRace, unsigned int dwGuildSerial);
        bool Init();
        bool Load(struct _total_guild_rank_info* pkInfo);
        void Send(unsigned int dwVer, int n, char byTabRace, char bySelfRace, unsigned int dwGuildSerial);
        void SetNoDataFlag();
        bool Update(struct _total_guild_rank_info* pkInfo);
        ~CTotalGuildRankInfo();
        void dtor_CTotalGuildRankInfo();
    };
END_ATF_NAMESPACE
