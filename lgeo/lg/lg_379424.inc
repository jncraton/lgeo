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
/* lg_379424: _Plate  1 x  2 with 1 Stud Yellow                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_379424)
#else
#include "lg_3794.inc"

#declare lg_379424 = 
union {
 object {
  lg_3794
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_379424_clear = 
union {
 object {
  lg_3794
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#end