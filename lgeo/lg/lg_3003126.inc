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
/* lg_3003126: _Minifig Handlebars Black                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3003126)
#else
#include "lg_30031.inc"

#declare lg_3003126 = 
union {
 object {
  lg_30031
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_3003126_clear = 
union {
 object {
  lg_30031
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end