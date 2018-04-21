/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971024 Lutz Uhlmann                                                       */
/* 20071030 Lutz Uhlmann fixed base                                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2343: Castle Goblet                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2343)
#else
#declare lg_angle = atan2(0.76-2*LG_CORNER_SPACE, 0.08);
#declare lg_2343 =
union {
 difference {
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH,
    LG_WALL_WIDTH
    rotate <90, 0, 0>
    translate <0, 0, LG_WALL_WIDTH>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_WALL_WIDTH-LG_E>,
    <0, 0, 2*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, 2*LG_WALL_WIDTH-LG_E>,
    <0, 0, 0.84+LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, 0.84>,
    <0, 0, 0.92>,
    2*LG_WALL_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, 1>,
    <0, 0, 0>,
    0.08
   }
  }
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.84+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  union {
   cone {
    <0, 0, 1.6-LG_CORNER_SPACE-LG_CORNER_SPACE*cos(lg_angle)>, 0.4-LG_CORNER_SPACE*(1-sin(lg_angle)),
    <0, 0, 0.84+LG_CORNER_SPACE-LG_CORNER_SPACE*cos(lg_angle)>, 0.32-LG_CORNER_SPACE*(1-sin(lg_angle))
   }
   cylinder {
    <0, 0, 1.6>,
    <0, 0, 1.5>,
    0.4-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 1.6+LG_E>,
    <0, 0, 1.4>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 1.6+LG_E>,
    <0, 0, 1.6-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS+LG_CORNER_SPACE
   }
   cone {
    <0, 0, 1.4+LG_E>, 0.3,
    <0, 0, 0.84-LG_E>, 0.2
   }
  }
 }
 translate <0, 0, -5*LG_PLATE_HEIGHT>
}

#declare lg_2343_clear =
merge {
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH,
    LG_WALL_WIDTH
    rotate <90, 0, 0>
    translate <0, 0, LG_WALL_WIDTH>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_WALL_WIDTH-LG_E>,
    <0, 0, 2*LG_WALL_WIDTH>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, 2*LG_WALL_WIDTH-LG_E>,
    <0, 0, 0.84+LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, 0.84>,
    <0, 0, 0.92>,
    2*LG_WALL_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, 1>,
    <0, 0, 0>,
    0.08
   }
  }
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.84+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  merge {
   cone {
    <0, 0, 1.6-LG_CORNER_SPACE-LG_CORNER_SPACE*cos(lg_angle)>, 0.4-LG_CORNER_SPACE*(1-sin(lg_angle)),
    <0, 0, 0.84+LG_CORNER_SPACE-LG_CORNER_SPACE*cos(lg_angle)>, 0.32-LG_CORNER_SPACE*(1-sin(lg_angle))
   }
   cylinder {
    <0, 0, 1.6>,
    <0, 0, 1.5>,
    0.4-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 1.6+LG_E>,
    <0, 0, 1.4>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 1.6+LG_E>,
    <0, 0, 1.6-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS+LG_CORNER_SPACE
   }
   cone {
    <0, 0, 1.4+LG_E>, 0.3,
    <0, 0, 0.84-LG_E>, 0.2
   }
  }
 }
 translate <0, 0, -5*LG_PLATE_HEIGHT>
}

#end
