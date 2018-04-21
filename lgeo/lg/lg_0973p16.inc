/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0973p16: Minifig Torso with Airplane Logo Pattern                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0973p16)
#else
#include "lg_0973.inc"
#declare lg_angle2=atan2(2.5,8);
#declare lg_0973p16_decals = 
union {
 difference {
  union {
   box {
    <-0.0001, LG_BRICK_WIDTH-LG_CORNER_SPACE, -18/24*LG_BRICK_HEIGHT>,
    <0.0001, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -20.5/24*LG_BRICK_HEIGHT>
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, LG_BRICK_WIDTH-LG_CORNER_SPACE, -20.5/24*LG_BRICK_HEIGHT>,
    <0.0001, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -23/24*LG_BRICK_HEIGHT>
    material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, LG_BRICK_WIDTH-LG_CORNER_SPACE, -23/24*LG_BRICK_HEIGHT>,
    <0.0001, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -25.5/24*LG_BRICK_HEIGHT>
    material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, LG_BRICK_WIDTH-LG_CORNER_SPACE, -25.5/24*LG_BRICK_HEIGHT>,
    <0.0001, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -28/24*LG_BRICK_HEIGHT>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, LG_BRICK_WIDTH-LG_CORNER_SPACE, -28/24*LG_BRICK_HEIGHT>,
    <0.0001, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -30.5/24*LG_BRICK_HEIGHT>
    material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
   }
  }
  union {
   box {
    <0.001, 0, LG_E>,
    <-0.001, 2*LG_WALL_WIDTH, -4*LG_PLATE_HEIGHT/cos(lg_angle)>
    rotate <lg_angle*180/pi, 0, 0>
    translate <0, 0.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <0.001, 0, LG_E>,
    <-0.001, -2*LG_WALL_WIDTH, -4*LG_PLATE_HEIGHT/cos(lg_angle)>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, -0.7*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   box {
    <0.0001, 0.04, -17/24*LG_BRICK_HEIGHT>,
    <-0.0001, 0.08, -17.5/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.0001, 0.04, -16/24*LG_BRICK_HEIGHT>,
    <-0.0001, 0.08, -16.5/24*LG_BRICK_HEIGHT>
   }
   difference {
    box {
     <0.0001, 0.36, -16/24*LG_BRICK_HEIGHT>,
     <-0.0001, 0, -12.5/24*LG_BRICK_HEIGHT>
    }
    box {
     <0.001, 0, 0>,
     <-0.001, 0.4, 0.3>
     rotate <-lg_angle2*180/pi, 0, 0>
     translate <0, 0.04, -12.5/24*LG_BRICK_HEIGHT>
    }
   }
   material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
   scale <1, 1-2*MIR, 1>
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  box {
   <0.0001, 0.04, -10/24*LG_BRICK_HEIGHT>,
    <-0.0001, -0.04, -16.5/24*LG_BRICK_HEIGHT>
  }
  union {
   box {
    <0.001, 0, 0>,
    <-0.001, 0.1, 0.3>
    rotate <-45, 0, 0>
    translate <0, 0.02, -10/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, 0, 0>,
    <-0.001, -0.1, 0.3>
    rotate <45, 0, 0>
    translate <0, -0.02, -10/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, 0, 0>,
    <-0.001, 0.1, -0.3>
    rotate <45, 0, 0>
    translate <0, 0.02, -16.5/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, 0, 0>,
    <-0.001, -0.1, -0.3>
    rotate <-45, 0, 0>
    translate <0, -0.02, -16.5/24*LG_BRICK_HEIGHT>
   }
  }
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#declare lg_0973p16 =
union {
 object { lg_0973 }
 object { lg_0973p16_decals }
}

#declare lg_0973p16_clear =
union {
 object { lg_0973_clear }
 object { lg_0973p16_decals }
}

#end
