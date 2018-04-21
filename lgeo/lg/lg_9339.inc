/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_9339: _Minifig Hips and Legs Black                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_9339)
#else
#include "lg_0970.inc"
#include "lg_0971.inc"
#include "lg_0972.inc"
#declare lg_9339 = 
union {
 object {
  lg_0970
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_0971
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
 object {
  lg_0972
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
} 

#declare lg_9339_clear = 
union {
 object {
  lg_0970
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_0971
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
 object {
  lg_0972
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
} 

#end
