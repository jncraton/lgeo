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
/* lg_4226995: _Car Steering Stand and Wheel (Complete) Stone Gray             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4226995)
#else
#include "lg_3829c01.inc"

#declare lg_4226995 = 
union {
 object {
  lg_3829c01
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4226995_clear = 
union {
 object {
  lg_3829c01
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end