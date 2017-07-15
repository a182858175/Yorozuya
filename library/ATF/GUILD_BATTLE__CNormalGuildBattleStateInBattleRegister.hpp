// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <GUILD_BATTLE__CNormalGuildBattleStateInBattleDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace GUILD_BATTLE
    {
        namespace Register
        {
            class CNormalGuildBattleStateInBattleRegister : public IRegister
            {
                public: 
                    void Register() override
                    {
                        auto& hook_core = CATFCore::get_instance();
                        for (auto& r : GUILD_BATTLE::Detail::CNormalGuildBattleStateInBattle_functions)
                            hook_core.reg_wrapper(r.pBind, r);
                    }
            };
        }; // end namespace Register
    }; // end namespace GUILD_BATTLE
END_ATF_NAMESPACE
