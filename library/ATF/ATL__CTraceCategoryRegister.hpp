// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ATL__CTraceCategoryDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace Register
        {
            class CTraceCategoryRegister : public IRegister
            {
                public: 
                    void Register() override
                    {
                        auto& hook_core = CATFCore::get_instance();
                        for (auto& r : ATL::Detail::CTraceCategory_functions)
                            hook_core.reg_wrapper(r.pBind, r);
                    }
            };
        }; // end namespace Register
    }; // end namespace ATL
END_ATF_NAMESPACE
