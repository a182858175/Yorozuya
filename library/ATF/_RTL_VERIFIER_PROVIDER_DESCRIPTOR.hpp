// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_RTL_VERIFIER_DLL_DESCRIPTOR.hpp>



START_ATF_NAMESPACE
    struct _RTL_VERIFIER_PROVIDER_DESCRIPTOR
    {
        unsigned int Length;
        _RTL_VERIFIER_DLL_DESCRIPTOR *ProviderDlls;
        void (WINAPIV *ProviderDllLoadCallback)(wchar_t *, void *, unsigned __int64, void *);
        void (WINAPIV *ProviderDllUnloadCallback)(wchar_t *, void *, unsigned __int64, void *);
        wchar_t *VerifierImage;
        unsigned int VerifierFlags;
        unsigned int VerifierDebug;
        void *RtlpGetStackTraceAddress;
        void *RtlpDebugPageHeapCreate;
        void *RtlpDebugPageHeapDestroy;
        void (WINAPIV *ProviderNtdllHeapFreeCallback)(void *, unsigned __int64);
    };
END_ATF_NAMESPACE
