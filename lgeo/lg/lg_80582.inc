/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080229 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_80582: _Panel  2 x  5 x  6 Wall with Black Half-Timber Pattern Yellow    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_80582)
#else
#include "lg_4444p03.inc"

#declare lg_80582 = 
union {
 object {
  lg_4444p03
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_80582_clear = 
union {
 object {
  lg_4444p03
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}

#end