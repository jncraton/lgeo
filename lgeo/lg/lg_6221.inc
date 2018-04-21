/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080209 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6221: Technic Pin Joiner Round End / Technic Handle                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6221)
#else
#declare lg_6221 =
union {
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -LG_WALL_WIDTH/2, 0>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    0.3-LG_CORNER_SPACE
   }
   
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH/2+LG_E, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-0.08, 0>,
    <0, LG_BRICK_WIDTH/2+LG_E, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 rotate <0, 0, -90>
}

#declare lg_6221_clear =
merge {
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -LG_WALL_WIDTH/2, 0>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    0.3-LG_CORNER_SPACE
   }
   
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH/2+LG_E, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-0.08, 0>,
    <0, LG_BRICK_WIDTH/2+LG_E, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 rotate <0, 0, -90>
}

#end
