/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071118 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2358p03: Baseplate 32 x 32 Road Straight 7 Studs with Plain Runway       */
/*             Pattern                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2358p03)
#else
#include "lg_2358.inc"
#declare lg_2358p03_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8.45*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8.45*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.25*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.25*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8.45*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8.45*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.25*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_2358p03 = 
union {
 object { lg_2358 }
 object { lg_2358p03_decals }
}

#declare lg_2358p03_clear = 
union {
 object { lg_2358_clear }
 object { lg_2358p03_decals }
}

#end