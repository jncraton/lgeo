/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071124 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2431p02: Tile 1 x 4 with Danger red stripes pattern                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2431p02)
#else
#include "lg_2431.inc"
#declare lg_2431p02_decals = 
union {
 intersection {
  union {
   #declare STRIPE_X = 0;
   #while (STRIPE_X < 6)
    box {
     <0, -0.5, 0.0001>,
     <-LG_BRICK_WIDTH/2/sqrt(2), 1.5, -0.0001>
     rotate <0, 0, -45>
     translate <-LG_BRICK_WIDTH/2, (1.75-STRIPE_X)*LG_BRICK_WIDTH, 0>
    }
    #declare STRIPE_X = STRIPE_X + 1;
   #end
  }
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_E>
  }
 }
 material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
}

#declare lg_2431p02 =
union {
 object { lg_2431 }
 object {
  lg_2431p02_decals
 }
}

#declare lg_2431p02_clear =
union {
 object { lg_2431_clear }
 object {
  lg_2431p02_decals
 }
}

#end
