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
/* lg_4173943: _Slope Brick 45  4 x  2 Double Inverted with Open Center White  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4173943)
#else
#include "lg_4871.inc"

#declare lg_4173943 = 
union {
 object {
  lg_4871
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4871_slope
  material { texture { lg_white  normal { bumps 0.3 scale 0.01 } } }
 }
}

#declare lg_4173943_clear = 
union {
 object {
  lg_4871
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4871_slope
  material { texture { lg_white  normal { bumps 0.3 scale 0.01 } } }
 }
}

#end