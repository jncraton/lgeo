/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080302 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4210633: _Plate  1 x  1 Round Dark Stone                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4210633)
#else
#include "lg_4073.inc"

#declare lg_4210633 = 
union {
 object {
  lg_4073
  material { texture { lg_dark_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4210633_clear = 
union {
 object {
  lg_4073
  material { texture { lg_dark_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end