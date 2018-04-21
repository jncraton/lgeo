/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071229 Lutz Uhlmann                                                       */
/* 20080131 Lutz Uhlmann fixed stripe width                                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3297p01: Slope Brick 33  3 x 4 with red stripes pattern                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3297)
#else
#include "lg_3297.inc"
#declare lg_3297p01_decals =
union {
 box {
  <LG_CORNER_SPACE+0.0001, 1.04, -0.04>,
  <LG_CORNER_SPACE-0.0001, 1.36, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.0001, 0.24, -0.04>,
  <LG_CORNER_SPACE-0.0001, 0.56, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.0001, -1.04, -0.04>,
  <LG_CORNER_SPACE-0.0001, -1.36, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.0001, -0.24, -0.04>,
  <LG_CORNER_SPACE-0.0001, -0.56, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 rotate <0, -lg_angle1, 0>
 translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 material { texture { lg_red normal { bumps 0.3 scale 0.01 } } }
}

#declare lg_3297p01 =  object { lg_3297 }

#declare lg_3297p01_clear =  object { lg_3297_clear }

#declare lg_3297p01_slope =
union {
 object { lg_3297_slope }
 object { lg_3297p01_decals }
}

#end
