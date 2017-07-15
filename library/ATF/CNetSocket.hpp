// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNetIndexList.hpp>
#include <CNetSocketVtbl.hpp>
#include <CNetTimer.hpp>
#include <_IP_CHECK_NODE.hpp>
#include <_SOCK_TYPE_PARAM.hpp>
#include <_socket.hpp>
#include <_total_count.hpp>
#include <sockaddr_in.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CNetSocket
    {
        CNetSocketVtbl *vfptr;
        unsigned __int64 m_sAccept;
        void *m_AcceptEvent;
        _socket *m_Socket;
        void **m_Event;
        _SOCK_TYPE_PARAM m_SockType;
        _total_count m_TotalCount;
        bool m_bSetSocket;
        unsigned int m_dwSerialCounter;
        int m_nIPCheckNodeNum;
        _IP_CHECK_NODE *m_ndIPCheck;
        unsigned int *m_dwIPCheckBufferList;
        CNetIndexList m_listIPCheck;
        CNetIndexList m_listIPCheck_Empty;
        CNetTimer m_tmrListCheckerIPCheck;
    public:
        bool Accept_Client(unsigned int dwSocketIndex);
        unsigned int Accept_Server();
        CNetSocket();
        void ctor_CNetSocket();
        void CloseAll();
        bool CloseSocket(unsigned int n);
        int Connect(unsigned int n, struct sockaddr_in* pAddr);
        void EmptySocketBuffer(unsigned int n);
        unsigned int FindEmptySocket();
        struct _socket* GetSocket(unsigned int dwIndex);
        unsigned int GetSocketIPAddress(unsigned int dwIndex);
        struct _SOCK_TYPE_PARAM* GetSocketType();
        struct _total_count* GetTotalCount();
        bool InitAcceptSocket(char* pszErrMsg);
        void OnLoop();
        bool PushIPCheckList(unsigned int dwIP);
        bool Recv(unsigned int n, char* pBuf, int nBufMaxSize, int* pnRet);
        void Release();
        bool Send(unsigned int n, char* pBuf, int nSize, int* pnRet);
        bool SetSocket(struct _SOCK_TYPE_PARAM* pType, char* pszErrMsg);
        ~CNetSocket();
        void dtor_CNetSocket();
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<CNetSocket, 488>(), "CNetSocket");
END_ATF_NAMESPACE
