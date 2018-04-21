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
/* lg_4211815: _Technic Axle  3 Stone_Gray                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4211815)
#else
#include "lg_4519.inc"

#declare lg_4211815 = 
union {
 object {
  lg_4519
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4211815_clear = 
union {
 object {
  lg_4519
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end