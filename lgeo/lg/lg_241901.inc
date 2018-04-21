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
/* lg_241901: _Plate  3 x  6 without Corners White                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_241901)
#else
#include "lg_2419.inc"

#declare lg_241901 = 
union {
 object {
  lg_2419
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_241901_clear = 
union {
 object {
  lg_2419
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end