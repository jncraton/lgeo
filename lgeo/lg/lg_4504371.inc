/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080721 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4504371: _Slope Brick 45 1 x 1 x 2/3 Orange                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4504371)
#else
#include "lg_54200.inc"

#declare lg_4504371 = 
union {
 object {
  lg_54200
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4504371_clear = 
union {
 object {
  lg_54200
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#end