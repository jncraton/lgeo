/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080113 Lutz Uhlmann fixed orientation                                     */
/* 20081123 Lutz Uhlmann fixed orientation                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4266: Technic Wheel Centre "20 x 30"                                     */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4266)
#else
#declare lg_angle1=asin(LG_CYLINDER_RADIUS/LG_BRICK_WIDTH);
#declare lg_angle2=atan2(1,2);
#declare lg_4266 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    1.5-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   torus {
    1.38+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, 0.48, 0>,
   <0, -0.52, 0>,
   1.38+LG_E
  }
  union {
   cone {
    <0, 0.48+LG_E, 0>, 1.38+LG_E,
    <0, 0.3, 0>, 1.2
   }
   cone {
    <0, -0.52-LG_E, 0>, 1.38+LG_E,
    <0, -0.3, 0>, 1.16
   }
   cylinder {
    <0, 0.48, 0>,
    <0, -0.52, 0>,
    1.24
   }
   cylinder {
    <0, 0.52, 0>,
    <0, 0.28, 0>,
    1.26
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    1.26
   }
   cylinder {
    <0, -0.52, 0>,
    <0, -0.28, 0>,
    1.26
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 6)
  union {
   difference {
    cylinder {
     <0, -0.92+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH>,
     <0, -0.28, LG_BRICK_WIDTH>,
     LG_CYLINDER_RADIUS
    }
    cylinder {
     <0, -0.92, LG_BRICK_WIDTH>,
     <0, -0.28+LG_E, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   difference {
    union {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      union {
       cylinder {
        <LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 0.45>,
        <LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 1.45>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0.08-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 0.45>,
        <0.08-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 1.45>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CORNER_SPACE, -0.6, 0.45>,
        <0.08-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE+LG_E, 1.45>
       }
       box {
        <0, -0.6+LG_CORNER_SPACE, 0.45>,
        <0.08, -0.28, 1.45>
       }
       rotate <0, -lg_angle1*180/pi, 0>
       #if (MIR2 = 1)
        matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
       #end
      }
      #declare MIR2 = MIR2 + 1;
     #end
     difference {
      cylinder {
       <0, -0.28, 0>,
       <0, -0.44, 0>,
       1.45
      }
      union {
       box {
        <LG_E, 0, 1.5>,
        <-1.5, -0.5, -1.5>
        rotate <0, -lg_angle1*180/pi, 0>
       }
       box {
        <-LG_E, 0, 1.5>,
        <1.5, -0.5, -1.5>
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0, 0, 0>,
        <0, -0.5, 0>,
        0.45
       }
      }
     }
    }
    cylinder {
     <0, -0.92, LG_BRICK_WIDTH>,
     <0, -0.28+LG_E, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
    LG_CYLINDER_WALL_WIDTH/2
    translate <0, -0.92+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH>
   }
   rotate <0, 60*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   torus {
    LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.6+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.28-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.44+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, -0.28, 0>,
    <0, -0.44, 0>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.28-LG_CORNER_SPACE, 0>,
    <0, -0.44+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, -0.28-LG_CORNER_SPACE, 0>,
    <0, -0.6+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2+LG_WALL_WIDTH
   }
   cylinder {
    <0, -0.6, 0>,
    <0, -0.6+LG_CORNER_SPACE+LG_E, 0>,
    LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 6)
    cylinder {
     <0, -0.92, LG_BRICK_WIDTH>,
     <0, -0.28+LG_E, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
     rotate <0, 60*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
   cylinder {
    <0, -0.6+LG_CORNER_SPACE, 0>,
    <0, -0.6-LG_E, 0>,
    LG_BRICK_WIDTH/2+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, -0.6-LG_E, 0>,
    LG_BRICK_WIDTH/2
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.6+LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, -0.28, 0>,
    <0, 0.36, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.28+LG_CORNER_SPACE, 0>,
    <0, 0.36-LG_CORNER_SPACE, 0>,
    LG_CYLINDER_RADIUS
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.32, -0.28+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.32, 0.36-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0.32, -0.28, 0>,
    <0.32, 0.36, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0.32, -0.28+LG_CORNER_SPACE, 0>,
    <0.32, 0.36-LG_CORNER_SPACE, 0>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.32, -0.28+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.32, 0.36-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.32, -0.28, 0>,
    <-0.32, 0.36, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32, -0.28+LG_CORNER_SPACE, 0>,
    <-0.32, 0.36-LG_CORNER_SPACE, 0>,
    LG_WALL_WIDTH
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.36-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.28+LG_CORNER_SPACE, 0>
   }
  }
  union {
   cylinder {
    <0, -0.28, 0>,
    <0, 0.36, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -0.28-LG_E, 0>,
    <0, -0.28+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.36+LG_E, 0>,
    <0, 0.36-LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   box {
    <0.4, -0.3, 0.04>,
    <-0.4, 0.4, -0.04>
   }
  }
 }
 difference {
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.36-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.28+LG_CORNER_SPACE, 0>
   }
  }
  box {
   <0.4, -0.3, 0.04>,
   <-0.4, 0.4, -0.04>
  }
 }
 #declare ROT = 0;
 #while (ROT < 3)
  difference {
   union {
    sphere {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0.5-LG_CORNER_SPACE, 0.36, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, -0.28, -0.04+LG_CORNER_SPACE>
    }
    box {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04>,
     <-0.5+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, -0.04>
    }
   }
   #if (ROT = 0)
    cylinder {
     <0, 0.4, 0>,
     <0, -0.4, 0>,
     0.44
    }
   #else
    cylinder {
     <0, 0.4, 0>,
     <0, -0.4, 0>,
     0.27
    }
   #end
   rotate <0, 60*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 6)
    union {
     cylinder {
      <0.75-LG_CORNER_SPACE, -0.28-LG_CORNER_SPACE-LG_E, 0.04-LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, +0.04-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.75-LG_CORNER_SPACE, -0.28-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.75, -0.14-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE-LG_E, -0.28-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE>
     }
     box {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, 0.04>,
      <0.3, -0.28-LG_CORNER_SPACE-LG_E, -0.04>
     }
     union {
      cylinder {
       <0, 0, 0.04-LG_CORNER_SPACE>,
       <0, -0.5/cos(lg_angle2), 0.04-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -0.04+LG_CORNER_SPACE>,
       <0, -0.5/cos(lg_angle2), -0.04+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <0, 0, 0.04>,
       <-0.3, -0.5/cos(lg_angle2), -0.04>
      }
      box {
       <LG_CORNER_SPACE, 0, 0.04-LG_CORNER_SPACE>,
       <-LG_E, -0.5/cos(lg_angle2), -0.04+LG_CORNER_SPACE>
      }
      rotate <0, 0, lg_angle2*180/pi>
      translate <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0>
     }
     rotate <0, 60*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0, 0.4, 0>,
    <0, -0.4, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, -0.28-LG_CORNER_SPACE-LG_E/2, 0>,
    <0, -0.5, 0>,
    LG_BRICK_WIDTH
   }
  }
 }
 difference {
  cylinder {
   <0, 1, 0,>
   <0, -1, 0>,
   1.5-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1+LG_E, 0,>
   <0, -1-LG_E, 0>,
   1.38+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <0, 1-LG_CORNER_SPACE, 0,>
   <0, -1+LG_CORNER_SPACE, 0>,
   1.5
  }
  cylinder {
   <0, 1+LG_E, 0,>
   <0, -1-LG_E, 0>,
   1.38
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
     rotate <-90, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   translate <0, 0.36, 0>
  }
  cylinder {
   <0, LG_BRICK_WIDTH/2, 0>,
   <0, -LG_BRICK_WIDTH/2, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 rotate <0, 90, 0>
 rotate <0, 0, 90>
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#declare lg_4266_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    1.5-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   torus {
    1.38+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, 0.48, 0>,
   <0, -0.52, 0>,
   1.38+LG_E
  }
  union {
   cone {
    <0, 0.48+LG_E, 0>, 1.38+LG_E,
    <0, 0.3, 0>, 1.2
   }
   cone {
    <0, -0.52-LG_E, 0>, 1.38+LG_E,
    <0, -0.3, 0>, 1.16
   }
   cylinder {
    <0, 0.48, 0>,
    <0, -0.52, 0>,
    1.24
   }
   cylinder {
    <0, 0.52, 0>,
    <0, 0.28, 0>,
    1.26
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    1.26
   }
   cylinder {
    <0, -0.52, 0>,
    <0, -0.28, 0>,
    1.26
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 6)
  merge {
   difference {
    cylinder {
     <0, -0.92+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH>,
     <0, -0.28, LG_BRICK_WIDTH>,
     LG_CYLINDER_RADIUS
    }
    cylinder {
     <0, -0.92, LG_BRICK_WIDTH>,
     <0, -0.28+LG_E, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   difference {
    merge {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      merge {
       cylinder {
        <LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 0.45>,
        <LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 1.45>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0.08-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 0.45>,
        <0.08-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE, 1.45>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CORNER_SPACE, -0.6, 0.45>,
        <0.08-LG_CORNER_SPACE, -0.6+LG_CORNER_SPACE+LG_E, 1.45>
       }
       box {
        <0, -0.6+LG_CORNER_SPACE, 0.45>,
        <0.08, -0.28, 1.45>
       }
       rotate <0, -lg_angle1*180/pi, 0>
       #if (MIR2 = 1)
        matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
       #end
      }
      #declare MIR2 = MIR2 + 1;
     #end
     difference {
      cylinder {
       <0, -0.28, 0>,
       <0, -0.44, 0>,
       1.45
      }
      union {
       box {
        <LG_E, 0, 1.5>,
        <-1.5, -0.5, -1.5>
        rotate <0, -lg_angle1*180/pi, 0>
       }
       box {
        <-LG_E, 0, 1.5>,
        <1.5, -0.5, -1.5>
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0, 0, 0>,
        <0, -0.5, 0>,
        0.45
       }
      }
     }
    }
    cylinder {
     <0, -0.92, LG_BRICK_WIDTH>,
     <0, -0.28+LG_E, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
    LG_CYLINDER_WALL_WIDTH/2
    translate <0, -0.92+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH>
   }
   rotate <0, 60*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.6+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.28-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.44+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, -0.28, 0>,
    <0, -0.44, 0>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.28-LG_CORNER_SPACE, 0>,
    <0, -0.44+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, -0.28-LG_CORNER_SPACE, 0>,
    <0, -0.6+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2+LG_WALL_WIDTH
   }
   cylinder {
    <0, -0.6, 0>,
    <0, -0.6+LG_CORNER_SPACE+LG_E, 0>,
    LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 6)
    cylinder {
     <0, -0.92, LG_BRICK_WIDTH>,
     <0, -0.28+LG_E, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
     rotate <0, 60*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
   cylinder {
    <0, -0.6+LG_CORNER_SPACE, 0>,
    <0, -0.6-LG_E, 0>,
    LG_BRICK_WIDTH/2+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, -0.6-LG_E, 0>,
    LG_BRICK_WIDTH/2
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.6+LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, -0.28, 0>,
    <0, 0.36, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.28+LG_CORNER_SPACE, 0>,
    <0, 0.36-LG_CORNER_SPACE, 0>,
    LG_CYLINDER_RADIUS
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.32, -0.28+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0.32, 0.36-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0.32, -0.28, 0>,
    <0.32, 0.36, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0.32, -0.28+LG_CORNER_SPACE, 0>,
    <0.32, 0.36-LG_CORNER_SPACE, 0>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.32, -0.28+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.32, 0.36-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.32, -0.28, 0>,
    <-0.32, 0.36, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32, -0.28+LG_CORNER_SPACE, 0>,
    <-0.32, 0.36-LG_CORNER_SPACE, 0>,
    LG_WALL_WIDTH
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.36-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.28+LG_CORNER_SPACE, 0>
   }
  }
  union {
   cylinder {
    <0, -0.28, 0>,
    <0, 0.36, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -0.28-LG_E, 0>,
    <0, -0.28+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.36+LG_E, 0>,
    <0, 0.36-LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   box {
    <0.4, -0.3, 0.04>,
    <-0.4, 0.4, -0.04>
   }
  }
 }
 difference {
  merge {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.36-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.28+LG_CORNER_SPACE, 0>
   }
  }
  box {
   <0.4, -0.3, 0.04>,
   <-0.4, 0.4, -0.04>
  }
 }
 #declare ROT = 0;
 #while (ROT < 3)
  difference {
   merge {
    sphere {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.5-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0.5-LG_CORNER_SPACE, 0.36, 0.04-LG_CORNER_SPACE>,
     <-0.5+LG_CORNER_SPACE, -0.28, -0.04+LG_CORNER_SPACE>
    }
    box {
     <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0.04>,
     <-0.5+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE, -0.04>
    }
   }
   #if (ROT = 0)
    cylinder {
     <0, 0.4, 0>,
     <0, -0.4, 0>,
     0.44
    }
   #else
    cylinder {
     <0, 0.4, 0>,
     <0, -0.4, 0>,
     0.27
    }
   #end
   rotate <0, 60*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 6)
    merge {
     cylinder {
      <0.75-LG_CORNER_SPACE, -0.28-LG_CORNER_SPACE-LG_E, 0.04-LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, +0.04-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.75-LG_CORNER_SPACE, -0.28-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.75, -0.14-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE>,
      <0.75-LG_CORNER_SPACE-LG_E, -0.28-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE>
     }
     box {
      <0.75-LG_CORNER_SPACE, -0.14-LG_CORNER_SPACE, 0.04>,
      <0.3, -0.28-LG_CORNER_SPACE-LG_E, -0.04>
     }
     merge {
      cylinder {
       <0, 0, 0.04-LG_CORNER_SPACE>,
       <0, -0.5/cos(lg_angle2), 0.04-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, 0, -0.04+LG_CORNER_SPACE>,
       <0, -0.5/cos(lg_angle2), -0.04+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <0, 0, 0.04>,
       <-0.3, -0.5/cos(lg_angle2), -0.04>
      }
      box {
       <LG_CORNER_SPACE, 0, 0.04-LG_CORNER_SPACE>,
       <-LG_E, -0.5/cos(lg_angle2), -0.04+LG_CORNER_SPACE>
      }
      rotate <0, 0, lg_angle2*180/pi>
      translate <0.5-LG_CORNER_SPACE, 0.36-LG_CORNER_SPACE, 0>
     }
     rotate <0, 60*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0, 0.4, 0>,
    <0, -0.4, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, -0.28-LG_CORNER_SPACE-LG_E/2, 0>,
    <0, -0.5, 0>,
    LG_BRICK_WIDTH
   }
  }
 }
 difference {
  cylinder {
   <0, 1, 0,>
   <0, -1, 0>,
   1.5-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1+LG_E, 0,>
   <0, -1-LG_E, 0>,
   1.38+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <0, 1-LG_CORNER_SPACE, 0,>
   <0, -1+LG_CORNER_SPACE, 0>,
   1.5
  }
  cylinder {
   <0, 1+LG_E, 0,>
   <0, -1-LG_E, 0>,
   1.38
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
     rotate <-90, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   translate <0, 0.36, 0>
  }
  cylinder {
   <0, LG_BRICK_WIDTH/2, 0>,
   <0, -LG_BRICK_WIDTH/2, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 rotate <0, 90, 0>
 rotate <0, 0, 90>
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#end
