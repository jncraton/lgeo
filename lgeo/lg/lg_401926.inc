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
/* lg_401926: _Technic Gear 16 Tooth Black                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_401926)
#else
#include "lg_4019.inc"

#declare lg_401926 = 
union {
 object {
  lg_4019
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_401926_clear = 
union {
 object {
  lg_4019
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end