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
/* lg_0613p01: Baseplate 32 x 32 Road Curve 8 Studs with Road Pattern          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0613)
#else
#include "lg_0613.inc"
#declare lg_0613p01_decals = 
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
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <16*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, 0>
 }
 difference {
  cylinder {
   <0, 0, 0.001>,
   <0, 0, -0.001>,
   24*LG_BRICK_WIDTH-0.28
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_E>,
    8*LG_BRICK_WIDTH+0.28
   }
   box {
    <-LG_CORNER_SPACE, 24*LG_BRICK_WIDTH+0.28+LG_E, LG_E>,
    <24*LG_BRICK_WIDTH+0.28+LG_E, -24*LG_BRICK_WIDTH-0.28-LG_E, -LG_E>
   }
   box {
    <-24*LG_BRICK_WIDTH-0.28-LG_E, 24*LG_BRICK_WIDTH+0.28+LG_E, LG_E>,
    <24*LG_BRICK_WIDTH+0.28+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
   difference {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     9*LG_BRICK_WIDTH+0.28+0.64
    }
    cylinder {
     <0, 0, 2*LG_E>,
     <0, 0, -2*LG_E>,
     9*LG_BRICK_WIDTH+0.28
    }
   }
   difference {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     23*LG_BRICK_WIDTH-0.28
    }
    cylinder {
     <0, 0, 2*LG_E>,
     <0, 0, -2*LG_E>,
     23*LG_BRICK_WIDTH-0.28-0.64
    }
   }
   difference {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     16*LG_BRICK_WIDTH+LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, 2*LG_E>,
     <0, 0, -2*LG_E>,
     16*LG_BRICK_WIDTH-LG_KNOB_RADIUS
    }
   }
  }
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
  translate <16*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_0613p01 = 
union {
 object { lg_0613 }
 object { lg_0613p01_decals }
}

#declare lg_0613p01_clear = 
union {
 object { lg_0613_clear }
 object { lg_0613p01_decals }
}

#end