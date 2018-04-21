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
/* lg_303923: _Slope Brick 45  2 x  2 Blue                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_303923)
#else
#include "lg_3039.inc"

#declare lg_303923 = 
union {
 object {
  lg_3039
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3039_slope
  material { texture { lg_blue  normal { bumps 0.3 scale 0.01 } } }
 }
}

#declare lg_303923_clear = 
union {
 object {
  lg_3039
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3039_slope
  material { texture { lg_blue  normal { bumps 0.3 scale 0.01 } } }
 }
}

#end