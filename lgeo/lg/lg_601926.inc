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
/* lg_601926: _Plate  1 x  1 with Clip Horizontal Black                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_601926)
#else
#include "lg_6019.inc"

#declare lg_601926 = 
union {
 object {
  lg_6019
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_601926_clear = 
union {
 object {
  lg_6019
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end