/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990110 Lutz Uhlmann                                                       */
/* 20080126 Lutz Uhlmann fixed axlehole difference                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6589: Technic Gear Bevel 12 Tooth                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6589)
#else
#declare lg_6589 =
union {
 difference {
  union {
   cylinder {
    <0, 0, -0.12>,
    <0, 0, LG_E>,
    0.46-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    0.46
   }
  }
  union {
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, -0.12-LG_E>,
    0.34+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12>,
    <0, 0, 2*LG_E>,
    0.34
   }
  }
 }
 torus {
  0.34+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 } 
 torus {
  0.46-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 }
 difference {
  union {
   difference {
    union {
     cylinder {
      <0, 0, 0.28-LG_CORNER_SPACE>,
      <0, 0, 0>,
      0.36
     }
     cylinder {
      <0, 0, 0.28>,
      <0, 0, 0.2>,
      0.36-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, 0.28>,
      <0, 0, 0>,
      0.24
     }
     cylinder {
      <0, 0, 0.16-LG_CORNER_SPACE>,
      <0, 0, 0.16+LG_E>,
      0.24+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.24+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.24+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.28-LG_CORNER_SPACE>
   } 
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.28-LG_CORNER_SPACE>
   } 
   torus {
    0.24+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   intersection {
    union {
     #declare ROT2 = 0;
     #while (ROT2 < 4)
      union {
       cylinder { 
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        0.08
       }
       cylinder { 
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH>,
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
        translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       rotate <0, 0, 90*ROT2>
       translate <0, 0, 1.75*LG_WALL_WIDTH>
      }
      #declare ROT2 = ROT2 + 1;
     #end
    }
    cylinder {
     <0, 0, 0.5>,
     <0, 0, -0.5>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
   }
   difference {
    cylinder {
     <0, 0, -2*LG_CORNER_SPACE+LG_E>,
     <0, 0, LG_E>,
     0.64-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 2*LG_E>,
     <0, 0, -0.2>,
     0.36
    }
   }
  }
  union {
   box {
    <0.3, 0.04, 0.3>,
    <-0.3, -0.04, -LG_E>
   }
   box {
    <0.04, 0.3, 0.3>,
    <-0.04, -0.3, -LG_E>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <0.28, 0, -LG_E>,
      <0.28, 0, 0.3>,
      0.04
     }
     box {
      <0.28, 0.04, -LG_E>,
      <0.4, -0.04, 0.3>
     }
     rotate <0, 0, 45+90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 torus {
  0.64-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE+LG_E>
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 12)
    difference {
     box {
      <-LG_CORNER_SPACE, 0.055, -LG_E>,
      <LG_BRICK_WIDTH/2, -0.055, 1.75*LG_WALL_WIDTH+LG_E>
     }
     union {
      box {
       <-2*LG_WALL_WIDTH, 0, 0.1>,
       <2*LG_WALL_WIDTH, 0.1, -0.3>
       rotate <30, 0, 0>
       rotate <0, 36, 0>
       translate <0.3, 0.02, 1.75*LG_WALL_WIDTH>
      }
      box {
       <-2*LG_WALL_WIDTH, 0, 0.1>,
       <2*LG_WALL_WIDTH, -0.1, -0.3>
       rotate <-30, 0, 0>
       rotate <0, 36, 0>
       translate <0.3, -0.02, 1.75*LG_WALL_WIDTH>
      }
     }
     translate <0.3, 0, 0>
     rotate <0, 0, ROT*30>
    }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   union {
    cone {
     <0, 0, 0.28>, 0.6,
     <0, 0, 0.16>, 0.64
    }
    torus {
     0.64-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <0, 0, -LG_CORNER_SPACE+LG_E>
    }
    cylinder {
     <0, 0, -LG_CORNER_SPACE+LG_E>,
     <0, 0, 0.16>,
     0.64
    }
   }
   union {
    #declare ROT = 0;
    #while (ROT < 4)
     union {
      cylinder {
       <0.28, 0, -LG_E>,
       <0.28, 0, 0.3>,
       0.04
      }
      box {
       <0.28, 0.04, -LG_E>,
       <0.7, -0.04, 0.3>
      }
      rotate <0, 0, 45+90*ROT>
     }
     #declare ROT = ROT + 1;
    #end
   }
  }
 }
 rotate <0, -90, 0>
}

#declare lg_6589_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, -0.12>,
    <0, 0, LG_E>,
    0.46-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    0.46
   }
  }
  union {
   cylinder {
    <0, 0, -0.12+LG_CORNER_SPACE>,
    <0, 0, -0.12-LG_E>,
    0.34+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.12>,
    <0, 0, 2*LG_E>,
    0.34
   }
  }
 }
 torus {
  0.34+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 } 
 torus {
  0.46-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.12+LG_CORNER_SPACE>
 }
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <0, 0, 0.28-LG_CORNER_SPACE>,
      <0, 0, 0>,
      0.36
     }
     cylinder {
      <0, 0, 0.28>,
      <0, 0, 0.2>,
      0.36-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, 0.28>,
      <0, 0, 0>,
      0.24
     }
     cylinder {
      <0, 0, 0.16-LG_CORNER_SPACE>,
      <0, 0, 0.16+LG_E>,
      0.24+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.24+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.24+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.28-LG_CORNER_SPACE>
   } 
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.28-LG_CORNER_SPACE>
   } 
   torus {
    0.24+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   intersection {
    merge {
     #declare ROT2 = 0;
     #while (ROT2 < 4)
      merge {
       cylinder { 
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        0.08
       }
       cylinder { 
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH>,
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
        translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -1.75*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -1.75*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       rotate <0, 0, 90*ROT2>
       translate <0, 0, 1.75*LG_WALL_WIDTH>
      }
      #declare ROT2 = ROT2 + 1;
     #end
    }
    cylinder {
     <0, 0, 0.5>,
     <0, 0, -0.5>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
   }
   difference {
    cylinder {
     <0, 0, -2*LG_CORNER_SPACE+LG_E>,
     <0, 0, LG_E>,
     0.64-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 2*LG_E>,
     <0, 0, -0.2>,
     0.36
    }
   }
  }
  union {
   box {
    <0.3, 0.04, 0.3>,
    <-0.3, -0.04, -LG_E>
   }
   box {
    <0.04, 0.3, 0.3>,
    <-0.04, -0.3, -LG_E>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <0.28, 0, -LG_E>,
      <0.28, 0, 0.3>,
      0.04
     }
     box {
      <0.28, 0.04, -LG_E>,
      <0.4, -0.04, 0.3>
     }
     rotate <0, 0, 45+90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 torus {
  0.64-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE+LG_E>
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 12)
    difference {
     box {
      <-LG_CORNER_SPACE, 0.055, -LG_E>,
      <LG_BRICK_WIDTH/2, -0.055, 1.75*LG_WALL_WIDTH+LG_E>
     }
     union {
      box {
       <-2*LG_WALL_WIDTH, 0, 0.1>,
       <2*LG_WALL_WIDTH, 0.1, -0.3>
       rotate <30, 0, 0>
       rotate <0, 36, 0>
       translate <0.3, 0.02, 1.75*LG_WALL_WIDTH>
      }
      box {
       <-2*LG_WALL_WIDTH, 0, 0.1>,
       <2*LG_WALL_WIDTH, -0.1, -0.3>
       rotate <-30, 0, 0>
       rotate <0, 36, 0>
       translate <0.3, -0.02, 1.75*LG_WALL_WIDTH>
      }
     }
     translate <0.3, 0, 0>
     rotate <0, 0, ROT*30>
    }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   merge {
    cone {
     <0, 0, 0.28>, 0.6,
     <0, 0, 0.16>, 0.64
    }
    torus {
     0.64-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <0, 0, -LG_CORNER_SPACE+LG_E>
    }
    cylinder {
     <0, 0, -LG_CORNER_SPACE+LG_E>,
     <0, 0, 0.16>,
     0.64
    }
   }
   union {
    #declare ROT = 0;
    #while (ROT < 4)
     union {
      cylinder {
       <0.28, 0, -LG_E>,
       <0.28, 0, 0.3>,
       0.04
      }
      box {
       <0.28, 0.04, -LG_E>,
       <0.7, -0.04, 0.3>
      }
      rotate <0, 0, 45+90*ROT>
     }
     #declare ROT = ROT + 1;
    #end
   }
  }
 }
 rotate <0, -90, 0>
}

#end
