/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3482: Technic Wheel Center                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3482)
#else
#declare lg_angle=atan2(0.2, 0.48);
#declare lg_3482 =
union {
 intersection {
  cylinder {
   <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
   <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   intersection {
    union {
     difference {
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0>,
        <-LG_BRICK_WIDTH/2, 0, 0>,
        0.37-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        0.37
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0>,
        <-LG_BRICK_WIDTH/2, 0, 0>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
      }
     }
     torus {
      0.37-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.37-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
   }
   difference {
    union {
     difference {
      cylinder {
       <0.38, 0, 0>,
       <-0.38, 0, 0>,
       0.59+LG_CORNER_SPACE+LG_E
      }
      union {
       cylinder {
        <0.4, 0, 0>,
        <-0.4, 0, 0>,
        0.37-LG_CORNER_SPACE-LG_E
       }
       box {
        <0.4, 0, 0.65>,
        <-0.4, -0.65, -0.65>
        rotate <lg_angle*180/pi, 0, 0>
       }
       box {
        <0.4, 0, 0.65>,
        <-0.4, 0.65, -0.65>
        rotate <-lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.4, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11
        rotate <lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.4, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11
        rotate <-lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.38-LG_CORNER_SPACE, 0, 0.48>,
        <0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <-0.38+LG_CORNER_SPACE, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.38-LG_CORNER_SPACE, 0, 0.48>,
        <0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <-lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <-0.38+LG_CORNER_SPACE, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <-lg_angle*180/pi, 0, 0>
       }
      }
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.38-LG_CORNER_SPACE, 0, 0.48>
      rotate <lg_angle*180/pi, 0, 0>
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.38+LG_CORNER_SPACE, 0, 0.48>
      rotate <lg_angle*180/pi, 0, 0>
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.38-LG_CORNER_SPACE, 0, 0.48>
      rotate <-lg_angle*180/pi, 0, 0>
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.38+LG_CORNER_SPACE, 0, 0.48>
      rotate <-lg_angle*180/pi, 0, 0>
     }
    }
    union {
     box {
      <0.4, 0, 0.65>,
      <-0.4, -0.65, -0.65>
      rotate <lg_angle*180/pi, 0, 0>
     }
     box {
      <0.4, 0, 0.65>,
      <-0.4, 0.65, -0.65>
      rotate <-lg_angle*180/pi, 0, 0>
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88
   }
   cone {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>, 0.88
    <LG_BRICK_WIDTH/2-0.2, 0, 0>, 0.76
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.88
    <-LG_BRICK_WIDTH/2+0.24, 0, 0>, 0.76
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.76
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.59
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.59+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.04-LG_E, 0, 0>,
    0.59+LG_CORNER_SPACE
   }
  }
  translate <-0.02, 0, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.59+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.59+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>
 }
}

#declare lg_3482_clear =
merge {
 intersection {
  cylinder {
   <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
   <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   intersection {
    merge {
     difference {
      merge {
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0>,
        <-LG_BRICK_WIDTH/2, 0, 0>,
        0.37-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        0.37
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0>,
        <-LG_BRICK_WIDTH/2, 0, 0>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
        <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
      }
     }
     torus {
      0.37-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.37-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
     }
    }
    merge {
     box {
      <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
   }
   difference {
    merge {
     difference {
      cylinder {
       <0.38, 0, 0>,
       <-0.38, 0, 0>,
       0.59+LG_CORNER_SPACE+LG_E
      }
      merge {
       cylinder {
        <0.4, 0, 0>,
        <-0.4, 0, 0>,
        0.37-LG_CORNER_SPACE-LG_E
       }
       box {
        <0.4, 0, 0.65>,
        <-0.4, -0.65, -0.65>
        rotate <lg_angle*180/pi, 0, 0>
       }
       box {
        <0.4, 0, 0.65>,
        <-0.4, 0.65, -0.65>
        rotate <-lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.4, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11
        rotate <lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.4, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11
        rotate <-lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.38-LG_CORNER_SPACE, 0, 0.48>,
        <0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <-0.38+LG_CORNER_SPACE, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <0.38-LG_CORNER_SPACE, 0, 0.48>,
        <0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <-lg_angle*180/pi, 0, 0>
       }
       cylinder {
        <-0.38+LG_CORNER_SPACE, 0, 0.48>,
        <-0.4, 0, 0.48>,
        0.11+LG_CORNER_SPACE
        rotate <-lg_angle*180/pi, 0, 0>
       }
      }
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.38-LG_CORNER_SPACE, 0, 0.48>
      rotate <lg_angle*180/pi, 0, 0>
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.38+LG_CORNER_SPACE, 0, 0.48>
      rotate <lg_angle*180/pi, 0, 0>
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.38-LG_CORNER_SPACE, 0, 0.48>
      rotate <-lg_angle*180/pi, 0, 0>
     }
     torus {
      0.11+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.38+LG_CORNER_SPACE, 0, 0.48>
      rotate <-lg_angle*180/pi, 0, 0>
     }
    }
    union {
     box {
      <0.4, 0, 0.65>,
      <-0.4, -0.65, -0.65>
      rotate <lg_angle*180/pi, 0, 0>
     }
     box {
      <0.4, 0, 0.65>,
      <-0.4, 0.65, -0.65>
      rotate <-lg_angle*180/pi, 0, 0>
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88
   }
   cone {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>, 0.88
    <LG_BRICK_WIDTH/2-0.2, 0, 0>, 0.76
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.88
    <-LG_BRICK_WIDTH/2+0.24, 0, 0>, 0.76
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.76
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.59
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.59+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.04-LG_E, 0, 0>,
    0.59+LG_CORNER_SPACE
   }
  }
  translate <-0.02, 0, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.59+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.59+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>
 }
}

#end
