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
/* lg_383201: _Plate  2 x 10 White                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_383201)
#else
#include "lg_3832.inc"

#declare lg_383201 = 
union {
 object {
  lg_3832
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_383201_clear = 
union {
 object {
  lg_3832
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end