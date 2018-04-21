/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080131 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3298p18: Slope Brick 33  3 x 2 with white stripes pattern                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3298p18)
#else
#include "lg_3298.inc"
#declare lg_3298p18_decals =
union {
 difference {
  box {
   <LG_CORNER_SPACE+0.0001, 0.14, -0.04>,
   <LG_CORNER_SPACE-0.0001, 0.66, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
  }
  box {
   <LG_CORNER_SPACE+0.002, -0.3, -0.00>,
   <LG_CORNER_SPACE-0.002, 0, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)>
   rotate <8.78, 0, 0>
   translate <0, 0.14, -0.04>
  }
  box {
   <LG_CORNER_SPACE+0.002, 0.3, -0.00>,
   <LG_CORNER_SPACE-0.002, 0, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)>
   rotate <-8.78, 0, 0>
   translate <0, 0.66, -0.04>
  }
 }
 difference {
  box {
   <LG_CORNER_SPACE+0.0001, -0.14, -0.04>,
   <LG_CORNER_SPACE-0.0001, -0.66, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.04>
  }
  box {
   <LG_CORNER_SPACE+0.002, 0.3, -0.00>,
   <LG_CORNER_SPACE-0.002, 0, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)>
   rotate <-8.78, 0, 0>
   translate <0, -0.14, -0.04>
  }
  box {
   <LG_CORNER_SPACE+0.002, -0.3, -0.00>,
   <LG_CORNER_SPACE-0.002, 0, -2*LG_BRICK_WIDTH/sin(pi*lg_angle1/180)>
   rotate <8.78, 0, 0>
   translate <0, -0.66, -0.04>
  }
 }
 rotate <0, -lg_angle1, 0>
 translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 material { texture { lg_yellow normal { bumps 0.3 scale 0.02 } } }
}

#declare lg_3298p18 =  object { lg_3298 }

#declare lg_3298p18_clear =  object { lg_3298_clear }

#declare lg_3298p18_slope =
union {
 object { lg_3298_slope }
 object { lg_3298p18_decals }
}

#end
