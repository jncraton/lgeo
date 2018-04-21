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
/* lg_4121715: _Technic Pin with Friction and Slots Black                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4121715)
#else
#include "lg_4459.inc"

#declare lg_4121715 = 
union {
 object {
  lg_4459
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4121715_clear = 
union {
 object {
  lg_4459
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end

