/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_73081: _Car Steering Stand and Wheel (Complete) Black                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_73081)
#else
#include "lg_3829c01.inc"

#declare lg_73081 = 
union {
 object {
  lg_3829c01
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_73081_clear = 
union {
 object {
  lg_3829c01
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end