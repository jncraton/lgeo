/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071005 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0970c00: Minifig Hips and Legs                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0970c00)
#else
#include "lg_0970.inc"
#include "lg_0971.inc"
#include "lg_0972.inc"
#declare lg_0970c00 = 
union {
 object { lg_0970 }
 object {
  lg_0971
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
 object {
  lg_0972
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
} 

#declare lg_0970c00_clear = 
union {
 object { lg_0970_clear }
 object {
  lg_0971_clear
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
 object {
  lg_0972_clear
  translate <0, 0, -LG_BRICK_HEIGHT/2>
 }
} 

#end
