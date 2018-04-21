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
/* lg_407924: _Minifig Seat  2 x  2 Yellow                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_407924)
#else
#include "lg_4079.inc"

#declare lg_407924 = 
union {
 object {
  lg_4079
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_407924_clear = 
union {
 object {
  lg_4079
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#end