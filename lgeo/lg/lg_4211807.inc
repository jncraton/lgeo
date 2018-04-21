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
/* lg_4211807: _Technic Pin Stone_Gray                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4211807)
#else
#include "lg_3673.inc"

#declare lg_4211807 = 
union {
 object {
  lg_3673
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4211807_clear = 
union {
 object {
  lg_3673
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end