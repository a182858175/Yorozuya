// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMyTimer.hpp>
#include <GUILD_BATTLE__CNormalGuildBattleStateRound.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        struct  CNormalGuildBattleStateRoundProcess : CNormalGuildBattleStateRound
        {
            CMyTimer *m_pkTimer;
        public:
            CNormalGuildBattleStateRoundProcess();
            void ctor_CNormalGuildBattleStateRoundProcess();
            int Enter(struct CNormalGuildBattle* pkBattle);
            int Loop(struct CNormalGuildBattle* pkBattle);
            ~CNormalGuildBattleStateRoundProcess();
            void dtor_CNormalGuildBattleStateRoundProcess();
        };    
        static_assert(ATF::checkSize<GUILD_BATTLE::CNormalGuildBattleStateRoundProcess, 16>(), "GUILD_BATTLE::CNormalGuildBattleStateRoundProcess");
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
