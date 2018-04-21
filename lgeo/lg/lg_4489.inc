/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990921 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4489: Castle Wagon Wheel Large                                           */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4489)
#else
#declare lg_4489 =
union {
 difference {
  union {
   cylinder {
    <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <1.75*LG_WALL_WIDTH, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <1.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <-2*LG_WALL_WIDTH, 0, 0>,
    <-1.75*LG_WALL_WIDTH, 0, 0>,
    2*LG_WALL_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cone {
    <1.75*LG_WALL_WIDTH+LG_E, 0, 0>, 0.32+LG_E,
    <1.25*LG_WALL_WIDTH, 0, 0>, 0.24
   }
   cylinder {
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    <1.75*LG_WALL_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <1.75*LG_WALL_WIDTH-LG_E, 0, 0>,
    <0.75*LG_WALL_WIDTH, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0.75*LG_WALL_WIDTH+LG_E, 0, 0>,
    <0.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    0.08-LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_WALL_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <1.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_WALL_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   cylinder {
    <2.75*LG_WALL_WIDTH, 0, 0>,
    <LG_WALL_WIDTH, 0, 0>
    1.68-LG_CORNER_SPACE
   }
   cylinder {
    <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
    1.68
   }
  }
  union {
   cylinder {
    <2.75*LG_WALL_WIDTH, 0, 0>,
    <LG_WALL_WIDTH, 0, 0>
    1.4
   }
   cylinder {
    <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2.75*LG_WALL_WIDTH+LG_E, 0, 0>
    1.4+LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <LG_WALL_WIDTH-LG_E, 0, 0>
    1.4+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 8)
  union {
   sphere {
    <2.75*LG_WALL_WIDTH, 0, 1.56>,
    0.08
   }
   union {
    cylinder {
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0>,
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 0>,
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0>,
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 0>,
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    box {
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.1, 0>,
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.1, 1.12>
    }
    box {
     <0.25*LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>,
     <-0.75*LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 1.12>
    }
    matrix <1, 0, 0, 0, 1, 0, 0.3/1.12, 0, 1, 0, 0, 0.3>
   }
   rotate <45*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_4489_clear =
merge {
 difference {
  merge {
   cylinder {
    <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <1.75*LG_WALL_WIDTH, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <1.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <-2*LG_WALL_WIDTH, 0, 0>,
    <-1.75*LG_WALL_WIDTH, 0, 0>,
    2*LG_WALL_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cone {
    <1.75*LG_WALL_WIDTH+LG_E, 0, 0>, 0.32+LG_E,
    <1.25*LG_WALL_WIDTH, 0, 0>, 0.24
   }
   cylinder {
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    <1.75*LG_WALL_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <1.75*LG_WALL_WIDTH-LG_E, 0, 0>,
    <0.75*LG_WALL_WIDTH, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0.75*LG_WALL_WIDTH+LG_E, 0, 0>,
    <0.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    0.08-LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.5*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_WALL_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <1.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_WALL_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <2.75*LG_WALL_WIDTH, 0, 0>,
    <LG_WALL_WIDTH, 0, 0>
    1.68-LG_CORNER_SPACE
   }
   cylinder {
    <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
    1.68
   }
  }
  union {
   cylinder {
    <2.75*LG_WALL_WIDTH, 0, 0>,
    <LG_WALL_WIDTH, 0, 0>
    1.4
   }
   cylinder {
    <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2.75*LG_WALL_WIDTH+LG_E, 0, 0>
    1.4+LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <LG_WALL_WIDTH-LG_E, 0, 0>
    1.4+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2.75*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.68-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 8)
  merge {
   sphere {
    <2.75*LG_WALL_WIDTH, 0, 1.56>,
    0.08
   }
   merge {
    cylinder {
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0>,
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 0>,
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0>,
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 0>,
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 1.12>,
     LG_CORNER_SPACE
    }
    box {
     <0.25*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.1, 0>,
     <-0.75*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.1, 1.12>
    }
    box {
     <0.25*LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>,
     <-0.75*LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 1.12>
    }
    matrix <1, 0, 0, 0, 1, 0, 0.3/1.12, 0, 1, 0, 0, 0.3>
   }
   rotate <45*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
