// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  _target_monster_aggro_inform_zocl
    {
        struct  _aggro_node
        {
            char m_IsData;
            char m_Name[32];
            int m_nAggroData;
            int m_nDamageData;
            int m_nKingPowerDamage;
        };
        unsigned int dwSerial;
        _aggro_node m_AggroNode[10];
        float fTimer;
    public:
        void Init();
        _target_monster_aggro_inform_zocl();
        void ctor__target_monster_aggro_inform_zocl();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_target_monster_aggro_inform_zocl, 458>(), "_target_monster_aggro_inform_zocl");
END_ATF_NAMESPACE
