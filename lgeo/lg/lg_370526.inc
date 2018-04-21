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
/* lg_370526: _Technic Axle  4 Black                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_370526)
#else
#include "lg_3705.inc"

#declare lg_370526 = 
union {
 object {
  lg_3705
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_370526_clear = 
union {
 object {
  lg_3705
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end