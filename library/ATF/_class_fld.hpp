// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_base_fld.hpp>
#include <_mastery_lim_data.hpp>


START_ATF_NAMESPACE
    struct  _class_fld : _base_fld
    {
        struct _bns_item
        {
            char strDefaultItem[64];
            int nAmount;
        };
        int m_nRaceCode;
        int m_nClass;
        int m_nIconIDX;
        int m_nGrade;
        int m_nUpGradeLv;
        char m_strCh_Class[8][64];
        char m_strTemp[64];
        char m_strKorName[64];
        char m_strEngName[64];
        int m_nConLim;
        char m_strLinkClassSkill[10][64];
        int m_bUnitUsable;
        int m_bAnimusUsable;
        int m_bLauncherUsable;
        int m_bWMKToolUsable;
        int m_bDMKToolUnitUsable;
        int m_bBMKToolUnitUsable;
        int m_nMakeTrapMaxNum;
        int m_nBnsForHP;
        int m_nBnsForFP;
        int m_nBnsForSP;
        int m_nUpValueDefMastery;
        _mastery_lim_data m_MasteryLim;
        int m_bSelectRewardItem;
        _bns_item m_DefaultItem[9];
    };
END_ATF_NAMESPACE
