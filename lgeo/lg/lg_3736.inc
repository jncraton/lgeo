/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990104 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3736: Technic Large Steering Wheel (Pulley)                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3736)
#else
#declare lg_3736 =
union {
 intersection {
  union {
   cone {
    <0, 0, 0>, 1.6
    <0, 0, 0.1>, 1.8
   }
   cone {
    <0, 0, 0>, 1.6
    <0, 0, -0.1>, 1.8
   }
   cylinder {
    <0, 0, 0.1>,
    <0, 0, -0.1>,
    1.7
   }
   cylinder {
    <0, 0, 0.08>,
    <0, 0, 0.3>,
    2
   }
   cylinder {
    <0, 0, -0.08>,
    <0, 0, -0.3>,
    2
   }
  }
  union {
   torus {
    1.7,
    0.2
    rotate <90, 0, 0>
   }
   #declare MIR = 0;
   #while (MIR < 2)
    difference {
     union {
      difference {
       difference {
        torus {
         0.3,
         0.2
         rotate <90, 0, 0>
        }
        union {
         box {
          <0, 0.6, 0.3>,
          <0.6, -0.6, -0.3>
         }
         box {
          <0, 0.6, 0.3>,
          <0.6, -0.6, -0.3>
          rotate <0, 0, -30>
         }
        }
        translate <0, 1.4, 0>
        rotate <0, 0, -18>
       }
       box {
        <0, 2, 0.3>,
        <-0.5, 1.2, -0.3>
       }
      }
      difference {
       difference {
        torus {
         0.3,
         0.2
         rotate <90, 0, 0>
        }
        union {
         box {
          <0, 0.6, 0.3>,
          <-0.6, -0.6, -0.3>
         }
         box {
          <0, 0.6, 0.3>,
          <-0.6, -0.6, -0.3>
          rotate <0, 0, 30>
         }
        }
        translate <0, 1.4, 0>
        rotate <0, 0, 18>
       }
       box {
        <0, 2, 0.3>,
        <0.5, 1.2, -0.3>
       }
      }
      difference {
       intersection {
        box {
         <0.3, 1.7, 0.2>,
         <-0.3, 1.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.2>
        }
        cylinder {
         <0, 0, 0.3>,
         <0, 0, -0.3>,
         1.7
        }
       }
       union {
        cylinder {
         <0, 1.4, 0.3>,
         <0, 1.4, -0.3>,
         0.3
         rotate <0, 0, 18>
        }
        cylinder {
         <0, 1.4, 0.3>,
         <0, 1.4, -0.3>,
         0.3
         rotate <0, 0, -18>
        }
       }
      }
     }
     union {
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, 0.3>,
       <0, 1.5*LG_BRICK_WIDTH, -0.3>,
       LG_KNOB_RADIUS+LG_E
      }
      box {
       <0.5, 1.6*LG_BRICK_WIDTH, 0.3>,
       <-0.5, LG_BRICK_WIDTH, -0.3>
      }
     }
     #if (MIR = 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
     #end
    }
    #declare MIR = MIR + 1;
   #end
  }
 }
 difference {
  union {
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
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
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
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
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
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <0.08, 1.5*LG_BRICK_WIDTH, 0.2>,
    <-0.08, -1.5*LG_BRICK_WIDTH, -0.2>
   }
   cylinder {
    <0.08, 1.5*LG_BRICK_WIDTH, 0>,
    <0.08, -1.5*LG_BRICK_WIDTH, 0>,
    0.2
   }
   cylinder {
    <-0.08, 1.5*LG_BRICK_WIDTH, 0>,
    <-0.08, -1.5*LG_BRICK_WIDTH, 0>,
    0.2
   }
  }
  union {
   box {
    <0.04, 4*LG_WALL_WIDTH, 0.5>,
    <-0.04, -4*LG_WALL_WIDTH, -0.5>
   }
   cylinder {
    <0, 4*LG_WALL_WIDTH, 0.5>,
    <0, 4*LG_WALL_WIDTH, -0.5>,
    0.04
   }
   cylinder {
    <0, -4*LG_WALL_WIDTH, 0.5>,
    <0, -4*LG_WALL_WIDTH, -0.5>,
    0.04
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0.3>,
    <0, 1.5*LG_BRICK_WIDTH, -0.3>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <0, -1.5*LG_BRICK_WIDTH, 0.3>,
    <0, -1.5*LG_BRICK_WIDTH, -0.3>,
    LG_KNOB_RADIUS+LG_E
   }
  }
 }
 #declare MIR = -1.5;
 #while (MIR < 2)
  difference {
   union {
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
     0.3-LG_CORNER_SPACE
    }
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     0.3
    }
   }
   union {
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_E>,
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
  }
  torus {
   LG_KNOB_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  #declare MIR = MIR + 3;
 #end
 rotate <0, 90, 0>
}

