// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _qry_case_amine_newowner
    {
        char bySubQryCase;
        char byCollisionType;
        char byRace;
        unsigned int dwGuildSerial;
    public:
        _qry_case_amine_newowner();
        void ctor__qry_case_amine_newowner();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_case_amine_newowner, 7>(), "_qry_case_amine_newowner");
END_ATF_NAMESPACE
