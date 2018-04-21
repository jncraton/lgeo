/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080131 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3297p03: Slope Brick 33  3 x 4 with white stripes pattern                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3297p03)
#else
#include "lg_3297.inc"
#declare lg_3297p03_decals =
union {
 box {
  <LG_CORNER_SPACE+0.001, 0.96, -0.04>,
  <LG_CORNER_SPACE-0.001, 1.44, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.001, 0.16, -0.04>,
  <LG_CORNER_SPACE-0.001, 0.64, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.001, -0.96, -0.04>,
  <LG_CORNER_SPACE-0.001, -1.44, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.001, -0.16, -0.04>,
  <LG_CORNER_SPACE-0.001, -0.64, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 rotate <0, -lg_angle1, 0>
 translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 material { texture { lg_white normal { bumps 0.3 scale 0.01 } } }
}

#declare lg_3297p03 =  object { lg_3297 }

#declare lg_3297p03_clear =  object { lg_3297_clear }

#declare lg_3297p03_slope =
union {
 object { lg_3297_slope }
 object { lg_3297p03_decals }
}

#end
