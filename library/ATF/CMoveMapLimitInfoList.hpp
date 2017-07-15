// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMoveMapLimitInfo.hpp>
#include <CMoveMapLimitRightInfo.hpp>
#include <CPlayer.hpp>
#include <std__vector.hpp>


START_ATF_NAMESPACE
    struct CMoveMapLimitInfoList
    {
        std::vector<CMoveMapLimitInfo *,std::allocator<CMoveMapLimitInfo *> > m_vecLimitInfo;
    public:
        CMoveMapLimitInfoList();
        void ctor_CMoveMapLimitInfoList();
        void CleanUp();
        struct CMoveMapLimitInfo* Get(int iLimitType, int iMapInx, unsigned int dwStoreRecordIndex);
        bool Init(struct std::vector<int,std::allocator<int> >* vecRightTypeList);
        void Load(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight);
        void LogIn(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight);
        void LogOut(struct CPlayer* pkPlayer, struct CMoveMapLimitRightInfo* pkRight);
        void Loop();
        char Request(int iLimitType, int iRequetType, int iMapInx, unsigned int dwStoreRecordIndex, int iUserInx, char* pRequest, struct CMoveMapLimitRightInfo* pkRight);
        ~CMoveMapLimitInfoList();
        void dtor_CMoveMapLimitInfoList();
    };
END_ATF_NAMESPACE
