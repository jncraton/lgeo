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
/* lg_4118782: _Plate  1 x  4 Orange                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4118782)
#else
#include "lg_3710.inc"

#declare lg_4118782 = 
union {
 object {
  lg_3710
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4118782_clear = 
union {
 object {
  lg_3710
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#end