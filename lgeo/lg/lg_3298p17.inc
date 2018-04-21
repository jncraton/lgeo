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
/* lg_3298p17: Slope Brick 33  3 x 2 with red stripes pattern                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3298)
#else
#include "lg_3298.inc"
#declare lg_3298p17_decals =
union {
 box {
  <LG_CORNER_SPACE+0.001, 0.24, -0.04>,
  <LG_CORNER_SPACE-0.001, 0.56, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.001, -0.24, -0.04>,
  <LG_CORNER_SPACE-0.001, -0.56, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 rotate <0, -lg_angle1, 0>
 translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 material { texture { lg_red normal { bumps 0.3 scale 0.01 } } }
}

#declare lg_3298p17 =  object { lg_3298 }

#declare lg_3298p17_clear =  object { lg_3298_clear }

#declare lg_3298p17_slope =
union {
 object { lg_3298_slope }
 object {
  lg_3298p17_decals
 }
}

#end
