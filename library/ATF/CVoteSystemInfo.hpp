// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CVoteSystem.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CVoteSystemActVote2_ptr = bool (WINAPIV*)(struct CVoteSystem*, unsigned int, char);
        using CVoteSystemActVote2_clbk = bool (WINAPIV*)(struct CVoteSystem*, unsigned int, char, CVoteSystemActVote2_ptr);
        
        using CVoteSystemctor_CVoteSystem4_ptr = void (WINAPIV*)(struct CVoteSystem*);
        using CVoteSystemctor_CVoteSystem4_clbk = void (WINAPIV*)(struct CVoteSystem*, CVoteSystemctor_CVoteSystem4_ptr);
        using CVoteSystemCompleteSelectCharSerial6_ptr = void (WINAPIV*)(struct CVoteSystem*, char*);
        using CVoteSystemCompleteSelectCharSerial6_clbk = void (WINAPIV*)(struct CVoteSystem*, char*, CVoteSystemCompleteSelectCharSerial6_ptr);
        using CVoteSystemLoop8_ptr = void (WINAPIV*)(struct CVoteSystem*);
        using CVoteSystemLoop8_clbk = void (WINAPIV*)(struct CVoteSystem*, CVoteSystemLoop8_ptr);
        using CVoteSystemProcessPunishment10_ptr = void (WINAPIV*)(struct CVoteSystem*);
        using CVoteSystemProcessPunishment10_clbk = void (WINAPIV*)(struct CVoteSystem*, CVoteSystemProcessPunishment10_ptr);
        using CVoteSystemSendMsg_StartedVoteInform12_ptr = void (WINAPIV*)(struct CVoteSystem*, int, unsigned int, bool);
        using CVoteSystemSendMsg_StartedVoteInform12_clbk = void (WINAPIV*)(struct CVoteSystem*, int, unsigned int, bool, CVoteSystemSendMsg_StartedVoteInform12_ptr);
        using CVoteSystemStartVote14_ptr = bool (WINAPIV*)(struct CVoteSystem*, char*, char, char);
        using CVoteSystemStartVote14_clbk = bool (WINAPIV*)(struct CVoteSystem*, char*, char, char, CVoteSystemStartVote14_ptr);
        using CVoteSystemStartVote16_ptr = bool (WINAPIV*)(struct CVoteSystem*, char, char, char*, char*, unsigned int);
        using CVoteSystemStartVote16_clbk = bool (WINAPIV*)(struct CVoteSystem*, char, char, char*, char*, unsigned int, CVoteSystemStartVote16_ptr);
        using CVoteSystemStopVote18_ptr = bool (WINAPIV*)(struct CVoteSystem*);
        using CVoteSystemStopVote18_clbk = bool (WINAPIV*)(struct CVoteSystem*, CVoteSystemStopVote18_ptr);
        
        using CVoteSystemdtor_CVoteSystem20_ptr = void (WINAPIV*)(struct CVoteSystem*);
        using CVoteSystemdtor_CVoteSystem20_clbk = void (WINAPIV*)(struct CVoteSystem*, CVoteSystemdtor_CVoteSystem20_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
