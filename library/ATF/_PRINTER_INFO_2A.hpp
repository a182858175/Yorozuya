// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_devicemodeA.hpp>


START_ATF_NAMESPACE
    struct _PRINTER_INFO_2A
    {
        char *pServerName;
        char *pPrinterName;
        char *pShareName;
        char *pPortName;
        char *pDriverName;
        char *pComment;
        char *pLocation;
        _devicemodeA *pDevMode;
        char *pSepFile;
        char *pPrintProcessor;
        char *pDatatype;
        char *pParameters;
        void *pSecurityDescriptor;
        unsigned int Attributes;
        unsigned int Priority;
        unsigned int DefaultPriority;
        unsigned int StartTime;
        unsigned int UntilTime;
        unsigned int Status;
        unsigned int cJobs;
        unsigned int AveragePPM;
    };
END_ATF_NAMESPACE
