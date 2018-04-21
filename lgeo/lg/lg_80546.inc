/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071119 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_80546: Baseplate 32 x 32 Road Curve 7 Studs with Road Pattern Grey       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_80546)
#else
#include "lg_2359p01.inc"

#declare lg_80546 = 
union {
 object { lg_2359p01 material { texture { lg_grey  normal { bumps 0.1 scale 2 } } } }
}

#declare lg_80546_clear = 
union {
 object { lg_2359p01_clear material { texture { lg_grey  normal { bumps 0.1 scale 2 } } } }
}

#end