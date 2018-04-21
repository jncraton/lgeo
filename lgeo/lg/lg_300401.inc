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
/* lg_300401: _Brick  1 x  2  White                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_300401)
#else
#include "lg_3004.inc"

#declare lg_300401 = 
union {
 object {
  lg_3004
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_300401_clear = 
union {
 object {
  lg_3004
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end