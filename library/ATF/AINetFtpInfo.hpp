// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <AINetFtp.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using AINetFtpctor_AINetFtp2_ptr = void (WINAPIV*)(struct AINetFtp*);
        using AINetFtpctor_AINetFtp2_clbk = void (WINAPIV*)(struct AINetFtp*, AINetFtpctor_AINetFtp2_ptr);
        using AINetFtpClose4_ptr = void (WINAPIV*)(struct AINetFtp*);
        using AINetFtpClose4_clbk = void (WINAPIV*)(struct AINetFtp*, AINetFtpClose4_ptr);
        using AINetFtpCreateDirectoryA6_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
        using AINetFtpCreateDirectoryA6_clbk = int (WINAPIV*)(struct AINetFtp*, char*, AINetFtpCreateDirectoryA6_ptr);
        using AINetFtpGetCurrentDirectoryA8_ptr = int (WINAPIV*)(struct AINetFtp*, char*, unsigned int*);
        using AINetFtpGetCurrentDirectoryA8_clbk = int (WINAPIV*)(struct AINetFtp*, char*, unsigned int*, AINetFtpGetCurrentDirectoryA8_ptr);
        using AINetFtpGetFile10_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*, int, unsigned int, unsigned int, unsigned int);
        using AINetFtpGetFile10_clbk = int (WINAPIV*)(struct AINetFtp*, char*, char*, int, unsigned int, unsigned int, unsigned int, AINetFtpGetFile10_ptr);
        using AINetFtpOpen12_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*, char*, uint16_t, int, unsigned int);
        using AINetFtpOpen12_clbk = int (WINAPIV*)(struct AINetFtp*, char*, char*, char*, uint16_t, int, unsigned int, AINetFtpOpen12_ptr);
        using AINetFtpOpenFile14_ptr = struct AINetFile* (WINAPIV*)(struct AINetFtp*, char*, unsigned int, unsigned int, unsigned int);
        using AINetFtpOpenFile14_clbk = struct AINetFile* (WINAPIV*)(struct AINetFtp*, char*, unsigned int, unsigned int, unsigned int, AINetFtpOpenFile14_ptr);
        using AINetFtpPutFile16_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*, unsigned int, unsigned int);
        using AINetFtpPutFile16_clbk = int (WINAPIV*)(struct AINetFtp*, char*, char*, unsigned int, unsigned int, AINetFtpPutFile16_ptr);
        using AINetFtpRemove18_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
        using AINetFtpRemove18_clbk = int (WINAPIV*)(struct AINetFtp*, char*, AINetFtpRemove18_ptr);
        using AINetFtpRemoveDirectoryA20_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
        using AINetFtpRemoveDirectoryA20_clbk = int (WINAPIV*)(struct AINetFtp*, char*, AINetFtpRemoveDirectoryA20_ptr);
        using AINetFtpRename22_ptr = int (WINAPIV*)(struct AINetFtp*, char*, char*);
        using AINetFtpRename22_clbk = int (WINAPIV*)(struct AINetFtp*, char*, char*, AINetFtpRename22_ptr);
        using AINetFtpSetCurrentDirectoryA24_ptr = int (WINAPIV*)(struct AINetFtp*, char*);
        using AINetFtpSetCurrentDirectoryA24_clbk = int (WINAPIV*)(struct AINetFtp*, char*, AINetFtpSetCurrentDirectoryA24_ptr);
        
        using AINetFtpdtor_AINetFtp29_ptr = void (WINAPIV*)(struct AINetFtp*);
        using AINetFtpdtor_AINetFtp29_clbk = void (WINAPIV*)(struct AINetFtp*, AINetFtpdtor_AINetFtp29_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
