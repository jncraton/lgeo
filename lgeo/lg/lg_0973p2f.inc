/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080312 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0973p2f: Minifig Torso with Spotted Singlet and Necklace Pattern         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0973p2f)
#else
#include "lg_0973.inc"
#declare lg_angle2=atan2(2.5,8);
#declare lg_0973p2f_decals = 
union {
 difference {
  union {
   box {
    <-0.0001, 0.36, -LG_CORNER_SPACE>,
    <0.0001, LG_BRICK_WIDTH, -9/24*LG_BRICK_HEIGHT>
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, -0.36, -LG_CORNER_SPACE>,
    <0.0001, -LG_BRICK_WIDTH, -9/24*LG_BRICK_HEIGHT>
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, 0.36, -9/24*LG_BRICK_HEIGHT>,
    <0.0001, LG_BRICK_WIDTH, -9.5/24*LG_BRICK_HEIGHT>
    material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, -0.36, -9/24*LG_BRICK_HEIGHT>,
    <0.0001, -LG_BRICK_WIDTH, -9.5/24*LG_BRICK_HEIGHT>
    material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
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
    <-0.0001, 0.36, -LG_CORNER_SPACE>,
    <0.0001, 0.34, -9.5/24*LG_BRICK_HEIGHT>
    material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-0.0001, 0.28, -LG_CORNER_SPACE>,
    <0.0001, 0.26, -9.5/24*LG_BRICK_HEIGHT>
    material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   }
   cylinder {
    <0.0001, -0.20, -2/24*LG_BRICK_HEIGHT>,
    <-0.0001, -0.20, -2/24*LG_BRICK_HEIGHT>,
    0.04
    material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
   }
   cylinder {
    <0.0001, -0.18, -4/24*LG_BRICK_HEIGHT>,
    <-0.0001, -0.18, -4/24*LG_BRICK_HEIGHT>,
    0.04
    material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
   }
   cylinder {
    <0.0001, -0.14, -6/24*LG_BRICK_HEIGHT>,
    <-0.0001, -0.14, -6/24*LG_BRICK_HEIGHT>,
    0.04
    material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
   }
   cylinder {
    <0.0001, -0.08, -7.5/24*LG_BRICK_HEIGHT>,
    <-0.0001, -0.08, -7.5/24*LG_BRICK_HEIGHT>,
    0.04
    material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
   }
   scale <1, 1-2*MIR, 1>
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <-0.0001, 0.26, -9/24*LG_BRICK_HEIGHT>,
  <0.0001, -0.26, -9.5/24*LG_BRICK_HEIGHT>
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0, -8/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0, -8/24*LG_BRICK_HEIGHT>,
  0.04
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <-0.0001, 0.26, -LG_CORNER_SPACE>,
   <0.0001, -0.26, -9/24*LG_BRICK_HEIGHT>
   material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
  }
  union {
   cylinder {
    <0.001, -0.20, -2/24*LG_BRICK_HEIGHT>,
    <-0.001, -0.20, -2/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, 0.20, -2/24*LG_BRICK_HEIGHT>,
    <-0.001, 0.20, -2/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, -0.18, -4/24*LG_BRICK_HEIGHT>,
    <-0.001, -0.18, -4/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, 0.18, -4/24*LG_BRICK_HEIGHT>,
    <-0.001, 0.18, -4/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, -0.14, -6/24*LG_BRICK_HEIGHT>,
    <-0.001, -0.14, -6/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, 0.14, -6/24*LG_BRICK_HEIGHT>,
    <-0.001, 0.14, -6/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, -0.08, -7.5/24*LG_BRICK_HEIGHT>,
    <-0.001, -0.08, -7.5/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, 0.08, -7.5/24*LG_BRICK_HEIGHT>,
    <-0.001, 0.08, -7.5/24*LG_BRICK_HEIGHT>,
    0.04
   }
   cylinder {
    <0.001, 0, -8/24*LG_BRICK_HEIGHT>,
    <-0.001, 0, -8/24*LG_BRICK_HEIGHT>,
    0.04
   }
  }
 }
 cylinder {
  <0.0001, 0.32, -11/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.32, -11/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.14, -11.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.14, -11.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.42, -11.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.42, -11.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.52, -11.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.52, -11.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.1, -14/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.1, -14/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.22, -15.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.22, -15.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.34, -15.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.34, -15.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.56, -17/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.56, -17/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.4, -17/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.4, -17/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.08, -18.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.08, -18.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.52, -20.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.52, -20.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.48, -20.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.48, -20.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.16, -22/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.16, -22/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.2, -22.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.2, -22.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.58, -25.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.58, -25.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.38, -26/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.38, -26/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.08, -27/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.08, -27/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.58, -27.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.58, -27.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.26, -27.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.26, -27.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.6, -30/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.6, -30/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, -0.04, -30.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, -0.04, -30.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 cylinder {
  <0.0001, 0.48, -30.5/24*LG_BRICK_HEIGHT>,
  <-0.0001, 0.48, -30.5/24*LG_BRICK_HEIGHT>,
  0.028
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#declare lg_0973p2f =
union {
 object { lg_0973 }
 object { lg_0973p2f_decals }
}

#declare lg_0973p2f_clear =
union {
 object { lg_0973_clear }
 object { lg_0973p2f_decals }
}

#end
