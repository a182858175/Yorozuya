// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _ATTACK_DELAY_CHECKER
    {
        struct _eff_list
        {
            char byEffectCode;
            unsigned __int16 wEffectIndex;
            unsigned int dwNextTime;
        public:
            _eff_list();
            void ctor__eff_list();
            bool fill();
            void init();
        };
        struct _mas_list
        {
            char byEffectCode;
            char byMastery;
            unsigned int dwNextTime;
        public:
            _mas_list();
            void ctor__mas_list();
            bool fill();
            void init();
        };
        _eff_list EFF[10];
        _mas_list MAS[10];
        unsigned int dwNextEffTime;
        unsigned int dwNextGenTime;
        unsigned int dwLastGnAttackTime;
        unsigned int dwLastSFAttackTime;
        int nFailCount;
        int m_nNextAddTime;
        char byTemp_EffectCode;
        unsigned __int16 wTemp_EffectIndex;
        char byTemp_EffectMastery;
    public:
        void Init();
        bool IsDelay(char code, uint16_t index, char mastery);
        void SetDelay(unsigned int delay);
        _ATTACK_DELAY_CHECKER();
        void ctor__ATTACK_DELAY_CHECKER();
        bool _delay_check(char code, uint16_t index, char mastery);
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_ATTACK_DELAY_CHECKER, 192>(), "_ATTACK_DELAY_CHECKER");
END_ATF_NAMESPACE
