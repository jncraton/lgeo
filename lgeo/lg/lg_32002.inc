/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971202 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32002: Technic Pin 3/4                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32002)
#else
#declare lg_32002 =
difference {
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
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
  }
  torus {
   2*LG_KNOB_RADIUS,
   0.04
   scale <1/2, 1, 1/2>
   translate <0, -LG_BRICK_WIDTH/2+0.04, 0>
  }
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
   <0, -LG_BRICK_WIDTH/2, 0>,
   LG_KNOB_RADIUS
  }
 }
 union {
  cylinder {
   <0, LG_BRICK_WIDTH+LG_E, 0>,
   <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
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
   <LG_KNOB_RADIUS+LG_E, -0.16, 0>,
   <-LG_KNOB_RADIUS-LG_E, -0.16, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, -0.16, 0.04>,
   <-LG_CYLINDER_RADIUS, -LG_BRICK_WIDTH/2-LG_E, -0.04>
  }
 }
}

#declare lg_32002_clear =
difference {
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
  torus {
   0.3-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
  }
  torus {
   2*LG_KNOB_RADIUS,
   0.04
   scale <1/2, 1, 1/2>
   translate <0, -LG_BRICK_WIDTH/2+0.04, 0>
  }
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
   <0, -LG_BRICK_WIDTH/2, 0>,
   LG_KNOB_RADIUS
  }
 }
 union {
  cylinder {
   <0, LG_BRICK_WIDTH+LG_E, 0>,
   <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
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
   <LG_KNOB_RADIUS+LG_E, -0.16, 0>,
   <-LG_KNOB_RADIUS-LG_E, -0.16, 0>,
   0.04
  }
  box {
   <LG_CYLINDER_RADIUS, -0.16, 0.04>,
   <-LG_CYLINDER_RADIUS, -LG_BRICK_WIDTH/2-LG_E, -0.04>
  }
 }
}

#end
