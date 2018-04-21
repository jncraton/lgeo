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
/* lg_407026: _Brick  1 x  1 with Headlight Black                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_407026)
#else
#include "lg_4070.inc"

#declare lg_407026 = 
union {
 object {
  lg_4070
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_407026_clear = 
union {
 object {
  lg_4070
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end