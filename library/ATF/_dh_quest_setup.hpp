// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapData.hpp>
#include <__dummy_block.hpp>
#include <__monster_group.hpp>
#include <_dh_mission_setup.hpp>
#include <_dh_quest_setupVtbl.hpp>
#include <_dh_reward_sub_setup.hpp>


START_ATF_NAMESPACE
    struct _dh_quest_setup
    {
        _dh_quest_setupVtbl *vfptr;
        int bRealBoss;
        char szQuestTitle[33];
        int bPartyOnly;
        unsigned int dwMaxMember;
        CMapData *pUseMap;
        _dh_mission_setup *pStartMissionSetup;
        unsigned int dwMonRepIndex;
        _dh_reward_sub_setup RewardOne;
        _dh_reward_sub_setup RewardOther;
        char szDescirptCode[17];
        char szStartMissionBuffer[33];
        int nEmbMissionSetupNum;
        _dh_mission_setup *EmbMissionSetup[100];
        int nDummyBlockNum;
        __dummy_block *pDummyBlock[32];
        int nMonsterGroupNum;
        __monster_group *pMonsterGroup[32];
        int nLimitLvMin;
        int nLimitLvMax;
    public:
        struct _dh_mission_setup* SearchMissionFromTitle(char* pszMissionTitle);
        void SetRealBoss(bool isReal);
        _dh_quest_setup();
        void ctor__dh_quest_setup();
        ~_dh_quest_setup();
        void dtor__dh_quest_setup();
    };
END_ATF_NAMESPACE
