/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001119 Lutz Uhlmann                                                       */
/* 20080201 Lutz Uhlmann fixed wrong clipping box                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32278: Technic Liftarm 1 x 15 Straight                                   */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32278)
#else
#declare lg_32278 =
union {
 difference {
  union {
   cylinder {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.04>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.04>
   }
  }
  union {
   #declare HOLE_X = -7;
   #while (HOLE_X < 8)
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE_X = HOLE_X + 1;
   #end
  }
 }
 cylinder {
  <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare HOLE_X = -7;
 #while (HOLE_X < 8)
  union {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   difference {
    union {
     #if (abs(HOLE_X)>6)
      difference {
       union {
        cylinder {
         <0, 0, LG_BRICK_WIDTH/2>,
         <0, 0, -LG_BRICK_WIDTH/2>,
         0.4-LG_CORNER_SPACE
        }
        cylinder {
         <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
         <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
         0.4
        }
        torus {
         0.4-LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <90,0,0>
         translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        torus {
         0.4-LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <90,0,0>
         translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
        }
       }
       box {
        <0, 0.5, 0.5>,
        <-HOLE_X/2, -0.5, -0.5>
       }
      }
     #end
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.36
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
    }
   }
   translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X = HOLE_X + 1;
 #end
}

#declare lg_32278_clear =
merge {
 difference {
  merge {
   cylinder {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.04>,
    <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.04>
   }
  }
  union {
   #declare HOLE_X = -7;
   #while (HOLE_X < 8)
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE_X = HOLE_X + 1;
   #end
  }
 }
 cylinder {
  <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare HOLE_X = -7;
 #while (HOLE_X < 8)
  merge {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   difference {
    merge {
     #if (abs(HOLE_X)>6)
      difference {
       merge {
        cylinder {
         <0, 0, LG_BRICK_WIDTH/2>,
         <0, 0, -LG_BRICK_WIDTH/2>,
         0.4-LG_CORNER_SPACE
        }
        cylinder {
         <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
         <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
         0.4
        }
        torus {
         0.4-LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <90,0,0>
         translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
        }
        torus {
         0.4-LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <90,0,0>
         translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
        }
       }
       box {
        <0, 0.5, 0.5>,
        <-HOLE_X/2, -0.5, -0.5>
       }
      }
     #end
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      0.36-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.36
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2>,
      <0, 0, LG_BRICK_WIDTH/2-0.08>,
      0.3
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2>,
      <0, 0, -LG_BRICK_WIDTH/2+0.08>,
      0.3
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH/2+LG_E>,
      <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_WIDTH/2-LG_E>,
      <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
      0.3+LG_CORNER_SPACE
     }
    }
   }
   translate <HOLE_X*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE_X = HOLE_X + 1;
 #end
}

#end
