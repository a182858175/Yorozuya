// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    namespace vc_attributes
    {
        #pragma pack(push, 4)
        template<>
        struct event_sourceAttribute
        {
            template<>
            typedef event_receiverAttribute::type_e type_e;
            template<>
            enum optimize_e
            {
                speed = 0x0,
                size = 0x1,
            };
            type_e type;
            optimize_e optimize;
            bool decorate;
        };
        #pragma pack(pop)
    }; // end namespace vc_attributes
END_ATF_NAMESPACE
