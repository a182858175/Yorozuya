// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <tagNMHDR.hpp>


START_ATF_NAMESPACE
    struct tagNMLVODSTATECHANGE
    {
        tagNMHDR hdr;
        int iFrom;
        int iTo;
        unsigned int uNewState;
        unsigned int uOldState;
    };
END_ATF_NAMESPACE
