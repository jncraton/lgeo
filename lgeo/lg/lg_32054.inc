/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990716 Lutz Uhlmann                                                       */
/* 20080720 Lutz Uhlmann fixed Bush end                                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32054: Technic Friction Pin Long with Stop Bush                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32054)
#else
#declare lg_32054 =
union {
 difference {
  union {
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
   }
   torus {
    2*LG_KNOB_RADIUS,
    0.04
    scale <1/2, 1, 1/2>
    translate <0, -1.5*LG_BRICK_WIDTH+0.04, 0>
   }
   torus {
    2*LG_KNOB_RADIUS,
    LG_CORNER_SPACE
    scale <1/2, 2, 1/2>
    translate <0, -LG_BRICK_WIDTH/2, 0>
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_E, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0>,
    0.3-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
    0.3
   }
   cylinder {
    <0, 0.5*LG_BRICK_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <0, -1.5*LG_BRICK_WIDTH+0.04, 0>,
      <0, -1, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -1, 0>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.4, 0>,
      <0, 0.2, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, 0.2, 0>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, -0.6, 0>,
      <0, -0.2, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -0.6, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -0.2, 0>,
      LG_CORNER_SPACE
     }
     scale <1, 1, 1/2>
     translate <0, 0, LG_KNOB_RADIUS>
     rotate <0, 45+90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH+LG_E, 0>,
    <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
   torus {
    LG_KNOB_INNER_RADIUS,
    0.08
    translate <0, 0.48, 0>
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_E, -0.96, 0>,
    <-LG_KNOB_RADIUS-LG_E, -0.96, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, -0.96, 0.04>,
    <-LG_CYLINDER_RADIUS, -1.5*LG_BRICK_WIDTH-LG_E, -0.04>
   }
   cylinder {
    <0, -0.74, LG_KNOB_RADIUS+LG_E>,
    <0, -0.74, -LG_KNOB_RADIUS-LG_E>,
    0.04
   }
   cylinder {
    <0, -0.08, LG_KNOB_RADIUS+LG_E>,
    <0, -0.08, -LG_KNOB_RADIUS-LG_E>,
    0.04
   }
   box {
    <0.04, -0.74, LG_CYLINDER_RADIUS>,
    <-0.04, -0.08, -LG_CYLINDER_RADIUS>
   }
   cylinder {
    <0, 0.08, LG_KNOB_RADIUS+LG_E>,
    <0, 0.08, -LG_KNOB_RADIUS-LG_E>,
    0.04
   }
   box {
    <0.04, 0.319, LG_CYLINDER_RADIUS>,
    <-0.04, 0.08, -LG_CYLINDER_RADIUS>
   }
  }
 }
 union{
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
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
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
      box {
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1, LG_BRICK_WIDTH/2>
      }
      box {
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1>,
       <-LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
      }
      box {
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
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
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_KNOB_RADIUS
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
  rotate <90, 0, 0>
  rotate <0, 0, -90>
  translate <0, LG_BRICK_WIDTH, 0>
 }
}

#declare lg_32054_clear =
merge {
 difference {
  merge {
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
   }
   torus {
    2*LG_KNOB_RADIUS,
    0.04
    scale <1/2, 1, 1/2>
    translate <0, -1.5*LG_BRICK_WIDTH+0.04, 0>
   }
   torus {
    2*LG_KNOB_RADIUS,
    LG_CORNER_SPACE
    scale <1/2, 2, 1/2>
    translate <0, -LG_BRICK_WIDTH/2, 0>
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_E, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0>,
    0.3-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
    0.3
   }
   cylinder {
    <0, 0.5*LG_BRICK_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <0, -1.5*LG_BRICK_WIDTH+0.04, 0>,
      <0, -1, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -1, 0>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.4, 0>,
      <0, 0.2, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, 0.2, 0>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, -0.6, 0>,
      <0, -0.2, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -0.6, 0>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -0.2, 0>,
      LG_CORNER_SPACE
     }
     scale <1, 1, 1/2>
     translate <0, 0, LG_KNOB_RADIUS>
     rotate <0, 45+90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH+LG_E, 0>,
    <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
   torus {
    LG_KNOB_INNER_RADIUS,
    0.08
    translate <0, 0.48, 0>
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_E, -0.96, 0>,
    <-LG_KNOB_RADIUS-LG_E, -0.96, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, -0.96, 0.04>,
    <-LG_CYLINDER_RADIUS, -1.5*LG_BRICK_WIDTH-LG_E, -0.04>
   }
   cylinder {
    <0, -0.74, LG_KNOB_RADIUS+LG_E>,
    <0, -0.74, -LG_KNOB_RADIUS-LG_E>,
    0.04
   }
   cylinder {
    <0, -0.08, LG_KNOB_RADIUS+LG_E>,
    <0, -0.08, -LG_KNOB_RADIUS-LG_E>,
    0.04
   }
   box {
    <0.04, -0.74, LG_CYLINDER_RADIUS>,
    <-0.04, -0.08, -LG_CYLINDER_RADIUS>
   }
   cylinder {
    <0, 0.08, LG_KNOB_RADIUS+LG_E>,
    <0, 0.08, -LG_KNOB_RADIUS-LG_E>,
    0.04
   }
   box {
    <0.04, 0.319, LG_CYLINDER_RADIUS>,
    <-0.04, 0.08, -LG_CYLINDER_RADIUS>
   }
  }
 }
 merge{
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
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
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
      box {
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_BRICK_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1, LG_BRICK_WIDTH/2>
      }
      box {
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.1>,
       <-LG_BRICK_WIDTH/2+0.08, LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2>
      }
      box {
       <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
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
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_KNOB_RADIUS
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
  rotate <90, 0, 0>
  rotate <0, 0, -90>
  translate <0, LG_BRICK_WIDTH, 0>
 }
}

#end
