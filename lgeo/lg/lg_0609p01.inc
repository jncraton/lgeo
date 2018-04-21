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
/* lg_0609p01: Baseplate 32 x 32 Road Curve 9 Studs with Road Pattern          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0609)
#else
#include "lg_0609.inc"
#declare lg_0609p01_decals = 
union {
 difference {
  cylinder {
   <0, 0, 0.001>,
   <0, 0, -0.001>,
   9*LG_BRICK_WIDTH+0.28+0.64
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_E>,
    9*LG_BRICK_WIDTH+0.28
   }
   box {
    <-LG_CORNER_SPACE, 9*LG_BRICK_WIDTH+0.28+0.64+LG_E, LG_E>,
    <9*LG_BRICK_WIDTH+0.28+0.64+LG_E, -9*LG_BRICK_WIDTH-0.28-0.64-LG_E, -LG_E>
   }
   box {
    <-9*LG_BRICK_WIDTH-0.28-0.64-LG_E, 9*LG_BRICK_WIDTH+0.28+0.64+LG_E, LG_E>,
    <9*LG_BRICK_WIDTH+0.28+0.64+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
  }
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
  translate <16*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, 0>
 }
 difference {
  cylinder {
   <0, 0, 0.001>,
   <0, 0, -0.001>,
   23*LG_BRICK_WIDTH-0.28
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_E>,
    23*LG_BRICK_WIDTH-0.28-0.64
   }
   box {
    <-LG_CORNER_SPACE, 23*LG_BRICK_WIDTH+0.28+LG_E, LG_E>,
    <23*LG_BRICK_WIDTH+0.28+LG_E, -23*LG_BRICK_WIDTH-0.28-LG_E, -LG_E>
   }
   box {
    <-23*LG_BRICK_WIDTH-0.28-LG_E, 23*LG_BRICK_WIDTH+0.28+LG_E, LG_E>,
    <23*LG_BRICK_WIDTH+0.28+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
  }
  material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
  translate <16*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, 0>
 }
 difference {
  cylinder {
   <0, 0, 0.001>,
   <0, 0, -0.001>,
   16*LG_BRICK_WIDTH+LG_KNOB_RADIUS
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_E>,
    16*LG_BRICK_WIDTH-LG_KNOB_RADIUS
   }
   box {
    <-LG_CORNER_SPACE, 16*LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_E, LG_E>,
    <16*LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_E, -16*LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E, -LG_E>
   }
   box {
    <-16*LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E, 16*LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_E, LG_E>,
    <16*LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
   #declare ROT = 0;
   #while (ROT < 8)
    box {
     <2*LG_KNOB_RADIUS, -15.5*LG_BRICK_WIDTH, LG_E>,
     <-2*LG_KNOB_RADIUS, -16.5*LG_BRICK_WIDTH, -LG_E>
     rotate <0, 0, -90/8*(ROT+0.5)>
    }
    #declare ROT = ROT + 1;
   #end 
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <16*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_0609p01 = 
union {
 object { lg_0609 }
 object { lg_0609p01_decals }
}

#declare lg_0609p01_clear = 
union {
 object { lg_0609_clear }
 object { lg_0609p01_decals }
}

#end