/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990102 Lutz Uhlmann                                                       */
/* 20080106 Lutz Uhlmann corrected tooth width                                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4143: Technic Gear Bevel 14 Tooth                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4143)
#else
#declare lg_angle=atan2(1,2);
#declare lg_4143 =
union {
 difference {
  cone {
   <0, 0, 0.16>, 0.4
   <0, 0, 0>, 0.5
  }
  union {
   cylinder {
    <0, 0, 0.16>,
    <0, 0, 0>,
    0.24
   }
   cylinder {
    <0, 0, 0.16-LG_CORNER_SPACE>,
    <0, 0, 0.16+LG_E>,
    0.24+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, -LG_E>,
    0.24+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.16-LG_CORNER_SPACE>
 } 
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, -0.12>,
    <0, 0, LG_E>,
    0.46-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    0.46
   }
  }
  union {
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, -0.12-LG_E>,
    0.34+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12>,
    <0, 0, 2*LG_E>,
    0.34
   }
  }
 }
 torus {
  0.34+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 } 
 torus {
  0.46-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 }
 intersection {
  union {
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 0, LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
  }
  cylinder {
   <0, 0, 0.5>,
   <0, 0, -0.5>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 14)
    difference {
     box {
      <-LG_CORNER_SPACE, 0.07, -LG_E>,
      <LG_BRICK_WIDTH/2, -0.07, LG_WALL_WIDTH+LG_E>
     }
     union {
      box {
       <-LG_WALL_WIDTH, 0, 0.1>,
       <LG_WALL_WIDTH, 0.2, -0.2>
       rotate <30, 0, 0>
       rotate <0, lg_angle*180/pi,0>
       translate <0.2, 0.04, LG_WALL_WIDTH>
      }
      box {
       <-LG_WALL_WIDTH, 0, 0.1>,
       <LG_WALL_WIDTH, -0.2, -0.2>
       rotate <-30, 0, 0>
       rotate <0, lg_angle*180/pi,0>
       translate <0.2, -0.04, LG_WALL_WIDTH>
      }
     }
     translate <LG_BRICK_WIDTH/2, 0, 0>
     rotate <0, 0, ROT*360/14>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cone {
    <0, 0, 0.16>, 0.62,
    <0, 0, 0.08>, 0.72
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.08>,
    0.72
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE+LG_E>,
    <0, 0, 0>,
    0.72-LG_CORNER_SPACE
   }
  }
 }
 rotate <0, 90, 0>
}

#declare lg_4143_clear =
merge {
 difference {
  cone {
   <0, 0, 0.16>, 0.4
   <0, 0, 0>, 0.5
  }
  union {
   cylinder {
    <0, 0, 0.16>,
    <0, 0, 0>,
    0.24
   }
   cylinder {
    <0, 0, 0.16-LG_CORNER_SPACE>,
    <0, 0, 0.16+LG_E>,
    0.24+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, -LG_E>,
    0.24+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.16-LG_CORNER_SPACE>
 } 
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, -0.12>,
    <0, 0, LG_E>,
    0.46-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    0.46
   }
  }
  union {
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, -0.12-LG_E>,
    0.34+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12>,
    <0, 0, 2*LG_E>,
    0.34
   }
  }
 }
 torus {
  0.34+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 } 
 torus {
  0.46-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 }
 intersection {
  merge {
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 0, LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
  }
  cylinder {
   <0, 0, 0.5>,
   <0, 0, -0.5>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 14)
    difference {
     box {
      <-LG_CORNER_SPACE, 0.07, -LG_E>,
      <LG_BRICK_WIDTH/2, -0.07, LG_WALL_WIDTH+LG_E>
     }
     union {
      box {
       <-LG_WALL_WIDTH, 0, 0.1>,
       <LG_WALL_WIDTH, 0.2, -0.2>
       rotate <30, 0, 0>
       rotate <0, lg_angle*180/pi,0>
       translate <0.2, 0.04, LG_WALL_WIDTH>
      }
      box {
       <-LG_WALL_WIDTH, 0, 0.1>,
       <LG_WALL_WIDTH, -0.2, -0.2>
       rotate <-30, 0, 0>
       rotate <0, lg_angle*180/pi,0>
       translate <0.2, -0.04, LG_WALL_WIDTH>
      }
     }
     translate <LG_BRICK_WIDTH/2, 0, 0>
     rotate <0, 0, ROT*360/14>
    }
    #declare ROT = ROT + 1;
   #end
  }
  merge {
   cone {
    <0, 0, 0.16>, 0.62,
    <0, 0, 0.08>, 0.72
   }
   torus {
    0.72-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.08>,
    0.72
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE+LG_E>,
    <0, 0, 0>,
    0.72-LG_CORNER_SPACE
   }
  }
 }
 rotate <0, 90, 0>
}

#end
