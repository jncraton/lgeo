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
/* lg_4125254: _Tile  1 x  2 Grille with Groove Orange                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4125254)
#else
#include "lg_2412.inc"

#declare lg_4125254 = 
union {
 object {
  lg_2412
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4125254_clear = 
union {
 object {
  lg_2412
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#end