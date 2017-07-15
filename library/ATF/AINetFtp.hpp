// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <AINet.hpp>
#include <AINetFile.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  AINetFtp : AINet
    {
        void *m_hConnect;
        unsigned int m_dwContext;
    public:
        AINetFtp();
        void ctor_AINetFtp();
        void Close();
        int CreateDirectoryA(char* pstrDirName);
        int GetCurrentDirectoryA(char* pstrDirName, unsigned int* lpdwLen);
        int GetFile(char* pstrRemoteFile, char* pstrLocalFile, int bFailIfExists, unsigned int dwAttributes, unsigned int dwFlags, unsigned int dwContext);
        int Open(char* pstrServer, char* pstrUserName, char* pstrPassword, uint16_t nPort, int bPassive, unsigned int dwContext);
        struct AINetFile* OpenFile(char* pstrFileName, unsigned int dwAccess, unsigned int dwFlags, unsigned int dwContext);
        int PutFile(char* pstrLocalFile, char* pstrRemoteFile, unsigned int dwFlags, unsigned int dwContext);
        int Remove(char* pstrFileName);
        int RemoveDirectoryA(char* pstrDirName);
        int Rename(char* pstrExisting, char* pstrNew);
        int SetCurrentDirectoryA(char* pstrDirName);
        ~AINetFtp();
        void dtor_AINetFtp();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
