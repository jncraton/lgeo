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
/* lg_370926: _Technic Plate  2 x  4 Black                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_370926)
#else
#include "lg_3709.inc"

#declare lg_370926 = 
union {
 object {
  lg_3709
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_370926_clear = 
union {
 object {
  lg_3709
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end