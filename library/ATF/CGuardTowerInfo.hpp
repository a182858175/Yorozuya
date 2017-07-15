// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CGuardTower.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CGuardTowerAttack2_ptr = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        using CGuardTowerAttack2_clbk = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*, CGuardTowerAttack2_ptr);
        using CGuardTowerAttackableHeight4_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerAttackableHeight4_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerAttackableHeight4_ptr);
        
        using CGuardTowerctor_CGuardTower6_ptr = void (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerctor_CGuardTower6_clbk = void (WINAPIV*)(struct CGuardTower*, CGuardTowerctor_CGuardTower6_ptr);
        using CGuardTowerCreate8_ptr = bool (WINAPIV*)(struct CGuardTower*, struct _tower_create_setdata*);
        using CGuardTowerCreate8_clbk = bool (WINAPIV*)(struct CGuardTower*, struct _tower_create_setdata*, CGuardTowerCreate8_ptr);
        using CGuardTowerDestroy10_ptr = bool (WINAPIV*)(struct CGuardTower*, char, bool);
        using CGuardTowerDestroy10_clbk = bool (WINAPIV*)(struct CGuardTower*, char, bool, CGuardTowerDestroy10_ptr);
        using CGuardTowerGetAttackDP12_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetAttackDP12_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetAttackDP12_ptr);
        using CGuardTowerGetAttackRange14_ptr = float (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetAttackRange14_clbk = float (WINAPIV*)(struct CGuardTower*, CGuardTowerGetAttackRange14_ptr);
        using CGuardTowerGetDefFC16_ptr = int (WINAPIV*)(struct CGuardTower*, int, struct CCharacter*, int*);
        using CGuardTowerGetDefFC16_clbk = int (WINAPIV*)(struct CGuardTower*, int, struct CCharacter*, int*, CGuardTowerGetDefFC16_ptr);
        using CGuardTowerGetDefFacing18_ptr = float (WINAPIV*)(struct CGuardTower*, int);
        using CGuardTowerGetDefFacing18_clbk = float (WINAPIV*)(struct CGuardTower*, int, CGuardTowerGetDefFacing18_ptr);
        using CGuardTowerGetDefGap20_ptr = float (WINAPIV*)(struct CGuardTower*, int);
        using CGuardTowerGetDefGap20_clbk = float (WINAPIV*)(struct CGuardTower*, int, CGuardTowerGetDefGap20_ptr);
        using CGuardTowerGetDefSkill22_ptr = int (WINAPIV*)(struct CGuardTower*, bool);
        using CGuardTowerGetDefSkill22_clbk = int (WINAPIV*)(struct CGuardTower*, bool, CGuardTowerGetDefSkill22_ptr);
        using CGuardTowerGetFireTol24_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetFireTol24_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetFireTol24_ptr);
        using CGuardTowerGetGenAttackProb26_ptr = int (WINAPIV*)(struct CGuardTower*, struct CCharacter*, int, bool);
        using CGuardTowerGetGenAttackProb26_clbk = int (WINAPIV*)(struct CGuardTower*, struct CCharacter*, int, bool, CGuardTowerGetGenAttackProb26_ptr);
        using CGuardTowerGetHP28_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetHP28_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetHP28_ptr);
        using CGuardTowerGetLevel30_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetLevel30_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetLevel30_ptr);
        using CGuardTowerGetMaxHP32_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetMaxHP32_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetMaxHP32_ptr);
        using CGuardTowerGetNewSerial34_ptr = unsigned int (WINAPIV*)();
        using CGuardTowerGetNewSerial34_clbk = unsigned int (WINAPIV*)(CGuardTowerGetNewSerial34_ptr);
        using CGuardTowerGetObjName36_ptr = char* (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetObjName36_clbk = char* (WINAPIV*)(struct CGuardTower*, CGuardTowerGetObjName36_ptr);
        using CGuardTowerGetObjRace38_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetObjRace38_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetObjRace38_ptr);
        using CGuardTowerGetSoilTol40_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetSoilTol40_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetSoilTol40_ptr);
        using CGuardTowerGetWaterTol42_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetWaterTol42_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetWaterTol42_ptr);
        using CGuardTowerGetWeaponAdjust44_ptr = float (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetWeaponAdjust44_clbk = float (WINAPIV*)(struct CGuardTower*, CGuardTowerGetWeaponAdjust44_ptr);
        using CGuardTowerGetWeaponClass46_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetWeaponClass46_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetWeaponClass46_ptr);
        using CGuardTowerGetWidth48_ptr = float (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetWidth48_clbk = float (WINAPIV*)(struct CGuardTower*, CGuardTowerGetWidth48_ptr);
        using CGuardTowerGetWindTol50_ptr = int (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerGetWindTol50_clbk = int (WINAPIV*)(struct CGuardTower*, CGuardTowerGetWindTol50_ptr);
        using CGuardTowerInit52_ptr = bool (WINAPIV*)(struct CGuardTower*, struct _object_id*);
        using CGuardTowerInit52_clbk = bool (WINAPIV*)(struct CGuardTower*, struct _object_id*, CGuardTowerInit52_ptr);
        using CGuardTowerIsBeAttackedAble54_ptr = bool (WINAPIV*)(struct CGuardTower*, bool);
        using CGuardTowerIsBeAttackedAble54_clbk = bool (WINAPIV*)(struct CGuardTower*, bool, CGuardTowerIsBeAttackedAble54_ptr);
        using CGuardTowerIsBeDamagedAble56_ptr = bool (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        using CGuardTowerIsBeDamagedAble56_clbk = bool (WINAPIV*)(struct CGuardTower*, struct CCharacter*, CGuardTowerIsBeDamagedAble56_ptr);
        using CGuardTowerIsHaveEmpty58_ptr = bool (WINAPIV*)();
        using CGuardTowerIsHaveEmpty58_clbk = bool (WINAPIV*)(CGuardTowerIsHaveEmpty58_ptr);
        using CGuardTowerIsInTown60_ptr = bool (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerIsInTown60_clbk = bool (WINAPIV*)(struct CGuardTower*, CGuardTowerIsInTown60_ptr);
        using CGuardTowerIsValidTarget62_ptr = bool (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerIsValidTarget62_clbk = bool (WINAPIV*)(struct CGuardTower*, CGuardTowerIsValidTarget62_ptr);
        using CGuardTowerLoop64_ptr = void (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerLoop64_clbk = void (WINAPIV*)(struct CGuardTower*, CGuardTowerLoop64_ptr);
        using CGuardTowerNotifyOwnerAttackInform66_ptr = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        using CGuardTowerNotifyOwnerAttackInform66_clbk = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*, CGuardTowerNotifyOwnerAttackInform66_ptr);
        using CGuardTowerOnLoop_Static68_ptr = void (WINAPIV*)();
        using CGuardTowerOnLoop_Static68_clbk = void (WINAPIV*)(CGuardTowerOnLoop_Static68_ptr);
        using CGuardTowerOutOfSec70_ptr = void (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerOutOfSec70_clbk = void (WINAPIV*)(struct CGuardTower*, CGuardTowerOutOfSec70_ptr);
        using CGuardTowerRecvKillMessage72_ptr = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*);
        using CGuardTowerRecvKillMessage72_clbk = void (WINAPIV*)(struct CGuardTower*, struct CCharacter*, CGuardTowerRecvKillMessage72_ptr);
        using CGuardTowerRobbedHP74_ptr = bool (WINAPIV*)(struct CGuardTower*, struct CCharacter*, int);
        using CGuardTowerRobbedHP74_clbk = bool (WINAPIV*)(struct CGuardTower*, struct CCharacter*, int, CGuardTowerRobbedHP74_ptr);
        using CGuardTowerSearchNearEnemy76_ptr = struct CCharacter* (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerSearchNearEnemy76_clbk = struct CCharacter* (WINAPIV*)(struct CGuardTower*, CGuardTowerSearchNearEnemy76_ptr);
        using CGuardTowerSendMsg_Attack78_ptr = void (WINAPIV*)(struct CGuardTower*, struct CAttack*);
        using CGuardTowerSendMsg_Attack78_clbk = void (WINAPIV*)(struct CGuardTower*, struct CAttack*, CGuardTowerSendMsg_Attack78_ptr);
        using CGuardTowerSendMsg_Create80_ptr = void (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerSendMsg_Create80_clbk = void (WINAPIV*)(struct CGuardTower*, CGuardTowerSendMsg_Create80_ptr);
        using CGuardTowerSendMsg_Destroy82_ptr = void (WINAPIV*)(struct CGuardTower*, char);
        using CGuardTowerSendMsg_Destroy82_clbk = void (WINAPIV*)(struct CGuardTower*, char, CGuardTowerSendMsg_Destroy82_ptr);
        using CGuardTowerSendMsg_FixPosition84_ptr = void (WINAPIV*)(struct CGuardTower*, int);
        using CGuardTowerSendMsg_FixPosition84_clbk = void (WINAPIV*)(struct CGuardTower*, int, CGuardTowerSendMsg_FixPosition84_ptr);
        using CGuardTowerSendMsg_TowerCompleteInform86_ptr = void (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerSendMsg_TowerCompleteInform86_clbk = void (WINAPIV*)(struct CGuardTower*, CGuardTowerSendMsg_TowerCompleteInform86_ptr);
        using CGuardTowerSetDamage88_ptr = int (WINAPIV*)(struct CGuardTower*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        using CGuardTowerSetDamage88_clbk = int (WINAPIV*)(struct CGuardTower*, int, struct CCharacter*, int, bool, int, unsigned int, bool, CGuardTowerSetDamage88_ptr);
        
        using CGuardTowerdtor_CGuardTower94_ptr = void (WINAPIV*)(struct CGuardTower*);
        using CGuardTowerdtor_CGuardTower94_clbk = void (WINAPIV*)(struct CGuardTower*, CGuardTowerdtor_CGuardTower94_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
