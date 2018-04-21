/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3712: Technic Universal Joint End                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3712)
#else
#declare lg_angle=atan2(0.2, 0.28);
#declare lg_3712 =
union {
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     sphere {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2>,
      0.08
     }
     box {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2+LG_E, LG_CROSSAXLE_WIDTH/2+0.1, LG_BRICK_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1>,
      <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
   <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 intersection  {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE-LG_E, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <1.75*LG_BRICK_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  difference {
   union {
    box {
     <0, 0.5, 0.5>,
     <1.25*LG_BRICK_WIDTH, -0.5, -0.5>
    }
    box {
     <LG_BRICK_WIDTH, 0.5, 0.2>,
     <1.5*LG_BRICK_WIDTH, -0.5, -0.2>
    }
    cylinder {
     <1.5*LG_BRICK_WIDTH, 0.5, 0>,
     <1.5*LG_BRICK_WIDTH, -0.5, 0>,
     0.2
    }
   }
   union {
    box {
     <0, 0.5, 0>,
     <-0.5, -0.5, 0.5>
     rotate <0, lg_angle*180/pi, 0>
     translate <1.25*LG_BRICK_WIDTH, 0, 0.2>
    }
    box {
     <0, 0.5, 0>,
     <-0.5, -0.5, -0.5>
     rotate <0, -lg_angle*180/pi, 0>
     translate <1.25*LG_BRICK_WIDTH, 0, -0.2>
    }
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <1.25*LG_BRICK_WIDTH, 0, 0>,
     LG_KNOB_INNER_RADIUS
    }
    cylinder {
     <1.2*LG_BRICK_WIDTH, 0, 0.5>,
     <1.2*LG_BRICK_WIDTH, 0, -0.5>,
     LG_KNOB_RADIUS
    }
    box {
     <1.2*LG_BRICK_WIDTH, LG_KNOB_RADIUS, 0.5>,
     <1.8*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, -0.5>
    }
    cylinder {
     <1.5*LG_BRICK_WIDTH, 0.5, 0>,
     <1.5*LG_BRICK_WIDTH, -0.5, 0>,
     0.06+LG_E
    }
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0, 0>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0, 0>,
   0.3
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, -LG_BRICK_WIDTH/2, 0>,
    0.04
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, 0>,
    0.04
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, -0.04>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, 0.04>
   }
  }
 }
 intersection {
  difference {
   union {
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0, 0>,
     LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2-0.02
    }
    torus {
     LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    torus {
     LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
    }
   }
   union {
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
  }
  union {
   difference {
    cylinder {
     <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, 0>,
     LG_BRICK_WIDTH/2
    }
    union {
     #declare ROT = 0;
     #while (ROT < 4)
      union {
       cylinder {
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
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
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0> 
    }
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0> 
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#declare lg_3712_clear =
merge {
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     sphere {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2+LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2>,
      0.08
     }
     box {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2+LG_E, LG_CROSSAXLE_WIDTH/2+0.1, LG_BRICK_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1>,
      <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
   <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 intersection  {
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE-LG_E, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <1.75*LG_BRICK_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  difference {
   merge {
    box {
     <0, 0.5, 0.5>,
     <1.25*LG_BRICK_WIDTH, -0.5, -0.5>
    }
    box {
     <LG_BRICK_WIDTH, 0.5, 0.2>,
     <1.5*LG_BRICK_WIDTH, -0.5, -0.2>
    }
    cylinder {
     <1.5*LG_BRICK_WIDTH, 0.5, 0>,
     <1.5*LG_BRICK_WIDTH, -0.5, 0>,
     0.2
    }
   }
   union {
    box {
     <0, 0.5, 0>,
     <-0.5, -0.5, 0.5>
     rotate <0, lg_angle*180/pi, 0>
     translate <1.25*LG_BRICK_WIDTH, 0, 0.2>
    }
    box {
     <0, 0.5, 0>,
     <-0.5, -0.5, -0.5>
     rotate <0, -lg_angle*180/pi, 0>
     translate <1.25*LG_BRICK_WIDTH, 0, -0.2>
    }
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <1.25*LG_BRICK_WIDTH, 0, 0>,
     LG_KNOB_INNER_RADIUS
    }
    cylinder {
     <1.2*LG_BRICK_WIDTH, 0, 0.5>,
     <1.2*LG_BRICK_WIDTH, 0, -0.5>,
     LG_KNOB_RADIUS
    }
    box {
     <1.2*LG_BRICK_WIDTH, LG_KNOB_RADIUS, 0.5>,
     <1.8*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, -0.5>
    }
    cylinder {
     <1.5*LG_BRICK_WIDTH, 0.5, 0>,
     <1.5*LG_BRICK_WIDTH, -0.5, 0>,
     0.06+LG_E
    }
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0, 0>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0, 0>,
   0.3
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, -LG_BRICK_WIDTH/2, 0>,
    0.04
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, 0>,
    0.04
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, -0.04>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, 0.04>
   }
  }
 }
 intersection {
  difference {
   merge {
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0, 0>,
     LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2-0.02
    }
    torus {
     LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
    }
    torus {
     LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
    }
   }
   union {
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
  }
  merge {
   difference {
    cylinder {
     <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, 0>,
     LG_BRICK_WIDTH/2
    }
    merge {
     #declare ROT = 0;
     #while (ROT < 4)
      merge {
       cylinder {
        <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
        <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
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
     translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0> 
    }
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
     rotate <90*ROT, 0, 0> 
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#end
