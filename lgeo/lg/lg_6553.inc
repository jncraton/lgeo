/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970225 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6553: Technic Pole Reverser Handle                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6553)
#else
#declare lg_6553 =
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
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0, 0>,
    0.3
   }
   box {
    <-0.06, LG_KNOB_RADIUS, 0>,
    <0.06, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
   }
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
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, 0>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      LG_BRICK_WIDTH/2-0.02
     }
     box {
      <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-0.12, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH+0.12>
 }
 cylinder {
  <0, LG_KNOB_RADIUS, -0.52>,
  <0, -LG_KNOB_RADIUS, -0.52>,
  0.12
 }
 box {
  <2*LG_WALL_WIDTH, 0.06, -LG_KNOB_RADIUS-LG_E>,
  <-2*LG_WALL_WIDTH, -0.06, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, LG_CORNER_SPACE+LG_E, 0>,
    <0, -1.5*LG_BRICK_WIDTH+0.08, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, -1.5*LG_BRICK_WIDTH+0.08, 0>
   }
   cylinder {
    <0, -1.5*LG_BRICK_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH+0.08+LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, 2*LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -1.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_WIDTH>
 }
 rotate <0, 0, 90>
}

#declare lg_6553_clear =
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
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0, 0>,
    0.3
   }
   box {
    <-0.06, LG_KNOB_RADIUS, 0>,
    <0.06, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
   }
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
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0, 0>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      LG_BRICK_WIDTH/2-0.02
     }
     box {
      <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_KNOB_RADIUS>,
      <LG_BRICK_WIDTH/2-0.12, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_KNOB_RADIUS>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_BRICK_WIDTH+0.12>
 }
 cylinder {
  <0, LG_KNOB_RADIUS, -0.52>,
  <0, -LG_KNOB_RADIUS, -0.52>,
  0.12
 }
 box {
  <2*LG_WALL_WIDTH, 0.06, -LG_KNOB_RADIUS-LG_E>,
  <-2*LG_WALL_WIDTH, -0.06, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, LG_CORNER_SPACE+LG_E, 0>,
    <0, -1.5*LG_BRICK_WIDTH+0.08, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, -1.5*LG_BRICK_WIDTH+0.08, 0>
   }
   cylinder {
    <0, -1.5*LG_BRICK_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH+0.08+LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, 2*LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -1.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_WIDTH>
 }
 rotate <0, 0, 90>
}

#end
