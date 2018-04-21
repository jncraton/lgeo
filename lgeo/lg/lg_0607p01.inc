/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071105 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0607p01: Baseplate 32 x 32 Road Crossroads 9 Studs with Road Pattern     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0607)
#else
#include "lg_0607.inc"
#declare lg_0607p01_decals = 
union {
 #declare ROT = 0;
 #while (ROT <4)
  union{
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28, 0.001>,
    <7*LG_BRICK_WIDTH-0.28-0.64, -7*LG_BRICK_WIDTH+0.28+0.64, -0.001>
    material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <7*LG_BRICK_WIDTH-0.28, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
    <7*LG_BRICK_WIDTH-0.28-0.64, -7*LG_BRICK_WIDTH+0.28+0.64, -0.001>
    material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <13.8*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
    <11.8*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
    <15*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   #declare STRIPE_X = -4;
   #while (STRIPE_X < 5)
    box {
     <8.1*LG_BRICK_WIDTH, 0.32, 0.001>,
     <11.1*LG_BRICK_WIDTH, -0.32, -0.001>
     translate <0,STRIPE_X*1.25*LG_BRICK_WIDTH, 0>
     material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    }
    #declare STRIPE_X = STRIPE_X + 1;
   #end
   rotate <0, 0, 90*ROT>
  } 
  #declare ROT = ROT + 1;
 #end
}

#declare lg_0607p01 = 
union {
 object { lg_0607 }
 object { lg_0607p01_decals }
}

#declare lg_0607p01_clear = 
union {
 object { lg_0607_clear }
 object { lg_0607p01_decals }
}

#end