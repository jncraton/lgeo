/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_9401: _Turntable  2 x  2 Plate (Complete) White/Grey                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_9401)
#else
#include "lg_3680c01.inc"

#declare lg_9401 = 
union {
 object {
  lg_3680c01
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_9401_clear = 
union {
 object {
  lg_3680c01
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end