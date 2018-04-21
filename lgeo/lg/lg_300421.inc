/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080229 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_300421: _Brick  1 x  2  Red                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_300421)
#else
#include "lg_3004.inc"

#declare lg_300421 = 
union {
 object {
  lg_3004
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_300421_clear = 
union {
 object {
  lg_3004
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#end