// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$00F4D6FA838FAD5B65924731E0E9CCBC.hpp>
#include <$011CD355E9D3BA0B7A37CC1FD359B1C5.hpp>
#include <$06A15B9B4FE5C305436A6F5D3A6A0712.hpp>
#include <$DE343801BC75A137C516A9D9B3162490.hpp>
#include <$FA885138A45ED3CE38760E5920CA9439.hpp>
#include <_DDCOLORKEY.hpp>
#include <_DDSCAPS2.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct _DDSURFACEDESC2
    {
        unsigned int dwSize;
        unsigned int dwFlags;
        unsigned int dwHeight;
        unsigned int dwWidth;
        $00F4D6FA838FAD5B65924731E0E9CCBC ___u4;
        $DE343801BC75A137C516A9D9B3162490 ___u5;
        $FA885138A45ED3CE38760E5920CA9439 ___u6;
        unsigned int dwAlphaBitDepth;
        unsigned int dwReserved;
        void *lpSurface;
        $06A15B9B4FE5C305436A6F5D3A6A0712 ___u10;
        _DDCOLORKEY ddckCKDestBlt;
        _DDCOLORKEY ddckCKSrcOverlay;
        _DDCOLORKEY ddckCKSrcBlt;
        $011CD355E9D3BA0B7A37CC1FD359B1C5 ___u14;
        _DDSCAPS2 ddsCaps;
        unsigned int dwTextureStage;
    };
    #pragma pack(pop)    
    static_assert(ATF::checkSize<_DDSURFACEDESC2, 136>(), "_DDSURFACEDESC2");
END_ATF_NAMESPACE
