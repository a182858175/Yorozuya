// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_attack_gen_result_zocl.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _attack_siege_result_zocl
    {
        char byAtterID;
        unsigned int dwAtterSerial;
        char byAttackPart;
        unsigned __int16 wBulletIndex;
        bool bCritical;
        __int16 zTar[2];
        char byListNum;
        _attack_gen_result_zocl::_dam_list DamList[32];
    public:
        _attack_siege_result_zocl();
        void ctor__attack_siege_result_zocl();
        int size();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_attack_siege_result_zocl, 334>(), "_attack_siege_result_zocl");
END_ATF_NAMESPACE
