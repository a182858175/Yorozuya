// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMsgData.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CMsgDatactor_CMsgData2_ptr = void (WINAPIV*)(struct CMsgData*, int);
        using CMsgDatactor_CMsgData2_clbk = void (WINAPIV*)(struct CMsgData*, int, CMsgDatactor_CMsgData2_ptr);
        
        using CMsgDatactor_CMsgData4_ptr = void (WINAPIV*)(struct CMsgData*);
        using CMsgDatactor_CMsgData4_clbk = void (WINAPIV*)(struct CMsgData*, CMsgDatactor_CMsgData4_ptr);
        using CMsgDataInit6_ptr = void (WINAPIV*)(struct CMsgData*, int);
        using CMsgDataInit6_clbk = void (WINAPIV*)(struct CMsgData*, int, CMsgDataInit6_ptr);
        using CMsgDataPackingMsg8_ptr = bool (WINAPIV*)(struct CMsgData*, unsigned int, unsigned int, unsigned int, unsigned int);
        using CMsgDataPackingMsg8_clbk = bool (WINAPIV*)(struct CMsgData*, unsigned int, unsigned int, unsigned int, unsigned int, CMsgDataPackingMsg8_ptr);
        using CMsgDataPopEmptyBuf10_ptr = struct _message* (WINAPIV*)(struct CMsgData*);
        using CMsgDataPopEmptyBuf10_clbk = struct _message* (WINAPIV*)(struct CMsgData*, CMsgDataPopEmptyBuf10_ptr);
        using CMsgDataPopMsg12_ptr = struct _message* (WINAPIV*)(struct CMsgData*);
        using CMsgDataPopMsg12_clbk = struct _message* (WINAPIV*)(struct CMsgData*, CMsgDataPopMsg12_ptr);
        using CMsgDataProcessMessage14_ptr = void (WINAPIV*)(struct CMsgData*, struct _message*);
        using CMsgDataProcessMessage14_clbk = void (WINAPIV*)(struct CMsgData*, struct _message*, CMsgDataProcessMessage14_ptr);
        using CMsgDataPumpMsgList16_ptr = void (WINAPIV*)(struct CMsgData*);
        using CMsgDataPumpMsgList16_clbk = void (WINAPIV*)(struct CMsgData*, CMsgDataPumpMsgList16_ptr);
        using CMsgDataPushEmptyBuf18_ptr = void (WINAPIV*)(struct CMsgData*, struct _message*);
        using CMsgDataPushEmptyBuf18_clbk = void (WINAPIV*)(struct CMsgData*, struct _message*, CMsgDataPushEmptyBuf18_ptr);
        using CMsgDataPushMsg20_ptr = void (WINAPIV*)(struct CMsgData*, struct _message*);
        using CMsgDataPushMsg20_clbk = void (WINAPIV*)(struct CMsgData*, struct _message*, CMsgDataPushMsg20_ptr);
        
        using CMsgDatadtor_CMsgData25_ptr = void (WINAPIV*)(struct CMsgData*);
        using CMsgDatadtor_CMsgData25_clbk = void (WINAPIV*)(struct CMsgData*, CMsgDatadtor_CMsgData25_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
