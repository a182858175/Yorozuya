// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <IUnknown.hpp>
#include <_GUID.hpp>
#include <_SECURITY_ATTRIBUTES.hpp>
#include <tagSTGMEDIUM.hpp>



START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _tagBINDINFO
    {
        unsigned int cbSize;
        wchar_t *szExtraInfo;
        tagSTGMEDIUM stgmedData;
        unsigned int grfBindInfoF;
        unsigned int dwBindVerb;
        wchar_t *szCustomVerb;
        unsigned int cbstgmedData;
        unsigned int dwOptions;
        unsigned int dwOptionsFlags;
        unsigned int dwCodePage;
        _SECURITY_ATTRIBUTES securityAttributes;
        _GUID iid;
        IUnknown *pUnk;
        unsigned int dwReserved;
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
