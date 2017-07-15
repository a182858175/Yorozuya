// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CIniFileVtbl.hpp>
#include <INI_Section.hpp>
#include <std__vector.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CIniFile
    {
        CIniFileVtbl *vfptr;
        char m_strPath[260];
        std::vector<INI_Section *> m_SectionList;
    public:
        CIniFile(char* strPath);
        void ctor_CIniFile(char* strPath);
        CIniFile();
        void ctor_CIniFile();
        void Clear();
        bool DeleteKey(struct INI_Key* pKey);
        int DeleteKey(char* lpSection, char* lpKey);
        bool DeleteSection(struct INI_Section* pSection);
        int DeleteSection(char* lpSection);
        struct INI_Key* GetKey(char* strSection, char* strKey);
        struct INI_Section* GetSection(char* strSection);
        struct INI_Section* GetSection(unsigned int dwIndex);
        unsigned int GetSectionSize();
        bool Load();
        struct INI_Key* LoadKey(char* strSection, char* strKey);
        struct INI_Section* LoadSection(char* strSection);
        bool Merge_Intersection(struct CIniFile* rhs);
        bool Merge_SumOfSets(struct CIniFile* rhs);
        void Save();
        bool SaveKey(struct INI_Key* pKey);
        bool SaveSection(struct INI_Section* pSection);
        void SetIniFilename(char* strPath);
        bool SplitKey(char* strBase, char* strKey, int nKeyLen);
        bool WriteString(char* strSection, char* strKey, char* strValue);
        ~CIniFile();
        void dtor_CIniFile();
    };    
    #pragma pack(pop)
    static_assert(ATF::checkSize<CIniFile, 312>(), "CIniFile");
END_ATF_NAMESPACE
