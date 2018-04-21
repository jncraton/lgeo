/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080131 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3298p20: Slope Brick 33  3 x 2 with white stripes pattern                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3298p20)
#else
#include "lg_3298.inc"
#declare lg_angle1=65.32484819;
#declare lg_angle2=90-lg_angle1;
#declare lg_3298p20_decals =
union {
 box {
  <LG_CORNER_SPACE+0.001, 0.16, -0.04>,
  <LG_CORNER_SPACE-0.001, 0.64, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 box {
  <LG_CORNER_SPACE+0.001, -0.16, -0.04>,
  <LG_CORNER_SPACE-0.001, -0.64, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
 }
 rotate <0, -lg_angle1, 0>
 translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 material { texture { lg_white normal { bumps 0.3 scale 0.01 } } }
}

#declare lg_3298p20 =  object { lg_3298 }

#declare lg_3298p20_clear =  object { lg_3298_clear }

#declare lg_3298p20_slope =
union {
 object { lg_3298_slope }
 object { lg_3298p20_decals }
}

#end
