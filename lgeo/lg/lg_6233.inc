/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971111 Lutz Uhlmann                                                       */
/* 20080122 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6233: Cone 3 x 3 x 2                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6233)
#else
#declare lg_angle = atan2(5*LG_PLATE_HEIGHT, LG_BRICK_WIDTH/2);
#declare lg_6233 =
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
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    1.5*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
    rotate <0, 0, 45>
   }
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
    rotate <0, 0, -45>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT+LG_E>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1-cos(lg_angle))>, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH,
    <0, 0, -5*LG_PLATE_HEIGHT>, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 } 
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     difference {
      cylinder {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT+LG_E>,
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
       LG_CYLINDER_RADIUS
      }
      cylinder {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
      LG_CYLINDER_WALL_WIDTH/2
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, LG_BRICK_WIDTH/2+0.04, -LG_TOP_HEIGHT+LG_E>,
      <-LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-0.04, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cone {
   <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH/2,
   <0, 0, -2*LG_BRICK_HEIGHT-LG_E>, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2
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
      object {
       lego_logo_text
       rotate <0, 0, -90*ROT>
       translate <LG_BRICK_WIDTH/2 ,LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>
      }
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
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_TOP_HEIGHT>,
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
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_TOP_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
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

#declare lg_6233_clear =
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
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    1.5*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
    rotate <0, 0, 45>
   }
   box {
    <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS, -2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
    rotate <0, 0, -45>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT+LG_E>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 }
 difference {
  cone {
   <0, 0, -LG_CORNER_SPACE*(1-cos(lg_angle))>, LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle)),
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE*(1-cos(lg_angle))>, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle))
  }
  intersection {
   cone {
    <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH,
    <0, 0, -5*LG_PLATE_HEIGHT>, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT>,
    1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 } 
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     difference {
      cylinder {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT+LG_E>,
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
       LG_CYLINDER_RADIUS
      }
      cylinder {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
      LG_CYLINDER_WALL_WIDTH/2
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, LG_BRICK_WIDTH/2+0.04, -LG_TOP_HEIGHT+LG_E>,
      <-LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-0.04, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cone {
   <0, 0, 0>, LG_BRICK_WIDTH-LG_WALL_WIDTH/2,
   <0, 0, -2*LG_BRICK_HEIGHT-LG_E>, 1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2
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
      lg_knob_inner_space_clear
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
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
      object {
       lego_logo_text
       rotate <0, 0, -90*ROT>
       translate <LG_BRICK_WIDTH/2 ,LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>
      }
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
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_TOP_HEIGHT>,
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
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_TOP_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
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
