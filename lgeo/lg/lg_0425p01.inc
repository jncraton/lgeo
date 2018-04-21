/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071103 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0425p01: Baseplate 32 x 32 Road 3 Lane with Race Track pattern           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0425)
#else
#include "lg_0425.inc"
#declare lg_0425p01_decals = 
union {
 box {
  <-7*LG_BRICK_WIDTH+0.28, 16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.001>,
  <-7*LG_BRICK_WIDTH+0.28+0.64, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.001>
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <7*LG_BRICK_WIDTH-0.28, -14.5*LG_BRICK_WIDTH, 0.001>,
   <7*LG_BRICK_WIDTH-0.28-0.64, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.001>
  }
  box {
   <-6, 0.64, LG_E>,
   <0, 1, -LG_E>
   rotate <0, 0, 45>
   translate <12*LG_BRICK_WIDTH-0.28, -10*LG_BRICK_WIDTH, 0>
  }
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <7*LG_BRICK_WIDTH-0.28, 14.5*LG_BRICK_WIDTH, 0.001>,
   <7*LG_BRICK_WIDTH-0.28-0.64, 16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.001>
  }
  box {
   <-6, -0.64, LG_E>,
   <0, -1, -LG_E>
   rotate <0, 0, -45>
   translate <12*LG_BRICK_WIDTH-0.28, 10*LG_BRICK_WIDTH, 0>
  }
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <12*LG_BRICK_WIDTH-0.28, 10*LG_BRICK_WIDTH, 0.001>,
  <12*LG_BRICK_WIDTH-0.28-0.64, -10*LG_BRICK_WIDTH, -0.001>
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <-6, -0.64, 0.001>,
   <0, 0, -0.001>
   rotate <0, 0, -45>
   translate <12*LG_BRICK_WIDTH-0.28, 10*LG_BRICK_WIDTH, 0>
  }
  box {
   <5*LG_BRICK_WIDTH-0.28, 14*LG_BRICK_WIDTH, LG_E>,
   <7*LG_BRICK_WIDTH-0.28-0.64, 16*LG_BRICK_WIDTH, -LG_E>
  }
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <-6, 0.64, 0.001>,
   <0, 0, -0.001>
   rotate <0, 0, 45>
   translate <12*LG_BRICK_WIDTH-0.28, -10*LG_BRICK_WIDTH, 0>
  }
  box {
   <5*LG_BRICK_WIDTH-0.28, -14*LG_BRICK_WIDTH, LG_E>,
   <7*LG_BRICK_WIDTH-0.28-0.64, -16*LG_BRICK_WIDTH, -LG_E>
  }
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 #declare STRIPE_X = 0;
 #while (STRIPE_X < 9)
  box {
   <7*LG_BRICK_WIDTH-0.28-0.64, (13-3*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <7*LG_BRICK_WIDTH-0.28, (11-3*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  #declare STRIPE_X = STRIPE_X +1;
 #end 
 #declare STRIPE_X = 0;
 #while (STRIPE_X < 3)
  box {
   <5.25*LG_BRICK_WIDTH, (10-2*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <3.75*LG_BRICK_WIDTH, (9-2*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  box {
   <2.25*LG_BRICK_WIDTH, (10-2*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <0.75*LG_BRICK_WIDTH, (9-2*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  box {
   <-5.25*LG_BRICK_WIDTH, (10-2*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <-3.75*LG_BRICK_WIDTH, (9-2*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  box {
   <-2.25*LG_BRICK_WIDTH, (10-2*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <-0.75*LG_BRICK_WIDTH, (9-2*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  #declare STRIPE_X = STRIPE_X +1;
 #end 
 #declare STRIPE_X = 0;
 #while (STRIPE_X < 2)
  box {
   <2.25*LG_BRICK_WIDTH, (8-2*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <3.75*LG_BRICK_WIDTH, (9-2*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  box {
   <-0.75*LG_BRICK_WIDTH, (8-2*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <0.75*LG_BRICK_WIDTH, (9-2*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  box {
   <-2.25*LG_BRICK_WIDTH, (8-2*STRIPE_X)*LG_BRICK_WIDTH, 0.001>,
   <-3.75*LG_BRICK_WIDTH, (9-2*STRIPE_X)*LG_BRICK_WIDTH, -0.001>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  #declare STRIPE_X = STRIPE_X +1;
 #end 
 difference {
  box {
   <5.25*LG_BRICK_WIDTH, -7*LG_BRICK_WIDTH, 0.001>,
   <0.75*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, -0.001>
  }
  box {
   <4.75*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, LG_E>,
   <1.25*LG_BRICK_WIDTH, -5.9*LG_BRICK_WIDTH, -LG_E>
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <-5.25*LG_BRICK_WIDTH, -7*LG_BRICK_WIDTH, 0.001>,
   <-0.75*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, -0.001>
  }
  box {
   <-4.75*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, LG_E>,
   <-1.25*LG_BRICK_WIDTH, -5.9*LG_BRICK_WIDTH, -LG_E>
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0425p01 = 
union {
 object { lg_0425 }
 object { lg_0425p01_decals }
}

#declare lg_0425p01_clear = 
union {
 object { lg_0425_clear }
 object { lg_0425p01_decals }
}

#end