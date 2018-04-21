/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981204 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32056: Technic Liftarm 3 x 3 L-Shape                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32056)
#else
#declare lg_angle=atan2(LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE,0.38-LG_CORNER_SPACE);
#declare lg_32056 =
union {
 #declare SIDE = 0;
 #while (SIDE < 2)
  union {
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
     }
     #if (SIDE = 1)
      box {
       <LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E, 0.3, 0.04>,
       <0, -0.3, -0.04>
      }
     #end
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
   cylinder {
    <0.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
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
   }
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
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, -LG_BRICK_WIDTH, 0, 0>
   }
   translate <-LG_BRICK_WIDTH, 0, 0>
   #if (SIDE = 1)
    matrix <0,1,0,1,0,0,0,0,1,0,0,0>
   #end
   }
  #declare SIDE = SIDE + 1;
 #end
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
     union {
      box {
       <-LG_E, 0.5, 0.3>,
       <-0.5, -0.5, -0.3>
      }
      box {
       <-2*LG_E, -LG_E, 0.3>,
       <0.5, -0.5, -0.3>
      }
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
      <0.5, 0, -0.3>
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
 }
 union {
  box {
   <0.05-LG_CORNER_SPACE, 0.05, LG_BRICK_WIDTH/4>,
   <-0.05+LG_CORNER_SPACE, -0.05, -LG_BRICK_WIDTH/4>
  }
  box {
   <0.05, 0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   <-0.05, -0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
  }
  cylinder {
   <0.05-LG_CORNER_SPACE, 0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   <0.05-LG_CORNER_SPACE, -0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.05+LG_CORNER_SPACE, 0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   <-0.05+LG_CORNER_SPACE, -0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.05-LG_CORNER_SPACE, 0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   <0.05-LG_CORNER_SPACE, -0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.05+LG_CORNER_SPACE, 0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   <-0.05+LG_CORNER_SPACE, -0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  rotate <0, 0, -45>
  translate <-0.3*LG_BRICK_WIDTH, -0.3*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_32056_clear =
merge {
 #declare SIDE = 0;
 #while (SIDE < 2)
  merge {
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
     }
     box {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
     }
     #if (SIDE = 1)
      box {
       <LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E, 0.3, 0.04>,
       <0, -0.3, -0.04>
      }
     #end
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
   cylinder {
    <0.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
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
   }
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
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, -LG_BRICK_WIDTH, 0, 0>
   }
   translate <-LG_BRICK_WIDTH, 0, 0>
   #if (SIDE = 1)
    matrix <0,1,0,1,0,0,0,0,1,0,0,0>
   #end
   }
  #declare SIDE = SIDE + 1;
 #end
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
     union {
      box {
       <-LG_E, 0.5, 0.3>,
       <-0.5, -0.5, -0.3>
      }
      box {
       <-2*LG_E, -LG_E, 0.3>,
       <0.5, -0.5, -0.3>
      }
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
      <0.5, 0, -0.3>
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
 }
 merge {
  box {
   <0.05-LG_CORNER_SPACE, 0.05, LG_BRICK_WIDTH/4>,
   <-0.05+LG_CORNER_SPACE, -0.05, -LG_BRICK_WIDTH/4>
  }
  box {
   <0.05, 0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   <-0.05, -0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
  }
  cylinder {
   <0.05-LG_CORNER_SPACE, 0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   <0.05-LG_CORNER_SPACE, -0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.05+LG_CORNER_SPACE, 0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   <-0.05+LG_CORNER_SPACE, -0.05, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.05-LG_CORNER_SPACE, 0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   <0.05-LG_CORNER_SPACE, -0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.05+LG_CORNER_SPACE, 0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   <-0.05+LG_CORNER_SPACE, -0.05, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  rotate <0, 0, -45>
  translate <-0.3*LG_BRICK_WIDTH, -0.3*LG_BRICK_WIDTH, 0>
 }
}


#end
