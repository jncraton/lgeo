/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080229 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_302101: _Plate  2 x  3  White                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_302101)
#else
#include "lg_3021.inc"

#declare lg_302101 = 
union {
 object {
  lg_3021
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_302101_clear = 
union {
 object {
  lg_3021
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end