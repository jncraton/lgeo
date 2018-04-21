/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080205 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_48989: Technic Axle Joiner Perpendicular 3L with 4 Pins                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_48989)
#else
#declare lg_48989 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   #declare MIR2 = 0;
   #while (MIR2< 2)
    union {
     torus {
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>
     }
     torus {
      0.3+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08-LG_CORNER_SPACE, 0.35*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08-LG_CORNER_SPACE, 0.35*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     #if (MIR2= 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    union {
     torus {
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
     }
     difference {
      union {
       torus {
        0.3-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
       }
       torus {
        2*LG_KNOB_RADIUS,
        0.04
        scale <1/2, 1, 1/2>
        translate <0, LG_BRICK_WIDTH-0.04, 0>
       }
       cylinder {
        <0, LG_WALL_WIDTH/2, 0>,
        <0, -LG_E, 0>,
        0.3-LG_CORNER_SPACE
       }
       cylinder {
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <0, -LG_E, 0>,
        0.3
       }
       cylinder {
        <0, LG_BRICK_WIDTH, 0>,
        <0, -LG_E, 0>,
        LG_KNOB_RADIUS
       }
      }
      union {
       cylinder {
        <0, LG_BRICK_WIDTH+LG_E, 0>,
        <0, -2*LG_E, 0>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <0, 0.56, LG_KNOB_RADIUS+LG_E>,
        <0, 0.56, -LG_KNOB_RADIUS-LG_E>,
        0.04
       }
       box {
        <0.04, 0.56, LG_CYLINDER_RADIUS>,
        <-0.04, LG_BRICK_WIDTH+LG_E, -LG_CYLINDER_RADIUS>
       }
      }
      rotate <0, 0, -90>
      translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>
     }
     #if (MIR2= 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   difference {
    union {
     cylinder {
      <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.08, 0.3>
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH>,
      <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
      0.3
     }
     cylinder {
      <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
      0.3
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
   #end
  }
  union {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, 0.7*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -0.7*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0.7*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -0.7*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   #if (MIR= 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02, -LG_BRICK_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02, -LG_BRICK_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08-LG_CORNER_SPACE, 0.35*LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.08+LG_CORNER_SPACE, -0.35*LG_BRICK_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08, 0.35*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.08, -0.35*LG_BRICK_WIDTH+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2-0.02
    }
    union {
     box {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-0.08-LG_E, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+0.08+LG_E, -LG_BRICK_WIDTH/2>
     }
    }
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.08, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-0.08, -LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+0.08, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH>,
    0.3
   }
  }
 }
}

#declare lg_48989_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   #declare MIR2 = 0;
   #while (MIR2< 2)
    merge {
     torus {
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>
     }
     torus {
      0.3+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08-LG_CORNER_SPACE, 0.35*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08-LG_CORNER_SPACE, 0.35*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     #if (MIR2= 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    merge {
     torus {
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>
     }
     difference {
      merge {
       torus {
        0.3-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
       }
       torus {
        2*LG_KNOB_RADIUS,
        0.04
        scale <1/2, 1, 1/2>
        translate <0, LG_BRICK_WIDTH-0.04, 0>
       }
       cylinder {
        <0, LG_WALL_WIDTH/2, 0>,
        <0, -LG_E, 0>,
        0.3-LG_CORNER_SPACE
       }
       cylinder {
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <0, -LG_E, 0>,
        0.3
       }
       cylinder {
        <0, LG_BRICK_WIDTH, 0>,
        <0, -LG_E, 0>,
        LG_KNOB_RADIUS
       }
      }
      union {
       cylinder {
        <0, LG_BRICK_WIDTH+LG_E, 0>,
        <0, -2*LG_E, 0>,
        LG_KNOB_INNER_RADIUS
       }
       cylinder {
        <0, 0.56, LG_KNOB_RADIUS+LG_E>,
        <0, 0.56, -LG_KNOB_RADIUS-LG_E>,
        0.04
       }
       box {
        <0.04, 0.56, LG_CYLINDER_RADIUS>,
        <-0.04, LG_BRICK_WIDTH+LG_E, -LG_CYLINDER_RADIUS>
       }
      }
      rotate <0, 0, -90>
      translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>
     }
     #if (MIR2= 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   difference {
    merge {
     cylinder {
      <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH>,
      LG_BRICK_WIDTH/2-0.02
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.08, 0.3>
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH>,
      <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
      0.3
     }
     cylinder {
      <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH>,
      <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
      0.3
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
   #end
  }
  merge {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, 0.7*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, -0.7*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0.7*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -0.7*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   #if (MIR= 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02, -LG_BRICK_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.02, -LG_BRICK_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08-LG_CORNER_SPACE, 0.35*LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.08+LG_CORNER_SPACE, -0.35*LG_BRICK_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.08, 0.35*LG_BRICK_WIDTH-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+0.08, -0.35*LG_BRICK_WIDTH+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2-0.02
    }
    union {
     box {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-0.08-LG_E, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+0.08+LG_E, -LG_BRICK_WIDTH/2>
     }
    }
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.08, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-0.08, LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-0.08, -LG_BRICK_WIDTH>,
    <0, LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+0.08, -LG_BRICK_WIDTH>,
    <0, -LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH>,
    0.3
   }
  }
 }
}

#end
