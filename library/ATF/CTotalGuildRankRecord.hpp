// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 2)
    struct CTotalGuildRankRecord
    {
        unsigned int m_dwInx;
        unsigned __int16 m_wRank;
        unsigned int m_dwSerial;
        char m_wszGuildName[17];
        char m_byGrade;
        char m_wszMasterName[17];
    public:
        CTotalGuildRankRecord();
        void ctor_CTotalGuildRankRecord();
        void Clear();
        ~CTotalGuildRankRecord();
        void dtor_CTotalGuildRankRecord();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
