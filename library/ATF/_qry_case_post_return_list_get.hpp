// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_INVENKEY.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _qry_case_post_return_list_get
    {
        struct __list
        {
            unsigned int dwSerial;
            char byState;
            char wszRecvName[17];
            char wszTitle[21];
            char wszContent[201];
            _INVENKEY key;
            unsigned __int64 dwDur;
            unsigned int dwUpt;
            unsigned __int64 lnUID;
            unsigned int dwGold;
            char byErr;
        public:
            __list();
            void ctor___list();
        };
        unsigned int dwMax;
        unsigned int dwMasterSerial;
        char byProcRet;
        unsigned int dwCount;
        __list List[10];
    public:
        _qry_case_post_return_list_get();
        void ctor__qry_case_post_return_list_get();
        int size();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<_qry_case_post_return_list_get, 2816>(), "_qry_case_post_return_list_get");
END_ATF_NAMESPACE
