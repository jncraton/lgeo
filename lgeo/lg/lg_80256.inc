/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080119 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_80256: Baseplate 32 x 32 Road 9-Stud Landing Pad grey with Yellow Circle */
/*           Pattern                                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_80256)
#else
#include "lg_6099p03.inc"
#declare lg_80256 = 
union {
 object { lg_6099p03_decals }
 object { lg_6099 material { texture { lg_grey  normal { bumps 0.1 scale 2 } } } }
}

#declare lg_80256_clear = 
union {
 object { lg_6099p03_decals }
 object { lg_6099 material { texture { lg_grey  normal { bumps 0.1 scale 2 } } } }
}

#end