#declare lg_3736_clear =
merge {
 intersection {
  merge {
   cone {
    <0, 0, 0>, 1.6
    <0, 0, 0.1>, 1.8
   }
   cone {
    <0, 0, 0>, 1.6
    <0, 0, -0.1>, 1.8
   }
   cylinder {
    <0, 0, 0.1>,
    <0, 0, -0.1>,
    1.7
   }
   cylinder {
    <0, 0, 0.08>,
    <0, 0, 0.3>,
    2
   }
   cylinder {
    <0, 0, -0.08>,
    <0, 0, -0.3>,
    2
   }
  }
  merge {
   torus {
    1.7,
    0.2
    rotate <90, 0, 0>
   }
   #declare MIR = 0;
   #while (MIR < 2)
    difference {
     merge {
      difference {
       difference {
        torus {
         0.3,
         0.2
         rotate <90, 0, 0>
        }
        union {
         box {
          <0, 0.6, 0.3>,
          <0.6, -0.6, -0.3>
         }
         box {
          <0, 0.6, 0.3>,
          <0.6, -0.6, -0.3>
          rotate <0, 0, -30>
         }
        }
        translate <0, 1.4, 0>
        rotate <0, 0, -18>
       }
       box {
        <0, 2, 0.3>,
        <-0.5, 1.2, -0.3>
       }
      }
      difference {
       difference {
        torus {
         0.3,
         0.2
         rotate <90, 0, 0>
        }
        union {
         box {
          <0, 0.6, 0.3>,
          <-0.6, -0.6, -0.3>
         }
         box {
          <0, 0.6, 0.3>,
          <-0.6, -0.6, -0.3>
          rotate <0, 0, 30>
         }
        }
        translate <0, 1.4, 0>
        rotate <0, 0, 18>
       }
       box {
        <0, 2, 0.3>,
        <0.5, 1.2, -0.3>
       }
      }
      difference {
       intersection {
        box {
         <0.3, 1.7, 0.2>,
         <-0.3, 1.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, -0.2>
        }
        cylinder {
         <0, 0, 0.3>,
         <0, 0, -0.3>,
         1.7
        }
       }
       union {
        cylinder {
         <0, 1.4, 0.3>,
         <0, 1.4, -0.3>,
         0.3
         rotate <0, 0, 18>
        }
        cylinder {
         <0, 1.4, 0.3>,
         <0, 1.4, -0.3>,
         0.3
         rotate <0, 0, -18>
        }
       }
      }
     }
     union {
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, 0.3>,
       <0, 1.5*LG_BRICK_WIDTH, -0.3>,
       LG_KNOB_RADIUS+LG_E
      }
      box {
       <0.5, 1.6*LG_BRICK_WIDTH, 0.3>,
       <-0.5, LG_BRICK_WIDTH, -0.3>
      }
     }
     #if (MIR = 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
     #end
    }
    #declare MIR = MIR + 1;
   #end
  }
 }
 difference {
  merge {
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
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
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
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
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
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <0.08, 1.5*LG_BRICK_WIDTH, 0.2>,
    <-0.08, -1.5*LG_BRICK_WIDTH, -0.2>
   }
   cylinder {
    <0.08, 1.5*LG_BRICK_WIDTH, 0>,
    <0.08, -1.5*LG_BRICK_WIDTH, 0>,
    0.2
   }
   cylinder {
    <-0.08, 1.5*LG_BRICK_WIDTH, 0>,
    <-0.08, -1.5*LG_BRICK_WIDTH, 0>,
    0.2
   }
  }
  union {
   box {
    <0.04, 4*LG_WALL_WIDTH, 0.5>,
    <-0.04, -4*LG_WALL_WIDTH, -0.5>
   }
   cylinder {
    <0, 4*LG_WALL_WIDTH, 0.5>,
    <0, 4*LG_WALL_WIDTH, -0.5>,
    0.04
   }
   cylinder {
    <0, -4*LG_WALL_WIDTH, 0.5>,
    <0, -4*LG_WALL_WIDTH, -0.5>,
    0.04
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0.3>,
    <0, 1.5*LG_BRICK_WIDTH, -0.3>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <0, -1.5*LG_BRICK_WIDTH, 0.3>,
    <0, -1.5*LG_BRICK_WIDTH, -0.3>,
    LG_KNOB_RADIUS+LG_E
   }
  }
 }
 #declare MIR = -1.5;
 #while (MIR < 2)
  difference {
   merge {
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
     0.3-LG_CORNER_SPACE
    }
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     0.3
    }
   }
   union {
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT+LG_E>,
     <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
     <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
  }
  torus {
   LG_KNOB_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, MIR*LG_BRICK_WIDTH, 0>
   translate <0, MIR*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  #declare MIR = MIR + 3;
 #end
 rotate <0, 90, 0>
}

#end
