// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <IOleUILinkInfoA.hpp>
#include <IOleUIObjInfoA.hpp>
#include <_PROPSHEETHEADERA.hpp>
#include <tagOLEUIGNRLPROPSA.hpp>
#include <tagOLEUILINKPROPSA.hpp>
#include <tagOLEUIVIEWPROPSA.hpp>


START_ATF_NAMESPACE
    struct tagOLEUIOBJECTPROPSA
    {
        unsigned int cbStruct;
        unsigned int dwFlags;
        _PROPSHEETHEADERA *lpPS;
        unsigned int dwObject;
        IOleUIObjInfoA *lpObjInfo;
        unsigned int dwLink;
        IOleUILinkInfoA *lpLinkInfo;
        tagOLEUIGNRLPROPSA *lpGP;
        tagOLEUIVIEWPROPSA *lpVP;
        tagOLEUILINKPROPSA *lpLP;
    };
END_ATF_NAMESPACE
