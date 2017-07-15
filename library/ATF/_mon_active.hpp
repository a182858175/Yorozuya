// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _mon_active
    {
        struct _mon_active_fld *m_pActRec;
        struct _mon_block *m_pBlk;
        unsigned __int16 m_wMonRecIndex;
        __int16 m_zCurMonNum;
        unsigned int m_dwCumMonNum;
        unsigned int m_dwLastRespawnTime;
        int m_nLimRegenNum;
        struct BossSchedule *m_pBossSchedule;
    public:
        void BossScheduleSave();
        struct BossSchedule* GetBossSchedule();
        bool SetActive(struct _mon_active_fld* pRec, struct _mon_block* pBlk, int nMonRecIndex);
        void SetBossSchedule(struct BossSchedule* pBossSchedule);
        bool SetCurMonNum(int nAlter);
        void SetZeroMonNum();
        _mon_active();
        void ctor__mon_active();
    };
END_ATF_NAMESPACE
