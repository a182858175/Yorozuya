// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CAttack.hpp>
#include <CCharacter.hpp>
#include <CPlayer.hpp>
#include <_STORAGE_LIST.hpp>
#include <_object_id.hpp>
#include <_tower_create_setdata.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CGuardTower : CCharacter
    {
        int m_nHP;
        CPlayer *m_pMasterTwr;
        unsigned int m_dwMasterSerial;
        char m_byRaceCode;
        _STORAGE_LIST::_db_con *m_pItem;
        unsigned __int16 m_wItemSerial;
        bool m_bSystemStruct;
        int m_nIniIndex;
        unsigned int m_dwStartMakeTime;
        bool m_bComplete;
        bool m_bQuick;
        CCharacter *m_pTarget;
        CCharacter *m_pMasterSetTarget;
        unsigned int m_dwLastDestroyTime;
    public:
        void Attack(struct CCharacter* pTarget);
        int AttackableHeight();
        CGuardTower();
        void ctor_CGuardTower();
        bool Create(struct _tower_create_setdata* pData);
        bool Destroy(char byDesType, bool bSystemBack);
        int GetAttackDP();
        float GetAttackRange();
        int GetDefFC(int nAttactPart, struct CCharacter* pAttChar, int* pnConvertPart);
        float GetDefFacing(int nPart);
        float GetDefGap(int nPart);
        int GetDefSkill(bool bBackAttack);
        int GetFireTol();
        int GetGenAttackProb(struct CCharacter* pDst, int nPart, bool bBackAttack);
        int GetHP();
        int GetLevel();
        int GetMaxHP();
        static unsigned int GetNewSerial();
        char* GetObjName();
        int GetObjRace();
        int GetSoilTol();
        int GetWaterTol();
        float GetWeaponAdjust();
        int GetWeaponClass();
        float GetWidth();
        int GetWindTol();
        bool Init(struct _object_id* pID);
        bool IsBeAttackedAble(bool bFirst);
        bool IsBeDamagedAble(struct CCharacter* pAtter);
        static bool IsHaveEmpty();
        bool IsInTown();
        bool IsValidTarget();
        void Loop();
        void NotifyOwnerAttackInform(struct CCharacter* pDst);
        static void OnLoop_Static();
        void OutOfSec();
        void RecvKillMessage(struct CCharacter* pDier);
        bool RobbedHP(struct CCharacter* pDst, int nDecHP);
        struct CCharacter* SearchNearEnemy();
        void SendMsg_Attack(struct CAttack* pAt);
        void SendMsg_Create();
        void SendMsg_Destroy(char byDesType);
        void SendMsg_FixPosition(int n);
        void SendMsg_TowerCompleteInform();
        int SetDamage(int nDam, struct CCharacter* pDst, int nDstLv, bool bCrt, int nAttackType, unsigned int dwAttackSerial, bool bJadeReturn);
        ~CGuardTower();
        void dtor_CGuardTower();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
