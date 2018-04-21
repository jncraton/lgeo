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
/* lg_307024: _Tile  1 x  1 Yellow                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_307024)
#else
#include "lg_3070.inc"

#declare lg_307024 = 
union {
 object {
  lg_3070
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_307024_clear = 
union {
 object {
  lg_3070
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#end