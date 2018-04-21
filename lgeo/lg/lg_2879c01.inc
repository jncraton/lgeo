/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071224 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2879c01: Train Wheels on axle                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2879c01)
#else
#include "lg_2879.inc"
#declare lg_2879c01 =
union {
 cone {
  <0, 3*LG_BRICK_WIDTH-0.35, -4*LG_PLATE_HEIGHT-0.04>,0.1
  <0, 3*LG_BRICK_WIDTH-0.2, -4*LG_PLATE_HEIGHT-0.04>,0.0001
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 cone {
  <0, -3*LG_BRICK_WIDTH+0.35, -4*LG_PLATE_HEIGHT-0.04>,0.1
  <0, -3*LG_BRICK_WIDTH+0.2, -4*LG_PLATE_HEIGHT-0.04>,0.0001
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0, 3*LG_BRICK_WIDTH-0.35, -4*LG_PLATE_HEIGHT-0.04>,
  <0, -3*LG_BRICK_WIDTH+0.35, -4*LG_PLATE_HEIGHT-0.04>,
  0.1
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_2879
  rotate <0, 0, 90>
  translate <0, 2*LG_BRICK_WIDTH+0.4, -4*LG_PLATE_HEIGHT-0.04> }
 object {
  lg_2879
  rotate <0, 0, -90>
  translate <0, -2*LG_BRICK_WIDTH-0.4, -4*LG_PLATE_HEIGHT-0.04> }
}

#declare lg_2879c01_clear =
union {
 cone {
  <0, 3*LG_BRICK_WIDTH-0.35, -4*LG_PLATE_HEIGHT-0.04>,0.1
  <0, 3*LG_BRICK_WIDTH-0.2, -4*LG_PLATE_HEIGHT-0.04>,0.0001
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 cone {
  <0, -3*LG_BRICK_WIDTH+0.35, -4*LG_PLATE_HEIGHT-0.04>,0.1
  <0, -3*LG_BRICK_WIDTH+0.2, -4*LG_PLATE_HEIGHT-0.04>,0.0001
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0, 3*LG_BRICK_WIDTH-0.35, -4*LG_PLATE_HEIGHT-0.04>,
  <0, -3*LG_BRICK_WIDTH+0.35, -4*LG_PLATE_HEIGHT-0.04>,
  0.1
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_2879
  rotate <0, 0, 90>
  translate <0, 2*LG_BRICK_WIDTH+0.28, -4*LG_PLATE_HEIGHT-0.04>  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_2879
  rotate <0, 0, -90>
  translate <0, -2*LG_BRICK_WIDTH-0.28, -4*LG_PLATE_HEIGHT-0.04>  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end
