// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CAnimus.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CAnimusAIInit2_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusAIInit2_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusAIInit2_ptr);
        using CAnimusAction4_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusAction4_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusAction4_ptr);
        using CAnimusAlterExp6_ptr = void (WINAPIV*)(struct CAnimus*, int64_t);
        using CAnimusAlterExp6_clbk = void (WINAPIV*)(struct CAnimus*, int64_t, CAnimusAlterExp6_ptr);
        using CAnimusAlterExp_MasterReport8_ptr = void (WINAPIV*)(struct CAnimus*, int64_t);
        using CAnimusAlterExp_MasterReport8_clbk = void (WINAPIV*)(struct CAnimus*, int64_t, CAnimusAlterExp_MasterReport8_ptr);
        using CAnimusAlterFP_MasterReport10_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusAlterFP_MasterReport10_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusAlterFP_MasterReport10_ptr);
        using CAnimusAlterHP_MasterReport12_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusAlterHP_MasterReport12_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusAlterHP_MasterReport12_ptr);
        using CAnimusAlterMode_MasterReport14_ptr = void (WINAPIV*)(struct CAnimus*, char);
        using CAnimusAlterMode_MasterReport14_clbk = void (WINAPIV*)(struct CAnimus*, char, CAnimusAlterMode_MasterReport14_ptr);
        using CAnimusAttack16_ptr = bool (WINAPIV*)(struct CAnimus*, unsigned int);
        using CAnimusAttack16_clbk = bool (WINAPIV*)(struct CAnimus*, unsigned int, CAnimusAttack16_ptr);
        using CAnimusAttackableHeight18_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusAttackableHeight18_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusAttackableHeight18_ptr);
        
        using CAnimusctor_CAnimus20_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusctor_CAnimus20_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusctor_CAnimus20_ptr);
        using CAnimusCalcAttExp22_ptr = void (WINAPIV*)(struct CAnimus*, struct CAttack*);
        using CAnimusCalcAttExp22_clbk = void (WINAPIV*)(struct CAnimus*, struct CAttack*, CAnimusCalcAttExp22_ptr);
        using CAnimusCalcDefExp24_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, int);
        using CAnimusCalcDefExp24_clbk = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, int, CAnimusCalcDefExp24_ptr);
        using CAnimusChangeMode26_ptr = void (WINAPIV*)(struct CAnimus*, unsigned int);
        using CAnimusChangeMode26_clbk = void (WINAPIV*)(struct CAnimus*, unsigned int, CAnimusChangeMode26_ptr);
        using CAnimusChangeMode_MasterCommand28_ptr = void (WINAPIV*)(struct CAnimus*, int);
        using CAnimusChangeMode_MasterCommand28_clbk = void (WINAPIV*)(struct CAnimus*, int, CAnimusChangeMode_MasterCommand28_ptr);
        using CAnimusChangeTarget_MasterCommand30_ptr = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        using CAnimusChangeTarget_MasterCommand30_clbk = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*, CAnimusChangeTarget_MasterCommand30_ptr);
        using CAnimusCheckPosInTown32_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusCheckPosInTown32_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusCheckPosInTown32_ptr);
        using CAnimusCreate34_ptr = bool (WINAPIV*)(struct CAnimus*, struct _animus_create_setdata*);
        using CAnimusCreate34_clbk = bool (WINAPIV*)(struct CAnimus*, struct _animus_create_setdata*, CAnimusCreate34_ptr);
        using CAnimusDestroy36_ptr = bool (WINAPIV*)(struct CAnimus*);
        using CAnimusDestroy36_clbk = bool (WINAPIV*)(struct CAnimus*, CAnimusDestroy36_ptr);
        using CAnimusGetAttackDP38_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetAttackDP38_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetAttackDP38_ptr);
        using CAnimusGetAttackPart40_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetAttackPart40_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetAttackPart40_ptr);
        using CAnimusGetAttackRange42_ptr = float (WINAPIV*)(struct CAnimus*);
        using CAnimusGetAttackRange42_clbk = float (WINAPIV*)(struct CAnimus*, CAnimusGetAttackRange42_ptr);
        using CAnimusGetDefFC44_ptr = int (WINAPIV*)(struct CAnimus*, int, struct CCharacter*, int*);
        using CAnimusGetDefFC44_clbk = int (WINAPIV*)(struct CAnimus*, int, struct CCharacter*, int*, CAnimusGetDefFC44_ptr);
        using CAnimusGetDefFacing46_ptr = float (WINAPIV*)(struct CAnimus*, int);
        using CAnimusGetDefFacing46_clbk = float (WINAPIV*)(struct CAnimus*, int, CAnimusGetDefFacing46_ptr);
        using CAnimusGetDefGap48_ptr = float (WINAPIV*)(struct CAnimus*, int);
        using CAnimusGetDefGap48_clbk = float (WINAPIV*)(struct CAnimus*, int, CAnimusGetDefGap48_ptr);
        using CAnimusGetDefSkill50_ptr = int (WINAPIV*)(struct CAnimus*, bool);
        using CAnimusGetDefSkill50_clbk = int (WINAPIV*)(struct CAnimus*, bool, CAnimusGetDefSkill50_ptr);
        using CAnimusGetFireTol52_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetFireTol52_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetFireTol52_ptr);
        using CAnimusGetGenAttackProb54_ptr = int (WINAPIV*)(struct CAnimus*, struct CCharacter*, int, bool);
        using CAnimusGetGenAttackProb54_clbk = int (WINAPIV*)(struct CAnimus*, struct CCharacter*, int, bool, CAnimusGetGenAttackProb54_ptr);
        using CAnimusGetHP56_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetHP56_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetHP56_ptr);
        using CAnimusGetLevel58_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetLevel58_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetLevel58_ptr);
        using CAnimusGetMaxHP60_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetMaxHP60_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetMaxHP60_ptr);
        using CAnimusGetMaxLevel62_ptr = char (WINAPIV*)(struct CAnimus*);
        using CAnimusGetMaxLevel62_clbk = char (WINAPIV*)(struct CAnimus*, CAnimusGetMaxLevel62_ptr);
        using CAnimusGetMoveTarget64_ptr = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*, float, char);
        using CAnimusGetMoveTarget64_clbk = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*, float, char, CAnimusGetMoveTarget64_ptr);
        using CAnimusGetNewMonSerial66_ptr = unsigned int (WINAPIV*)();
        using CAnimusGetNewMonSerial66_clbk = unsigned int (WINAPIV*)(CAnimusGetNewMonSerial66_ptr);
        using CAnimusGetObjName68_ptr = char* (WINAPIV*)(struct CAnimus*);
        using CAnimusGetObjName68_clbk = char* (WINAPIV*)(struct CAnimus*, CAnimusGetObjName68_ptr);
        using CAnimusGetObjRace70_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetObjRace70_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetObjRace70_ptr);
        using CAnimusGetSoilTol72_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetSoilTol72_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetSoilTol72_ptr);
        using CAnimusGetTarget74_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusGetTarget74_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusGetTarget74_ptr);
        using CAnimusGetWaterTol76_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetWaterTol76_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetWaterTol76_ptr);
        using CAnimusGetWeaponAdjust78_ptr = float (WINAPIV*)(struct CAnimus*);
        using CAnimusGetWeaponAdjust78_clbk = float (WINAPIV*)(struct CAnimus*, CAnimusGetWeaponAdjust78_ptr);
        using CAnimusGetWeaponClass80_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetWeaponClass80_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetWeaponClass80_ptr);
        using CAnimusGetWidth82_ptr = float (WINAPIV*)(struct CAnimus*);
        using CAnimusGetWidth82_clbk = float (WINAPIV*)(struct CAnimus*, CAnimusGetWidth82_ptr);
        using CAnimusGetWindTol84_ptr = int (WINAPIV*)(struct CAnimus*);
        using CAnimusGetWindTol84_clbk = int (WINAPIV*)(struct CAnimus*, CAnimusGetWindTol84_ptr);
        using CAnimusHeal86_ptr = bool (WINAPIV*)(struct CAnimus*, unsigned int);
        using CAnimusHeal86_clbk = bool (WINAPIV*)(struct CAnimus*, unsigned int, CAnimusHeal86_ptr);
        using CAnimusInit88_ptr = bool (WINAPIV*)(struct CAnimus*, struct _object_id*);
        using CAnimusInit88_clbk = bool (WINAPIV*)(struct CAnimus*, struct _object_id*, CAnimusInit88_ptr);
        using CAnimusIsBeAttackedAble90_ptr = bool (WINAPIV*)(struct CAnimus*, bool);
        using CAnimusIsBeAttackedAble90_clbk = bool (WINAPIV*)(struct CAnimus*, bool, CAnimusIsBeAttackedAble90_ptr);
        using CAnimusIsInTown92_ptr = bool (WINAPIV*)(struct CAnimus*);
        using CAnimusIsInTown92_clbk = bool (WINAPIV*)(struct CAnimus*, CAnimusIsInTown92_ptr);
        using CAnimusIsValidTarget94_ptr = bool (WINAPIV*)(struct CAnimus*);
        using CAnimusIsValidTarget94_clbk = bool (WINAPIV*)(struct CAnimus*, CAnimusIsValidTarget94_ptr);
        using CAnimusLifeTimeCheck96_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusLifeTimeCheck96_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusLifeTimeCheck96_ptr);
        using CAnimusLoop98_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusLoop98_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusLoop98_ptr);
        using CAnimusMasterAttack_MasterInform100_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        using CAnimusMasterAttack_MasterInform100_clbk = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, CAnimusMasterAttack_MasterInform100_ptr);
        using CAnimusMasterBeAttacked_MasterInform102_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        using CAnimusMasterBeAttacked_MasterInform102_clbk = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, CAnimusMasterBeAttacked_MasterInform102_ptr);
        using CAnimusOutOfSec104_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusOutOfSec104_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusOutOfSec104_ptr);
        using CAnimusProcess106_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusProcess106_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusProcess106_ptr);
        using CAnimusRecvKillMessage108_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*);
        using CAnimusRecvKillMessage108_clbk = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, CAnimusRecvKillMessage108_ptr);
        using CAnimusReturn_MasterRequest110_ptr = void (WINAPIV*)(struct CAnimus*, char);
        using CAnimusReturn_MasterRequest110_clbk = void (WINAPIV*)(struct CAnimus*, char, CAnimusReturn_MasterRequest110_ptr);
        using CAnimusRobbedHP112_ptr = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*, int);
        using CAnimusRobbedHP112_clbk = bool (WINAPIV*)(struct CAnimus*, struct CCharacter*, int, CAnimusRobbedHP112_ptr);
        using CAnimusSearchNearEnemy114_ptr = struct CCharacter* (WINAPIV*)(struct CAnimus*);
        using CAnimusSearchNearEnemy114_clbk = struct CCharacter* (WINAPIV*)(struct CAnimus*, CAnimusSearchNearEnemy114_ptr);
        using CAnimusSearchNearPlayerAttack116_ptr = struct CCharacter* (WINAPIV*)(struct CAnimus*);
        using CAnimusSearchNearPlayerAttack116_clbk = struct CCharacter* (WINAPIV*)(struct CAnimus*, CAnimusSearchNearPlayerAttack116_ptr);
        using CAnimusSendMsg_AnimusActHealInform118_ptr = void (WINAPIV*)(struct CAnimus*, unsigned int, int);
        using CAnimusSendMsg_AnimusActHealInform118_clbk = void (WINAPIV*)(struct CAnimus*, unsigned int, int, CAnimusSendMsg_AnimusActHealInform118_ptr);
        using CAnimusSendMsg_Attack_Gen120_ptr = void (WINAPIV*)(struct CAnimus*, struct CAttack*);
        using CAnimusSendMsg_Attack_Gen120_clbk = void (WINAPIV*)(struct CAnimus*, struct CAttack*, CAnimusSendMsg_Attack_Gen120_ptr);
        using CAnimusSendMsg_Create122_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusSendMsg_Create122_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusSendMsg_Create122_ptr);
        using CAnimusSendMsg_Destroy124_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusSendMsg_Destroy124_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusSendMsg_Destroy124_ptr);
        using CAnimusSendMsg_FixPosition126_ptr = void (WINAPIV*)(struct CAnimus*, int);
        using CAnimusSendMsg_FixPosition126_clbk = void (WINAPIV*)(struct CAnimus*, int, CAnimusSendMsg_FixPosition126_ptr);
        using CAnimusSendMsg_LevelUp128_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusSendMsg_LevelUp128_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusSendMsg_LevelUp128_ptr);
        using CAnimusSendMsg_Move130_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusSendMsg_Move130_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusSendMsg_Move130_ptr);
        using CAnimusSendMsg_RealMovePoint132_ptr = void (WINAPIV*)(struct CAnimus*, int);
        using CAnimusSendMsg_RealMovePoint132_clbk = void (WINAPIV*)(struct CAnimus*, int, CAnimusSendMsg_RealMovePoint132_ptr);
        using CAnimusSetDamage134_ptr = int (WINAPIV*)(struct CAnimus*, int, struct CCharacter*, int, bool, int, unsigned int, bool);
        using CAnimusSetDamage134_clbk = int (WINAPIV*)(struct CAnimus*, int, struct CCharacter*, int, bool, int, unsigned int, bool, CAnimusSetDamage134_ptr);
        using CAnimusSetStaticMember136_ptr = bool (WINAPIV*)();
        using CAnimusSetStaticMember136_clbk = bool (WINAPIV*)(CAnimusSetStaticMember136_ptr);
        using CAnimusTransPoToMaster138_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusTransPoToMaster138_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusTransPoToMaster138_ptr);
        using CAnimus_ProcComsumeMaterFP140_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimus_ProcComsumeMaterFP140_clbk = void (WINAPIV*)(struct CAnimus*, CAnimus_ProcComsumeMaterFP140_ptr);
        using CAnimusmake_gen_attack_param146_ptr = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, char, struct _attack_param*, int);
        using CAnimusmake_gen_attack_param146_clbk = void (WINAPIV*)(struct CAnimus*, struct CCharacter*, char, struct _attack_param*, int, CAnimusmake_gen_attack_param146_ptr);
        
        using CAnimusdtor_CAnimus148_ptr = void (WINAPIV*)(struct CAnimus*);
        using CAnimusdtor_CAnimus148_clbk = void (WINAPIV*)(struct CAnimus*, CAnimusdtor_CAnimus148_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
