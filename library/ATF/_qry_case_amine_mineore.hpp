// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _qry_case_amine_mineore
    {
        char bySubQryCase;
        char byCollisionType;
        char byRace;
        unsigned int dwGuildSerial;
        char byColmID;
        unsigned int dwK;
        char byOverlapNum;
        unsigned int dwGage;
    public:
        _qry_case_amine_mineore();
        void ctor__qry_case_amine_mineore();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_case_amine_mineore, 17>(), "_qry_case_amine_mineore");
END_ATF_NAMESPACE
