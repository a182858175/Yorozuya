// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CRFWorldDatabase.hpp>
#include <CCheckSumCharacAccountTrunkData.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CCheckSumGuildData
    {
        typedef CCheckSumCharacAccountTrunkData::COLUMN_D_TYPE COLUMN_D_TYPE;
        unsigned int m_dwGuildSerial;
        long double m_dValues[2];
    public:
        CCheckSumGuildData(unsigned int dwSerial);
        void ctor_CCheckSumGuildData(unsigned int dwSerial);
        int CheckDiff(struct CRFWorldDatabase* pkDB, char* wszName, struct CCheckSumGuildData* kSrcValue);
        void Decode(long double dDalant, long double dGold);
        void Encode(long double dDalant, long double dGold);
        long double GetDalant();
        long double GetGold();
        bool Insert(struct CRFWorldDatabase* pkDB);
        int Load(struct CRFWorldDatabase* pkDB, struct CCheckSumGuildData* kSrcValue);
        void SetValue(COLUMN_D_TYPE eType, long double dValue);
        bool Update(struct CRFWorldDatabase* pkDB);
        ~CCheckSumGuildData();
        void dtor_CCheckSumGuildData();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<CCheckSumGuildData, 24>(), "CCheckSumGuildData");
END_ATF_NAMESPACE
