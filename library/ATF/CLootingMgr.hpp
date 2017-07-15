// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapData.hpp>


START_ATF_NAMESPACE
    struct CLootingMgr
    {
        struct _list
        {
            CPlayer *pAtter;
            unsigned int dwAtterSerial;
            unsigned int dwAttCount;
            unsigned int dwDamage;
            unsigned int dwLastAttTime;
        public:
            long double GetScore(bool bBonus);
            void Init();
            _list();
            void ctor__list();
        };
        bool m_bFirst;
        char m_byUserNode;
        _list m_AtterList[64];
    public:
        CLootingMgr();
        void ctor_CLootingMgr();
        struct CPlayer* GetLooter(struct CMapData* pMap, float* pPos, struct CPlayer* pSkipObject);
        void Init(int nUserNode);
        void PushDamage(struct CPlayer* pAtter, uint16_t wDamage);
    };
END_ATF_NAMESPACE
