/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071109 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0608p03: Baseplate 32 x 32 Road T Intersection 9 Studs with yellow       */
/*             Lines Pattern                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0608)
#else
#include "lg_0608.inc"
#declare lg_0608p03_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.001>,
    <7.4*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.001>
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <6.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.001>,
    <6.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -7.4*LG_BRICK_WIDTH, -0.001>
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
   }
   difference {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     0.9*LG_BRICK_WIDTH+LG_KNOB_RADIUS
    }
    union {
     box {
      <0, -2, LG_E>,
      <2, 2, -LG_E>
     }
     box {
      <-2, 0, LG_E>,
      <2, -2, -LG_E>
     }
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_E>,
      0.9*LG_BRICK_WIDTH-LG_KNOB_RADIUS
     }
    }
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
    translate <7.4*LG_BRICK_WIDTH, -7.4*LG_BRICK_WIDTH, 0>
   }
   rotate <0, 0, -90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 box {
  <8.4*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
  <10.7*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <11.85*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
  <13.85*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
  <15*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-8.4*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
  <-10.7*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-11.85*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
  <-13.85*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
  <-15*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <8.4*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
  <10.7*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <11.75*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, 0.001>,
  <13.75*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0.001>,
  <15*LG_BRICK_WIDTH, LG_KNOB_RADIUS, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-LG_KNOB_RADIUS, -15*LG_BRICK_WIDTH, 0.001>,
  <LG_KNOB_RADIUS, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-LG_KNOB_RADIUS, -13.9*LG_BRICK_WIDTH, 0.001>,
  <LG_KNOB_RADIUS, -12.3*LG_BRICK_WIDTH, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-LG_KNOB_RADIUS, -11.2*LG_BRICK_WIDTH, 0.001>,
  <LG_KNOB_RADIUS, -9.4*LG_BRICK_WIDTH, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-LG_KNOB_RADIUS, -8.3*LG_BRICK_WIDTH, 0.001>,
  <LG_KNOB_RADIUS, -6.5*LG_BRICK_WIDTH, -0.001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 #declare MIR = -1;
 #while (MIR < 2)
  difference {
   cylinder {
    <0, 0, 0.001>,
    <0, 0, -0.001>,
    7*LG_BRICK_WIDTH+LG_KNOB_RADIUS
   }
   union {
    box {
     <0, -7, LG_E>,
     <7, 7, -LG_E>
    }
    box {
     <-7, 0, LG_E>,
     <7, -7, -LG_E>
     rotate <0, 0, -15>
    }
    intersection {
     box {
      <-7, 0, LG_E>,
      <7, 7, -LG_E>
      rotate <0, 0, -70>
     }
     box {
      <-7, 0, LG_E>,
      <7, -7, -LG_E>
      rotate <0, 0, -78>
     }
    }
    intersection {
     box {
      <-7, 0, LG_E>,
      <7, 7, -LG_E>
      rotate <0, 0, -49>
     }
     box {
      <-7, 0, LG_E>,
      <7, -7, -LG_E>
      rotate <0, 0, -57>
     }
    }
    intersection {
     box {
      <-7, 0, LG_E>,
      <7, 7, -LG_E>
      rotate <0, 0, -28>
     }
     box {
      <-7, 0, LG_E>,
      <7, -7, -LG_E>
      rotate <0, 0, -36>
     }
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     7*LG_BRICK_WIDTH-LG_KNOB_RADIUS
    }
   }
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   matrix <MIR, 0, 0,
           0, 1, 0,
           0, 0, 1,
           MIR*7.2*LG_BRICK_WIDTH, -7*LG_BRICK_WIDTH, 0>
  }
  #declare MIR = MIR + 2;
 #end
}

#declare lg_0608p03 = 
union {
 object { lg_0608 }
 object { lg_0608p03_decals }
}

#declare lg_0608p03_clear = 
union {
 object { lg_0608_clear }
 object { lg_0608p03_decals }
}

#end