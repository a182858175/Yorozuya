// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMonsterSPGroupTable.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMonsterSPGroupTablector_CMonsterSPGroupTable2_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
        using CMonsterSPGroupTablector_CMonsterSPGroupTable2_clbk = void (WINAPIV*)(struct CMonsterSPGroupTable*, CMonsterSPGroupTablector_CMonsterSPGroupTable2_ptr);
        using CMonsterSPGroupTableCreate4_ptr = bool (WINAPIV*)(struct CMonsterSPGroupTable*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*);
        using CMonsterSPGroupTableCreate4_clbk = bool (WINAPIV*)(struct CMonsterSPGroupTable*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*, struct CRecordData*, CMonsterSPGroupTableCreate4_ptr);
        using CMonsterSPGroupTableGetRecord6_ptr = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, char*);
        using CMonsterSPGroupTableGetRecord6_clbk = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, char*, CMonsterSPGroupTableGetRecord6_ptr);
        using CMonsterSPGroupTableGetRecord8_ptr = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, unsigned int);
        using CMonsterSPGroupTableGetRecord8_clbk = struct _monster_sp_group* (WINAPIV*)(struct CMonsterSPGroupTable*, unsigned int, CMonsterSPGroupTableGetRecord8_ptr);
        
        using CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_ptr = void (WINAPIV*)(struct CMonsterSPGroupTable*);
        using CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_clbk = void (WINAPIV*)(struct CMonsterSPGroupTable*, CMonsterSPGroupTabledtor_CMonsterSPGroupTable10_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
