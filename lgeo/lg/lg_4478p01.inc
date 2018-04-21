/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080114 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4478p01: Baseplate 32 x 32 with Driveway grey Pattern                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4478p01)
#else
#include "lg_4478.inc"
#declare lg_4478p01_decals =
union {
 box {
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -14*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.0001>,
  <7*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.0001>,
  <15*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
 }
 box {
  <14*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, 0.0001>,
  <15*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
 }
 difference {
  box {
   <15*LG_BRICK_WIDTH+LG_WALL_WIDTH, -14*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.0001>,
   <3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
  }
  union {
   box {
    <0, 0, LG_E>,
    <12, -12, -LG_E>
    rotate <0, 0, 45>
    translate <7*LG_BRICK_WIDTH, -14*LG_BRICK_WIDTH+LG_WALL_WIDTH>
   }
   box {
    <-1, 0, LG_E>,
    <15, 12, -LG_E>
    rotate <0, 0, 45>
    translate <3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH>
   }
  }
 }
 material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
}

#declare lg_4478p01 =
union {
 object { lg_4478 }
 object { lg_4478p01_decals }
}

#declare lg_4478p01_clear =
union {
 object { lg_4478_clear }
 object { lg_4478p01_decals }
}

#end
