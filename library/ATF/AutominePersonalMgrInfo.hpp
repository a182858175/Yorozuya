// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <AutominePersonalMgr.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using AutominePersonalMgrctor_AutominePersonalMgr2_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
        using AutominePersonalMgrctor_AutominePersonalMgr2_clbk = void (WINAPIV*)(struct AutominePersonalMgr*, AutominePersonalMgrctor_AutominePersonalMgr2_ptr);
        using AutominePersonalMgrCreateDBTable4_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
        using AutominePersonalMgrCreateDBTable4_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, AutominePersonalMgrCreateDBTable4_ptr);
        using AutominePersonalMgrIs_MineRun6_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
        using AutominePersonalMgrIs_MineRun6_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, AutominePersonalMgrIs_MineRun6_ptr);
        using AutominePersonalMgrOpen_InfoUI8_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrOpen_InfoUI8_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrOpen_InfoUI8_ptr);
        using AutominePersonalMgrOpen_InvenUI10_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrOpen_InvenUI10_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrOpen_InvenUI10_ptr);
        using AutominePersonalMgrcheck_dummy14_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, struct CMapData*, char, float*);
        using AutominePersonalMgrcheck_dummy14_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, struct CMapData*, char, float*, AutominePersonalMgrcheck_dummy14_ptr);
        using AutominePersonalMgrcheck_machine16_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, struct AutominePersonal*, struct _STORAGE_LIST::_db_con*);
        using AutominePersonalMgrcheck_machine16_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, struct AutominePersonal*, struct _STORAGE_LIST::_db_con*, AutominePersonalMgrcheck_machine16_ptr);
        using AutominePersonalMgrdb_load_inven18_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, unsigned int, struct _PERSONALAMINE_INVEN_DB_BASE*);
        using AutominePersonalMgrdb_load_inven18_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, unsigned int, struct _PERSONALAMINE_INVEN_DB_BASE*, AutominePersonalMgrdb_load_inven18_ptr);
        using AutominePersonalMgrextract_battery20_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
        using AutominePersonalMgrextract_battery20_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, AutominePersonalMgrextract_battery20_ptr);
        using AutominePersonalMgrextract_battery22_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrextract_battery22_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrextract_battery22_ptr);
        using AutominePersonalMgrget_localitem24_ptr = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct AutominePersonalMgr*, struct CPlayer*, uint16_t);
        using AutominePersonalMgrget_localitem24_clbk = struct _STORAGE_LIST::_db_con* (WINAPIV*)(struct AutominePersonalMgr*, struct CPlayer*, uint16_t, AutominePersonalMgrget_localitem24_ptr);
        using AutominePersonalMgrget_machine26_ptr = struct AutominePersonal* (WINAPIV*)(struct AutominePersonalMgr*, int);
        using AutominePersonalMgrget_machine26_clbk = struct AutominePersonal* (WINAPIV*)(struct AutominePersonalMgr*, int, AutominePersonalMgrget_machine26_ptr);
        using AutominePersonalMgrinit_objects28_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
        using AutominePersonalMgrinit_objects28_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, AutominePersonalMgrinit_objects28_ptr);
        using AutominePersonalMgrinitialize30_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*);
        using AutominePersonalMgrinitialize30_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, AutominePersonalMgrinitialize30_ptr);
        using AutominePersonalMgrinsert_battery32_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrinsert_battery32_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrinsert_battery32_ptr);
        using AutominePersonalMgrinstall34_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrinstall34_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrinstall34_ptr);
        using AutominePersonalMgrinstance36_ptr = struct AutominePersonalMgr* (WINAPIV*)();
        using AutominePersonalMgrinstance36_clbk = struct AutominePersonalMgr* (WINAPIV*)(AutominePersonalMgrinstance36_ptr);
        using AutominePersonalMgrmake_storagebox38_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrmake_storagebox38_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrmake_storagebox38_ptr);
        using AutominePersonalMgrpop_dqs_makestorage40_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*);
        using AutominePersonalMgrpop_dqs_makestorage40_clbk = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*, AutominePersonalMgrpop_dqs_makestorage40_ptr);
        using AutominePersonalMgrpop_ore42_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrpop_ore42_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrpop_ore42_ptr);
        using AutominePersonalMgrpush_dqs_makestorage44_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, unsigned int);
        using AutominePersonalMgrpush_dqs_makestorage44_clbk = void (WINAPIV*)(struct AutominePersonalMgr*, int, unsigned int, unsigned int, AutominePersonalMgrpush_dqs_makestorage44_ptr);
        using AutominePersonalMgrrelease46_ptr = void (WINAPIV*)();
        using AutominePersonalMgrrelease46_clbk = void (WINAPIV*)(AutominePersonalMgrrelease46_ptr);
        using AutominePersonalMgrrequest_query48_ptr = int (WINAPIV*)(struct AutominePersonalMgr*, char*);
        using AutominePersonalMgrrequest_query48_clbk = int (WINAPIV*)(struct AutominePersonalMgr*, char*, AutominePersonalMgrrequest_query48_ptr);
        using AutominePersonalMgrresult_query50_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*);
        using AutominePersonalMgrresult_query50_clbk = void (WINAPIV*)(struct AutominePersonalMgr*, char, char*, AutominePersonalMgrresult_query50_ptr);
        using AutominePersonalMgrselectore52_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgrselectore52_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgrselectore52_ptr);
        using AutominePersonalMgrsend_ecode54_ptr = void (WINAPIV*)(struct AutominePersonalMgr*, int, char);
        using AutominePersonalMgrsend_ecode54_clbk = void (WINAPIV*)(struct AutominePersonalMgr*, int, char, AutominePersonalMgrsend_ecode54_ptr);
        using AutominePersonalMgruninstall56_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int);
        using AutominePersonalMgruninstall56_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, AutominePersonalMgruninstall56_ptr);
        using AutominePersonalMgruninstall58_ptr = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*);
        using AutominePersonalMgruninstall58_clbk = bool (WINAPIV*)(struct AutominePersonalMgr*, int, char*, AutominePersonalMgruninstall58_ptr);
        
        using AutominePersonalMgrdtor_AutominePersonalMgr60_ptr = void (WINAPIV*)(struct AutominePersonalMgr*);
        using AutominePersonalMgrdtor_AutominePersonalMgr60_clbk = void (WINAPIV*)(struct AutominePersonalMgr*, AutominePersonalMgrdtor_AutominePersonalMgr60_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
