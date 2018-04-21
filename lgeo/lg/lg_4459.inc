/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971202 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4459: Technic Pin with Friction                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4459)
#else
#declare lg_4459 =
difference {
 union {
  #declare MIR = 0;
  #while (MIR < 2)
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
    #if (MIR = 1)
     matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    #end
   }
   #declare MIR = MIR + 1;
  #end
  cylinder {
   <0, LG_WALL_WIDTH/2, 0>,
   <0, -LG_WALL_WIDTH/2, 0>,
   0.3-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
   0.3
  }
  cylinder {
   <0, LG_BRICK_WIDTH, 0>,
   <0, -LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS
  }
  #declare ROT = 0;
  #while (ROT < 4)
   union {
    cylinder {
     <0, LG_BRICK_WIDTH-0.04, 0>,
     <0, 0.6, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 0.6, 0>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_BRICK_WIDTH+0.04, 0>,
     <0, -0.6, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, -0.6, 0>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 0.2, 0>,
     <0, -0.2, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 0.2, 0>,
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
   <0, LG_BRICK_WIDTH+LG_E, 0>,
   <0, -LG_BRICK_WIDTH-LG_E, 0>,
   LG_KNOB_INNER_RADIUS
  }
  cylinder {
   <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
   <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, 0.56, 0.04>,
   <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
  }
  cylinder {
   <LG_KNOB_RADIUS+LG_E, -0.56, 0>,
   <-LG_KNOB_RADIUS-LG_E, -0.56, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, -0.56, 0.04>,
   <-LG_CYLINDER_RADIUS, -LG_BRICK_WIDTH-LG_E, -0.04>
  }
  cylinder {
   <0, 0.34, LG_KNOB_RADIUS+LG_E>,
   <0, 0.34, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  cylinder {
   <0, -0.34, LG_KNOB_RADIUS+LG_E>,
   <0, -0.34, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  box {
   <0.04, 0.34, LG_CYLINDER_RADIUS>,
   <-0.04, -0.34, -LG_CYLINDER_RADIUS>
  }
 }
}

#declare lg_4459_clear =
difference {
 merge {
  #declare MIR = 0;
  #while (MIR < 2)
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
    #if (MIR = 1)
     matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    #end
   }
   #declare MIR = MIR + 1;
  #end
  cylinder {
   <0, LG_WALL_WIDTH/2, 0>,
   <0, -LG_WALL_WIDTH/2, 0>,
   0.3-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
   0.3
  }
  cylinder {
   <0, LG_BRICK_WIDTH, 0>,
   <0, -LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS
  }
  #declare ROT = 0;
  #while (ROT < 4)
   merge {
    cylinder {
     <0, LG_BRICK_WIDTH-0.04, 0>,
     <0, 0.6, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 0.6, 0>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_BRICK_WIDTH+0.04, 0>,
     <0, -0.6, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, -0.6, 0>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 0.2, 0>,
     <0, -0.2, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 0.2, 0>,
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
   <0, LG_BRICK_WIDTH+LG_E, 0>,
   <0, -LG_BRICK_WIDTH-LG_E, 0>,
   LG_KNOB_INNER_RADIUS
  }
  cylinder {
   <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
   <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, 0.56, 0.04>,
   <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
  }
  cylinder {
   <LG_KNOB_RADIUS+LG_E, -0.56, 0>,
   <-LG_KNOB_RADIUS-LG_E, -0.56, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, -0.56, 0.04>,
   <-LG_CYLINDER_RADIUS, -LG_BRICK_WIDTH-LG_E, -0.04>
  }
  cylinder {
   <0, 0.34, LG_KNOB_RADIUS+LG_E>,
   <0, 0.34, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  cylinder {
   <0, -0.34, LG_KNOB_RADIUS+LG_E>,
   <0, -0.34, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  box {
   <0.04, 0.34, LG_CYLINDER_RADIUS>,
   <-0.04, -0.34, -LG_CYLINDER_RADIUS>
  }
 }
}

#end
