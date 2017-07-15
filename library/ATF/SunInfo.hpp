// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <Sun.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using SunComputeAttenuation1_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short, struct D3DXVECTOR4*, float);
        using SunComputeAttenuation1_clbk = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short, struct D3DXVECTOR4*, float, SunComputeAttenuation1_ptr);
        using SunDump22_ptr = void (WINAPIV*)(struct Sun*, struct _iobuf*);
        using SunDump22_clbk = void (WINAPIV*)(struct Sun*, struct _iobuf*, SunDump22_ptr);
        using SunFrameMove3_ptr = void (WINAPIV*)(struct Sun*);
        using SunFrameMove3_clbk = void (WINAPIV*)(struct Sun*, SunFrameMove3_ptr);
        using SunGetAlpha4_ptr = float (WINAPIV*)(struct Sun*);
        using SunGetAlpha4_clbk = float (WINAPIV*)(struct Sun*, SunGetAlpha4_ptr);
        using SunGetColor5_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        using SunGetColor5_clbk = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short, SunGetColor5_ptr);
        using SunGetColorAndIntensity6_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        using SunGetColorAndIntensity6_clbk = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short, SunGetColorAndIntensity6_ptr);
        using SunGetColorWithIntensity7_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        using SunGetColorWithIntensity7_clbk = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short, SunGetColorWithIntensity7_ptr);
        using SunGetDirection8_ptr = void (WINAPIV*)(struct Sun*, float*);
        using SunGetDirection8_clbk = void (WINAPIV*)(struct Sun*, float*, SunGetDirection8_ptr);
        using SunGetDirection9_ptr = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short);
        using SunGetDirection9_clbk = struct D3DXVECTOR4* (WINAPIV*)(struct Sun*, short, SunGetDirection9_ptr);
        using SunGetIntensity10_ptr = float (WINAPIV*)(struct Sun*);
        using SunGetIntensity10_clbk = float (WINAPIV*)(struct Sun*, SunGetIntensity10_ptr);
        using SunGetNightAlpha11_ptr = float (WINAPIV*)(struct Sun*);
        using SunGetNightAlpha11_clbk = float (WINAPIV*)(struct Sun*, SunGetNightAlpha11_ptr);
        using SunInterpolate12_ptr = void (WINAPIV*)(struct Sun*, struct Sun*, struct Sun*, float);
        using SunInterpolate12_clbk = void (WINAPIV*)(struct Sun*, struct Sun*, struct Sun*, float, SunInterpolate12_ptr);
        using SunInvalidateSun13_ptr = void (WINAPIV*)(struct Sun*);
        using SunInvalidateSun13_clbk = void (WINAPIV*)(struct Sun*, SunInvalidateSun13_ptr);
        using SunRead214_ptr = void (WINAPIV*)(struct Sun*, struct _iobuf*);
        using SunRead214_clbk = void (WINAPIV*)(struct Sun*, struct _iobuf*, SunRead214_ptr);
        using SunRender15_ptr = void (WINAPIV*)(struct Sun*);
        using SunRender15_clbk = void (WINAPIV*)(struct Sun*, SunRender15_ptr);
        using SunRestoreSun16_ptr = void (WINAPIV*)(struct Sun*);
        using SunRestoreSun16_clbk = void (WINAPIV*)(struct Sun*, SunRestoreSun16_ptr);
        using SunSetAlpha17_ptr = void (WINAPIV*)(struct Sun*, float);
        using SunSetAlpha17_clbk = void (WINAPIV*)(struct Sun*, float, SunSetAlpha17_ptr);
        using SunSetNightAlpha18_ptr = void (WINAPIV*)(struct Sun*, float);
        using SunSetNightAlpha18_clbk = void (WINAPIV*)(struct Sun*, float, SunSetNightAlpha18_ptr);
        using SunSetScale19_ptr = void (WINAPIV*)(struct Sun*, float);
        using SunSetScale19_clbk = void (WINAPIV*)(struct Sun*, float, SunSetScale19_ptr);
        using SunSetSunThetaPhi20_ptr = void (WINAPIV*)(struct Sun*, float, float);
        using SunSetSunThetaPhi20_clbk = void (WINAPIV*)(struct Sun*, float, float, SunSetSunThetaPhi20_ptr);
        using SunSetTime21_ptr = void (WINAPIV*)(struct Sun*, float);
        using SunSetTime21_clbk = void (WINAPIV*)(struct Sun*, float, SunSetTime21_ptr);
        
        using Sundtor_Sun22_ptr = int64_t (WINAPIV*)(struct Sun*);
        using Sundtor_Sun22_clbk = int64_t (WINAPIV*)(struct Sun*, Sundtor_Sun22_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
