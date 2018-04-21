/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981204 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2825: Technic Liftarm 1 x 4                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2825)
#else
#declare lg_angle=atan2(LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE,0.38-LG_CORNER_SPACE);
#declare lg_2825 =
union {
 difference {
  union {
   cylinder {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
   }
   box {
    <0.3, 0.3, 0.04>,
    <-0.3, -0.3, -0.04>
   }
  }
  union {
   #declare HOLE_X = -0.5;
   #while (HOLE_X < 1)
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, LG_BRICK_WIDTH/4-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4+LG_E>,
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE_X = HOLE_X + 1;
   #end
  }
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare HOLE_X = -0.5;
 #while (HOLE_X < 1)
  union {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      0.36
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, LG_BRICK_WIDTH/4-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4+LG_E>,
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
    }
    }
   translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X = HOLE_X + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   difference {
    union {
     difference {
      union {
       cylinder {
        <0, 0, LG_BRICK_WIDTH/4>,
        <0, 0, -LG_BRICK_WIDTH/4>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
        <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
       }
      }
      box {
       <-LG_E, 0.5, 0.3>,
       <-0.5, -0.5, -0.3>
      }
     }
     difference {
      union {
       difference {
        union {
         cylinder {
          <0, 0, LG_BRICK_WIDTH/4>,
          <0, 0, -LG_BRICK_WIDTH/4>,
          0.38-LG_CORNER_SPACE
         }
         cylinder {
          <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
          <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
          0.38
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2, 0.3>
          <0, -LG_CROSSAXLE_WIDTH/2, -0.3>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.3>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.3>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
         }
        }
       }
       difference {
        union {
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
         }
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH, 0.3>
          <0, 0, -0.3>
          rotate <0, 0, lg_angle*180/pi>
         }
         box {
          <-0.5, -LG_CROSSAXLE_WIDTH, 0.3>
          <0, 0, -0.3>
          rotate <0, 0, -lg_angle*180/pi>
         }
        }
       }
      }
      box {
       <LG_E, 0.5, 0.3>,
       <0.5, -0.5, -0.3>
      }
     }
    }
    union {
     cylinder {
      <0, 0, 0.3>,
      <0, 0, -0.3>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, 0.3>,
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.3>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    union {
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
    }
    box {
     <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.3>
     <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, 0.3>
    }
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     translate <0, 0, LG_BRICK_WIDTH/4>
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   translate <1.5*LG_BRICK_WIDTH, 0, 0>
   #if (MIR = 1)
    matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE-LG_E>,
     <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E>
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, -2*LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
  translate <1.5*LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/4>
 }
 translate <-1.5*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/4>
}

#declare lg_2825_clear =
merge {
 difference {
  merge {
   cylinder {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
   }
   box {
    <0.3, 0.3, 0.04>,
    <-0.3, -0.3, -0.04>
   }
  }
  union {
   #declare HOLE_X = -0.5;
   #while (HOLE_X < 1)
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, LG_BRICK_WIDTH/4-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4+LG_E>,
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE_X = HOLE_X + 1;
   #end
  }
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare HOLE_X = -0.5;
 #while (HOLE_X < 1)
  merge {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      0.36
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4>,
      <0, 0, LG_BRICK_WIDTH/4-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4>,
      <0, 0, -LG_BRICK_WIDTH/4+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/4+LG_E>,
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/4-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
    }
    }
   translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X = HOLE_X + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   difference {
    merge {
     difference {
      merge {
       cylinder {
        <0, 0, LG_BRICK_WIDTH/4>,
        <0, 0, -LG_BRICK_WIDTH/4>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
        <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
       }
      }
      box {
       <-LG_E, 0.5, 0.3>,
       <-0.5, -0.5, -0.3>
      }
     }
     difference {
      merge {
       difference {
        merge {
         cylinder {
          <0, 0, LG_BRICK_WIDTH/4>,
          <0, 0, -LG_BRICK_WIDTH/4>,
          0.38-LG_CORNER_SPACE
         }
         cylinder {
          <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
          <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
          0.38
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2, 0.3>
          <0, -LG_CROSSAXLE_WIDTH/2, -0.3>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.3>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.3>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
         }
        }
       }
       difference {
        merge {
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
         }
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH, 0.3>
          <0, 0, -0.3>
          rotate <0, 0, lg_angle*180/pi>
         }
         box {
          <-0.5, -LG_CROSSAXLE_WIDTH, 0.3>
          <0, 0, -0.3>
          rotate <0, 0, -lg_angle*180/pi>
         }
        }
       }
      }
      box {
       <LG_E, 0.5, 0.3>,
       <0.5, -0.5, -0.3>
      }
     }
    }
    union {
     cylinder {
      <0, 0, 0.3>,
      <0, 0, -0.3>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, 0.3>,
      <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.3>,
      <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    merge {
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <0, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <0, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
    }
    box {
     <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.3>
     <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, 0.3>
    }
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     translate <0, 0, LG_BRICK_WIDTH/4>
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   translate <1.5*LG_BRICK_WIDTH, 0, 0>
   #if (MIR = 1)
    matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  merge {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE-LG_E>,
     <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E>
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
  merge {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, -2*LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
  translate <1.5*LG_BRICK_WIDTH, 0, LG_BRICK_WIDTH/4>
 }
 translate <-1.5*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/4>
}

#end
