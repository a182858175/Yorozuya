// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CD3DArcBall.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CD3DArcBallctor_CD3DArcBall1_ptr = int64_t (WINAPIV*)(struct CD3DArcBall*);
        using CD3DArcBallctor_CD3DArcBall1_clbk = int64_t (WINAPIV*)(struct CD3DArcBall*, CD3DArcBallctor_CD3DArcBall1_ptr);
        using CD3DArcBallHandleMouseMessages2_ptr = int64_t (WINAPIV*)(struct CD3DArcBall*, HWND, unsigned int, uint64_t, int64_t);
        using CD3DArcBallHandleMouseMessages2_clbk = int64_t (WINAPIV*)(struct CD3DArcBall*, HWND, unsigned int, uint64_t, int64_t, CD3DArcBallHandleMouseMessages2_ptr);
        using CD3DArcBallScreenToVector3_ptr = struct D3DXVECTOR3* (WINAPIV*)(struct CD3DArcBall*, short, struct D3DXVECTOR3*, int);
        using CD3DArcBallScreenToVector3_clbk = struct D3DXVECTOR3* (WINAPIV*)(struct CD3DArcBall*, short, struct D3DXVECTOR3*, int, CD3DArcBallScreenToVector3_ptr);
        using CD3DArcBallSetRadius4_ptr = void (WINAPIV*)(struct CD3DArcBall*, float);
        using CD3DArcBallSetRadius4_clbk = void (WINAPIV*)(struct CD3DArcBall*, float, CD3DArcBallSetRadius4_ptr);
        using CD3DArcBallSetWindow5_ptr = void (WINAPIV*)(struct CD3DArcBall*, int, int, float);
        using CD3DArcBallSetWindow5_clbk = void (WINAPIV*)(struct CD3DArcBall*, int, int, float, CD3DArcBallSetWindow5_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
