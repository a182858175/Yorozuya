// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNationSettingDataID.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CNationSettingDataIDctor_CNationSettingDataID2_ptr = void (WINAPIV*)(struct CNationSettingDataID*);
        using CNationSettingDataIDctor_CNationSettingDataID2_clbk = void (WINAPIV*)(struct CNationSettingDataID*, CNationSettingDataIDctor_CNationSettingDataID2_ptr);
        using CNationSettingDataIDCheckEnterWorldRequest4_ptr = bool (WINAPIV*)(struct CNationSettingDataID*, int, char*);
        using CNationSettingDataIDCheckEnterWorldRequest4_clbk = bool (WINAPIV*)(struct CNationSettingDataID*, int, char*, CNationSettingDataIDCheckEnterWorldRequest4_ptr);
        using CNationSettingDataIDCreateBilling6_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingDataID*);
        using CNationSettingDataIDCreateBilling6_clbk = struct CBilling* (WINAPIV*)(struct CNationSettingDataID*, CNationSettingDataIDCreateBilling6_ptr);
        using CNationSettingDataIDCreateWorker8_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataID*);
        using CNationSettingDataIDCreateWorker8_clbk = struct CashDbWorker* (WINAPIV*)(struct CNationSettingDataID*, CNationSettingDataIDCreateWorker8_ptr);
        using CNationSettingDataIDGetCashItemPrice10_ptr = int (WINAPIV*)(struct CNationSettingDataID*, struct _CashShop_str_fld*);
        using CNationSettingDataIDGetCashItemPrice10_clbk = int (WINAPIV*)(struct CNationSettingDataID*, struct _CashShop_str_fld*, CNationSettingDataIDGetCashItemPrice10_ptr);
        using CNationSettingDataIDGetItemName12_ptr = char* (WINAPIV*)(struct CNationSettingDataID*, struct _NameTxt_fld*);
        using CNationSettingDataIDGetItemName12_clbk = char* (WINAPIV*)(struct CNationSettingDataID*, struct _NameTxt_fld*, CNationSettingDataIDGetItemName12_ptr);
        using CNationSettingDataIDInit14_ptr = int (WINAPIV*)(struct CNationSettingDataID*);
        using CNationSettingDataIDInit14_clbk = int (WINAPIV*)(struct CNationSettingDataID*, CNationSettingDataIDInit14_ptr);
        using CNationSettingDataIDLoop16_ptr = void (WINAPIV*)(struct CNationSettingDataID*);
        using CNationSettingDataIDLoop16_clbk = void (WINAPIV*)(struct CNationSettingDataID*, CNationSettingDataIDLoop16_ptr);
        using CNationSettingDataIDReadSystemPass18_ptr = bool (WINAPIV*)(struct CNationSettingDataID*);
        using CNationSettingDataIDReadSystemPass18_clbk = bool (WINAPIV*)(struct CNationSettingDataID*, CNationSettingDataIDReadSystemPass18_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
