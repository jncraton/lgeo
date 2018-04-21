/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071227 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3040p32: Slope Brick 45  1 x 2 with black 9 + 3 buttons Pattern          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3040p32)
#else
#include "lg_3040.inc"
#declare lg_3040p32_decals = 
union {
 #declare STRIPE_X = -0.3*LG_BRICK_WIDTH;
 #while (STRIPE_X < 0.4*LG_BRICK_WIDTH)
  box {
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X-LG_BRICK_WIDTH/10, LG_CORNER_SPACE-0.0001, -0.12>,
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X+LG_BRICK_WIDTH/10, LG_CORNER_SPACE+0.0001, -0.28>
   rotate <lg_angle1, 0, 0>
   translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   rotate <0, 0, -90>
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X-LG_BRICK_WIDTH/10, LG_CORNER_SPACE-0.0001, -0.36>,
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X+LG_BRICK_WIDTH/10, LG_CORNER_SPACE+0.0001, -0.52>
   rotate <lg_angle1, 0, 0>
   translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   rotate <0, 0, -90>
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X-LG_BRICK_WIDTH/10, LG_CORNER_SPACE-0.0001, -0.6>,
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X+LG_BRICK_WIDTH/10, LG_CORNER_SPACE+0.0001, -0.76>
   rotate <lg_angle1, 0, 0>
   translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   rotate <0, 0, -90>
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X-LG_BRICK_WIDTH/10, LG_CORNER_SPACE-0.0001, -0.88>,
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X+LG_BRICK_WIDTH/10, LG_CORNER_SPACE+0.0001, -0.96>
   rotate <lg_angle1, 0, 0>
   translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   translate <-LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   rotate <0, 0, -90>
  }
  #declare STRIPE_X = STRIPE_X + 0.3*LG_BRICK_WIDTH;
 #end
 material { texture { lg_black  normal {bumps 0.3 scale 0.01}}}
}

#declare lg_3040p32 = object { lg_3040 }

#declare lg_3040p32_clear = object { lg_3040_clear }

#declare lg_3040p32_slope =
union {
 object { lg_3040_slope }
 object {
  lg_3040p32_decals
 }
}

#end
