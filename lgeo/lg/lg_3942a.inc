/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080105 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3942a: Cone 2 x 2 x 2 closed stud                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3942a)
#else
#declare lg_angle = atan2(5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH/2);
#declare lg_3942a =
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
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE*cos(lg_angle)>, LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH/2-LG_WALL_WIDTH,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 } 
 difference {
  cylinder {
   <0, 0, -LG_TOP_HEIGHT+LG_E>,
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 intersection {
  union {
   box {
    <LG_BRICK_WIDTH, 0.04, 0>,
    <LG_KNOB_RADIUS+LG_E, -0.04, -2*LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH, 0.04, 0>,
    <-LG_KNOB_RADIUS-LG_E, -0.04, -2*LG_BRICK_HEIGHT>
   }
  }
  cone {
   <0, 0, -LG_TOP_HEIGHT>, LG_BRICK_WIDTH/2,
   <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>, LG_BRICK_WIDTH-LG_WALL_WIDTH/2
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_TOP_HEIGHT-LG_E>,
   LG_KNOB_INNER_RADIUS
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 object {
  lg_knob
 }
}

#declare lg_3942a_clear =
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
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE*cos(lg_angle)>, LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH/2-LG_WALL_WIDTH,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 } 
 difference {
  cylinder {
   <0, 0, -LG_TOP_HEIGHT+LG_E>,
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 intersection {
  merge {
   box {
    <LG_BRICK_WIDTH, 0.04, 0>,
    <LG_KNOB_RADIUS+LG_E, -0.04, -2*LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH, 0.04, 0>,
    <-LG_KNOB_RADIUS-LG_E, -0.04, -2*LG_BRICK_HEIGHT>
   }
  }
  cone {
   <0, 0, -LG_TOP_HEIGHT>, LG_BRICK_WIDTH/2,
   <0, 0, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>, LG_BRICK_WIDTH-LG_WALL_WIDTH/2
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_TOP_HEIGHT-LG_E>,
   LG_KNOB_INNER_RADIUS
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 object {
  lg_knob_clear
 }
}

#end
