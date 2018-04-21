/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971011 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0272: Cone 4 x 4 x 3                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3942)
#else
#declare lg_angle = atan2(8*LG_PLATE_HEIGHT, 1.5*LG_BRICK_WIDTH);
#declare lg_0272 =
union {
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  union {
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -8*LG_PLATE_HEIGHT>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, 45>
   }
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -45>
   }
   cylinder {
    <0, 0, -8*LG_PLATE_HEIGHT+LG_E>,
    <0, 0, -3*LG_BRICK_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-0.09
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1-cos(lg_angle))>, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH/2-LG_WALL_WIDTH,
    <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 } 
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_BRICK_WIDTH, 0.04, -3*LG_BRICK_HEIGHT>,
     <0.95, -0.04, 0>
     rotate <0, 0, 45+90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    cylinder {
     <0, 0, -3*LG_BRICK_HEIGHT>,
     <0, 0, 0>,
     1.02
    }
    cylinder {
     <0, 0, -3*LG_BRICK_HEIGHT-LG_E>,
     <0, 0, 0>,
     sqrt(2)*(LG_BRICK_WIDTH/2+LG_KNOB_RADIUS)
    }
   }
   box {
    <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, LG_KNOB_RADIUS+0.08, 0>
    rotate <0, 0, 45>
   }
   box {
    <LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, -LG_KNOB_RADIUS-0.08, 0>
    rotate <0, 0, 45>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, LG_KNOB_RADIUS+0.08, 0>
    rotate <0, 0, 225>
   }
   box {
    <LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, -LG_KNOB_RADIUS-0.08, 0>
    rotate <0, 0, 225>
   }
  }
  cone {
   <0, 0, 0>, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2,
   <0, 0, -3*LG_BRICK_HEIGHT-LG_E>, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2
  }
 } 
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  object {
   lg_knob_inner_space
   translate <0, 0, -LG_TOP_HEIGHT>
  }
 }
 object {
  lg_knob
 }
}

#declare lg_0272_clear =
merge {
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  merge {
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -8*LG_PLATE_HEIGHT>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, 45>
   }
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -45>
   }
   cylinder {
    <0, 0, -8*LG_PLATE_HEIGHT+LG_E>,
    <0, 0, -3*LG_BRICK_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-0.09
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1-cos(lg_angle))>, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH/2-LG_WALL_WIDTH,
    <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 } 
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_BRICK_WIDTH, 0.04, -3*LG_BRICK_HEIGHT>,
     <0.95, -0.04, 0>
     rotate <0, 0, 45+90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    cylinder {
     <0, 0, -3*LG_BRICK_HEIGHT>,
     <0, 0, 0>,
     1.02
    }
    cylinder {
     <0, 0, -3*LG_BRICK_HEIGHT-LG_E>,
     <0, 0, 0>,
     sqrt(2)*(LG_BRICK_WIDTH/2+LG_KNOB_RADIUS)
    }
   }
   box {
    <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, LG_KNOB_RADIUS+0.08, 0>
    rotate <0, 0, 45>
   }
   box {
    <LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, -LG_KNOB_RADIUS-0.08, 0>
    rotate <0, 0, 45>
   }
   box {
    <LG_BRICK_WIDTH/2, LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, LG_KNOB_RADIUS+0.08, 0>
    rotate <0, 0, 225>
   }
   box {
    <LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT>,
    <LG_BRICK_WIDTH/2+0.52, -LG_KNOB_RADIUS-0.08, 0>
    rotate <0, 0, 225>
   }
  }
  cone {
   <0, 0, 0>, LG_BRICK_WIDTH/2-LG_WALL_WIDTH/2,
   <0, 0, -3*LG_BRICK_HEIGHT-LG_E>, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2
  }
 } 
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  object {
   lg_knob_inner_space_clear
   translate <0, 0, -LG_TOP_HEIGHT>
  }
 }
 object {
  lg_knob_clear
 }
}

#end
