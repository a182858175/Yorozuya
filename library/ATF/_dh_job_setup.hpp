// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <EM_DH_EVENT.hpp>
#include <_dh_job_setupVtbl.hpp>
#include <_job_sub_setup.hpp>
#include <_react_sub_setup.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _dh_job_setup
    {
        _dh_job_setupVtbl *vfptr;
        char szJobTitle[33];
        EM_DH_EVENT eventType;
        _job_sub_setup JobSetup;
        int nReactNum;
        _react_sub_setup *ReactSetup[10];
        char szDescirptCode[17];
    public:
        _dh_job_setup();
        void ctor__dh_job_setup();
        ~_dh_job_setup();
        void dtor__dh_job_setup();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
