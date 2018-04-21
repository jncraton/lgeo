/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_9328: _Turntable  2 x  2 Plate (Complete) Blue/Grey                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_9328)
#else
#include "lg_3680c01.inc"

#declare lg_9328 = 
union {
 object {
  lg_3680c01
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_9328_clear = 
union {
 object {
  lg_3680c01
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#end