// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _talik_crystal_exchange_zocl
    {
        struct __item
        {
            char byRemainNum;
        };
        char byErrorCode;
        __item RemainItem[24];
    public:
        _talik_crystal_exchange_zocl();
        void ctor__talik_crystal_exchange_zocl();
        int size();
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_talik_crystal_exchange_zocl, 25>(), "_talik_crystal_exchange_zocl");
END_ATF_NAMESPACE
