// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMapDataTable.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMapDataTablector_CMapDataTable2_ptr = void (WINAPIV*)(struct CMapDataTable*);
        using CMapDataTablector_CMapDataTable2_clbk = void (WINAPIV*)(struct CMapDataTable*, CMapDataTablector_CMapDataTable2_ptr);
        using CMapDataTableGetRecord4_ptr = struct _map_fld* (WINAPIV*)(struct CMapDataTable*, unsigned int);
        using CMapDataTableGetRecord4_clbk = struct _map_fld* (WINAPIV*)(struct CMapDataTable*, unsigned int, CMapDataTableGetRecord4_ptr);
        using CMapDataTableGetRecordNum6_ptr = int (WINAPIV*)(struct CMapDataTable*);
        using CMapDataTableGetRecordNum6_clbk = int (WINAPIV*)(struct CMapDataTable*, CMapDataTableGetRecordNum6_ptr);
        using CMapDataTableReadScript8_ptr = bool (WINAPIV*)(struct CMapDataTable*, char*);
        using CMapDataTableReadScript8_clbk = bool (WINAPIV*)(struct CMapDataTable*, char*, CMapDataTableReadScript8_ptr);
        
        using CMapDataTabledtor_CMapDataTable13_ptr = void (WINAPIV*)(struct CMapDataTable*);
        using CMapDataTabledtor_CMapDataTable13_clbk = void (WINAPIV*)(struct CMapDataTable*, CMapDataTabledtor_CMapDataTable13_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
