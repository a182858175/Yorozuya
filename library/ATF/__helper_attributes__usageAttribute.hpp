// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    namespace vc_attributes
    {
        namespace helper_attributes
        {
            template<>
            struct usageAttribute
            {
                template<>
                enum usage_e
                {
                    eAnyUsage = 0x0,
                    eCoClassUsage = 0x1,
                    eCOMInterfaceUsage = 0x2,
                    eInterfaceUsage = 0x6,
                    eMemberUsage = 0x8,
                    eMethodUsage = 0x10,
                    eInterfaceMethodUsage = 0x20,
                    eInterfaceMemberUsage = 0x40,
                    eCoClassMemberUsage = 0x80,
                    eCoClassMethodUsage = 0x100,
                    eGlobalMethodUsage = 0x300,
                    eGlobalDataUsage = 0x400,
                    eClassUsage = 0x800,
                    eInterfaceParameterUsage = 0x1000,
                    eMethodParameterUsage = 0x3000,
                    eIDLModuleUsage = 0x4000,
                    eAnonymousUsage = 0x8000,
                    eTypedefUsage = 0x10000,
                    eUnionUsage = 0x20000,
                    eEnumUsage = 0x40000,
                    eDefineTagUsage = 0x80000,
                    eStructUsage = 0x100000,
                    eLocalUsage = 0x200000,
                    ePropertyUsage = 0x400000,
                    eEventUsage = 0x800000,
                    eTemplateUsage = 0x1000000,
                    eModuleUsage = 0x1000000,
                    eIllegalUsage = 0x2000000,
                    eAsynchronousUsage = 0x4000000,
                    eAnyIDLUsage = 0x3F7FFF,
                };
                unsigned int value;
            };
        }; // end namespace helper_attributes
    }; // end namespace vc_attributes
END_ATF_NAMESPACE
