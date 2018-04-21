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
/* lg_4234927: _Wing  4 x  4 with  2 x  2 Cutout Yellow                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4234927)
#else
#include "lg_43719.inc"

#declare lg_4234927 = 
union {
 object {
  lg_43719
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4234927_clear = 
union {
 object {
  lg_43719
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#end