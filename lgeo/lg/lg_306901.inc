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
/* lg_306901: _Tile  1 x  2 White                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_306901)
#else
#include "lg_3069.inc"

#declare lg_306901 = 
union {
 object {
  lg_3069
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_306901_clear = 
union {
 object {
  lg_3069
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end