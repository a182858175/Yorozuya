// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CD3DCamera.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CD3DCameractor_CD3DCamera1_ptr = int64_t (WINAPIV*)(struct CD3DCamera*);
        using CD3DCameractor_CD3DCamera1_clbk = int64_t (WINAPIV*)(struct CD3DCamera*, CD3DCameractor_CD3DCamera1_ptr);
        using CD3DCameraSetProjParams2_ptr = void (WINAPIV*)(struct CD3DCamera*, float, float, float, float);
        using CD3DCameraSetProjParams2_clbk = void (WINAPIV*)(struct CD3DCamera*, float, float, float, float, CD3DCameraSetProjParams2_ptr);
        using CD3DCameraSetViewParams3_ptr = void (WINAPIV*)(struct CD3DCamera*, struct D3DXVECTOR3*, struct D3DXVECTOR3*, struct D3DXVECTOR3*);
        using CD3DCameraSetViewParams3_clbk = void (WINAPIV*)(struct CD3DCamera*, struct D3DXVECTOR3*, struct D3DXVECTOR3*, struct D3DXVECTOR3*, CD3DCameraSetViewParams3_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
