/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080201 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32526: Technic Liftarm 3 x 5 L-Shape                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32526)
#else
#declare lg_32526 =
union {
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
    <-4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -0.04>
   }
  }
  union {
   #declare HOLE = 0;
   #while (HOLE < 5)
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
     translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE = HOLE + 1;
   #end
  }
 }
 #declare HOLE = 0;
 #while (HOLE < 5)
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
     #if (HOLE < 1)
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
        <-LG_BRICK_WIDTH, -0.5, -0.5>
       }
      }
     #end
     #if (HOLE > 3)
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
       union {
        box {
         <0, 0.5, 0.5>,
         <LG_BRICK_WIDTH, -0.5, -0.5>
        }
        box {
         <-0.5, 0, 0.5>,
         <LG_BRICK_WIDTH, -0.5, -0.5>
        }
       }
      }
     #end
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
   translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE = HOLE + 1;
 #end
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -0.04>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, 0.04>
   }
  }
  union {
   #declare HOLE = 0;
   #while (HOLE < 3)
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
     translate <0, -HOLE*LG_BRICK_WIDTH, 0>
    }
    #declare HOLE = HOLE + 1;
   #end
  }
  translate <-4*LG_BRICK_WIDTH, 0, 0>
 }
 #declare HOLE = 1;
 #while (HOLE < 3)
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
     #if (HOLE > 1)
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
        <0.5, 0, 0.5>,
        <-0.5, LG_BRICK_WIDTH, -0.5>
       }
      }
     #end
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
   translate <-4*LG_BRICK_WIDTH, -HOLE*LG_BRICK_WIDTH, 0>
  }
  #declare HOLE = HOLE + 1;
 #end
 union {
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-0.04, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  box {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2>
  }
  rotate <0, 0, 45>
  translate <-4*LG_BRICK_WIDTH, 0, 0>
 }
}

#declare lg_32526_clear =
merge {
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
    <-4*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   box {
    <0, LG_BRICK_WIDTH/2-LG_E, 0.04>,
    <-4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -0.04>
   }
  }
  union {
   #declare HOLE = 0;
   #while (HOLE < 5)
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
     translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
    }
    #declare HOLE = HOLE + 1;
   #end
  }
 }
 #declare HOLE = 0;
 #while (HOLE < 5)
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
     #if (HOLE < 1)
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
        <-LG_BRICK_WIDTH, -0.5, -0.5>
       }
      }
     #end
     #if (HOLE > 3)
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
       union {
        box {
         <0, 0.5, 0.5>,
         <LG_BRICK_WIDTH, -0.5, -0.5>
        }
        box {
         <-0.5, 0, 0.5>,
         <LG_BRICK_WIDTH, -0.5, -0.5>
        }
       }
      }
     #end
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
   translate <-HOLE*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE = HOLE + 1;
 #end
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -0.04>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, 0.04>
   }
  }
  union {
   #declare HOLE = 0;
   #while (HOLE < 3)
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
     translate <0, -HOLE*LG_BRICK_WIDTH, 0>
    }
    #declare HOLE = HOLE + 1;
   #end
  }
  translate <-4*LG_BRICK_WIDTH, 0, 0>
 }
 #declare HOLE = 1;
 #while (HOLE < 3)
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
     #if (HOLE > 1)
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
        <0.5, 0, 0.5>,
        <-0.5, LG_BRICK_WIDTH, -0.5>
       }
      }
     #end
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
   translate <-4*LG_BRICK_WIDTH, -HOLE*LG_BRICK_WIDTH, 0>
  }
  #declare HOLE = HOLE + 1;
 #end
 merge {
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.04-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.04+LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-0.04, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <0.04, -0.4, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  box {
   <-0.04+LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
   <0.04-LG_CORNER_SPACE, -0.4, -LG_BRICK_WIDTH/2>
  }
  rotate <0, 0, 45>
  translate <-4*LG_BRICK_WIDTH, 0, 0>
 }
}

#end
