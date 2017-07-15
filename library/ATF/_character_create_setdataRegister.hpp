// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_character_create_setdataDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Register
    {
        class _character_create_setdataRegister : public IRegister
        {
            public: 
                void Register() override
                {
                    auto& hook_core = CATFCore::get_instance();
                    for (auto& r : Detail::_character_create_setdata_functions)
                        hook_core.reg_wrapper(r.pBind, r);
                }
        };
    }; // end namespace Register
END_ATF_NAMESPACE
