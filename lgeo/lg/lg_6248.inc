/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980310 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6248: Wheel Center Freestyle                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6248)
#else
#declare lg_6248 =
union {
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
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
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
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
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
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.64
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.08, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, 0>,
    0.3
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.04+0.1, 0, 0>, 0.64,
    <-LG_BRICK_WIDTH/2, 0, 0>,0.78
   }
  }
 }
 difference {
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT+LG_E, 0.04, 0.64>,
    <LG_WALL_WIDTH/2, -0.04, -0.64>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT+LG_E, 0.64, 0.04>,
    <LG_WALL_WIDTH/2, -0.64, -0.04>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT+LG_E, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.02, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE+LG_E, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02-LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.1, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02, 0, 0>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 translate <-0.02, 0, 0>
}

#declare lg_6248_clear =
merge {
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
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
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
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
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
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, 0, 0>,
    <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
    0.64
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-0.08, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, 0>,
    0.3
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
   cone {
    <-LG_BRICK_WIDTH/2+0.04+0.1, 0, 0>, 0.64,
    <-LG_BRICK_WIDTH/2, 0, 0>,0.78
   }
  }
 }
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT+LG_E, 0.04, 0.64>,
    <LG_WALL_WIDTH/2, -0.04, -0.64>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT+LG_E, 0.64, 0.04>,
    <LG_WALL_WIDTH/2, -0.64, -0.04>
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT+LG_E, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.02, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE+LG_E, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-LG_BRICK_WIDTH/2+0.02+LG_CORNER_SPACE, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02-LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+0.1, 0, 0>,
    <-LG_BRICK_WIDTH/2+0.02, 0, 0>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 translate <-0.02, 0, 0>
}

#end
