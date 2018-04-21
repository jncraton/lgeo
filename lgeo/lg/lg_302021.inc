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
/* lg_302021: _Plate  2 x  4  Red                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_302021)
#else
#include "lg_3020.inc"

#declare lg_302021 = 
union {
 object {
  lg_3020
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_302021_clear = 
union {
 object {
  lg_3020
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#end