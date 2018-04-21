/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071110 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0608p33: Baseplate 32 x 32 Road T Intsersection 9 Studs with Runway      */
/*             Pattern                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0608)
#else
#include "lg_0608.inc"
#declare lg_0608p33_decals = 
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
 box {
  <7*LG_BRICK_WIDTH-0.28, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
  <7*LG_BRICK_WIDTH-0.28-0.64, -7*LG_BRICK_WIDTH+0.28, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-7*LG_BRICK_WIDTH+0.28, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
  <-7*LG_BRICK_WIDTH+0.28+0.64, -7*LG_BRICK_WIDTH+0.28, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <LG_KNOB_RADIUS, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
  <-LG_KNOB_RADIUS, -7*LG_BRICK_WIDTH+0.28, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <LG_KNOB_RADIUS, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
  <7*LG_BRICK_WIDTH-0.28-0.64, -7*LG_BRICK_WIDTH+0.28, -0.001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-LG_KNOB_RADIUS, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
  <-7*LG_BRICK_WIDTH+0.28+0.64, -7*LG_BRICK_WIDTH+0.28, -0.001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }

}

#declare lg_0608p33 = 
union {
 object { lg_0608 }
 object { lg_0608p33_decals }
}

#declare lg_0608p33_clear = 
union {
 object { lg_0608_clear }
 object { lg_0608p33_decals }
}

#end