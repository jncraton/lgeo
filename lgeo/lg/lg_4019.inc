/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990101 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4019: Technic Gear 16 Tooth                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4019)
#else
#declare lg_angle=atan2(1,2);
#declare lg_4019 =
union {
 difference {
  union {
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    0.68
   }
   cylinder {
    <0, 0, 0.2>,
    <0, 0,-0.2>,
    0.68-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    0.6
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    0.6+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    0.6+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  0.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 torus {
  0.6+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  0.6+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 difference {
  union {
   cylinder {
    <0, 0, 0.06>,
    <0, 0, -0.06>,
    0.64
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.2>,
      <LG_BRICK_WIDTH/2, 0, -0.2>,
      LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+0.1
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.4>,
      <LG_BRICK_WIDTH/2, 0, -0.4>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 0, 0.3>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 0, -0.3>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_BRICK_WIDTH/2, 0.25>,
    <-LG_CROSSAXLE_WIDTH/2, -LG_BRICK_WIDTH/2, -0.25>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, 0.25>,
    <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -0.25>
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  difference {
   union {
    torus {
     LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>
    }
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>
    }
    torus {
     LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>
    }
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>
    }
   }
   box {
    <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, 0.25>,
    <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -0.25>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 intersection {
  union {
   difference {
    union {
     cylinder {
      <0, 0, 0.4>,
      <0, 0, -0.4>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0.4-LG_CORNER_SPACE>,
      <0, 0, -0.4+LG_CORNER_SPACE>,
      0.36
     }
     torus {
      0.36-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, 0.4-LG_CORNER_SPACE>
     } 
     torus {
      0.36-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -0.4+LG_CORNER_SPACE>
     } 
    }
    union {
     cylinder {
      <0, 0, 0.5>,
      <0, 0, -0.5>,
      LG_KNOB_RADIUS
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_BRICK_WIDTH/2, 0.5>,
      <-LG_CROSSAXLE_WIDTH/2, -LG_BRICK_WIDTH/2, -0.5>
     }
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, 0.5>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -0.5>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
      <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0.4+LG_E>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
      <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -0.4-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, 0.4+LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.4+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.4-LG_E>
     }
    }
   }
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
      <2*LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <2*LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 2*LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 2*LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     intersection {
      union {
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
      }
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -0.4-LG_E>,
       LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
      }
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
  }
  union {
   difference {
    box {
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.5>
     <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.5>
    }
    union {
     #declare ROT = 0;
     #while (ROT < 4)
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0.4>,
        <LG_BRICK_WIDTH/2, 0, -0.4>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0.4-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, 0, 0.5>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, 0, -0.4+LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, 0, -0.5>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 0, 0.4-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 0, -0.4+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 16)
  union {
   box {
    <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE,- LG_BRICK_WIDTH/4>
    }
    union {
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle), 0.2, -0.3>
      rotate <0, 0, -lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle), -0.2, -0.3>
      rotate <0, 0, lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   translate <0.6, 0, 0>
   rotate <0, 0, ROT*22.5>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#declare lg_4019_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    0.68
   }
   cylinder {
    <0, 0, 0.2>,
    <0, 0,-0.2>,
    0.68-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    0.6
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    0.6+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    0.6+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  0.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 torus {
  0.6+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  0.6+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 difference {
  merge {
   cylinder {
    <0, 0, 0.06>,
    <0, 0, -0.06>,
    0.64
   }
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.2>,
      <LG_BRICK_WIDTH/2, 0, -0.2>,
      LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+0.1
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.4>,
      <LG_BRICK_WIDTH/2, 0, -0.4>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 0, 0.3>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, 0, -0.3>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_BRICK_WIDTH/2, 0.25>,
    <-LG_CROSSAXLE_WIDTH/2, -LG_BRICK_WIDTH/2, -0.25>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, 0.25>,
    <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -0.25>
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  difference {
   merge {
    torus {
     LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>
    }
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, 0.2-LG_CORNER_SPACE>
    }
    torus {
     LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>
    }
    torus {
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <LG_BRICK_WIDTH/2, 0, -0.2+LG_CORNER_SPACE>
    }
   }
   box {
    <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, 0.25>,
    <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -0.25>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 intersection {
  merge {
   difference {
    merge {
     cylinder {
      <0, 0, 0.4>,
      <0, 0, -0.4>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0.4-LG_CORNER_SPACE>,
      <0, 0, -0.4+LG_CORNER_SPACE>,
      0.36
     }
     torus {
      0.36-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, 0.4-LG_CORNER_SPACE>
     } 
     torus {
      0.36-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -0.4+LG_CORNER_SPACE>
     } 
    }
    union {
     cylinder {
      <0, 0, 0.5>,
      <0, 0, -0.5>,
      LG_KNOB_RADIUS
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_BRICK_WIDTH/2, 0.5>,
      <-LG_CROSSAXLE_WIDTH/2, -LG_BRICK_WIDTH/2, -0.5>
     }
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, 0.5>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2, -0.5>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
      <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0.4+LG_E>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
      <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -0.4-LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, 0.4+LG_E>
     }
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.4+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.4-LG_E>
     }
    }
   }
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
      <2*LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <2*LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 2*LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 2*LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     intersection {
      merge {
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
      }
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -0.4-LG_E>,
       LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
      }
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
  }
  merge {
   difference {
    box {
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.5>
     <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.5>
    }
    union {
     #declare ROT = 0;
     #while (ROT < 4)
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0.4>,
        <LG_BRICK_WIDTH/2, 0, -0.4>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0.4-LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, 0, 0.5>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, 0, -0.4+LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, 0, -0.5>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       rotate <0, 0, 90*ROT>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 0, 0.4-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, 0, -0.4+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 16)
  merge {
   box {
    <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE,- LG_BRICK_WIDTH/4>
    }
    union {
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle), 0.2, -0.3>
      rotate <0, 0, -lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle), -0.2, -0.3>
      rotate <0, 0, lg_angle*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   translate <0.6, 0, 0>
   rotate <0, 0, ROT*22.5>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#end
