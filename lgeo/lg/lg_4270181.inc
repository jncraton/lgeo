/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080303 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4270181: _Dish  4 x  4 Inverted Brown                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4270181)
#else
#include "lg_3960.inc"

#declare lg_4270181 = 
union {
 object {
  lg_3960
  material { texture { lg_brown  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4270181_clear = 
union {
 object {
  lg_3960
  material { texture { lg_brown  normal { bumps 0.1 scale 2 } } }
 }
}

#end