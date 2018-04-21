/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990111 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0313: Plate 5 x 2 Hinge Pivot                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0313)
#else
#declare lg_0313 =
union {
 difference {
  union {
   cylinder {
    <0, 4*LG_WALL_WIDTH, 0>,
    <0, -4*LG_WALL_WIDTH, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, 0.04, 0>,
    <0, 4*LG_WALL_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 4*LG_WALL_WIDTH+LG_E, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.04, 0>,
    <0, -4*LG_WALL_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -4*LG_WALL_WIDTH-LG_E, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.05, 0>,
    <0, -0.05, 0>,
    0.1
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
 } 
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 } 
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
 } 
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 } 
}

#declare lg_0313_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 4*LG_WALL_WIDTH, 0>,
    <0, -4*LG_WALL_WIDTH, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, 0.04, 0>,
    <0, 4*LG_WALL_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 4*LG_WALL_WIDTH+LG_E, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.04, 0>,
    <0, -4*LG_WALL_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -4*LG_WALL_WIDTH-LG_E, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.05, 0>,
    <0, -0.05, 0>,
    0.1
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
 } 
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 } 
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
 } 
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 } 
}

#end
