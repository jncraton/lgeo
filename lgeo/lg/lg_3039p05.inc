/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071226 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3039p05: Slope Brick 45  2 x 2 with black grille Pattern                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3039p05)
#else
#include "lg_3039.inc"
#declare lg_3039p05_decals = 
union {
 #declare STRIPE_X = -0.75*LG_BRICK_WIDTH;
 #while (STRIPE_X < 0.8*LG_BRICK_WIDTH)
  box {
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X-LG_BRICK_WIDTH/16, LG_CORNER_SPACE-0.0001, -0.12>,
   <LENGTH/2*LG_BRICK_WIDTH+STRIPE_X+LG_BRICK_WIDTH/16, LG_CORNER_SPACE+0.0001, -LG_BRICK_WIDTH/sin(pi*lg_angle1/180)+0.12>
   rotate <lg_angle1, 0, 0>
   translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   translate <-LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   rotate <0, 0, -90>
  }
  #declare STRIPE_X = STRIPE_X + 0.25*LG_BRICK_WIDTH;
 #end
 material { texture { lg_black  normal {bumps 0.3 scale 0.01}}}
}

#declare lg_3039p05 = object { lg_3039 }

#declare lg_3039p05_clear = object { lg_3039_clear }

#declare lg_3039p05_slope =
union {
 object { lg_3039_slope }
 object {
  lg_3039p05_decals
 }
}

#end
