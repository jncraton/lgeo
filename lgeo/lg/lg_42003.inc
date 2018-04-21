/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080204 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_42003: Technic Axle Joiner Perpendicular Long 2 Pinholes                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_42003)
#else
#declare lg_42003 =
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
     sphere {
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2>,
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
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.1, LG_BRICK_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1>,
      <LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
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
  translate <0, 0, LG_BRICK_WIDTH>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH >
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0, LG_BRICK_WIDTH>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0, LG_BRICK_WIDTH>,
   0.3
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    0.04
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    0.04
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-0.04>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH+0.04>
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02
     }
     box {
      <LG_BRICK_WIDTH/2-0.02, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
     }
     box {
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02, -LG_BRICK_WIDTH>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
      <0, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_BRICK_WIDTH/2, 0>,
      <0, LG_BRICK_WIDTH/2, 0>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     #if (MIR = 1)
      sphere {
       <0, 0, -LG_BRICK_WIDTH/2>,
       0.2
       scale <0.2, 1, 1>
       translate <LG_BRICK_WIDTH/2, 0, 0>
      }
     #end
    }
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -LG_BRICK_WIDTH>
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2-0.02
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH/2-0.02
   }
  }
  union {
   #declare HOLE = 0;
   #while (HOLE < 2)
    cylinder {
     <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -HOLE*LG_BRICK_WIDTH>,
     <0, LG_BRICK_WIDTH/2+LG_E, -HOLE*LG_BRICK_WIDTH>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <0, LG_BRICK_WIDTH/2-0.08, -HOLE*LG_BRICK_WIDTH>,
     <0, LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     0.3
    }
    cylinder {
     <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -HOLE*LG_BRICK_WIDTH>,
     <0, -LG_BRICK_WIDTH/2-LG_E, -HOLE*LG_BRICK_WIDTH>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_BRICK_WIDTH/2+0.08, -HOLE*LG_BRICK_WIDTH>,
     <0, -LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     0.3
    }
    cylinder {
     <0, LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     <0, -LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
    #declare HOLE = HOLE + 1;
   #end
  }
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 rotate <0, 0, 90>
}

#declare lg_42003_clear =
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
     sphere {
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_BRICK_WIDTH/2>,
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
      <LG_BRICK_WIDTH/2-0.08, LG_CROSSAXLE_WIDTH/2+0.1, LG_BRICK_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1>,
      <LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
     }
     box {
      <-LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
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
  translate <0, 0, LG_BRICK_WIDTH>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH >
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0, LG_BRICK_WIDTH>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0, LG_BRICK_WIDTH>,
   0.3
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    0.04
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    0.04
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.04, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-0.04>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+0.04, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH+0.04>
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02
     }
     box {
      <LG_BRICK_WIDTH/2-0.02, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
     }
     box {
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02, -LG_BRICK_WIDTH>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
      LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
      <0, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_BRICK_WIDTH/2, 0>,
      <0, LG_BRICK_WIDTH/2, 0>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, LG_BRICK_WIDTH>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     #if (MIR = 1)
      sphere {
       <0, 0, -LG_BRICK_WIDTH/2>,
       0.2
       scale <0.2, 1, 1>
       translate <LG_BRICK_WIDTH/2, 0, 0>
      }
     #end
    }
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -LG_BRICK_WIDTH>
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2-0.02
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH/2-0.02
   }
  }
  union {
   #declare HOLE = 0;
   #while (HOLE < 2)
    cylinder {
     <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -HOLE*LG_BRICK_WIDTH>,
     <0, LG_BRICK_WIDTH/2+LG_E, -HOLE*LG_BRICK_WIDTH>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <0, LG_BRICK_WIDTH/2-0.08, -HOLE*LG_BRICK_WIDTH>,
     <0, LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     0.3
    }
    cylinder {
     <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -HOLE*LG_BRICK_WIDTH>,
     <0, -LG_BRICK_WIDTH/2-LG_E, -HOLE*LG_BRICK_WIDTH>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_BRICK_WIDTH/2+0.08, -HOLE*LG_BRICK_WIDTH>,
     <0, -LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     0.3
    }
    cylinder {
     <0, LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     <0, -LG_BRICK_WIDTH/2, -HOLE*LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
    }
    #declare HOLE = HOLE + 1;
   #end
  }
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 rotate <0, 0, 90>
}

#end
