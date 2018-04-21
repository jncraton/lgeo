/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4735: Space Robot Arm                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4735)
#else
#declare lg_4735 =
union {
 difference {
  union {
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -2*LG_PLATE_HEIGHT-2*LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 sphere {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_CYLINDER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <LG_CYLINDER_RADIUS, LG_WALL_WIDTH, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 cylinder {
  <0.52, 0, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, 0, -LG_WALL_WIDTH>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <1.00+LG_E, 0, -LG_WALL_WIDTH>,
  <0.52-LG_E, 0, -LG_WALL_WIDTH>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <1.00, 0, -LG_WALL_WIDTH>,
  <1.2+LG_E, 0, -LG_WALL_WIDTH>,
  LG_KNOB_INNER_RADIUS
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.52, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.60, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.68, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.76, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.84, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.92, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <1.00, 0, -LG_WALL_WIDTH>
 }
 intersection {
  union {
   box {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <0.12, -LG_WALL_WIDTH, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0.12, -LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH>
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.12, LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.12, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.12, -LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.12, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
  }
  cone {
   <1.2, 0, -LG_WALL_WIDTH>, LG_WALL_WIDTH,
   <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, 0, -LG_WALL_WIDTH>, LG_KNOB_RADIUS
  }
 }
 intersection {
  union {
   difference {
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, 0, 0>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+0.1
     }
    }
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, 0, LG_E>,
      <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, 0>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   } 
   torus {
    LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   } 
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   } 
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   } 
  }
  union {
   box {
    <0, 0.4, 0>,
    <-0.4, -0.4, -0.4>
    rotate <0, 0, 35>
   }
   box {
    <0, 0.4, 0>,
    <-0.4, -0.4, -0.4>
    rotate <0, 0, -35>
   }
   translate <2*LG_BRICK_WIDTH, 0, LG_E>
  }
 }
 union {
  cylinder {
   <0, LG_WALL_WIDTH+0.05, 0>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH>,
   0.05-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.05
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  rotate <0, 0, -35>
  translate <2*LG_BRICK_WIDTH, 0, 0>
 }
 union {
  cylinder {
   <0, LG_WALL_WIDTH+0.05, 0>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH>,
   0.05-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.05
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  rotate <0, 0, -145>
  translate <2*LG_BRICK_WIDTH, 0, 0>
 }
}

#declare lg_4735_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -2*LG_PLATE_HEIGHT-2*LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE 
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 sphere {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_KNOB_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_CYLINDER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <LG_CYLINDER_RADIUS, LG_WALL_WIDTH, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 cylinder {
  <0.52, 0, -LG_WALL_WIDTH>,
  <LG_KNOB_INNER_RADIUS, 0, -LG_WALL_WIDTH>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <1.00+LG_E, 0, -LG_WALL_WIDTH>,
  <0.52-LG_E, 0, -LG_WALL_WIDTH>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <1.00, 0, -LG_WALL_WIDTH>,
  <1.2+LG_E, 0, -LG_WALL_WIDTH>,
  LG_KNOB_INNER_RADIUS
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.52, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.60, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.68, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.76, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.84, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.92, 0, -LG_WALL_WIDTH>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <1.00, 0, -LG_WALL_WIDTH>
 }
 intersection {
  merge {
   box {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <0.12, -LG_WALL_WIDTH, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0.12, -LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH>
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.12, LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.12, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <0.12, -LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.12, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
  }
  cone {
   <1.2, 0, -LG_WALL_WIDTH>, LG_WALL_WIDTH,
   <2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, 0, -LG_WALL_WIDTH>, LG_KNOB_RADIUS
  }
 }
 intersection {
  merge {
   difference {
    merge {
     cylinder {
      <2*LG_BRICK_WIDTH, 0, 0>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+0.1
     }
    }
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, 0, LG_E>,
      <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, 0>,
      <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   } 
   torus {
    LG_KNOB_INNER_RADIUS+0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   } 
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
   } 
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   } 
  }
  union {
   box {
    <0, 0.4, 0>,
    <-0.4, -0.4, -0.4>
    rotate <0, 0, 35>
   }
   box {
    <0, 0.4, 0>,
    <-0.4, -0.4, -0.4>
    rotate <0, 0, -35>
   }
   translate <2*LG_BRICK_WIDTH, 0, LG_E>
  }
 }
 merge {
  cylinder {
   <0, LG_WALL_WIDTH+0.05, 0>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH>,
   0.05-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.05
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  rotate <0, 0, -35>
  translate <2*LG_BRICK_WIDTH, 0, 0>
 }
 merge {
  cylinder {
   <0, LG_WALL_WIDTH+0.05, 0>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH>,
   0.05-LG_CORNER_SPACE
  }
  cylinder {
   <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH+0.05, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.05
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_CORNER_SPACE>
  }
  torus {
   0.05-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, LG_WALL_WIDTH+0.05, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  rotate <0, 0, -145>
  translate <2*LG_BRICK_WIDTH, 0, 0>
 }
}

#end
