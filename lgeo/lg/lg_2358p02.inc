/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071118 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2358p02: Baseplate 32 x 32 Road Straight 7 Studs with Runway Pattern     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2358p02)
#else
#include "lg_2358.inc"
#declare lg_2358p02_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8.45*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8.45*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.25*LG_BRICK_WIDTH, 0.0001>,
  <-1.75*LG_BRICK_WIDTH, 0.25*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.25*LG_BRICK_WIDTH, 0.0001>,
  <-6.25*LG_BRICK_WIDTH, 0.25*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8.45*LG_BRICK_WIDTH, 0.0001>,
  <2.45*LG_BRICK_WIDTH, -0.25*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <2.1*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8.45*LG_BRICK_WIDTH, 0.0001>,
  <2.45*LG_BRICK_WIDTH, 8.45*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8.45*LG_BRICK_WIDTH, 0.0001>,
  <2.45*LG_BRICK_WIDTH, 0.25*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <-2*LG_BRICK_WIDTH, 8.25*LG_BRICK_WIDTH, 0.0001>,
   <-6*LG_BRICK_WIDTH, -8.25*LG_BRICK_WIDTH, -0.0001>
  }
  union {
   #declare STRIPE_X = -1;
   #while (STRIPE_X < 6)
    box {
     <LG_E, 0, LG_E>,
     <-4*LG_BRICK_WIDTH-LG_E, 1.3*LG_BRICK_WIDTH, -LG_E>
     matrix <1, -1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     translate <-2*LG_BRICK_WIDTH, -8.2*LG_BRICK_WIDTH+2.85*LG_BRICK_WIDTH*STRIPE_X, 0> 
    }
    #declare STRIPE_X = STRIPE_X + 1;
   #end
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8.45*LG_BRICK_WIDTH, 0.0001>,
   <2.1*LG_BRICK_WIDTH, -8.45*LG_BRICK_WIDTH, -0.0001>
   material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
  }
  union {
   box {
    <2.2*LG_BRICK_WIDTH, -0.25*LG_BRICK_WIDTH, LG_E>,
    <-1.75*LG_BRICK_WIDTH, 0.25*LG_BRICK_WIDTH, -LG_E>
   }
   box {
    <-16*LG_BRICK_WIDTH, -0.25*LG_BRICK_WIDTH, LG_E>,
    <-6.25*LG_BRICK_WIDTH, 0.25*LG_BRICK_WIDTH, -LG_E>
   }
   difference {
    box {
     <-2*LG_BRICK_WIDTH, 8.25*LG_BRICK_WIDTH, LG_E>,
     <-6*LG_BRICK_WIDTH, -8.25*LG_BRICK_WIDTH, -LG_E>
    }
    union {
     #declare STRIPE_X = -1;
     #while (STRIPE_X < 6)
      box {
       <LG_E, 0, LG_E>,
       <-4*LG_BRICK_WIDTH-LG_E, 1.3*LG_BRICK_WIDTH, -LG_E>
       matrix <1, -1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
       translate <-2*LG_BRICK_WIDTH, -8.2*LG_BRICK_WIDTH+2.85*LG_BRICK_WIDTH*STRIPE_X, 0> 
      }
      #declare STRIPE_X = STRIPE_X + 1;
     #end
    }
   }
  }
 }
}

#declare lg_2358p02 = 
union {
 object { lg_2358 }
 object { lg_2358p02_decals }
}

#declare lg_2358p02_clear = 
union {
 object { lg_2358_clear }
 object { lg_2358p02_decals }
}

#end