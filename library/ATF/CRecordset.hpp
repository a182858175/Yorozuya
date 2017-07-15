// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <ATL__CStringT.hpp>
#include <CDatabase.hpp>
#include <CFieldInfo.hpp>
#include <CMapPtrToPtr.hpp>
#include <CODBCFieldInfo.hpp>
#include <CObject.hpp>
#include <$FDD8F4F487B302A1323F7A672D081758.hpp>


START_ATF_NAMESPACE
    struct  CRecordset : CObject
    {
        enum OpenType
        {
            dynaset = 0x0,
            snapshot = 0x1,
            forwardOnly = 0x2,
            dynamic = 0x3,
        };
        typedef $FDD8F4F487B302A1323F7A672D081758 OpenOptions;
        enum LockMode
        {
            optimistic = 0x0,
            pessimistic = 0x1,
        };
        enum EditMode
        {
            noMode = 0x0,
            edit = 0x1,
            addnew = 0x2,
        };
        void *m_hstmt;
        CDatabase *m_pDatabase;
        ATL::CStringT<char> m_strFilter;
        ATL::CStringT<char> m_strSort;
        unsigned int m_nFields;
        unsigned int m_nParams;
        int m_bCheckCacheForDirtyFields;
        int m_bRebindParams;
        int m_bLongBinaryColumns;
        int m_bUseUpdateSQL;
        unsigned int m_dwOptions;
        __int16 m_nResultCols;
        int m_bUseODBCCursorLib;
        CODBCFieldInfo *m_rgODBCFieldInfos;
        CFieldInfo *m_rgFieldInfos;
        CMapPtrToPtr m_mapFieldIndex;
        CMapPtrToPtr m_mapParamIndex;
        void **m_pvFieldProxy;
        void **m_pvParamProxy;
        unsigned int m_nProxyFields;
        unsigned int m_nProxyParams;
        unsigned int m_nOpenType;
        unsigned int m_nDefaultType;
        int m_lOpen;
        unsigned int m_nEditMode;
        int m_bEOFSeen;
        int m_lRecordCount;
        int m_lCurrentRecord;
        ATL::CStringT<char> m_strCursorName;
        int m_nLockMode;
        unsigned int m_dwDriverConcurrency;
        unsigned int m_dwConcurrency;
        unsigned __int16 *m_rgRowStatus;
        unsigned __int64 m_dwRowsFetched;
        void *m_hstmtUpdate;
        int m_bRecordsetDb;
        int m_bBOF;
        int m_bEOF;
        int m_bUpdatable;
        int m_bAppendable;
        ATL::CStringT<char> m_strSQL;
        ATL::CStringT<char> m_strUpdateSQL;
        ATL::CStringT<char> m_strTableName;
        int m_bScrollable;
        int m_bDeleted;
        int m_nFieldsBound;
        char *m_pbFieldFlags;
        char *m_pbParamFlags;
        __int64 *m_plParamLength;
        unsigned int m_dwInitialGetDataLen;
        unsigned int m_dwRowsetSize;
        unsigned int m_dwAllocatedRowsetSize;
        ATL::CStringT<char> m_strRequerySQL;
        ATL::CStringT<char> m_strRequeryFilter;
        ATL::CStringT<char> m_strRequerySort;
    };
END_ATF_NAMESPACE
