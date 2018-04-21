/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071120 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_80548: Baseplate 32 x 32 Road T Instersection 7 Studs with Road Pattern  */
/*           Grey                                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_80548)
#else
#include "lg_2360p01.inc"

#declare lg_80548 = 
union {
 object { lg_2360p01 material { texture { lg_grey  normal { bumps 0.1 scale 2 } } } }
}

#declare lg_80548_clear = 
union {
 object { lg_2360p01_clear material { texture { lg_grey  normal { bumps 0.1 scale 2 } } } }
}

#end