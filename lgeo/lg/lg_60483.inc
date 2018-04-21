/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 60080710 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_60483: Technic Liftarm 1 x 2 with Hole and Axlehole                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_60483)
#else
#declare lg_angle=atan2(LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE,0.38-LG_CORNER_SPACE);
#declare lg_60483 =
union {
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
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
 cylinder {
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
      <LG_E, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E>
      <LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E>
     }
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
 }
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
         rotate <0, 0, lg_angle*180/pi>
        }
        box {
         <-0.5, -LG_CROSSAXLE_WIDTH, 0.5>
         <0, 0, -0.5>
         rotate <0, 0, -lg_angle*180/pi>
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
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#declare lg_60483_clear =
merge {
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
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
 cylinder {
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
      <LG_E, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E>
      <LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E>
     }
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
 }
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
         rotate <0, 0, lg_angle*180/pi>
        }
        box {
         <-0.5, -LG_CROSSAXLE_WIDTH, 0.5>
         <0, 0, -0.5>
         rotate <0, 0, -lg_angle*180/pi>
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
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.24, -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.24, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-(0.38-LG_CORNER_SPACE)*cos(lg_angle), -LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#end
