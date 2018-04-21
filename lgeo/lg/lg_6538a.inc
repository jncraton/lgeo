/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080123 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6538a: Technic Axle Joiner                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6538a)
#else
#declare lg_6538a =
union {
 intersection {
  union {
   difference {
    cylinder {
     <LG_BRICK_WIDTH, 0, 0>,
     <-LG_BRICK_WIDTH, 0, 0>,
     LG_BRICK_WIDTH/2+LG_E
    }
    union {
     #declare ROT = 0;
     #while (ROT < 4)
      union {
       cylinder {
        <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <-LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0>
    }
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      0.34
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      0.34-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <2*LG_E, 0, 0>,
      <-2*LG_E, 0, 0>,
      LG_WALL_WIDTH
     }
    }
   }
   torus {
    0.34-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.34-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.34,
    0.03
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2, 0, 0>
   }
   torus {
    0.34,
    0.03
    rotate <0, 0, 90>
   }
   torus {
    0.34,
    0.03
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2, 0, 0>
   }
  }
 }
 intersection {
  cylinder {
   <LG_BRICK_WIDTH+LG_E, 0, 0>,
   <-LG_BRICK_WIDTH-LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_E
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#declare lg_6538a_clear =
merge {
 intersection {
  merge {
   difference {
    cylinder {
     <LG_BRICK_WIDTH, 0, 0>,
     <-LG_BRICK_WIDTH, 0, 0>,
     LG_BRICK_WIDTH/2+LG_E
    }
    union {
     #declare ROT = 0;
     #while (ROT < 4)
      union {
       cylinder {
        <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <-LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0>
    }
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  merge {
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      0.34
     }
     cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      0.34-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <2*LG_E, 0, 0>,
      <-2*LG_E, 0, 0>,
      LG_WALL_WIDTH
     }
    }
   }
   torus {
    0.34-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.34-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.34,
    0.03
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2, 0, 0>
   }
   torus {
    0.34,
    0.03
    rotate <0, 0, 90>
   }
   torus {
    0.34,
    0.03
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2, 0, 0>
   }
  }
 }
 intersection {
  cylinder {
   <LG_BRICK_WIDTH+LG_E, 0, 0>,
   <-LG_BRICK_WIDTH-LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_E
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     cylinder {
      <-LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     box {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#end
