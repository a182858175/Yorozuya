// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_CHRID.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct _throw_skill_result_one_zocl
    {
        struct __effected_list
        {
            char byObjID;
             unsigned int dwObjSerial;
            char byRetCode;
            unsigned __int16 wEffectValue;
        };
        char byErrCode;
        char byAttackSerial;
        _CHRID idDster;
        char byEffectedNum;
        __effected_list list[30];
    public:
        _throw_skill_result_one_zocl();
        void ctor__throw_skill_result_one_zocl();
    };
    #pragma pack(pop)
    static_assert(ATF::checkSize<_throw_skill_result_one_zocl, 250>(), "_throw_skill_result_one_zocl");
END_ATF_NAMESPACE
