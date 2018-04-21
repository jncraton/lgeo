/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071119 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2358p04: Baseplate 32 x 32 Road Straight 7 Studs with Runway Narrow      */
/*             Pattern                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2358p04)
#else
#include "lg_2358.inc"
#declare lg_2358p04_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8.25*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8.25*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 7.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7.85*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 7.85*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_2358p04 = 
union {
 object { lg_2358 }
 object { lg_2358p04_decals }
}

#declare lg_2358p04_clear = 
union {
 object { lg_2358_clear }
 object { lg_2358p04_decals }
}

#end