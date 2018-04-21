/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981227 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4185: Technic Wedge Belt Wheel Small                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4185)
#else
#declare lg_4185 =
union {
 torus {
  1.5*LG_BRICK_WIDTH-0.04,
  0.04
  rotate <0, 0, 90>
  translate <LG_WALL_WIDTH-0.04, 0, 0>
 }
 torus {
  1.5*LG_BRICK_WIDTH-0.04,
  0.04
  rotate <0, 0, 90>
  translate <-LG_WALL_WIDTH+0.04, 0, 0>
 }
 difference {
  cylinder {
   <LG_WALL_WIDTH, 0, 0>,
   <-LG_WALL_WIDTH, 0, 0>,
   1.5*LG_BRICK_WIDTH-0.04
  }
  union {
   torus {
    1.5*LG_BRICK_WIDTH-0.04,
    LG_WALL_WIDTH/2
    rotate <0, 0, 90>
   }
   cylinder {
    <-0.2, 0.5*LG_BRICK_WIDTH, 0>,
    <0.2, 0.5*LG_BRICK_WIDTH, 0>,
    0.04
   }
   cylinder {
    <-0.2, -0.5*LG_BRICK_WIDTH, 0>,
    <0.2, -0.5*LG_BRICK_WIDTH, 0>,
    0.04
   }
   box {
    <-0.2, 0.5*LG_BRICK_WIDTH, 0.04>,
    <0.2, -0.5*LG_BRICK_WIDTH, -0.04>
   }
   cylinder {
    <0.2, 0, 0>,
    <-0.2, 0, 0>,
    LG_KNOB_RADIUS
   }
   cone {
    <LG_WALL_WIDTH+LG_E, 0, 0>, LG_BRICK_WIDTH+0.28+2*LG_E,
    <LG_WALL_WIDTH-0.04, 0, 0>, LG_BRICK_WIDTH+0.2
   }
   cone {
    <-LG_WALL_WIDTH-LG_E, 0, 0>, LG_BRICK_WIDTH+0.28+2*LG_E,
    <-LG_WALL_WIDTH+0.04, 0, 0>, LG_BRICK_WIDTH+0.2
   }
   #declare ROT = 0;
   #while (ROT < 6)
    union {
     cylinder {
      <0.2, 0, LG_BRICK_WIDTH>,
      <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH>,
      0.3
     }
     cylinder {
      <LG_WALL_WIDTH-0.04-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <LG_WALL_WIDTH-0.04+LG_E, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-0.2, 0, LG_BRICK_WIDTH>,
      <-LG_WALL_WIDTH+0.04, 0, LG_BRICK_WIDTH>,
      0.3
     }
     cylinder {
      <-LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <-LG_WALL_WIDTH+0.04-LG_E, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0.2, 0, LG_BRICK_WIDTH>,
      <-0.2, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     rotate <60*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 6)
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-0.04-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   rotate <60*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     intersection {
      union {
       box {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
      }
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -0.4-LG_E>,
       LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
     }
     rotate <0, 0, 90*ROT>
     rotate <0, 90, 0>
     translate <1.25*LG_WALL_WIDTH, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    union {
     cylinder {
      <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      LG_CYLINDER_RADIUS
     }
     cylinder {
      <1.25*LG_WALL_WIDTH, 0, 0>,
      <-1.25*LG_WALL_WIDTH, 0, 0>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <1.25*LG_WALL_WIDTH, 0, 0>,
      <-1.25*LG_WALL_WIDTH, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <1.25*LG_WALL_WIDTH+LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <-1.25*LG_WALL_WIDTH-LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <-0.2-LG_E, 0.5*LG_BRICK_WIDTH, 0.04>,
   <0.2+LG_E, -0.5*LG_BRICK_WIDTH, -0.04>
  }
 }
}

#declare lg_4185_clear =
merge {
 torus {
  1.5*LG_BRICK_WIDTH-0.04,
  0.04
  rotate <0, 0, 90>
  translate <LG_WALL_WIDTH-0.04, 0, 0>
 }
 torus {
  1.5*LG_BRICK_WIDTH-0.04,
  0.04
  rotate <0, 0, 90>
  translate <-LG_WALL_WIDTH+0.04, 0, 0>
 }
 difference {
  cylinder {
   <LG_WALL_WIDTH, 0, 0>,
   <-LG_WALL_WIDTH, 0, 0>,
   1.5*LG_BRICK_WIDTH-0.04
  }
  union {
   torus {
    1.5*LG_BRICK_WIDTH-0.04,
    LG_WALL_WIDTH/2
    rotate <0, 0, 90>
   }
   cylinder {
    <-0.2, 0.5*LG_BRICK_WIDTH, 0>,
    <0.2, 0.5*LG_BRICK_WIDTH, 0>,
    0.04
   }
   cylinder {
    <-0.2, -0.5*LG_BRICK_WIDTH, 0>,
    <0.2, -0.5*LG_BRICK_WIDTH, 0>,
    0.04
   }
   box {
    <-0.2, 0.5*LG_BRICK_WIDTH, 0.04>,
    <0.2, -0.5*LG_BRICK_WIDTH, -0.04>
   }
   cylinder {
    <0.2, 0, 0>,
    <-0.2, 0, 0>,
    LG_KNOB_RADIUS
   }
   cone {
    <LG_WALL_WIDTH+LG_E, 0, 0>, LG_BRICK_WIDTH+0.28+2*LG_E,
    <LG_WALL_WIDTH-0.04, 0, 0>, LG_BRICK_WIDTH+0.2
   }
   cone {
    <-LG_WALL_WIDTH-LG_E, 0, 0>, LG_BRICK_WIDTH+0.28+2*LG_E,
    <-LG_WALL_WIDTH+0.04, 0, 0>, LG_BRICK_WIDTH+0.2
   }
   #declare ROT = 0;
   #while (ROT < 6)
    union {
     cylinder {
      <0.2, 0, LG_BRICK_WIDTH>,
      <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH>,
      0.3
     }
     cylinder {
      <LG_WALL_WIDTH-0.04-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <LG_WALL_WIDTH-0.04+LG_E, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-0.2, 0, LG_BRICK_WIDTH>,
      <-LG_WALL_WIDTH+0.04, 0, LG_BRICK_WIDTH>,
      0.3
     }
     cylinder {
      <-LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <-LG_WALL_WIDTH+0.04-LG_E, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0.2, 0, LG_BRICK_WIDTH>,
      <-0.2, 0, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     rotate <60*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 6)
  merge {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_WALL_WIDTH-0.04-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
   }
   rotate <60*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     intersection {
      merge {
       box {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2.5*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2.5*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
      }
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -0.4-LG_E>,
       LG_CYLINDER_RADIUS-LG_CORNER_SPACE
      }
     }
     rotate <0, 0, 90*ROT>
     rotate <0, 90, 0>
     translate <1.25*LG_WALL_WIDTH, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    merge {
     cylinder {
      <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      LG_CYLINDER_RADIUS
     }
     cylinder {
      <1.25*LG_WALL_WIDTH, 0, 0>,
      <-1.25*LG_WALL_WIDTH, 0, 0>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <1.25*LG_WALL_WIDTH, 0, 0>,
      <-1.25*LG_WALL_WIDTH, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
      <1.25*LG_WALL_WIDTH+LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
      <-1.25*LG_WALL_WIDTH-LG_E, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1.25*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <-0.2-LG_E, 0.5*LG_BRICK_WIDTH, 0.04>,
   <0.2+LG_E, -0.5*LG_BRICK_WIDTH, -0.04>
  }
 }
}

#end
