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
/* lg_300101: _Brick  2 x  4  White                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_300101)
#else
#include "lg_3001.inc"

#declare lg_300101 = 
union {
 object {
  lg_3001
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_300101_clear = 
union {
 object {
  lg_3001
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end