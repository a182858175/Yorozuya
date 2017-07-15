// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct DBIVtbl
    {
        unsigned int (WINAPIV *QueryImplementationVersion)(DBI *_this);
        BYTE gap8[56];
        int (WINAPIV *QueryModFromAddr)(DBI *_this, unsigned __int16, int, Mod **, unsigned __int16 *, int *, int *);
        int (WINAPIV *QuerySecMap)(DBI *_this, char *, int *);
        int (WINAPIV *QueryFileInfo)(DBI *_this, char *, int *);
        void (WINAPIV *DumpMods)(DBI *_this);
        void (WINAPIV *DumpSecContribs)(DBI *_this);
        void (WINAPIV *DumpSecMap)(DBI *_this);
        int (WINAPIV *Close)(DBI *_this);
        int (WINAPIV *AddThunkMap)(DBI *_this, int *, unsigned int, int, SO *, unsigned int, unsigned __int16, int);
        int (WINAPIV *AddPublic)(DBI *_this, const char *, unsigned __int16, int);
        int (WINAPIV *getEnumContrib)(DBI *_this, Enum **);
        int (WINAPIV *QueryTypeServer)(DBI *_this, char, TPI **);
        int (WINAPIV *QueryItsmForTi)(DBI *_this, unsigned int, char *);
        int (WINAPIV *QueryNextItsm)(DBI *_this, char, char *);
        int (WINAPIV *QueryLazyTypes)(DBI *_this);
        int (WINAPIV *SetLazyTypes)(DBI *_this, int);
        int (WINAPIV *FindTypeServers)(DBI *_this, int *, char *);
        void (WINAPIV *DumpTypeServers)(DBI *_this);
        int (WINAPIV *OpenDbg)(DBI *_this, DBGTYPE, Dbg **);
        int (WINAPIV *QueryDbgTypes)(DBI *_this, DBGTYPE *, int *);
        int (WINAPIV *QueryAddrForSec)(DBI *_this, unsigned __int16 *, int *, unsigned __int16, int, unsigned int, unsigned int);
        int (WINAPIV *QuerySupportsEC)(DBI *_this);
        int (WINAPIV *QueryPdb)(DBI *_this, PDB **);
        int (WINAPIV *AddLinkInfo)(DBI *_this, LinkInfo *);
        int (WINAPIV *QueryLinkInfo)(DBI *_this, LinkInfo *, int *);
        unsigned int (WINAPIV *QueryAge)(DBI *_this);
        void *(WINAPIV *QueryHeader)(DBI *_this);
        void (WINAPIV *FlushTypeServers)(DBI *_this);
        int (WINAPIV *QueryTypeServerByPdb)(DBI *_this, const char *, char *);
        int (WINAPIV *OpenModW)(DBI *_this, const wchar_t *, const wchar_t *, Mod **);
        int (WINAPIV *DeleteModW)(DBI *_this, const wchar_t *);
        int (WINAPIV *AddPublicW)(DBI *_this, const wchar_t *, unsigned __int16, int, unsigned int);
        int (WINAPIV *QueryTypeServerByPdbW)(DBI *_this, const wchar_t *, char *);
        int (WINAPIV *AddLinkInfoW)(DBI *_this, LinkInfoW *);
        int (WINAPIV *AddPublic2)(DBI *_this, const char *, unsigned __int16, int, unsigned int);
        unsigned __int16 (WINAPIV *QueryMachineType)(DBI *_this);
        void (WINAPIV *SetMachineType)(DBI *_this, unsigned __int16);
        void (WINAPIV *RemoveDataForRva)(DBI *_this, unsigned int, unsigned int);
        int (WINAPIV *FStripped)(DBI *_this);
        int (WINAPIV *QueryModFromAddr2)(DBI *_this, unsigned __int16, int, Mod **, unsigned __int16 *, int *, int *, unsigned int *);
        int (WINAPIV *QueryNoOfMods)(DBI *_this, int *);
        int (WINAPIV *QueryMods)(DBI *_this, Mod **, int);
        int (WINAPIV *QueryImodFromAddr)(DBI *_this, unsigned __int16, int, unsigned __int16 *, unsigned __int16 *, int *, int *, unsigned int *);
        int (WINAPIV *OpenModFromImod)(DBI *_this, unsigned __int16, Mod **);
        int (WINAPIV *QueryHeader2)(DBI *_this, int, char *, int *);
        int (WINAPIV *FAddSourceMappingItem)(DBI *_this, const wchar_t *, const wchar_t *, unsigned int);
        int (WINAPIV *FSetPfnNotePdbUsed)(DBI *_this, void *, void (WINAPIV *)(void *, const wchar_t *, int, int));
        int (WINAPIV *FCTypes)(DBI *_this);
        int (WINAPIV *QueryFileInfo2)(DBI *_this, char *, int *);
        int (WINAPIV *FSetPfnQueryCallback)(DBI *_this, void *, int (WINAPIV *(WINAPIV *)(void *, DOVC))());
    };
END_ATF_NAMESPACE
