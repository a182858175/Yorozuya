// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPostStorage.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CPostStorageAddNewPost2_ptr = int (WINAPIV*)(struct CPostStorage*, unsigned int, char*, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, int*, uint64_t);
        using CPostStorageAddNewPost2_clbk = int (WINAPIV*)(struct CPostStorage*, unsigned int, char*, char*, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, unsigned int, char, int*, uint64_t, CPostStorageAddNewPost2_ptr);
        using CPostStorageAddPostTitleData4_ptr = int (WINAPIV*)(struct CPostStorage*, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t);
        using CPostStorageAddPostTitleData4_clbk = int (WINAPIV*)(struct CPostStorage*, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t, CPostStorageAddPostTitleData4_ptr);
        using CPostStorageAddPostTitleDataByStorageIndex6_ptr = bool (WINAPIV*)(struct CPostStorage*, int, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t);
        using CPostStorageAddPostTitleDataByStorageIndex6_clbk = bool (WINAPIV*)(struct CPostStorage*, int, int, unsigned int, char, char*, char*, struct _INVENKEY, uint64_t, unsigned int, unsigned int, uint64_t, CPostStorageAddPostTitleDataByStorageIndex6_ptr);
        
        using CPostStoragector_CPostStorage8_ptr = void (WINAPIV*)(struct CPostStorage*);
        using CPostStoragector_CPostStorage8_clbk = void (WINAPIV*)(struct CPostStorage*, CPostStoragector_CPostStorage8_ptr);
        using CPostStorageDelPostData10_ptr = void (WINAPIV*)(struct CPostStorage*, unsigned int);
        using CPostStorageDelPostData10_clbk = void (WINAPIV*)(struct CPostStorage*, unsigned int, CPostStorageDelPostData10_ptr);
        using CPostStorageGetPostDataFromInx12_ptr = struct CPostData* (WINAPIV*)(struct CPostStorage*, int);
        using CPostStorageGetPostDataFromInx12_clbk = struct CPostData* (WINAPIV*)(struct CPostStorage*, int, CPostStorageGetPostDataFromInx12_ptr);
        using CPostStorageGetPostDataFromSerial14_ptr = struct CPostData* (WINAPIV*)(struct CPostStorage*, unsigned int);
        using CPostStorageGetPostDataFromSerial14_clbk = struct CPostData* (WINAPIV*)(struct CPostStorage*, unsigned int, CPostStorageGetPostDataFromSerial14_ptr);
        using CPostStorageGetSize16_ptr = int (WINAPIV*)(struct CPostStorage*);
        using CPostStorageGetSize16_clbk = int (WINAPIV*)(struct CPostStorage*, CPostStorageGetSize16_ptr);
        using CPostStorageInit18_ptr = void (WINAPIV*)(struct CPostStorage*);
        using CPostStorageInit18_clbk = void (WINAPIV*)(struct CPostStorage*, CPostStorageInit18_ptr);
        using CPostStorageIsContentLoad20_ptr = bool (WINAPIV*)(struct CPostStorage*, unsigned int);
        using CPostStorageIsContentLoad20_clbk = bool (WINAPIV*)(struct CPostStorage*, unsigned int, CPostStorageIsContentLoad20_ptr);
        using CPostStorageSetPostContent22_ptr = int (WINAPIV*)(struct CPostStorage*, unsigned int, char*);
        using CPostStorageSetPostContent22_clbk = int (WINAPIV*)(struct CPostStorage*, unsigned int, char*, CPostStorageSetPostContent22_ptr);
        
        using CPostStoragedtor_CPostStorage24_ptr = void (WINAPIV*)(struct CPostStorage*);
        using CPostStoragedtor_CPostStorage24_clbk = void (WINAPIV*)(struct CPostStorage*, CPostStoragedtor_CPostStorage24_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
