/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990823 Lutz Uhlmann                                                       */
/* 20050212 Lars C. Hassing   Corrected crossaxle hole depth                   */
/* 20080201 Lutz Uhlmann added support in cornerhole                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32140: Technic Liftarm 2 x 4 L-Shape                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32140)
#else
#declare lg_angle1=atan2(LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE,0.38-LG_CORNER_SPACE);
#declare lg_32140 =
union {
 union {
  difference {
   union {
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
     <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -0.04>
    }
   }
   union {
    #declare HOLE=0;
    #while (HOLE < 2+LG_E)
     union {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, LG_BRICK_WIDTH/2-0.08>,
        0.3
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2+0.08>,
       0.3
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2+LG_E>,
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
     }
     #declare HOLE = HOLE + 1;
    #end
   }
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  #declare HOLE=0;
  #while (HOLE < 2)
   union {
    torus {
     0.3+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    torus {
     0.3+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    torus {
     0.36-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    torus {
     0.36-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    difference {
     union {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       0.36-LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.36
      }
     }
     union {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, LG_BRICK_WIDTH/2-0.08>,
       0.3
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2+0.08>,
       0.3
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2+LG_E>,
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
     }
    }
    translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
   }
   #declare HOLE = HOLE + 1;
  #end
  union {
   difference {
    union {
     difference {
      union {
       cylinder {
        <0, 0, LG_BRICK_WIDTH/2>,
        <0, 0, -LG_BRICK_WIDTH/2>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
       }
      }
      box {
       <-LG_E, 0.5, 0.5>,
       <-0.5, -0.5, -0.5>
      }
     }
     difference {
      union {
       difference {
        union {
         cylinder {
          <0, 0, LG_BRICK_WIDTH/2>,
          <0, 0, -LG_BRICK_WIDTH/2>,
          0.38-LG_CORNER_SPACE
         }
         cylinder {
          <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          0.38
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2, 0.5>
          <0, -LG_CROSSAXLE_WIDTH/2, -0.5>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.5>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.5>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
         }
        }
       }
       difference {
        union {
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
         }
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH, 0.5>
          <0, 0, -0.5>
          rotate <0, 0, lg_angle1*180/pi>
         }
         box {
          <-0.5, -LG_CROSSAXLE_WIDTH, 0.5>
          <0, 0, -0.5>
          rotate <0, 0, -lg_angle1*180/pi>
         }
        }
       }
      }
      box {
       <LG_E, 0.5, 0.5>,
       <0.5, -0.5, -0.5>
      }
     }
    }
    union {
     cylinder {
      <0, 0, 0.5>,
      <0, 0, -0.5>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, 0.5>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.5>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
      translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
    }
    box {
     <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.5>
     <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, 0.5>
    }
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     translate <0, 0, LG_BRICK_WIDTH/2>
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   translate <LG_BRICK_WIDTH, 0, 0>
  }
 }
 union {
  difference {
   union {
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
     <0, -LG_BRICK_WIDTH/2+LG_E, -0.04>
    }
   }
   union {
    #declare HOLE=-1;
    #while (HOLE < 1+LG_E)
     union {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, LG_BRICK_WIDTH/2-0.08>,
        0.3
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2+0.08>,
       0.3
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2+LG_E>,
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
     }
     #declare HOLE = HOLE + 1;
    #end
   }
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }

  union {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.36
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
    }
   }
   translate <LG_BRICK_WIDTH, 0, 0>
  }
  difference {
   union {
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_BRICK_WIDTH/2
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
   }
   union {
    box {
     <-LG_E, 0.5, 0.5>,
     <-0.5, -0.5, -0.5>
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2+LG_E>,
     <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
     0.3+LG_CORNER_SPACE
    }
   }
   translate <LG_BRICK_WIDTH, 0, 0>
  }
  matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
  rotate <0, 0, 90>
  translate <-2*LG_BRICK_WIDTH,0,0>
 }
 union {
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
   0.36-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
   0.36-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  difference {
   union {
    difference {
     union {
      torus {
       0.4-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <90,0,0>
       translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
      }
      torus {
       0.4-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <90,0,0>
       translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       0.4-LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.4
      }
     }
     union {
      box {
       <LG_E, 0.5, 0.5>,
       <0.5, -0.5, -0.5>
      }
      box {
       <-LG_E, 0.5, 0.5>,
       <-0.5, -0.5, -0.5>
       rotate <0, 0, 90>
      }
     }
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2>,
     0.36-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     0.36
    }
   }
   union {
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, LG_BRICK_WIDTH/2-0.08>,
     0.3
    }
    cylinder {
     <0, 0, -LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2+0.08>,
     0.3
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2+LG_E>,
     <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
     <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     0.3+LG_CORNER_SPACE
    }
   }
  }
  translate <-2*LG_BRICK_WIDTH, 0, 0>
 }
 union {
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-0.04, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  box {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2>
  }
  rotate <0, 0, 45>
  translate <-LG_BRICK_WIDTH, 0, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#declare lg_32140_clear =
merge {
 merge {
  difference {
   merge {
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
     <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -0.04>
    }
   }
   union {
    #declare HOLE=0;
    #while (HOLE < 2+LG_E)
     union {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, LG_BRICK_WIDTH/2-0.08>,
        0.3
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2+0.08>,
       0.3
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2+LG_E>,
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
     }
     #declare HOLE = HOLE + 1;
    #end
   }
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  #declare HOLE=0;
  #while (HOLE < 2)
   merge {
    torus {
     0.3+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    torus {
     0.3+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    torus {
     0.36-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    torus {
     0.36-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    difference {
     merge {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       0.36-LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.36
      }
     }
     union {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, LG_BRICK_WIDTH/2-0.08>,
       0.3
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2+0.08>,
       0.3
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2+LG_E>,
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
     }
    }
    translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
   }
   #declare HOLE = HOLE + 1;
  #end
  merge {
   difference {
    merge {
     difference {
      merge {
       cylinder {
        <0, 0, LG_BRICK_WIDTH/2>,
        <0, 0, -LG_BRICK_WIDTH/2>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
        <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
        LG_BRICK_WIDTH/2
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
       }
       torus {
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90,0,0>
        translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
       }
      }
      box {
       <-LG_E, 0.5, 0.5>,
       <-0.5, -0.5, -0.5>
      }
     }
     difference {
      union {
       difference {
        union {
         cylinder {
          <0, 0, LG_BRICK_WIDTH/2>,
          <0, 0, -LG_BRICK_WIDTH/2>,
          0.38-LG_CORNER_SPACE
         }
         cylinder {
          <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
          <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
          0.38
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2, 0.5>
          <0, -LG_CROSSAXLE_WIDTH/2, -0.5>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.5>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
         }
         box {
          <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.5>
          <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
         }
        }
       }
       difference {
        union {
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
         }
         torus {
          0.38-LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <90,0,0>
          translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
         }
        }
        union {
         box {
          <-0.5, LG_CROSSAXLE_WIDTH, 0.5>
          <0, 0, -0.5>
          rotate <0, 0, lg_angle1*180/pi>
         }
         box {
          <-0.5, -LG_CROSSAXLE_WIDTH, 0.5>
          <0, 0, -0.5>
          rotate <0, 0, -lg_angle1*180/pi>
         }
        }
       }
      }
      box {
       <LG_E, 0.5, 0.5>,
       <0.5, -0.5, -0.5>
      }
     }
    }
    union {
     cylinder {
      <0, 0, 0.5>,
      <0, 0, -0.5>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, 0.5>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.5>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
      translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
    }
    box {
     <-0.5, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.5>
     <0, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, 0.5>
    }
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.38-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     translate <0, 0, LG_BRICK_WIDTH/2>
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   translate <LG_BRICK_WIDTH, 0, 0>
  }
 }
 merge {
  difference {
   merge {
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
    }
    box {
     <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
     <0, -LG_BRICK_WIDTH/2+LG_E, -0.04>
    }
   }
   union {
    #declare HOLE=-1;
    #while (HOLE < 1+LG_E)
     union {
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, LG_BRICK_WIDTH/2-0.08>,
        0.3
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2+0.08>,
       0.3
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2+LG_E>,
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.3+LG_CORNER_SPACE
      }
      translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
     }
     #declare HOLE = HOLE + 1;
    #end
   }
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }

  merge {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.36
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
    }
   }
   translate <LG_BRICK_WIDTH, 0, 0>
  }
  difference {
   merge {
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     LG_BRICK_WIDTH/2
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90,0,0>
     translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
    }
   }
   union {
    box {
     <-LG_E, 0.5, 0.5>,
     <-0.5, -0.5, -0.5>
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2+LG_E>,
     <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
     0.3+LG_CORNER_SPACE
    }
   }
   translate <LG_BRICK_WIDTH, 0, 0>
  }
  matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
  rotate <0, 0, 90>
  translate <-2*LG_BRICK_WIDTH,0,0>
 }
 merge {
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  torus {
   0.36-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  torus {
   0.36-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
   translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  difference {
   merge {
    difference {
     merge {
      torus {
       0.4-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <90,0,0>
       translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
      }
      torus {
       0.4-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <90,0,0>
       translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2>,
       <0, 0, -LG_BRICK_WIDTH/2>,
       0.4-LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
       <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
       0.4
      }
     }
     union {
      box {
       <LG_E, 0.5, 0.5>,
       <0.5, -0.5, -0.5>
      }
      box {
       <-LG_E, 0.5, 0.5>,
       <-0.5, -0.5, -0.5>
       rotate <0, 0, 90>
      }
     }
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2>,
     0.36-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     0.36
    }
   }
   union {
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2>,
     <0, 0, LG_BRICK_WIDTH/2-0.08>,
     0.3
    }
    cylinder {
     <0, 0, -LG_BRICK_WIDTH/2>,
     <0, 0, -LG_BRICK_WIDTH/2+0.08>,
     0.3
    }
    cylinder {
     <0, 0, LG_BRICK_WIDTH/2+LG_E>,
     <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
     <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
     0.3+LG_CORNER_SPACE
    }
   }
  }
  translate <-2*LG_BRICK_WIDTH, 0, 0>
 }
 merge {
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-0.04, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  box {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2>
  }
  rotate <0, 0, 45>
  translate <-LG_BRICK_WIDTH, 0, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#end
