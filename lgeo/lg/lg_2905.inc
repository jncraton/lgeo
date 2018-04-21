/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981224 Lutz Uhlmann                                                       */
/* 20020113 Lars C. Hassing   Fixed orientation (rotate <0,0,-90>)             */
/* 20070902 Lutz Uhlmann      Fixed edge cylinders on angled section           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2905: Technic Triangle                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2905)
#else
#declare lg_angle1=atan2(LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE,0.38-LG_CORNER_SPACE);
#declare lg_angle2=pi/8;
#declare lg_2905 =
union {
 difference {
  union {
   cylinder {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
   }
   box {
    <3*LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0.04>,
    <-3*LG_WALL_WIDTH, -2*LG_WALL_WIDTH-LG_E, -0.04>
   }
  }
  union {
   #declare HOLE = -1;
   #while (HOLE < 2)
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
     translate <HOLE*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE = HOLE +1;
   #end
  }
 }
 cylinder {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare HOLE = -1;
 #while (HOLE < 2)
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
   translate <HOLE*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE = HOLE +1;
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
          rotate <0, 0, lg_angle1*180/pi>
         }
         box {
          <-0.5, -LG_CROSSAXLE_WIDTH, 0.3>
          <0, 0, -0.3>
          rotate <0, 0, -lg_angle1*180/pi>
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
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
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
   difference {
    union {
     union {
      box {
       <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
      }
      box {
       <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, lg_angle2*180/pi>
     }
     difference {
      box {
       <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.04>,
       <-2*LG_BRICK_WIDTH-LG_E, -1.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.04>
      }
      box {
       <0, -1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
       rotate <0, 0, lg_angle2*180/pi>
      }
     }
     box {
      <-1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
     box {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4>
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     #declare HOLE = -2;
     #while (HOLE < 0)
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
       translate <-2*LG_BRICK_WIDTH, HOLE*LG_BRICK_WIDTH, 0>
      }
      #declare HOLE = HOLE +1;
     #end
    }
   }
   translate <2*LG_BRICK_WIDTH, 0, 0>
   #if (MIR = 1)
    matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <0.3, -2*LG_BRICK_WIDTH+0.3, 0.04>,
  <-0.3, -LG_BRICK_WIDTH-0.3, -0.04>
 }
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
  union {
   box {
    <0.5, LG_E, 0.3>,
    <-0.5, 0.5, -0.3>
   }
   cylinder {
    <0, 0, 0.3>,
    <0, 0, -0.3>,
    0.3+LG_CORNER_SPACE
   }
  }
  translate <0, -2*LG_BRICK_WIDTH, 0>
 }
 #declare HOLE = -2;
 #while (HOLE < 0)
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
   translate <0, HOLE*LG_BRICK_WIDTH, 0>
  }
  #declare HOLE = HOLE +1;
 #end
 rotate <0,0,-90>
}

#declare lg_2905_clear =
merge {
 difference {
  merge {
   cylinder {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
    <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
   }
   box {
    <3*LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0.04>,
    <-3*LG_WALL_WIDTH, -2*LG_WALL_WIDTH-LG_E, -0.04>
   }
  }
  union {
   #declare HOLE = -1;
   #while (HOLE < 2)
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
     translate <HOLE*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE = HOLE +1;
   #end
  }
 }
 cylinder {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare HOLE = -1;
 #while (HOLE < 2)
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
   translate <HOLE*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE = HOLE +1;
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
          rotate <0, 0, lg_angle1*180/pi>
         }
         box {
          <-0.5, -LG_CROSSAXLE_WIDTH, 0.3>
          <0, 0, -0.3>
          rotate <0, 0, -lg_angle1*180/pi>
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
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
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
   difference {
    merge {
     merge {
      box {
       <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
      }
      box {
       <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, lg_angle2*180/pi>
     }
     difference {
      box {
       <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.04>,
       <-2*LG_BRICK_WIDTH-LG_E, -1.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.04>
      }
      box {
       <0, -1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
       <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
       rotate <0, 0, lg_angle2*180/pi>
      }
     }
     box {
      <-1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
     box {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4>
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     #declare HOLE = -2;
     #while (HOLE < 0)
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
       translate <-2*LG_BRICK_WIDTH, HOLE*LG_BRICK_WIDTH, 0>
      }
      #declare HOLE = HOLE +1;
     #end
    }
   }
   translate <2*LG_BRICK_WIDTH, 0, 0>
   #if (MIR = 1)
    matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <0.3, -2*LG_BRICK_WIDTH+0.3, 0.04>,
  <-0.3, -LG_BRICK_WIDTH-0.3, -0.04>
 }
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
  union {
   box {
    <0.5, LG_E, 0.3>,
    <-0.5, 0.5, -0.3>
   }
   cylinder {
    <0, 0, 0.3>,
    <0, 0, -0.3>,
    0.3+LG_CORNER_SPACE
   }
  }
  translate <0, -2*LG_BRICK_WIDTH, 0>
 }
 #declare HOLE = -2;
 #while (HOLE < 0)
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
   translate <0, HOLE*LG_BRICK_WIDTH, 0>
  }
  #declare HOLE = HOLE +1;
 #end
  rotate <0,0,-90>
}


#end






