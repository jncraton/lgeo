/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970805 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3829c01: Car Steering Wheel                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3829c01)
#else
#include "lg_3828.inc"
#include "lg_3829.inc"
#declare lg_3829c01 =
union {
 object { lg_3829 }
 object {
  lg_3828
  rotate <0, -60, 0>
  translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, LG_BRICK_HEIGHT>
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_3829c01_clear =
union {
 object { lg_3829_clear }
 object {
  lg_3828
  rotate <0, -60, 0>
  translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, LG_BRICK_HEIGHT>
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end
