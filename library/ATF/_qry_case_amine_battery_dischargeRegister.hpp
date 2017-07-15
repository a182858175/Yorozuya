// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_qry_case_amine_battery_dischargeDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Register
    {
        class _qry_case_amine_battery_dischargeRegister : public IRegister
        {
            public: 
                void Register() override
                {
                    auto& hook_core = CATFCore::get_instance();
                    for (auto& r : Detail::_qry_case_amine_battery_discharge_functions)
                        hook_core.reg_wrapper(r.pBind, r);
                }
        };
    }; // end namespace Register
END_ATF_NAMESPACE
