/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080303 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4261453: _Technic Axle Joiner Perpendicular Lime                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4261453)
#else
#include "lg_6536.inc"

#declare lg_4261453 = 
union {
 object {
  lg_6536
  material { texture { lg_lime  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4261453_clear = 
union {
 object {
  lg_6536
  material { texture { lg_lime  normal { bumps 0.1 scale 2 } } }
 }
}

#end