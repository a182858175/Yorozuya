// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _PVPPOINT_LIMIT_DB_BASE
    {
        __int64 tUpdatedate;
        bool bUseUp;
        char byLimitRate;
        long double dOriginalPoint;
        long double dLimitPoint;
        long double dUsePoint;
    public:
        void Init();
        _PVPPOINT_LIMIT_DB_BASE();
        void ctor__PVPPOINT_LIMIT_DB_BASE();
        ~_PVPPOINT_LIMIT_DB_BASE();
        void dtor__PVPPOINT_LIMIT_DB_BASE();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_PVPPOINT_LIMIT_DB_BASE, 34>(), "_PVPPOINT_LIMIT_DB_BASE");
END_ATF_NAMESPACE
