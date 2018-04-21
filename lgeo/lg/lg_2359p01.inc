/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071119 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2359p01: Baseplate 32 x 32 Road Curve 7 Studs with Road Pattern          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2359)
#else
#include "lg_2359.inc"
#declare lg_2359p01_decals = 
union {
 difference {
  union {
   difference {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     8*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     7*LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   difference {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     25*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     24*LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   difference {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     16*LG_BRICK_WIDTH+LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     16*LG_BRICK_WIDTH-LG_KNOB_RADIUS
    }
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   difference {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     9*LG_BRICK_WIDTH+0.28+0.64
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     9*LG_BRICK_WIDTH+0.28
    }
    material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
   }
   difference {
    cylinder {
     <0, 0, 0.001>,
     <0, 0, -0.001>,
     23*LG_BRICK_WIDTH-0.28
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_E>,
     23*LG_BRICK_WIDTH-0.28-0.64
    }
    material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
   }
  }
  union {
   box {
    <-LG_CORNER_SPACE, 25*LG_BRICK_WIDTH, LG_E>,
    <25*LG_BRICK_WIDTH, -25*LG_BRICK_WIDTH, -LG_E>
   }
   box {
    <-25*LG_BRICK_WIDTH, 25*LG_BRICK_WIDTH, LG_E>,
    <25*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -LG_E>
   }
  }
  translate <16*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_2359p01 = 
union {
 object { lg_2359 }
 object { lg_2359p01_decals }
}

#declare lg_2359p01_clear = 
union {
 object { lg_2359_clear }
 object { lg_2359p01_decals }
}

#end