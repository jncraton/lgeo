/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001111 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32271: Technic Liftarm 1 x 9 Bent Type 2 (7:3)                           */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32271)
#else
#declare lg_angle1=atan2(LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE,0.38-LG_CORNER_SPACE);
#declare lg_angle2=atan2(4,3);
#declare lg_32271 =
union {
 #declare MIR = 0;
 #while (MIR <2)
  #declare LENGTH = 5-4*MIR;
  union {
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     box {
      <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
      <-LENGTH*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -0.04>
     }
    }
    union {
     #declare HOLE=0;
     #while (HOLE < LENGTH+LG_E)
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
    <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare HOLE=0;
   #while (HOLE < LENGTH)
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
      translate <0, 0, LG_BRICK_WIDTH/2>
      rotate <0, 0, 90*ROT>
     }
     #declare ROT = ROT + 1;
    #end
    translate <LG_BRICK_WIDTH, 0, 0>
   }
   #if (MIR = 1)
    matrix <-1,0,0,0,1,0,0,0,1,-LG_BRICK_WIDTH,0,0>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-5*LG_BRICK_WIDTH,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
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
       rotate <0, 0, lg_angle2*180/pi>
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
  translate <-5*LG_BRICK_WIDTH, 0, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#declare lg_32271_clear =
merge {
 #declare MIR = 0;
 #while (MIR <2)
  #declare LENGTH = 5-4*MIR;
  merge {
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
      <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
      <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     box {
      <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
      <-LENGTH*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -0.04>
     }
    }
    union {
     #declare HOLE=0;
     #while (HOLE < LENGTH+LG_E)
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
    <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LENGTH*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare HOLE=0;
   #while (HOLE < LENGTH)
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
       merge {
        difference {
         merge {
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
         merge {
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
      translate <0, 0, LG_BRICK_WIDTH/2>
      rotate <0, 0, 90*ROT>
     }
     #declare ROT = ROT + 1;
    #end
    translate <LG_BRICK_WIDTH, 0, 0>
   }
   #if (MIR = 1)
    matrix <-1,0,0,0,1,0,0,0,1,-LG_BRICK_WIDTH,0,0>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-5*LG_BRICK_WIDTH,0,0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
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
       rotate <0, 0, lg_angle2*180/pi>
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
  translate <-5*LG_BRICK_WIDTH, 0, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#end
