// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _QUEST_CASH
    {
        unsigned int dwAvatorSerial;
        char byQuestType;
        int nPvpPoint;
        unsigned __int16 wKillPoint;
        unsigned __int16 wDiePoint;
        char byCristalBattleDBInfo;
        char byHSKTime;
    public:
        _QUEST_CASH();
        void ctor__QUEST_CASH();
        void init();
        bool isload();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_QUEST_CASH, 20>(), "_QUEST_CASH");
END_ATF_NAMESPACE
