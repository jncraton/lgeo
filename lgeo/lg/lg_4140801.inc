/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080720 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4140801: _Technic Pin Long with Stop Bush Black                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4140801)
#else
#include "lg_32054.inc"

#declare lg_4140801 = 
union {
 object {
  lg_32054
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4140801_clear = 
union {
 object {
  lg_32054
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end