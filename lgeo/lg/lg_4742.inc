/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971020 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4742: Cone 4 x 4 x 2 Hollow no Studs                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4742)
#else
#declare lg_angle = atan2(5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH-0.06);
#declare lg_4742 =
union {
 torus {
  LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH+LG_CORNER_SPACE,
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
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, 45>
   }
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, -45>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-0.09
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE*cos(lg_angle)>, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  union {
   intersection {
    cone {
     <0, 0, 0>, LG_BRICK_WIDTH+0.06-LG_WALL_WIDTH,
     <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -2*LG_BRICK_HEIGHT>,
     2*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 } 
 intersection {
  union {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT>,
    1.5*LG_BRICK_WIDTH
   }
  }
  difference {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH+0.22
   }
   union {
    cylinder {
     <0, 0, 0>,
     <0, 0, -2*LG_BRICK_HEIGHT>,
     LG_BRICK_WIDTH
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_CORNER_SPACE>,
     LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
     <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
   }
  }
 }
 torus {
  LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  union {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <2*LG_BRICK_WIDTH, 0.04, -LG_TOP_HEIGHT>,
     <LG_BRICK_WIDTH, -0.04, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#declare lg_4742_clear =
merge {
 torus {
  LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH+LG_CORNER_SPACE,
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
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, 45>
   }
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, -45>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-0.09
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE*cos(lg_angle)>, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  union {
   intersection {
    cone {
     <0, 0, 0>, LG_BRICK_WIDTH+0.06-LG_WALL_WIDTH,
     <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -2*LG_BRICK_HEIGHT>,
     2*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 } 
 intersection {
  merge {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT>,
    1.5*LG_BRICK_WIDTH
   }
  }
  difference {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH+0.22
   }
   union {
    cylinder {
     <0, 0, 0>,
     <0, 0, -2*LG_BRICK_HEIGHT>,
     LG_BRICK_WIDTH
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_CORNER_SPACE>,
     LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
     <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
   }
  }
 }
 torus {
  LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  merge {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH+0.06-LG_CORNER_SPACE,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <2*LG_BRICK_WIDTH, 0.04, -LG_TOP_HEIGHT>,
     <LG_BRICK_WIDTH, -0.04, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#end
