/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071126 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2494p01: Window 1 x 4 x 5 Glass white stripes Pattern                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2494p01)
#else
#include "lg_2494.inc"
#declare lg_2494p01_decals = 
union {
 box {
  <0.0001, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -3.28>,
  <-0.0001, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -3.40>
 }
 box {
  <0.0001, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -3.52>,
  <-0.0001, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -3.64>
 }
 box {
  <0.0001, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -3.76>,
  <-0.0001, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -3.88>
 }
 box {
  <0.0001, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4.00>,
  <-0.0001, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4.12>
 }
 box {
  <0.0001, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4.24>,
  <-0.0001, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4.36>
 }
 material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, 0>
}

#declare lg_2494p01 =
union {
 object { lg_2494 }
 object {
  lg_2494p01_decals
 }
}

#declare lg_2494p01_clear =
union {
 object { lg_2494_clear }
 object {
  lg_2494p01_decals
 }
}

#end
