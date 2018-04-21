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
/* lg_4211483: _Technic Pin 1/2 Light Grey                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4211483)
#else
#include "lg_4274.inc"

#declare lg_4211483 = 
union {
 object {
  lg_4274
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4211483_clear = 
union {
 object {
  lg_4274
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end