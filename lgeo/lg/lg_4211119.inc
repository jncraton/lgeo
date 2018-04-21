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
/* lg_4211119: _Plate  1 x  2 with 1 Stud Dark_Stone_Gray                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4211119)
#else
#include "lg_3794.inc"

#declare lg_4211119 = 
union {
 object {
  lg_3794
  material { texture { lg_dark_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4211119_clear = 
union {
 object {
  lg_3794
  material { texture { lg_dark_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end