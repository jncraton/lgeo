/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071226 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3010p04: Brick 1 x 2 with black grille Pattern                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3010p04)
#else
#include "lg_3010.inc"
#declare lg_3010p04_decals = 
union {
 #declare STRIPE_X = -1.75*LG_BRICK_WIDTH;
 #while (STRIPE_X < 1.8*LG_BRICK_WIDTH)
  box {
   <0.5*LG_BRICK_WIDTH-0.0001, STRIPE_X-LG_BRICK_WIDTH/16, -0.12>,
   <0.5*LG_BRICK_WIDTH+0.0001, STRIPE_X+LG_BRICK_WIDTH/16, -LG_BRICK_HEIGHT+0.12>
  }
  #declare STRIPE_X = STRIPE_X + 0.25*LG_BRICK_WIDTH;
 #end
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
}

#declare lg_3010p04 =
union {
 object { lg_3010 }
 object {
  lg_3010p04_decals
 }
}

#declare lg_3010p04_clear =
union {
 object { lg_3010_clear }
 object {
  lg_3010p04_decals
 }
}

#end
