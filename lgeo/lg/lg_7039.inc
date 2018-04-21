/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980321 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_7039: Wheel Old with 4 Studs                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_7039)
#else
#declare lg_7039 =
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
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, 0>,
  <0.3, 0, 0>,
  2*LG_WALL_WIDTH
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>
 }
 box {
  <2*LG_WALL_WIDTH, 0.08, -0.64>,
  <-LG_BRICK_WIDTH/2+0.04, -0.08, 0.64>
 } 
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88
   }
   cone {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>, 0.88
    <LG_BRICK_WIDTH/2-0.2, 0, 0>, 0.76
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.88
    <-LG_BRICK_WIDTH/2+0.24, 0, 0>, 0.76
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.76
   }
  }
  cylinder {
   <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, 0, 0>,
   <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
   0.64
  }
 }
}

#declare lg_7039_clear =
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
  lg_knob_clear
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob_clear
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob_clear
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob_clear
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, 0>,
  <0.3, 0, 0>,
  2*LG_WALL_WIDTH
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>
 }
 box {
  <2*LG_WALL_WIDTH, 0.08, -0.64>,
  <-LG_BRICK_WIDTH/2+0.04, -0.08, 0.64>
 } 
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    0.88
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.04+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>,
    0.88
   }
   cone {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>, 0.88
    <LG_BRICK_WIDTH/2-0.2, 0, 0>, 0.76
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.88
    <-LG_BRICK_WIDTH/2+0.24, 0, 0>, 0.76
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.12, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.16, 0, 0>, 0.76
   }
  }
  cylinder {
   <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, 0, 0>,
   <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
   0.64
  }
 }
}

#end
