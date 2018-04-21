/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081116 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30553: Hinge Arm Locking with Double Finger and Axlehole                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30553)
#else
#declare lg_angle1=atan2(0.16, 0.06);
#declare lg_angle2=atan2(0.6, 0.08);
#declare lg_30553 =
union {
 intersection {
  union {
   #declare MIR = 0;
   #while (MIR < 2)
    difference {
     // hinge double finger locking
     union {
      torus {
       LG_KNOB_RADIUS-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
      }
      torus {
       LG_KNOB_RADIUS-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
      }
      cylinder {
       <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
       <0.36, -LG_BRICK_WIDTH/2, 0>,
       LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
       <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH, LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_RADIUS>
      }
      cone {
       <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
       <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
      }
     }
     union {
      #declare ROT = -5;
      #while (ROT < 5)
       union {
        cylinder {
         <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
         <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
         0.04
        }
        difference {
         cylinder {
          <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
          <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
          0.04+LG_CORNER_SPACE
         }
         torus {
          0.04+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         }
        }
        difference {
         cylinder {
          <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
          <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
          0.04+LG_CORNER_SPACE
         }
         torus {
          0.04+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         }
        }
        rotate <(ROT+0.5)*90/4, 0, 0>
        translate <0, -LG_BRICK_WIDTH/2, 0>
       }
       #declare ROT = ROT + 1;
      #end
     }
     #if (MIR = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
     rotate <0, 0, 90>
    }
    #declare MIR = MIR + 1;
   #end
  }
  difference {
   cylinder {
    <LG_BRICK_WIDTH, 0, 0>,
    <-LG_CORNER_SPACE-LG_E, 0, 0>,
    0.36
   }
   cylinder {
    <0, 0, 0>,
    <-LG_CORNER_SPACE-2*LG_E, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   cylinder {
    <0, 0, 0>,
    <-LG_BRICK_WIDTH, 0, 0>,
    0.36-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 0, 0>,
    <-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
  }
  union {
   cylinder {
    <LG_E, 0, 0>,
    <-LG_BRICK_WIDTH, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH-LG_E, 0, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH-0.06, LG_BRICK_WIDTH/2, 0>,
    <-LG_WALL_WIDTH-0.06, -LG_BRICK_WIDTH/2, 0>,
    0.06
   }
   cylinder {
    <-4*LG_WALL_WIDTH+0.06, LG_BRICK_WIDTH/2, 0>,
    <-4*LG_WALL_WIDTH+0.06, -LG_BRICK_WIDTH/2, 0>,
    0.06
   }
   box {
    <-LG_WALL_WIDTH-0.06, LG_BRICK_WIDTH/2, -0.06>,
    <-4*LG_WALL_WIDTH+0.06, -LG_BRICK_WIDTH/2, 0.06>
   }
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS , LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0, LG_CROSSAXLE_WIDTH/2, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0, LG_KNOB_RADIUS , LG_CROSSAXLE_WIDTH/2>    
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_KNOB_RADIUS , LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>    
     }
     rotate <ROT*90, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <LG_E, 0, 0>,
   <-LG_BRICK_WIDTH-LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
}

#declare lg_30553_clear =
merge {
 intersection {
  merge {
   #declare MIR = 0;
   #while (MIR < 2)
    difference {
     // hinge double finger locking
     union {
      torus {
       LG_KNOB_RADIUS-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
      }
      torus {
       LG_KNOB_RADIUS-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
      }
      cylinder {
       <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
       <0.36, -LG_BRICK_WIDTH/2, 0>,
       LG_KNOB_RADIUS-LG_CORNER_SPACE
      }
      cylinder {
       <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
       LG_KNOB_RADIUS
      }
      cylinder {
       <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH, LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_RADIUS>
      }
      cone {
       <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
       <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
      }
     }
     union {
      #declare ROT = -5;
      #while (ROT < 5)
       union {
        cylinder {
         <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
         <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
         0.04
        }
        difference {
         cylinder {
          <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
          <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
          0.04+LG_CORNER_SPACE
         }
         torus {
          0.04+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         }
        }
        difference {
         cylinder {
          <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
          <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
          0.04+LG_CORNER_SPACE
         }
         torus {
          0.04+LG_CORNER_SPACE,
          LG_CORNER_SPACE
          rotate <0, 0, 90>
          translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         }
        }
        rotate <(ROT+0.5)*90/4, 0, 0>
        translate <0, -LG_BRICK_WIDTH/2, 0>
       }
       #declare ROT = ROT + 1;
      #end
     }
     #if (MIR = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
     rotate <0, 0, 90>
    }
    #declare MIR = MIR + 1;
   #end
  }
  difference {
   cylinder {
    <LG_BRICK_WIDTH, 0, 0>,
    <-LG_CORNER_SPACE-LG_E, 0, 0>,
    0.36
   }
   cylinder {
    <0, 0, 0>,
    <-LG_CORNER_SPACE-2*LG_E, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   cylinder {
    <0, 0, 0>,
    <-LG_BRICK_WIDTH, 0, 0>,
    0.36-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 0, 0>,
    <-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
  }
  union {
   cylinder {
    <LG_E, 0, 0>,
    <-LG_BRICK_WIDTH, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH-LG_E, 0, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH-0.06, LG_BRICK_WIDTH/2, 0>,
    <-LG_WALL_WIDTH-0.06, -LG_BRICK_WIDTH/2, 0>,
    0.06
   }
   cylinder {
    <-4*LG_WALL_WIDTH+0.06, LG_BRICK_WIDTH/2, 0>,
    <-4*LG_WALL_WIDTH+0.06, -LG_BRICK_WIDTH/2, 0>,
    0.06
   }
   box {
    <-LG_WALL_WIDTH-0.06, LG_BRICK_WIDTH/2, -0.06>,
    <-4*LG_WALL_WIDTH+0.06, -LG_BRICK_WIDTH/2, 0.06>
   }
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS , LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0, LG_CROSSAXLE_WIDTH/2, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0, LG_KNOB_RADIUS , LG_CROSSAXLE_WIDTH/2>    
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_KNOB_RADIUS , LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>    
     }
     rotate <ROT*90, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <LG_E, 0, 0>,
   <-LG_BRICK_WIDTH-LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
}

#end
