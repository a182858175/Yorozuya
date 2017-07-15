// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <GUILD_BATTLE__CNormalGuildBattle.hpp>
#include <_guild_battle_current_battle_info_result_zocl.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct CCurrentGuildBattleInfoManager
        {
            bool m_bInit;
            unsigned int m_uiMapCnt;
            bool *m_pbUpdate;
            _guild_battle_current_battle_info_result_zocl *m_pkInfo;
        public:
            CCurrentGuildBattleInfoManager();
            void ctor_CCurrentGuildBattleInfoManager();
            void CleanUp();
            void Clear(unsigned int uiMapID);
            static void Destroy();
            char GetLeftTime(unsigned int uiMapID);
            bool Init();
            static struct CCurrentGuildBattleInfoManager* Instance();
            void Send(int n, unsigned int uiMapID);
            bool Set(unsigned int uiMapID, struct CNormalGuildBattle* pkBattle);
            void UpdateGoalCnt(unsigned int uiMapID, char byColorInx, unsigned int dwGoalCnt);
            void UpdateScore(unsigned int uiMapID, char byColorInx, unsigned int dwScore);
            ~CCurrentGuildBattleInfoManager();
            void dtor_CCurrentGuildBattleInfoManager();
        };
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
