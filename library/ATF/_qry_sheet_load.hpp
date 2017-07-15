// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_AVATOR_DATA.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _qry_sheet_load
    {
        unsigned int dwAvatorSerial;
        _AVATOR_DATA LoadData;
        bool bAddItem[100];
        unsigned int dwAddDalant;
        unsigned int dwAddGold;
        unsigned int dwCheckSum;
        bool bTrunkAddItem[100];
        char byTrunkOldSlot;
        long double dTrunkOldDalant;
        long double dTrunkOldGold;
        bool bCreateTrunkFree;
        unsigned int dwRefineDate;
        char byRefinedCnt;
        bool bExtTrunkAddItem[40];
        char byExtTrunkOldSlot;
    public:
        _qry_sheet_load();
        void ctor__qry_sheet_load();
        int size();
        ~_qry_sheet_load();
        void dtor__qry_sheet_load();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_qry_sheet_load, 37512>(), "_qry_sheet_load");
END_ATF_NAMESPACE
