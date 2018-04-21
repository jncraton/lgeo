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
/* lg_362626: _Minifig Head with Hollow Stud Black                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_362626)
#else
#include "lg_3626.inc"

#declare lg_362626 = 
union {
 object {
  lg_3626
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_362626_clear = 
union {
 object {
  lg_3626
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end