/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071227 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3044p37: Slope Brick 45  1 x 2 double with black 3 buttons Pattern       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3044p37)
#else
#include "lg_3044.inc"
#declare lg_3044p37_decals = 
union {
 difference {
  box {
   <LENGTH*LG_BRICK_WIDTH-0.12-LG_CORNER_SPACE, LG_CORNER_SPACE-0.0001, -LG_CORNER_SPACE/sin(pi*lg_angle1/180)-0.12>,
   <0.12+LG_CORNER_SPACE, LG_CORNER_SPACE+0.0001, -LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.12>
  }
  union {
   box {
    <LENGTH*LG_BRICK_WIDTH-0.22, LG_CORNER_SPACE-0.0002, -LG_CORNER_SPACE/sin(pi*lg_angle1/180)-0.24>,
    <LENGTH*LG_BRICK_WIDTH-0.36, LG_CORNER_SPACE+0.0002, -LG_CORNER_SPACE/sin(pi*lg_angle1/180)-0.38>
   }
   box {
    <LENGTH*LG_BRICK_WIDTH-0.22, LG_CORNER_SPACE-0.0002, -(LG_BRICK_WIDTH+LG_CORNER_SPACE)/sin(pi*lg_angle1/180)/2+0.07>,
    <LENGTH*LG_BRICK_WIDTH-0.36, LG_CORNER_SPACE+0.0002, -(LG_BRICK_WIDTH+LG_CORNER_SPACE)/sin(pi*lg_angle1/180)/2-0.07>
   }
   box {
    <LENGTH*LG_BRICK_WIDTH-0.22, LG_CORNER_SPACE-0.0002, -LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.38>,
    <LENGTH*LG_BRICK_WIDTH-0.36, LG_CORNER_SPACE+0.0002, -LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.24>
   }
  }
  rotate <lg_angle1*MIR, 0, 0>
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
  matrix <MIR, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
 }
 difference {
  box {
   <LENGTH*LG_BRICK_WIDTH-0.12-LG_CORNER_SPACE, -LG_CORNER_SPACE-0.0001, -LG_CORNER_SPACE/sin(pi*lg_angle1/180)-0.12>,
   <0.12+LG_CORNER_SPACE, -LG_CORNER_SPACE+0.0001, -LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.12>
  }
  union {
   box {
    <LENGTH*LG_BRICK_WIDTH-0.22, -LG_CORNER_SPACE-0.0002, -LG_CORNER_SPACE/sin(pi*lg_angle1/180)-0.24>,
    <LENGTH*LG_BRICK_WIDTH-0.36, -LG_CORNER_SPACE+0.0002, -LG_CORNER_SPACE/sin(pi*lg_angle1/180)-0.38>
   }
   box {
    <LENGTH*LG_BRICK_WIDTH-0.22, -LG_CORNER_SPACE-0.0002, -(LG_BRICK_WIDTH+LG_CORNER_SPACE)/sin(pi*lg_angle1/180)/2+0.07>,
    <LENGTH*LG_BRICK_WIDTH-0.36, -LG_CORNER_SPACE+0.0002, -(LG_BRICK_WIDTH+LG_CORNER_SPACE)/sin(pi*lg_angle1/180)/2-0.07>
   }
   box {
    <LENGTH*LG_BRICK_WIDTH-0.22, -LG_CORNER_SPACE-0.0002, -LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.38>,
    <LENGTH*LG_BRICK_WIDTH-0.36, -LG_CORNER_SPACE+0.0002, -LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.24>
   }
  }
  rotate <-lg_angle1, 0, 0>
  translate <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
 }
 translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 rotate <0, 0, -90>
 material { texture { lg_black  normal {bumps 0.3 scale 0.01}}}
}

#declare lg_3044p37 = object { lg_3044 }

#declare lg_3044p37_clear = object { lg_3044_clear }

#declare lg_3044p37_slope =
union {
 object { lg_3044_slope }
 object {
  lg_3044p37_decals
 }
}

#end
