/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071013 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0970c04: Minifig Hips and Orange Legs                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0970c04)
#else
#include "lg_0970.inc"
#include "lg_0971.inc"
#include "lg_0972.inc"
#declare lg_0970c04 = 
union {
 object { lg_0970 }
 object {
  lg_0971
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
 object {
  lg_0972
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
} 

#declare lg_0970c04_clear = 
union {
 object { lg_0970_clear }
 object {
  lg_0971
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
 object {
  lg_0972
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
} 

#end
