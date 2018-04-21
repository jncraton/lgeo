/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_9552: _Car Steering Stand and Wheel (Complete) Red                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_9552)
#else
#include "lg_3829c01.inc"

#declare lg_9552 = 
union {
 object {
  lg_3829c01
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_9552_clear = 
union {
 object {
  lg_3829c01
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#end