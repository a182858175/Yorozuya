// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_base_fld.hpp>
#include <sell_info.hpp>


START_ATF_NAMESPACE
    struct  _StoreList_fld : _base_fld
    {
        char m_strBinding_DummyName[64];
        char m_strStore_NPCcode[64];
        char m_strStore_NPCname[64];
        char m_strStore_MAPcode[64];
        int m_nStore_trade;
        int m_bSet_NPCangle;
        int m_nStore_NPCangle;
        int m_nNpc_Class[10];
        int m_nStore_LISTcount;
        int m_nLimit_Listcount;
        int m_nLimitItem_InitTime;
        int m_nPriceSet;
        int m_nItemUpCode;
        char m_strItemlist[200][64];
        sell_info m_sellLimitList[16];
    };
END_ATF_NAMESPACE
