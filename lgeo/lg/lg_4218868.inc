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
/* lg_4218868: _Technic Disc  3 x  3 with Axlehole Black                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4218868)
#else
#include "lg_2723.inc"

#declare lg_4218868 = 
union {
 object {
  lg_2723
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4218868_clear = 
union {
 object {
  lg_2723
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end