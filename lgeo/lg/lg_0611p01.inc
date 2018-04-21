/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071110 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0611p01: Baseplate 32 x 32 Road Crossroads 8 Studs with Road Pattern     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0611)
#else
#include "lg_0611.inc"
#declare lg_0611p01_decals = 
union {
 #declare ROT = 0;
 #while (ROT <4)
  union{
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28, 0.001>,
    <8*LG_BRICK_WIDTH-0.28, -8*LG_BRICK_WIDTH+0.28, -0.001>
    material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 7*LG_BRICK_WIDTH-0.28, 0.001>,
    <8*LG_BRICK_WIDTH-0.28, 8*LG_BRICK_WIDTH-0.28, -0.001>
    material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28, 0.001>,
    <8*LG_BRICK_WIDTH-0.28, -7*LG_BRICK_WIDTH+0.28+0.64, -0.001>
    material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <7*LG_BRICK_WIDTH-0.28, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
    <7*LG_BRICK_WIDTH-0.28-0.64, -8*LG_BRICK_WIDTH+0.28, -0.001>
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
   difference {
    box {
     <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7*LG_BRICK_WIDTH+0.28+0.64, 0.001>,
     <7*LG_BRICK_WIDTH-0.28-0.64, 7*LG_BRICK_WIDTH-0.28-0.64, -0.001>
    }
    union {
     box {
      <13.8*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, LG_E>,
      <11.8*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -LG_E>
     }
     box {
      <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_KNOB_RADIUS, LG_E>,
      <15*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -LG_E>
     }
     #declare STRIPE_X = -4;
     #while (STRIPE_X < 5)
      box {
       <8.1*LG_BRICK_WIDTH, 0.32, LG_E>,
       <11.1*LG_BRICK_WIDTH, -0.32, -LG_E>
       translate <0,STRIPE_X*1.25*LG_BRICK_WIDTH, 0>
      }
      #declare STRIPE_X = STRIPE_X + 1;
     #end
    }
    material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
   }
   difference {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     LG_BRICK_WIDTH+0.64
    }
    union {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_E>,
      LG_BRICK_WIDTH
     }
     box {
      <0, 2*LG_BRICK_WIDTH, LG_E>,
      <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_E>
     }
     box {
      <2*LG_BRICK_WIDTH, 0, LG_E>,
      <-2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_E>
     }
    }
    material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
    translate <8*LG_BRICK_WIDTH-0.28, -8*LG_BRICK_WIDTH+0.28, 0>
   }
   difference {
    box {
     <0, LG_BRICK_WIDTH+0.64, 0.001>,
     <-LG_BRICK_WIDTH-0.64, 0, -0.001>
    }
    difference {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_E>,
      LG_BRICK_WIDTH+0.64
     }
     cylinder {
      <0, 0, 2*LG_E>,
      <0, 0, -2*LG_E>,
      LG_BRICK_WIDTH
     }
    }
    material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
    translate <8*LG_BRICK_WIDTH-0.28, -8*LG_BRICK_WIDTH+0.28, 0>
   }
   rotate <0, 0, 90*ROT>
  } 
  #declare ROT = ROT + 1;
 #end
 box {
  <-7*LG_BRICK_WIDTH+0.28+0.64, -7*LG_BRICK_WIDTH+0.28+0.64, 0.001>,
  <7*LG_BRICK_WIDTH-0.28-0.64, 7*LG_BRICK_WIDTH-0.28-0.64, -0.001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0611p01 = 
union {
 object { lg_0611 }
 object { lg_0611p01_decals }
}

#declare lg_0611p01_clear = 
union {
 object { lg_0611_clear }
 object { lg_0611p01_decals }
}

#end