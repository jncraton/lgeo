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
/* lg_4162628: _Slope Brick 75  2 x  1 x  3 Red                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4162628)
#else
#include "lg_4460.inc"

#declare lg_4162628 = 
union {
 object {
  lg_4460
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4460_slope
  material { texture { lg_red  normal { bumps 0.3 scale 0.01 } } }
 }
}

#declare lg_4162628_clear = 
union {
 object {
  lg_4460
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4460_slope
  material { texture { lg_red  normal { bumps 0.3 scale 0.01 } } }
 }
}

#end