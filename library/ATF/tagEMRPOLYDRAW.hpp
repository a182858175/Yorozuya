// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_POINTL.hpp>
#include <_RECTL.hpp>
#include <tagEMR.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct tagEMRPOLYDRAW
    {
        tagEMR emr;
        _RECTL rclBounds;
        unsigned int cptl;
        _POINTL aptl[1];
        char abTypes[1];
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
