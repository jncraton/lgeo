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
/* lg_370101: _Technic Brick  1 x  4 with Holes White                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_370101)
#else
#include "lg_3701.inc"

#declare lg_370101 = 
union {
 object {
  lg_3701
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_370101_clear = 
union {
 object {
  lg_3701
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end