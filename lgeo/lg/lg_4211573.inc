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
/* lg_4211573: _Technic Bush 1/2 Smooth Stone_Gray                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4211573)
#else
#include "lg_32123.inc"

#declare lg_4211573 = 
union {
 object {
  lg_32123
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4211573_clear = 
union {
 object {
  lg_32123
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end