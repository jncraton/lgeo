/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080101 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3650a: Technic Crown Gear 24 Tooth type 1                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3650a)
#else
#declare lg_angle=atan2(1,5);
#declare lg_3650a =
union {
 difference {
  union {
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
   difference {
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE,
    2*LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE,
    2*LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE>
   }
   cylinder {
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     box {
      <LG_PLATE_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH>
     }
     box {
      <LG_PLATE_HEIGHT, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_PLATE_HEIGHT, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -0.4>,
     LG_KNOB_RADIUS+LG_E
    }
   }
  }
  box {
   <0.04, 4*LG_WALL_WIDTH, 0.5>,
   <-0.04, -4*LG_WALL_WIDTH, -0.5>
  }
 }
 torus {
  LG_BRICK_WIDTH+0.08,
  0.5*LG_WALL_WIDTH
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_WALL_WIDTH>
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -LG_PLATE_HEIGHT>,
    1.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    1.08
   }
  }
  union {
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -LG_PLATE_HEIGHT>,
    0.64
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.64+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0, 0, -LG_WALL_WIDTH+LG_E>,
    0.64+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.64+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  0.64+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 24)
  union {
   sphere {
    <2*LG_WALL_WIDTH-0.08, 0, 0.04>,
    0.04
   }
   sphere {
    <2*LG_WALL_WIDTH-0.20, 0, 0.04>,
    0.04
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, 0.04>,
    <2*LG_WALL_WIDTH-0.20, 0, 0.04>,
    0.04
   }
   cone {
    <2*LG_WALL_WIDTH-0.08, 0, 0.04*(1+sin(lg_angle))>, 0.04*cos(lg_angle)
    <2*LG_WALL_WIDTH-0.08, 0, -LG_WALL_WIDTH>, 0.08
   }
   cone {
    <2*LG_WALL_WIDTH-0.20, 0, 0.04*(1+sin(lg_angle))>, 0.04*cos(lg_angle)
    <2*LG_WALL_WIDTH-0.20, 0, -LG_WALL_WIDTH>, 0.08
   }
   difference {
    union {
     box {
      <2*LG_WALL_WIDTH-0.08, 0.04, 0>,
      <2*LG_WALL_WIDTH-0.20, -0.04, -1.5*LG_WALL_WIDTH>
      rotate <lg_angle*180/pi, 0, 0>
     } 
     box {
      <2*LG_WALL_WIDTH-0.08, 0.04, 0>,
      <2*LG_WALL_WIDTH-0.20, -0.04, -1.5*LG_WALL_WIDTH>
      rotate <-lg_angle*180/pi, 0, 0>
     }
     translate <0, 0, 0.04>
    }
    box {
     <2*LG_WALL_WIDTH, 0.1, -LG_WALL_WIDTH>,
     <0, -0.1, -1.5*LG_WALL_WIDTH>
    }
   }
   sphere {
    <2*LG_WALL_WIDTH-0.08, 0, -1.5*LG_WALL_WIDTH>,
    0.08
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, -1.5*LG_WALL_WIDTH>,
    <2*LG_WALL_WIDTH-0.08, 0, -LG_WALL_WIDTH>,
    0.08
   }
   cylinder {
     <2*LG_WALL_WIDTH-0.08, 0, -1.5*LG_WALL_WIDTH>,
    <LG_E, 0, -1.5*LG_WALL_WIDTH>,
    0.08
   }
   box {
    <2*LG_WALL_WIDTH-0.08, 0.08, -LG_WALL_WIDTH>,
    <LG_E, -0.08, -1.5*LG_WALL_WIDTH>
   }
   translate <0.98, 0, 0>
   rotate <0, 0, ROT*15>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, -90, 0>
 rotate <90, 0, 0>
 translate <LG_WALL_WIDTH/2, 0, 0>
}

#declare lg_3650a_clear =
merge {
 difference {
  merge {
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
   difference {
    merge {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE,
    2*LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE,
    2*LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE>
   }
   cylinder {
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_PLATE_HEIGHT-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     box {
      <LG_PLATE_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      <-LG_PLATE_HEIGHT+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH>
     }
     box {
      <LG_PLATE_HEIGHT, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_PLATE_HEIGHT, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -0.4>,
     LG_KNOB_RADIUS+LG_E
    }
   }
  }
  box {
   <0.04, 4*LG_WALL_WIDTH, 0.5>,
   <-0.04, -4*LG_WALL_WIDTH, -0.5>
  }
 }
 torus {
  LG_BRICK_WIDTH+0.08,
  0.5*LG_WALL_WIDTH
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_WALL_WIDTH>
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -LG_PLATE_HEIGHT>,
    1.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    1.08
   }
  }
  union {
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -LG_PLATE_HEIGHT>,
    0.64
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.64+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0, 0, -LG_WALL_WIDTH+LG_E>,
    0.64+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.64+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  0.64+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 24)
  merge {
   sphere {
    <2*LG_WALL_WIDTH-0.08, 0, 0.04>,
    0.04
   }
   sphere {
    <2*LG_WALL_WIDTH-0.20, 0, 0.04>,
    0.04
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, 0.04>,
    <2*LG_WALL_WIDTH-0.20, 0, 0.04>,
    0.04
   }
   cone {
    <2*LG_WALL_WIDTH-0.08, 0, 0.04*(1+sin(lg_angle))>, 0.04*cos(lg_angle)
    <2*LG_WALL_WIDTH-0.08, 0, -LG_WALL_WIDTH>, 0.08
   }
   cone {
    <2*LG_WALL_WIDTH-0.20, 0, 0.04*(1+sin(lg_angle))>, 0.04*cos(lg_angle)
    <2*LG_WALL_WIDTH-0.20, 0, -LG_WALL_WIDTH>, 0.08
   }
   difference {
    merge {
     box {
      <2*LG_WALL_WIDTH-0.08, 0.04, 0>,
      <2*LG_WALL_WIDTH-0.20, -0.04, -1.5*LG_WALL_WIDTH>
      rotate <lg_angle*180/pi, 0, 0>
     } 
     box {
      <2*LG_WALL_WIDTH-0.08, 0.04, 0>,
      <2*LG_WALL_WIDTH-0.20, -0.04, -1.5*LG_WALL_WIDTH>
      rotate <-lg_angle*180/pi, 0, 0>
     }
     translate <0, 0, 0.04>
    }
    box {
     <2*LG_WALL_WIDTH, 0.1, -LG_WALL_WIDTH>,
     <0, -0.1, -1.5*LG_WALL_WIDTH>
    }
   }
   sphere {
    <2*LG_WALL_WIDTH-0.08, 0, -1.5*LG_WALL_WIDTH>,
    0.08
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, -1.5*LG_WALL_WIDTH>,
    <2*LG_WALL_WIDTH-0.08, 0, -LG_WALL_WIDTH>,
    0.08
   }
   cylinder {
     <2*LG_WALL_WIDTH-0.08, 0, -1.5*LG_WALL_WIDTH>,
    <LG_E, 0, -1.5*LG_WALL_WIDTH>,
    0.08
   }
   box {
    <2*LG_WALL_WIDTH-0.08, 0.08, -LG_WALL_WIDTH>,
    <LG_E, -0.08, -1.5*LG_WALL_WIDTH>
   }
   translate <0.98, 0, 0>
   rotate <0, 0, ROT*15>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, -90, 0>
 rotate <90, 0, 0>
 translate <LG_WALL_WIDTH/2, 0, 0>
}

#end
