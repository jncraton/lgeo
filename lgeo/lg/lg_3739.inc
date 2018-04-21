/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001119 Lutz Uhlmann                                                       */
/* 20080102 Lutz Uhlmann fixed some edge torus positions                       */
/* 20080102 Lutz Uhlmann added some missing edge cylinders                     */
/* 20080102 Lutz Uhlmann fixed rotation                                        */
/* 20081207 Lutz Uhlmann fixed orientation                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3739: Technic Wheel Centre "24 x 43"                                     */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3739)
#else
#declare lg_angle1=asin((LG_CYLINDER_RADIUS+0.08)/(2*LG_BRICK_WIDTH));
#declare lg_angle2=asin((0.04+LG_CORNER_SPACE)/(LG_KNOB_RADIUS+LG_CORNER_SPACE));
#declare lg_3739 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   torus {
    2.03+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.84-LG_CORNER_SPACE, 0>
 }
 torus {
  1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.76+LG_CORNER_SPACE, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.84-LG_CORNER_SPACE, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.76+LG_CORNER_SPACE, 0>
 }
 difference {
  cylinder {
   <0, 0.56, 0>,
   <0, -0.68, 0>,
   2.03+LG_E
  }
  union {
   cone {
    <0, 0.56+LG_E, 0>, 2.03+LG_E,
    <0, 0.44, 0>, 1.91
   }
   cone {
    <0, -0.68-LG_E, 0>, 2.03+LG_E,
    <0, -0.56, 0>, 1.91
   }
   cylinder {
    <0, 0.56, 0>,
    <0, -0.68, 0>,
    1.91
   }
  }
 }
 difference {
  cylinder {
   <0, 1.2, 0,>
   <0, -1.2, 0>,
   2.15-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1.2+LG_E, 0,>
   <0, -1.2-LG_E, 0>,
   2.03+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <0, 1.2-LG_CORNER_SPACE, 0,>
   <0, -1.2+LG_CORNER_SPACE, 0>,
   2.15
  }
  cylinder {
   <0, 1.2+LG_E, 0,>
   <0, -1.2-LG_E, 0>,
   2.03
  }
 }
 difference {
  cylinder {
   <0, 0.84, 0,>
   <0, -0.76, 0>,
   1-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.84+LG_E, 0,>
   <0, -0.76-LG_E, 0>,
   0.88+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <0, 0.84-LG_CORNER_SPACE, 0,>
   <0, -0.76+LG_CORNER_SPACE, 0>,
   1
  }
  cylinder {
   <0, 0.84+LG_E, 0,>
   <0, -0.76-LG_E, 0>,
   0.88
  }
 }
 #declare ROT = 0;
 #while (ROT < 6)
  union {
   difference {
    cylinder {
     <0, -1.12+LG_CYLINDER_WALL_WIDTH/2, 2*LG_BRICK_WIDTH>,
     <0, -0.48, 2*LG_BRICK_WIDTH>,
     LG_CYLINDER_RADIUS
    }
    cylinder {
     <0, -1.12, 2*LG_BRICK_WIDTH>,
     <0, -0.48+LG_E, 2*LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   difference {
    union {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      union {
       cylinder {
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 0.95>,
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0.08-LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 0.95>,
        <0.08-LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CORNER_SPACE, -LG_CORNER_SPACE, 0.95>,
        <LG_CORNER_SPACE, -LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0.95>,
        <0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CORNER_SPACE, -0.72, 0.95>,
        <0.08-LG_CORNER_SPACE, 0, 2.03>
       }
       box {
        <0, -0.72+LG_CORNER_SPACE, 0.95>,
        <0.08, -LG_CORNER_SPACE, 2.03>
       }
       cylinder {
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 1.4+LG_CORNER_SPACE>,
        <0.3, -0.72+LG_CORNER_SPACE, 1.4+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 1.8-LG_CORNER_SPACE>,
        <0.3, -0.72+LG_CORNER_SPACE, 1.8-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CORNER_SPACE, -0.72, 1.4+LG_CORNER_SPACE>,
        <0.3, -0.72+LG_CORNER_SPACE+LG_E, 1.8-LG_CORNER_SPACE>
       }
       box {
        <LG_CORNER_SPACE, -0.64+LG_E, 1.4>,
        <0.3, -0.72+LG_CORNER_SPACE, 1.8>
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
       <0, -0.64, 0>,
       <0, -0.48, 0>,
       2.03+LG_E
      }
      union {
       box {
        <LG_E, 0, 2.5>,
        <-2.5, -0.7, -2.5>
        rotate <0, -lg_angle1*180/pi, 0>
       }
       box {
        <-LG_E, 0, 2.5>,
        <2.5, -0.7, -2.5>
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0, 0, 0>,
        <0, -0.7, 0>,
        0.95
       }
      }
     }
    }
    cylinder {
     <0, -0.92, 2*LG_BRICK_WIDTH>,
     <0, -LG_E, 2*LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
    LG_CYLINDER_WALL_WIDTH/2
    translate <0, -1.12+LG_CYLINDER_WALL_WIDTH/2, 2*LG_BRICK_WIDTH>
   }
   rotate <0, 60*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
 torus {
  1.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.64+LG_CORNER_SPACE>
 }
 torus {
  1.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.48-LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, -0.64, 0>,
    <0, -0.48, 0>,
    1.24-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.64+LG_CORNER_SPACE, 0>,
    <0, -0.48-LG_CORNER_SPACE, 0>,
    1.24
   }
  }
  cylinder {
   <0, -0.64-LG_E, 0>,
   <0, -0.48+LG_E, 0>,
   0.95
  }
 }
 difference {
  union {
   torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.84-LG_CORNER_SPACE, 0>
   }
   torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.76+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, 0.84, 0>,
    <0, -0.76, 0>,
    0.38-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.84-LG_CORNER_SPACE, 0>,
    <0, -0.76+LG_CORNER_SPACE, 0>,
    0.38
   }
   box {
    <0.88+LG_CORNER_SPACE, -0.76, 0.25-LG_CORNER_SPACE>,
    <-0.88-LG_CORNER_SPACE, 0.84, -0.25+LG_CORNER_SPACE>
   }
   box {
    <0.88+LG_CORNER_SPACE, -0.76+LG_CORNER_SPACE, 0.25>,
    <-0.88-LG_CORNER_SPACE, 0.84-LG_CORNER_SPACE, -0.25>
   }
  }
  union {
   cylinder {
    <0, 0.84, 0>,
    <0, -0.76, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0.84-LG_CORNER_SPACE, 0>,
    <0, 0.84+LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.76+LG_CORNER_SPACE, 0>,
    <0, -0.76-LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   box {
    <0.94, 0.84, 0.04>,
    <-0.94, -0.76, -0.04>
   }
   box {
    <0.94, 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.94, 0.84+LG_E, -0.04-LG_CORNER_SPACE>
   }
   box {
    <0.94, -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.94, -0.76-LG_E, -0.04-LG_CORNER_SPACE>
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <0.88+LG_CORNER_SPACE, 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.88-LG_CORNER_SPACE, 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.2, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <0.88, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <-0.88, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.2, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <0.88, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <-0.88, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <0.88+LG_CORNER_SPACE, -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.88-LG_CORNER_SPACE, -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.84-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.76+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <0.5, 1, 0>,
    <0, -1, 0.05+LG_CORNER_SPACE>
    rotate <0, lg_angle2*180/pi, 0>
   }
   box {
    <0.5, 1, 0>,
    <0, -1, -0.05-LG_CORNER_SPACE>
    rotate <0, -lg_angle2*180/pi, 0>
   }
   box {
    <-0.5, 1, 0>,
    <0, -1, 0.05+LG_CORNER_SPACE>
    rotate <0, -lg_angle2*180/pi, 0>
   }
   box {
    <-0.5, 1, 0>,
    <0, -1, -0.05-LG_CORNER_SPACE>
    rotate <0, lg_angle2*180/pi, 0>
   }
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
     rotate <-90, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   translate <0, 0.84, 0>
  }
  cylinder {
   <0, 1, 0>,
   <0, -1, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 rotate <0, 90, 0>
 translate <0, 1.5*LG_BRICK_WIDTH, 0>
}

#declare lg_3739_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   torus {
    2.03+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.84-LG_CORNER_SPACE, 0>
 }
 torus {
  1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.76+LG_CORNER_SPACE, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.84-LG_CORNER_SPACE, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.76+LG_CORNER_SPACE, 0>
 }
 difference {
  cylinder {
   <0, 0.56, 0>,
   <0, -0.68, 0>,
   2.03+LG_E
  }
  union {
   cone {
    <0, 0.56+LG_E, 0>, 2.03+LG_E,
    <0, 0.44, 0>, 1.91
   }
   cone {
    <0, -0.68-LG_E, 0>, 2.03+LG_E,
    <0, -0.56, 0>, 1.91
   }
   cylinder {
    <0, 0.56, 0>,
    <0, -0.68, 0>,
    1.91
   }
  }
 }
 difference {
  cylinder {
   <0, 1.2, 0,>
   <0, -1.2, 0>,
   2.15-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1.2+LG_E, 0,>
   <0, -1.2-LG_E, 0>,
   2.03+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <0, 1.2-LG_CORNER_SPACE, 0,>
   <0, -1.2+LG_CORNER_SPACE, 0>,
   2.15
  }
  cylinder {
   <0, 1.2+LG_E, 0,>
   <0, -1.2-LG_E, 0>,
   2.03
  }
 }
 difference {
  cylinder {
   <0, 0.84, 0,>
   <0, -0.76, 0>,
   1-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.84+LG_E, 0,>
   <0, -0.76-LG_E, 0>,
   0.88+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <0, 0.84-LG_CORNER_SPACE, 0,>
   <0, -0.76+LG_CORNER_SPACE, 0>,
   1
  }
  cylinder {
   <0, 0.84+LG_E, 0,>
   <0, -0.76-LG_E, 0>,
   0.88
  }
 }
 #declare ROT = 0;
 #while (ROT < 6)
  merge {
   difference {
    cylinder {
     <0, -1.12+LG_CYLINDER_WALL_WIDTH/2, 2*LG_BRICK_WIDTH>,
     <0, -0.48, 2*LG_BRICK_WIDTH>,
     LG_CYLINDER_RADIUS
    }
    cylinder {
     <0, -1.12, 2*LG_BRICK_WIDTH>,
     <0, -0.48+LG_E, 2*LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   difference {
    merge {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      merge {
       cylinder {
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 0.95>,
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0.08-LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 0.95>,
        <0.08-LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CORNER_SPACE, -LG_CORNER_SPACE, 0.95>,
        <LG_CORNER_SPACE, -LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0.95>,
        <0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE, 2.03>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CORNER_SPACE, -0.72, 0.95>,
        <0.08-LG_CORNER_SPACE, 0, 2.03>
       }
       box {
        <0, -0.72+LG_CORNER_SPACE, 0.95>,
        <0.08, -LG_CORNER_SPACE, 2.03>
       }
       cylinder {
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 1.4+LG_CORNER_SPACE>,
        <0.3, -0.72+LG_CORNER_SPACE, 1.4+LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       cylinder {
        <LG_CORNER_SPACE, -0.72+LG_CORNER_SPACE, 1.8-LG_CORNER_SPACE>,
        <0.3, -0.72+LG_CORNER_SPACE, 1.8-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
       }
       box {
        <LG_CORNER_SPACE, -0.72, 1.4+LG_CORNER_SPACE>,
        <0.3, -0.72+LG_CORNER_SPACE+LG_E, 1.8-LG_CORNER_SPACE>
       }
       box {
        <LG_CORNER_SPACE, -0.64+LG_E, 1.4>,
        <0.3, -0.72+LG_CORNER_SPACE, 1.8>
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
       <0, -0.64, 0>,
       <0, -0.48, 0>,
       2.03+LG_E
      }
      union {
       box {
        <LG_E, 0, 2.5>,
        <-2.5, -0.7, -2.5>
        rotate <0, -lg_angle1*180/pi, 0>
       }
       box {
        <-LG_E, 0, 2.5>,
        <2.5, -0.7, -2.5>
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0, 0, 0>,
        <0, -0.7, 0>,
        0.95
       }
      }
     }
    }
    cylinder {
     <0, -0.92, 2*LG_BRICK_WIDTH>,
     <0, -LG_E, 2*LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
    LG_CYLINDER_WALL_WIDTH/2
    translate <0, -1.12+LG_CYLINDER_WALL_WIDTH/2, 2*LG_BRICK_WIDTH>
   }
   rotate <0, 60*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
 torus {
  1.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.64+LG_CORNER_SPACE>
 }
 torus {
  1.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.48-LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, -0.64, 0>,
    <0, -0.48, 0>,
    1.24-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.64+LG_CORNER_SPACE, 0>,
    <0, -0.48-LG_CORNER_SPACE, 0>,
    1.24
   }
  }
  cylinder {
   <0, -0.64-LG_E, 0>,
   <0, -0.48+LG_E, 0>,
   0.95
  }
 }
 difference {
  merge {
   torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.84-LG_CORNER_SPACE, 0>
   }
   torus {
    0.38-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.76+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, 0.84, 0>,
    <0, -0.76, 0>,
    0.38-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.84-LG_CORNER_SPACE, 0>,
    <0, -0.76+LG_CORNER_SPACE, 0>,
    0.38
   }
   box {
    <0.88+LG_CORNER_SPACE, -0.76, 0.25-LG_CORNER_SPACE>,
    <-0.88-LG_CORNER_SPACE, 0.84, -0.25+LG_CORNER_SPACE>
   }
   box {
    <0.88+LG_CORNER_SPACE, -0.76+LG_CORNER_SPACE, 0.25>,
    <-0.88-LG_CORNER_SPACE, 0.84-LG_CORNER_SPACE, -0.25>
   }
  }
  union {
   cylinder {
    <0, 0.84, 0>,
    <0, -0.76, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0.84-LG_CORNER_SPACE, 0>,
    <0, 0.84+LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.76+LG_CORNER_SPACE, 0>,
    <0, -0.76-LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   box {
    <0.94, 0.84, 0.04>,
    <-0.94, -0.76, -0.04>
   }
   box {
    <0.94, 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.94, 0.84+LG_E, -0.04-LG_CORNER_SPACE>
   }
   box {
    <0.94, -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.94, -0.76-LG_E, -0.04-LG_CORNER_SPACE>
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <0.88+LG_CORNER_SPACE, 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.88-LG_CORNER_SPACE, 0.84-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.2, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <0.88, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <-0.88, 0.84-LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.2, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <0.88, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    <-0.88, -0.76+LG_CORNER_SPACE, 0.25-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <0.88+LG_CORNER_SPACE, -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    <-0.88-LG_CORNER_SPACE, -0.76+LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.84-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.76+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <0.5, 1, 0>,
    <0, -1, 0.05+LG_CORNER_SPACE>
    rotate <0, lg_angle2*180/pi, 0>
   }
   box {
    <0.5, 1, 0>,
    <0, -1, -0.05-LG_CORNER_SPACE>
    rotate <0, -lg_angle2*180/pi, 0>
   }
   box {
    <-0.5, 1, 0>,
    <0, -1, 0.05+LG_CORNER_SPACE>
    rotate <0, -lg_angle2*180/pi, 0>
   }
   box {
    <-0.5, 1, 0>,
    <0, -1, -0.05-LG_CORNER_SPACE>
    rotate <0, lg_angle2*180/pi, 0>
   }
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -10*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
     rotate <-90, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   translate <0, 0.84, 0>
  }
  cylinder {
   <0, 1, 0>,
   <0, -1, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 rotate <0, 90, 0>
 translate <0, 1.5*LG_BRICK_WIDTH, 0>
}

#end
