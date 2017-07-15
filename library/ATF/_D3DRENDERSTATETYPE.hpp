// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    enum _D3DRENDERSTATETYPE
    {
      D3DRENDERSTATE_ANTIALIAS = 0x2,
      D3DRENDERSTATE_TEXTUREPERSPECTIVE = 0x4,
      D3DRENDERSTATE_ZENABLE = 0x7,
      D3DRENDERSTATE_FILLMODE = 0x8,
      D3DRENDERSTATE_SHADEMODE = 0x9,
      D3DRENDERSTATE_LINEPATTERN = 0xA,
      D3DRENDERSTATE_ZWRITEENABLE = 0xE,
      D3DRENDERSTATE_ALPHATESTENABLE = 0xF,
      D3DRENDERSTATE_LASTPIXEL = 0x10,
      D3DRENDERSTATE_SRCBLEND = 0x13,
      D3DRENDERSTATE_DESTBLEND = 0x14,
      D3DRENDERSTATE_CULLMODE = 0x16,
      D3DRENDERSTATE_ZFUNC = 0x17,
      D3DRENDERSTATE_ALPHAREF = 0x18,
      D3DRENDERSTATE_ALPHAFUNC = 0x19,
      D3DRENDERSTATE_DITHERENABLE = 0x1A,
      D3DRENDERSTATE_ALPHABLENDENABLE = 0x1B,
      D3DRENDERSTATE_FOGENABLE = 0x1C,
      D3DRENDERSTATE_SPECULARENABLE = 0x1D,
      D3DRENDERSTATE_ZVISIBLE = 0x1E,
      D3DRENDERSTATE_STIPPLEDALPHA = 0x21,
      D3DRENDERSTATE_FOGCOLOR = 0x22,
      D3DRENDERSTATE_FOGTABLEMODE = 0x23,
      D3DRENDERSTATE_FOGSTART = 0x24,
      D3DRENDERSTATE_FOGEND = 0x25,
      D3DRENDERSTATE_FOGDENSITY = 0x26,
      D3DRENDERSTATE_EDGEANTIALIAS = 0x28,
      D3DRENDERSTATE_COLORKEYENABLE = 0x29,
      D3DRENDERSTATE_ZBIAS = 0x2F,
      D3DRENDERSTATE_RANGEFOGENABLE = 0x30,
      D3DRENDERSTATE_STENCILENABLE = 0x34,
      D3DRENDERSTATE_STENCILFAIL = 0x35,
      D3DRENDERSTATE_STENCILZFAIL = 0x36,
      D3DRENDERSTATE_STENCILPASS = 0x37,
      D3DRENDERSTATE_STENCILFUNC = 0x38,
      D3DRENDERSTATE_STENCILREF = 0x39,
      D3DRENDERSTATE_STENCILMASK = 0x3A,
      D3DRENDERSTATE_STENCILWRITEMASK = 0x3B,
      D3DRENDERSTATE_TEXTUREFACTOR = 0x3C,
      D3DRENDERSTATE_WRAP0 = 0x80,
      D3DRENDERSTATE_WRAP1 = 0x81,
      D3DRENDERSTATE_WRAP2 = 0x82,
      D3DRENDERSTATE_WRAP3 = 0x83,
      D3DRENDERSTATE_WRAP4 = 0x84,
      D3DRENDERSTATE_WRAP5 = 0x85,
      D3DRENDERSTATE_WRAP6 = 0x86,
      D3DRENDERSTATE_WRAP7 = 0x87,
      D3DRENDERSTATE_CLIPPING = 0x88,
      D3DRENDERSTATE_LIGHTING = 0x89,
      D3DRENDERSTATE_EXTENTS = 0x8A,
      D3DRENDERSTATE_AMBIENT = 0x8B,
      D3DRENDERSTATE_FOGVERTEXMODE = 0x8C,
      D3DRENDERSTATE_COLORVERTEX = 0x8D,
      D3DRENDERSTATE_LOCALVIEWER = 0x8E,
      D3DRENDERSTATE_NORMALIZENORMALS = 0x8F,
      D3DRENDERSTATE_COLORKEYBLENDENABLE = 0x90,
      D3DRENDERSTATE_DIFFUSEMATERIALSOURCE = 0x91,
      D3DRENDERSTATE_SPECULARMATERIALSOURCE = 0x92,
      D3DRENDERSTATE_AMBIENTMATERIALSOURCE = 0x93,
      D3DRENDERSTATE_EMISSIVEMATERIALSOURCE = 0x94,
      D3DRENDERSTATE_VERTEXBLEND = 0x97,
      D3DRENDERSTATE_CLIPPLANEENABLE = 0x98,
      D3DRENDERSTATE_TEXTUREHANDLE = 0x1,
      D3DRENDERSTATE_TEXTUREADDRESS = 0x3,
      D3DRENDERSTATE_WRAPU = 0x5,
      D3DRENDERSTATE_WRAPV = 0x6,
      D3DRENDERSTATE_MONOENABLE = 0xB,
      D3DRENDERSTATE_ROP2 = 0xC,
      D3DRENDERSTATE_PLANEMASK = 0xD,
      D3DRENDERSTATE_TEXTUREMAG = 0x11,
      D3DRENDERSTATE_TEXTUREMIN = 0x12,
      D3DRENDERSTATE_TEXTUREMAPBLEND = 0x15,
      D3DRENDERSTATE_SUBPIXEL = 0x1F,
      D3DRENDERSTATE_SUBPIXELX = 0x20,
      D3DRENDERSTATE_STIPPLEENABLE = 0x27,
      D3DRENDERSTATE_BORDERCOLOR = 0x2B,
      D3DRENDERSTATE_TEXTUREADDRESSU = 0x2C,
      D3DRENDERSTATE_TEXTUREADDRESSV = 0x2D,
      D3DRENDERSTATE_MIPMAPLODBIAS = 0x2E,
      D3DRENDERSTATE_ANISOTROPY = 0x31,
      D3DRENDERSTATE_FLUSHBATCH = 0x32,
      D3DRENDERSTATE_TRANSLUCENTSORTINDEPENDENT = 0x33,
      D3DRENDERSTATE_STIPPLEPATTERN00 = 0x40,
      D3DRENDERSTATE_STIPPLEPATTERN01 = 0x41,
      D3DRENDERSTATE_STIPPLEPATTERN02 = 0x42,
      D3DRENDERSTATE_STIPPLEPATTERN03 = 0x43,
      D3DRENDERSTATE_STIPPLEPATTERN04 = 0x44,
      D3DRENDERSTATE_STIPPLEPATTERN05 = 0x45,
      D3DRENDERSTATE_STIPPLEPATTERN06 = 0x46,
      D3DRENDERSTATE_STIPPLEPATTERN07 = 0x47,
      D3DRENDERSTATE_STIPPLEPATTERN08 = 0x48,
      D3DRENDERSTATE_STIPPLEPATTERN09 = 0x49,
      D3DRENDERSTATE_STIPPLEPATTERN10 = 0x4A,
      D3DRENDERSTATE_STIPPLEPATTERN11 = 0x4B,
      D3DRENDERSTATE_STIPPLEPATTERN12 = 0x4C,
      D3DRENDERSTATE_STIPPLEPATTERN13 = 0x4D,
      D3DRENDERSTATE_STIPPLEPATTERN14 = 0x4E,
      D3DRENDERSTATE_STIPPLEPATTERN15 = 0x4F,
      D3DRENDERSTATE_STIPPLEPATTERN16 = 0x50,
      D3DRENDERSTATE_STIPPLEPATTERN17 = 0x51,
      D3DRENDERSTATE_STIPPLEPATTERN18 = 0x52,
      D3DRENDERSTATE_STIPPLEPATTERN19 = 0x53,
      D3DRENDERSTATE_STIPPLEPATTERN20 = 0x54,
      D3DRENDERSTATE_STIPPLEPATTERN21 = 0x55,
      D3DRENDERSTATE_STIPPLEPATTERN22 = 0x56,
      D3DRENDERSTATE_STIPPLEPATTERN23 = 0x57,
      D3DRENDERSTATE_STIPPLEPATTERN24 = 0x58,
      D3DRENDERSTATE_STIPPLEPATTERN25 = 0x59,
      D3DRENDERSTATE_STIPPLEPATTERN26 = 0x5A,
      D3DRENDERSTATE_STIPPLEPATTERN27 = 0x5B,
      D3DRENDERSTATE_STIPPLEPATTERN28 = 0x5C,
      D3DRENDERSTATE_STIPPLEPATTERN29 = 0x5D,
      D3DRENDERSTATE_STIPPLEPATTERN30 = 0x5E,
      D3DRENDERSTATE_STIPPLEPATTERN31 = 0x5F,
      D3DRENDERSTATE_FOGTABLESTART = 0x24,
      D3DRENDERSTATE_FOGTABLEEND = 0x25,
      D3DRENDERSTATE_FOGTABLEDENSITY = 0x26,
      D3DRENDERSTATE_FORCEDWORD = 0x7FFFFFFF,
    };
END_ATF_NAMESPACE
