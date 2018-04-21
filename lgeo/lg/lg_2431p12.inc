/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071124 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2431p12: Tile 1 x 4 with Radar pattern                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2431p12)
#else
#include "lg_2431.inc"
#declare lg_angle1=atan2(0.05, 0.8);
#declare lg_angle2=atan2(0.09, 0.8);
#declare lg_2431p12_decals = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  intersection {
   union {
    box {
     <0.25, 0.19, 0.0001>,
     <-0.25, 0.21, -0.0001>
    }
    box {
     <0.26, 0.39, 0.0001>,
     <-0.26, 0.41, -0.0001>
    }
    box {
     <0.28, 0.59, 0.0001>,
     <-0.28, 0.61, -0.0001>
    }
    box {
     <0.29, 0.79, 0.0001>,
     <-0.29, 0.81, -0.0001>
    }
    box {
     <0.31, 0.99, 0.0001>,
     <-0.31, 1.01, -0.0001>
    }
    box {
     <0.33, 1.19, 0.0001>,
     <-0.33, 1.21, -0.0001>
    }
    box {
     <0.36, 1.39, 0.0001>,
     <-0.36, 1.41, -0.0001>
    }
    box {
     <0.01, 0, 0.0001>,
     <-0.01, LG_BRICK_WIDTH/cos(lg_angle1), -0.001>
     rotate <0, 0, -lg_angle1*180/pi>
     translate <0.24, 0, 0>
    }
    box {
     <0.01, 0, 0.0001>,
     <-0.01, LG_BRICK_WIDTH/cos(lg_angle1), -0.001>
     rotate <0, 0, lg_angle1*180/pi>
     translate <-0.24, 0, 0>
    }
    box {
     <0.01, 0, 0.0001>,
     <-0.01, LG_BRICK_WIDTH/cos(lg_angle2), -0.001>
     rotate <0, 0, -lg_angle2*180/pi>
     translate <0.29, LG_BRICK_WIDTH, 0>
    }
    box {
     <0.01, 0, 0.0001>,
     <-0.01, LG_BRICK_WIDTH/cos(lg_angle2), -0.001>
     rotate <0, 0, lg_angle2*180/pi>
     translate <-0.29, LG_BRICK_WIDTH, 0>
    }
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_E>
   }
   scale <1, 1-2*MIR, 1>
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <0.24, -0.01, 0.0001>,
  <-0.24, 0.01, -0.0001>
 }
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
}

#declare lg_2431p12 =
union {
 object { lg_2431 }
 object {
  lg_2431p12_decals
 }
}

#declare lg_2431p12_clear =
union {
 object { lg_2431_clear }
 object {
  lg_2431p12_decals
 }
}

#end
