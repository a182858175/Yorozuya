// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <GUILD_BATTLE__CNormalGuildBattleFieldList.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Info
        {
            
            using GUILD_BATTLE__CNormalGuildBattleFieldListctor_CNormalGuildBattleFieldList2_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
            using GUILD_BATTLE__CNormalGuildBattleFieldListctor_CNormalGuildBattleFieldList2_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, GUILD_BATTLE__CNormalGuildBattleFieldListctor_CNormalGuildBattleFieldList2_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListDestroy4_ptr = void (WINAPIV*)();
            using GUILD_BATTLE__CNormalGuildBattleFieldListDestroy4_clbk = void (WINAPIV*)(GUILD_BATTLE__CNormalGuildBattleFieldListDestroy4_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetCircleZone6_ptr = struct CCircleZone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetCircleZone6_clbk = struct CCircleZone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int, GUILD_BATTLE__CNormalGuildBattleFieldListGetCircleZone6_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetField8_ptr = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetField8_clbk = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, unsigned int, GUILD_BATTLE__CNormalGuildBattleFieldListGetField8_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetField10_ptr = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, unsigned int);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetField10_clbk = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, unsigned int, GUILD_BATTLE__CNormalGuildBattleFieldListGetField10_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetFirstMapFieldByRace12_ptr = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetFirstMapFieldByRace12_clbk = struct GUILD_BATTLE::CNormalGuildBattleField* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, GUILD_BATTLE__CNormalGuildBattleFieldListGetFirstMapFieldByRace12_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetFirstMapInxByRace14_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetFirstMapInxByRace14_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*, GUILD_BATTLE__CNormalGuildBattleFieldListGetFirstMapInxByRace14_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetMapCnt16_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetMapCnt16_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, GUILD_BATTLE__CNormalGuildBattleFieldListGetMapCnt16_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetMapInx18_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, unsigned int, unsigned int*);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetMapInx18_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, unsigned int, unsigned int*, GUILD_BATTLE__CNormalGuildBattleFieldListGetMapInx18_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetMapInxList20_ptr = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetMapInxList20_clbk = unsigned int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*, GUILD_BATTLE__CNormalGuildBattleFieldListGetMapInxList20_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetRegener22_ptr = struct CGravityStoneRegener* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetRegener22_clbk = struct CGravityStoneRegener* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int, GUILD_BATTLE__CNormalGuildBattleFieldListGetRegener22_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetStone24_ptr = struct CGravityStone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int);
            using GUILD_BATTLE__CNormalGuildBattleFieldListGetStone24_clbk = struct CGravityStone* (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, int, GUILD_BATTLE__CNormalGuildBattleFieldListGetStone24_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListInit26_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
            using GUILD_BATTLE__CNormalGuildBattleFieldListInit26_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, GUILD_BATTLE__CNormalGuildBattleFieldListInit26_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListInitUseField28_ptr = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*, char*, char**);
            using GUILD_BATTLE__CNormalGuildBattleFieldListInitUseField28_clbk = bool (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char*, char*, char**, GUILD_BATTLE__CNormalGuildBattleFieldListInitUseField28_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListInstance30_ptr = struct GUILD_BATTLE::CNormalGuildBattleFieldList* (WINAPIV*)();
            using GUILD_BATTLE__CNormalGuildBattleFieldListInstance30_clbk = struct GUILD_BATTLE::CNormalGuildBattleFieldList* (WINAPIV*)(GUILD_BATTLE__CNormalGuildBattleFieldListInstance30_ptr);
            using GUILD_BATTLE__CNormalGuildBattleFieldListIsRegistedMapInx32_ptr = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char**);
            using GUILD_BATTLE__CNormalGuildBattleFieldListIsRegistedMapInx32_clbk = int (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, char, char**, GUILD_BATTLE__CNormalGuildBattleFieldListIsRegistedMapInx32_ptr);
            
            using GUILD_BATTLE__CNormalGuildBattleFieldListdtor_CNormalGuildBattleFieldList36_ptr = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*);
            using GUILD_BATTLE__CNormalGuildBattleFieldListdtor_CNormalGuildBattleFieldList36_clbk = void (WINAPIV*)(struct GUILD_BATTLE::CNormalGuildBattleFieldList*, GUILD_BATTLE__CNormalGuildBattleFieldListdtor_CNormalGuildBattleFieldList36_ptr);
        }; // end namespace Info
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
