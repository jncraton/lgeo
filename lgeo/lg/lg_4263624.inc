/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080305 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4263624: _Technic Axle  5.5 With Stop Dark_Stone_Gray                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4263624)
#else
#include "lg_32209.inc"

#declare lg_4263624 = 
union {
 object {
  lg_32209
  material { texture { lg_dark_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4263624_clear = 
union {
 object {
  lg_32209
  material { texture { lg_dark_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end