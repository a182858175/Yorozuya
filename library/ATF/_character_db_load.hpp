// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _character_db_load
    {
        char m_wszCharID[17];
        unsigned int m_dwSerial;
        char m_byRaceSexCode;
        unsigned int m_dwHP;
        unsigned int m_dwFP;
        unsigned int m_dwSP;
        unsigned int m_dwDP;
        long double m_dExp;
        long double m_dLossExp;
        unsigned int m_dwRank;
        unsigned __int16 m_wRankRate;
        long double m_dPvPPoint;
        long double m_dPvPCashBag;
        char m_byLevel;
        unsigned int m_dwDalant;
        unsigned int m_dwGold;
        char m_sStartMapCode;
        float m_fStartPos[3];
        char m_byDftPart_Face;
        char m_byDftPart[5];
        char m_byUseBagNum;
        char m_byMaxLevel;
    public:
        _character_db_load();
        void ctor__character_db_load();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_character_db_load, 106>(), "_character_db_load");
END_ATF_NAMESPACE
