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
/* lg_370826: _Technic Axle 12 Black                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_370826)
#else
#include "lg_3708.inc"

#declare lg_370826 = 
union {
 object {
  lg_3708
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_370826_clear = 
union {
 object {
  lg_3708
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end