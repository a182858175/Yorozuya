// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_be_damaged_char.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CAttack
    {
        struct _attack_param *m_pp;
        struct CCharacter *m_pAttChar;
        bool m_bIsCrtAtt;
        bool m_bActiveSucc;
        int m_nDamagedObjNum;
        _be_damaged_char m_DamList[30];
        bool m_bFailure;
    public:
        void AreaDamageProc(int nLimitRadius, int nAttPower, float* pTar, int nEffAttPower, bool bUseEffBullet);
        void AttackForce(struct _attack_param* pParam, bool bUseEffBullet);
        void AttackGen(struct _attack_param* pParam, bool bMustMiss, bool bUseEffBullet);
        CAttack(struct CCharacter* pThis);
        void ctor_CAttack(struct CCharacter* pThis);
        void CalcAvgDamage();
        bool CheckGuildBattleLimit(struct CGameObject* pObject, bool* pbInGuildBattle);
        void FlashDamageProc(int nLimDist, int nAttPower, int nAngle, int nEffAttPower, bool bUseEffBullet);
        float GetAttackFC(struct CPlayer* pPlayer, char bySkill, bool bNear, bool bUnit);
        static int GetMeleeSkillIndex(int nMeleeTechCode);
        static int IsCharInSector(float* chkpos, float* src, float* dest, float angle, float radius);
        int MonsterCritical_Exception_Rate(struct CCharacter* pCharacter, bool bBackAttack);
        void SectorDamageProc(int nSkillLv, int nAttPower, int nAngle, int nShotNum, int nWeaponRange, int nEffAttPower, bool bUseEffBullet);
        void SetActiveSucc(bool bSucc);
        static void SetStaticMember(struct CRecordData* pSkillData);
        int _CalcForceAttPnt(bool bUseEffBullet);
        int _CalcGenAttPnt(bool bUseEffBullet);
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<CAttack, 752>(), "CAttack");
END_ATF_NAMESPACE
