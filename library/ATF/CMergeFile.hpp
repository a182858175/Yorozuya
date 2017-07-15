// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_MERGE_FILE.hpp>


START_ATF_NAMESPACE
    struct CMergeFile
    {
        char mFileName[256];
        _MERGE_FILE *mMergeFNF;
        unsigned int *mOffset;
        unsigned int *mIndex;
        unsigned int mCnt;
        unsigned int mHeaderSize;
    public:
        uint32_t GetFileOffset(uint32_t arg_0, char* arg_1);
        uint32_t GetFileSize(uint32_t arg_0, char* arg_1);
        int IsExistFile(char* arg_0);
        struct _iobuf* LoadFileOffset(char* Mode, char* arg_0);
        int64_t LoadMergeFileHeader(char* arg_0);
        void ReleaseMergeFileHeader();
    };
END_ATF_NAMESPACE
