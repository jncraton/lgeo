/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080301 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_303226: _Plate  4 x  6  Black                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_303226)
#else
#include "lg_3032.inc"

#declare lg_303226 = 
union {
 object {
  lg_3032
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_303226_clear = 
union {
 object {
  lg_3032
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end