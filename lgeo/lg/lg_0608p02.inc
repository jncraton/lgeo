/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071106 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0608p02: Baseplate 32 x 32 Road T Intersection 9 Studs with green        */
/*             Octagon Pattern                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0608)
#else
#include "lg_0608.inc"
#declare lg_0608p02_decals = 
union {
 #declare STRIPE_X = -3;
 #while (STRIPE_X < 4)
  box {
   <-1.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
   <1.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
   translate <STRIPE_X*3.8*LG_BRICK_WIDTH, 0, 0>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  }
  #declare STRIPE_X = STRIPE_X + 1;
 #end 
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
  <13.7*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
  <-13.7*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   #if (ROT < 2)
    box {
     <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
     <-13.7*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
     material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-9.9*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
     <-12.9*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
     material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-9.1*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
     <-6.2*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
     material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, 6.2*LG_BRICK_WIDTH, 0.001>,
     <-6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 9.1*LG_BRICK_WIDTH, -0.001>
     material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, 12.9*LG_BRICK_WIDTH, 0.001>,
     <-6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 9.9*LG_BRICK_WIDTH, -0.001>
     material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, 13.7*LG_BRICK_WIDTH, 0.001>,
     <-6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.001>
     material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
    }
   #end
   #if (ROT < 3)
    box {
     <-6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 2.9*LG_BRICK_WIDTH, 0.001>,
     <-6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -2.9*LG_BRICK_WIDTH, -0.001>
     material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-9.1*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 2.3*LG_BRICK_WIDTH, 0.001>,
     <-9.1*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -2.3*LG_BRICK_WIDTH, -0.001>
     material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-11.7*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 1.7*LG_BRICK_WIDTH, 0.001>,
     <-11.7*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -1.7*LG_BRICK_WIDTH, -0.001>
     material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
    }
    box {
     <-14.3*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 1.1*LG_BRICK_WIDTH, 0.001>,
     <-14.3*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -1.1*LG_BRICK_WIDTH, -0.001>
     material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
    }
   #end
   box {
    <-3.8*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 1.4*LG_BRICK_WIDTH, 0.001>,
    <-3.8*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -1.4*LG_BRICK_WIDTH, -0.001>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <0, 0, 0.001>,
    <2.7*sqrt(2)*LG_BRICK_WIDTH, 2*LG_KNOB_RADIUS, -0.001>
    rotate <0, 0, -45>
    translate <-4.1*LG_BRICK_WIDTH, -1.4*LG_BRICK_WIDTH, 0>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   rotate <0, 0, -90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_0608p02 = 
union {
 object { lg_0608 rotate <0, 0, 180> }
 object { lg_0608p02_decals }
}

#declare lg_0608p02_clear = 
union {
 object { lg_0608_clear rotate <0, 0, 180> }
 object { lg_0608p02_decals }
}

#end