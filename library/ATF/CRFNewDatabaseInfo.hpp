// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CRFNewDatabase.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CRFNewDatabaseAllocSelectHandle2_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseAllocSelectHandle2_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseAllocSelectHandle2_ptr);
        using CRFNewDatabaseAllocUpdateHandle4_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseAllocUpdateHandle4_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseAllocUpdateHandle4_ptr);
        
        using CRFNewDatabasector_CRFNewDatabase6_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabasector_CRFNewDatabase6_clbk = void (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabasector_CRFNewDatabase6_ptr);
        using CRFNewDatabaseCheckLogFileHour8_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseCheckLogFileHour8_clbk = void (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseCheckLogFileHour8_ptr);
        using CRFNewDatabaseCommitTransaction10_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseCommitTransaction10_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseCommitTransaction10_ptr);
        using CRFNewDatabaseConfigUserODBC12_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*, uint16_t);
        using CRFNewDatabaseConfigUserODBC12_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*, uint16_t, CRFNewDatabaseConfigUserODBC12_ptr);
        using CRFNewDatabaseDiagRecALog14_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*);
        using CRFNewDatabaseDiagRecALog14_clbk = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*, CRFNewDatabaseDiagRecALog14_ptr);
        using CRFNewDatabaseDiagRecWLog16_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*);
        using CRFNewDatabaseDiagRecWLog16_clbk = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, int16_t, void*, CRFNewDatabaseDiagRecWLog16_ptr);
        using CRFNewDatabaseEndDataBase18_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseEndDataBase18_clbk = void (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseEndDataBase18_ptr);
        using CRFNewDatabaseEroorActionProcSQL_ERROR20_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, void*);
        using CRFNewDatabaseEroorActionProcSQL_ERROR20_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, void*, CRFNewDatabaseEroorActionProcSQL_ERROR20_ptr);
        using CRFNewDatabaseErrFmtLog22_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseErrFmtLog22_clbk = void (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseErrFmtLog22_ptr);
        using CRFNewDatabaseErrFmtLog24_ptr = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*);
        using CRFNewDatabaseErrFmtLog24_clbk = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*, CRFNewDatabaseErrFmtLog24_ptr);
        using CRFNewDatabaseErrLog26_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseErrLog26_clbk = void (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseErrLog26_ptr);
        using CRFNewDatabaseErrorAction28_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, void*);
        using CRFNewDatabaseErrorAction28_clbk = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, void*, CRFNewDatabaseErrorAction28_ptr);
        using CRFNewDatabaseErrorMsgLog30_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, char*, char*, void*);
        using CRFNewDatabaseErrorMsgLog30_clbk = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, char*, char*, void*, CRFNewDatabaseErrorMsgLog30_ptr);
        using CRFNewDatabaseErrorMsgLog32_ptr = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, wchar_t*, wchar_t*, void*);
        using CRFNewDatabaseErrorMsgLog32_clbk = void (WINAPIV*)(struct CRFNewDatabase*, int16_t, wchar_t*, wchar_t*, void*, CRFNewDatabaseErrorMsgLog32_ptr);
        using CRFNewDatabaseExecUpdateBinaryQuery34_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, void*, int, bool);
        using CRFNewDatabaseExecUpdateBinaryQuery34_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, char*, void*, int, bool, CRFNewDatabaseExecUpdateBinaryQuery34_ptr);
        using CRFNewDatabaseExecUpdateQuery36_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, bool);
        using CRFNewDatabaseExecUpdateQuery36_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, char*, bool, CRFNewDatabaseExecUpdateQuery36_ptr);
        using CRFNewDatabaseExecUpdateQuery38_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, wchar_t*, bool);
        using CRFNewDatabaseExecUpdateQuery38_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, wchar_t*, bool, CRFNewDatabaseExecUpdateQuery38_ptr);
        using CRFNewDatabaseFmtLog40_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseFmtLog40_clbk = void (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseFmtLog40_ptr);
        using CRFNewDatabaseFmtLog42_ptr = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*);
        using CRFNewDatabaseFmtLog42_clbk = void (WINAPIV*)(struct CRFNewDatabase*, wchar_t*, CRFNewDatabaseFmtLog42_ptr);
        using CRFNewDatabaseFreeSelectHandle44_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseFreeSelectHandle44_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseFreeSelectHandle44_ptr);
        using CRFNewDatabaseFreeUpdateHandle46_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseFreeUpdateHandle46_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseFreeUpdateHandle46_ptr);
        using CRFNewDatabaseGetLocalHour48_ptr = char (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseGetLocalHour48_clbk = char (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseGetLocalHour48_ptr);
        using CRFNewDatabaseIsConectionActive50_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseIsConectionActive50_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseIsConectionActive50_ptr);
        using CRFNewDatabaseLog52_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseLog52_clbk = void (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseLog52_ptr);
        using CRFNewDatabaseReConnectDataBase54_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseReConnectDataBase54_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseReConnectDataBase54_ptr);
        using CRFNewDatabaseRollbackTransaction56_ptr = bool (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabaseRollbackTransaction56_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabaseRollbackTransaction56_ptr);
        using CRFNewDatabaseSQLExecDirect_RetErrCode58_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseSQLExecDirect_RetErrCode58_clbk = char (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseSQLExecDirect_RetErrCode58_ptr);
        using CRFNewDatabaseSQLFetch_RetErrCode60_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseSQLFetch_RetErrCode60_clbk = char (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseSQLFetch_RetErrCode60_ptr);
        using CRFNewDatabaseSQLGetData_Binary_RetErrCode62_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, char*, uint64_t);
        using CRFNewDatabaseSQLGetData_Binary_RetErrCode62_clbk = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, char*, uint64_t, CRFNewDatabaseSQLGetData_Binary_RetErrCode62_ptr);
        using CRFNewDatabaseSQLGetData_RetErrCode64_ptr = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, int16_t, void*);
        using CRFNewDatabaseSQLGetData_RetErrCode64_clbk = char (WINAPIV*)(struct CRFNewDatabase*, char*, uint16_t*, int16_t, void*, CRFNewDatabaseSQLGetData_RetErrCode64_ptr);
        using CRFNewDatabaseSelectCleanUp66_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseSelectCleanUp66_clbk = void (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseSelectCleanUp66_ptr);
        using CRFNewDatabaseSelect_NextHourDate68_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char, char*);
        using CRFNewDatabaseSelect_NextHourDate68_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, char, char*, CRFNewDatabaseSelect_NextHourDate68_ptr);
        using CRFNewDatabaseSetAutoCommitMode70_ptr = void (WINAPIV*)(struct CRFNewDatabase*, bool);
        using CRFNewDatabaseSetAutoCommitMode70_clbk = void (WINAPIV*)(struct CRFNewDatabase*, bool, CRFNewDatabaseSetAutoCommitMode70_ptr);
        using CRFNewDatabaseSetLogFile72_ptr = void (WINAPIV*)(struct CRFNewDatabase*, char*, char*);
        using CRFNewDatabaseSetLogFile72_clbk = void (WINAPIV*)(struct CRFNewDatabase*, char*, char*, CRFNewDatabaseSetLogFile72_ptr);
        using CRFNewDatabaseSetReconnectFailExitFlag74_ptr = void (WINAPIV*)(struct CRFNewDatabase*, bool);
        using CRFNewDatabaseSetReconnectFailExitFlag74_clbk = void (WINAPIV*)(struct CRFNewDatabase*, bool, CRFNewDatabaseSetReconnectFailExitFlag74_ptr);
        using CRFNewDatabaseStartDataBase76_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*);
        using CRFNewDatabaseStartDataBase76_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, char*, char*, char*, CRFNewDatabaseStartDataBase76_ptr);
        using CRFNewDatabaseTableExist78_ptr = bool (WINAPIV*)(struct CRFNewDatabase*, char*);
        using CRFNewDatabaseTableExist78_clbk = bool (WINAPIV*)(struct CRFNewDatabase*, char*, CRFNewDatabaseTableExist78_ptr);
        
        using CRFNewDatabasedtor_CRFNewDatabase83_ptr = void (WINAPIV*)(struct CRFNewDatabase*);
        using CRFNewDatabasedtor_CRFNewDatabase83_clbk = void (WINAPIV*)(struct CRFNewDatabase*, CRFNewDatabasedtor_CRFNewDatabase83_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
