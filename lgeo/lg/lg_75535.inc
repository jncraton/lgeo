/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_75535: Technic Pin Joiner Round                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_75535)
#else
#declare lg_75535 =
union {
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_BRICK_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-0.08, 0>,
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH-LG_E, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+0.08, 0>,
    <0, -LG_BRICK_WIDTH-LG_E, 0>,
    0.3
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
}

#declare lg_75535_clear =
merge {
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_BRICK_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-0.08, 0>,
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    0.3
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH-LG_E, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+0.08, 0>,
    <0, -LG_BRICK_WIDTH-LG_E, 0>,
    0.3
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
}

#end
