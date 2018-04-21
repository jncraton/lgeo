/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/* 20080105 Lutz Uhlmann added stud logo                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3943: Cone 4 x 4 x 2                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3943)
#else
#declare lg_angle = atan2(5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT-LG_CORNER_SPACE, LG_BRICK_WIDTH);
#declare lg_3943 =
union {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
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
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE*cos(lg_angle)>, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
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
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     difference {
      cylinder {
      <LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT+LG_E>,
       <LG_BRICK_WIDTH, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
       LG_CYLINDER_RADIUS
      }
      cylinder {
       <LG_BRICK_WIDTH, 0, 0>,
       <LG_BRICK_WIDTH, 0, -2*LG_BRICK_HEIGHT>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
      LG_CYLINDER_WALL_WIDTH/2
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.04, -LG_TOP_HEIGHT+LG_E>,
      <LG_KNOB_RADIUS, -0.04, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cone {
   <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH/2,
   <0, 0, -2*LG_BRICK_HEIGHT-LG_E>, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2
  }
 } 
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   intersection {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
    }
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     torus {
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
      LG_KNOB_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
     }
     #if (lg_quality > 2)
      object { lego_logo_text rotate <0, 0, -90*ROT> translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT> }
     #end
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
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
}

#declare lg_3943_clear =
merge {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
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
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE*cos(lg_angle)>, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
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
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     difference {
      cylinder {
      <LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT+LG_E>,
       <LG_BRICK_WIDTH, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
       LG_CYLINDER_RADIUS
      }
      cylinder {
       <LG_BRICK_WIDTH, 0, 0>,
       <LG_BRICK_WIDTH, 0, -2*LG_BRICK_HEIGHT>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
      LG_CYLINDER_WALL_WIDTH/2
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0.04, -LG_TOP_HEIGHT+LG_E>,
      <LG_KNOB_RADIUS, -0.04, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cone {
   <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH/2,
   <0, 0, -2*LG_BRICK_HEIGHT-LG_E>, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH/2
  }
 } 
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   intersection {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
    }
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     torus {
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
      LG_KNOB_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
     }
     #if (lg_quality > 2)
      object { lego_logo_text rotate <0, 0, -90*ROT> translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT> }
     #end
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
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
}

#end
