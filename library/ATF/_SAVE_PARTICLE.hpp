// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _SAVE_PARTICLE
    {
        char mEntityName[128];
        unsigned int mFlag;
        unsigned int mNum;
        unsigned int mAlphaType;
        int mCreateArea[3];
        float mLiveTime;
        float mGravity[3];
        float mPowerNormal[3];
        float mTimeSpeed;
        char mATrack[6];
        char mRTrack[6];
        char mGTrack[6];
        char mBTrack[6];
        float mScaleTrack[6];
        unsigned int spare[127];
    };
END_ATF_NAMESPACE
