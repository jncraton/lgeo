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
/* lg_0606p01: Baseplate 32 x 32 Road Straight 9 Studs with Road Pattern       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0606)
#else
#include "lg_0606.inc"
#declare lg_0606p01_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28, 0.001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28+0.64, -0.001>
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 7*LG_BRICK_WIDTH-0.28, 0.001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 7*LG_BRICK_WIDTH-0.28-0.64, -0.001>
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 #declare STRIPE_X = -4;
 #while (STRIPE_X < 5)
  box {
   <-LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
   <LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
   translate <STRIPE_X*3.2*LG_BRICK_WIDTH, 0, 0>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  #declare STRIPE_X = STRIPE_X + 1;
 #end 
 box {
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
  <-15*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
  <15*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0606p01 = 
union {
 object { lg_0606 }
 object { lg_0606p01_decals }
}

#declare lg_0606p01_clear = 
union {
 object { lg_0606_clear }
 object { lg_0606p01_decals }
}

#end