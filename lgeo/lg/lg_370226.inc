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
/* lg_370226: _Technic Brick  1 x  8 with Holes Black                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_370226)
#else
#include "lg_3702.inc"

#declare lg_370226 = 
union {
 object {
  lg_3702
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_370226_clear = 
union {
 object {
  lg_3702
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end