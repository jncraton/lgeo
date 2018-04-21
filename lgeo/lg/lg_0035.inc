/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971030 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0035: Wheel Spoked Large                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0035)
#else
#declare lg_0035 =
union {
 union {
  cylinder {
   <LG_E, 0, 0>,
   <-3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
   LG_KNOB_INNER_RADIUS
  }
  cylinder {
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
   <-3.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
   LG_KNOB_INNER_RADIUS
  }
  torus {
   LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
   LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-3.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  difference {
   cylinder {
    <0, 0, 0>,
    <-LG_BRICK_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_WALL_WIDTH/4
    rotate <0, 0, 90>
    translate <-3.25*LG_WALL_WIDTH, 0, 0>
   }
  }
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
  translate <-LG_BRICK_WIDTH/2, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, 0>,
  <0.3, 0, 0>,
  2*LG_WALL_WIDTH
 }
 cylinder {
  <0.2, 0, 0>,
  <LG_BRICK_WIDTH/2, 0, 0>,
  LG_BRICK_WIDTH/2+LG_CORNER_SPACE
 }
 cylinder {
  <0.2+LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
  LG_BRICK_WIDTH/2
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.2+LG_CORNER_SPACE, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 12)
  union {
   box {
    <-0.24+LG_CORNER_SPACE, 0.06, 0.3>,
    <0.18, -0.06, 1.6>
   }
   box {
    <-0.24, 0.06-LG_CORNER_SPACE, 0.3>,
    <0, -0.06+LG_CORNER_SPACE, 1.6>
   }
   cylinder {
    <-0.24+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.3>,
    <-0.24+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 1.6>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.6>,
    <-0.24+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 1.6>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18, 0, 0.3>,
    <0.18, 0, 1.6>,
    0.06
   }
   rotate <ROT*30, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 torus {
  1.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.76-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.76-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    1.76-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    1.76
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    1.76-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    1.76
   }
   cone {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>, 1.76
    <LG_BRICK_WIDTH/2-0.2, 0, 0>, 1.64
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 1.76
    <-LG_BRICK_WIDTH/2+0.24, 0, 0>, 1.64
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 1.64
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2, 0, 0>,
    1.52
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    1.52+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    1.52+LG_CORNER_SPACE
   }
  }
 }
}

#declare lg_0035_clear =
merge {
 merge {
  cylinder {
   <LG_E, 0, 0>,
   <-3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
   LG_KNOB_INNER_RADIUS
  }
  cylinder {
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
   <-3.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
   LG_KNOB_INNER_RADIUS
  }
  torus {
   LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  torus {
   LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-3.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  }
  difference {
   cylinder {
    <0, 0, 0>,
    <-LG_BRICK_WIDTH, 0, 0>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
    LG_WALL_WIDTH/4
    rotate <0, 0, 90>
    translate <-3.25*LG_WALL_WIDTH, 0, 0>
   }
  }
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
  translate <-LG_BRICK_WIDTH/2, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, 0>,
  <0.3, 0, 0>,
  2*LG_WALL_WIDTH
 }
 cylinder {
  <0.2, 0, 0>,
  <LG_BRICK_WIDTH/2, 0, 0>,
  LG_BRICK_WIDTH/2+LG_CORNER_SPACE
 }
 cylinder {
  <0.2+LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
  LG_BRICK_WIDTH/2
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.2+LG_CORNER_SPACE, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 12)
  merge {
   box {
    <-0.24+LG_CORNER_SPACE, 0.06, 0.3>,
    <0.18, -0.06, 1.6>
   }
   box {
    <-0.24, 0.06-LG_CORNER_SPACE, 0.3>,
    <0, -0.06+LG_CORNER_SPACE, 1.6>
   }
   cylinder {
    <-0.24+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.3>,
    <-0.24+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 1.6>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.6>,
    <-0.24+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 1.6>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18, 0, 0.3>,
    <0.18, 0, 1.6>,
    0.06
   }
   rotate <ROT*30, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 torus {
  1.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.76-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.76-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    1.76-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    1.76
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    1.76-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    1.76
   }
   cone {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>, 1.76
    <LG_BRICK_WIDTH/2-0.2, 0, 0>, 1.64
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 1.76
    <-LG_BRICK_WIDTH/2+0.24, 0, 0>, 1.64
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 1.64
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <-LG_BRICK_WIDTH/2, 0, 0>,
    1.52
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    1.52+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    1.52+LG_CORNER_SPACE
   }
  }
 }
}

#end
