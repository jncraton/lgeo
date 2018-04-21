/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080720 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_80588: _Panel  3 x  3 x  6 Wall with Black Half-Timber Pattern Red       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_80588)
#else
#include "lg_2345p01.inc"

#declare lg_80588 = 
union {
 object {
  lg_2345p01
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_80588_clear = 
union {
 object {
  lg_2345p01
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#end