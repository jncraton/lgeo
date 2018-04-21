/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071105 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0606p33: Baseplate 32 x 32 Road Straight 9 Studs with Runway Pattern     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0606)
#else
#include "lg_0606.inc"
#declare lg_0606p33_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28, 0.001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28+0.64, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 7*LG_BRICK_WIDTH-0.28, 0.001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 7*LG_BRICK_WIDTH-0.28-0.64, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, 0.001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 7*LG_BRICK_WIDTH-0.28-0.64, -0.001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28+0.64, -0.001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0606p33 = 
union {
 object { lg_0606 }
 object { lg_0606p33_decals }
}

#declare lg_0606p33_clear = 
union {
 object { lg_0606_clear }
 object { lg_0606p33_decals }
}

#end