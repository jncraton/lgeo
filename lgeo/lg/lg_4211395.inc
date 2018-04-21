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
/* lg_4211395: _Plate  2 x  4 Stone_Gray                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4211395)
#else
#include "lg_3020.inc"

#declare lg_4211395 = 
union {
 object {
  lg_3020
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4211395_clear = 
union {
 object {
  lg_3020
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end