/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080127 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30030p01: Baseplate 32 x 32 Racing with Racing Pattern                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30030p01)
#else
#include "lg_30030.inc"
#declare lg_30030p01_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 13*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 14*LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <7*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.0001>,
  <-7*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <7*LG_BRICK_WIDTH, 7*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.0001>,
  <-7*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  difference {
   union {
    #declare STRIPE_X = 0;
    #while (STRIPE_X < 3)
     box {
      <0, 0, 0.0001>,
      <8, 0.24, -0.0001>
      rotate <0, 0, -45>
      translate <(14-2*STRIPE_X)*LG_BRICK_WIDTH, 13*LG_BRICK_WIDTH+LG_WALL_WIDTH,0 >
     }
     #declare STRIPE_X = STRIPE_X + 1;
    #end
   }
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 14*LG_BRICK_WIDTH, 0.001>,
    <24*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, -0.001>
   } 
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   scale <1-2*MIR, 1, 1>
  }
  difference {
   cylinder {
    <0, 0, 0.0001>,
    <0, 0, -0.0001>,
    LG_BRICK_WIDTH+LG_KNOB_RADIUS
   }
   union {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     LG_BRICK_WIDTH-LG_KNOB_RADIUS
    }
    box {
     <0, 2, 0.001>,
     <-2, -2, -0.001>
    }
   }
   scale <0.5, 1, 1>
   translate <7*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   scale <1-2*MIR, 1, 1>
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  box {
   <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.0001>,
   <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 13*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.0001>
  }
  union {
   #declare MIR = 0;
   #while (MIR < 2)
    union {
     #declare STRIPE_X = 0;
     #while (STRIPE_X < 3)
      box {
       <0, 0, 0.001>,
       <8, 0.24, -0.001>
       rotate <0, 0, -45>
       translate <(14-2*STRIPE_X)*LG_BRICK_WIDTH, 13*LG_BRICK_WIDTH+LG_WALL_WIDTH,0 >
      }
      #declare STRIPE_X = STRIPE_X + 1;
     #end
     scale <1-2*MIR, 1, 1>
    }
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     LG_BRICK_WIDTH+LG_KNOB_RADIUS
     scale <0.5, 1, 1>
     translate <7*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
     scale <1-2*MIR, 1, 1>
    }
    #declare MIR = MIR + 1;
   #end
   box {
    <7*LG_BRICK_WIDTH, 7*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.001>,
    <-7*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -0.001>
   }
  }
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_30030p01 = 
union {
 object { lg_30030 }
 object { lg_30030p01_decals }
}

#declare lg_80547_clear = 
union {
 object { lg_30030_clear }
 object { lg_30030p01_decals }
}

#end