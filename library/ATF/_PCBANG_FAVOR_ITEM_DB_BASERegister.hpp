// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_PCBANG_FAVOR_ITEM_DB_BASEDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Register
    {
        class _PCBANG_FAVOR_ITEM_DB_BASERegister : public IRegister
        {
            public: 
                void Register() override
                {
                    auto& hook_core = CATFCore::get_instance();
                    for (auto& r : Detail::_PCBANG_FAVOR_ITEM_DB_BASE_functions)
                        hook_core.reg_wrapper(r.pBind, r);
                }
        };
    }; // end namespace Register
END_ATF_NAMESPACE
