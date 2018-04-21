/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970212 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6558: Technic Pin Long with Friction                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6558)
#else
#declare lg_6558 =
difference {
 union {
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
  }
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
  }
  torus {
   2*LG_KNOB_RADIUS,
   0.04
   scale <1/2, 1, 1/2>
   translate <0, 1.5*LG_BRICK_WIDTH-0.04, 0>
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
   <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0>,
   <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0>,
   0.3-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
   0.3
  }
  cylinder {
   <0, 1.5*LG_BRICK_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS
  }
  #declare ROT = 0;
  #while (ROT < 4)
   union {
    cylinder {
     <0, 1.5*LG_BRICK_WIDTH-0.04, 0>,
     <0, 1, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 1, 0>,
     LG_CORNER_SPACE
    }
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
     <0, 0.6, 0>,
     <0, 0.2, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 0.6, 0>,
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
  cylinder {
   <LG_KNOB_RADIUS+LG_E, 0.96, 0>,
   <-LG_KNOB_RADIUS-LG_E, 0.96, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, 0.96, 0.04>,
   <-LG_CYLINDER_RADIUS, 1.5*LG_BRICK_WIDTH+LG_E, -0.04>
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
   <0, 0.74, LG_KNOB_RADIUS+LG_E>,
   <0, 0.74, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  cylinder {
   <0, 0.08, LG_KNOB_RADIUS+LG_E>,
   <0, 0.08, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  box {
   <0.04, 0.74, LG_CYLINDER_RADIUS>,
   <-0.04, 0.08, -LG_CYLINDER_RADIUS>
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
 }
}

#declare lg_6558_clear =
difference {
 merge {
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
  }
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
  }
  torus {
   2*LG_KNOB_RADIUS,
   0.04
   scale <1/2, 1, 1/2>
   translate <0, 1.5*LG_BRICK_WIDTH-0.04, 0>
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
   <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 0>,
   <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2, 0>,
   0.3-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
   0.3
  }
  cylinder {
   <0, 1.5*LG_BRICK_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS
  }
  #declare ROT = 0;
  #while (ROT < 4)
   merge {
    cylinder {
     <0, 1.5*LG_BRICK_WIDTH-0.04, 0>,
     <0, 1, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 1, 0>,
     LG_CORNER_SPACE
    }
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
     <0, 0.6, 0>,
     <0, 0.2, 0>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 0.6, 0>,
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
  cylinder {
   <LG_KNOB_RADIUS+LG_E, 0.96, 0>,
   <-LG_KNOB_RADIUS-LG_E, 0.96, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, 0.96, 0.04>,
   <-LG_CYLINDER_RADIUS, 1.5*LG_BRICK_WIDTH+LG_E, -0.04>
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
   <0, 0.74, LG_KNOB_RADIUS+LG_E>,
   <0, 0.74, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  cylinder {
   <0, 0.08, LG_KNOB_RADIUS+LG_E>,
   <0, 0.08, -LG_KNOB_RADIUS-LG_E>,
   0.04
  }
  box {
   <0.04, 0.74, LG_CYLINDER_RADIUS>,
   <-0.04, 0.08, -LG_CYLINDER_RADIUS>
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
 }
}

#end
