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
/* lg_4223189: _Minifig Goblet Black                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4223189)
#else
#include "lg_2343.inc"

#declare lg_4223189 = 
union {
 object {
  lg_2343
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4223189_clear = 
union {
 object {
  lg_2343
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end