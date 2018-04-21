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
/* lg_663626: _Tile  1 x  6 Black                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_663626)
#else
#include "lg_6636.inc"

#declare lg_663626 = 
union {
 object {
  lg_6636
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_663626_clear = 
union {
 object {
  lg_6636
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end