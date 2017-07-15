// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <TInvenSlot.hpp>
#include <TInvenPage.hpp>


START_ATF_NAMESPACE
    struct TInventory
    {
        int m_nUsingPage;
        int m_nMaxPageNum;
        int m_nMaxSlotNum;
        int m_nMaxOverlapNum;
        TInvenPage *m_pPage;
    public:
        TInventory()
        {
            using org_ptr = void (WINAPIV*)(struct TInventory*);
            (org_ptr(0x1402d43e0L))(this);
        };
        void ctor_TInventory()
        {
            using org_ptr = void (WINAPIV*)(struct TInventory*);
            (org_ptr(0x1402d43e0L))(this);
        };
        void clear()
        {
            using org_ptr = void (WINAPIV*)(struct TInventory*);
            (org_ptr(0x1402d4cd0L))(this);
        };
        bool create(int nMaxPage, int nMaxSlot, int nMaxOverlap)
        {
            using org_ptr = bool (WINAPIV*)(struct TInventory*, int, int, int);
            return (org_ptr(0x1402d4440L))(this, nMaxPage, nMaxSlot, nMaxOverlap);
        };
        bool find_empty(struct _INVENKEY* pItem, int nNum, int* nP, int* nS)
        {
            using org_ptr = bool (WINAPIV*)(struct TInventory*, struct _INVENKEY*, int, int*, int*);
            return (org_ptr(0x1402d46f0L))(this, pItem, nNum, nP, nS);
        };
        struct TInvenSlot* get_slot(int nP, int nS)
        {
            using org_ptr = struct TInvenSlot* (WINAPIV*)(struct TInventory*, int, int);
            return (org_ptr(0x1402d4660L))(this, nP, nS);
        };
        int pop(int nP, int nS, struct _INVENKEY* pItem, int nNum)
        {
            using org_ptr = int (WINAPIV*)(struct TInventory*, int, int, struct _INVENKEY*, int);
            return (org_ptr(0x1402d4900L))(this, nP, nS, pItem, nNum);
        };
        int push(int nP, int nS, struct _INVENKEY* pItem, int nNum)
        {
            using org_ptr = int (WINAPIV*)(struct TInventory*, int, int, struct _INVENKEY*, int);
            return (org_ptr(0x1402d4860L))(this, nP, nS, pItem, nNum);
        };
        void swap(struct TInvenSlot* pSrc, struct TInvenSlot* pDst)
        {
            using org_ptr = void (WINAPIV*)(struct TInventory*, struct TInvenSlot*, struct TInvenSlot*);
            (org_ptr(0x1402d49a0L))(this, pSrc, pDst);
        };
        ~TInventory()
        {
            using org_ptr = void (WINAPIV*)(struct TInventory*);
            (org_ptr(0x1402d4430L))(this);
        };
        void dtor_TInventory()
        {
            using org_ptr = void (WINAPIV*)(struct TInventory*);
            (org_ptr(0x1402d4430L))(this);
        };
    };
END_ATF_NAMESPACE
