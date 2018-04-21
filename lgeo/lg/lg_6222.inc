/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990617 Lutz Uhlmann                                                       */
/* 20080122 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6222: Brick 4 x 4 Round with Holes                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6222)
#else
#declare lg_6222 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   intersection {
    union {
     difference {
      object {
       lg_brick_cylinder
      }
      box {
       <0, LG_BRICK_WIDTH/2, LG_BRICK_HEIGHT>,
       <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_E>
      }
     }
     box {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_CYLINDER_RADIUS, LG_BRICK_INNER_HEIGHT+LG_E>
     }
     box {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_CYLINDER_RADIUS, LG_BRICK_INNER_HEIGHT+LG_E>
     }
     rotate <0, 0, 45>
     translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_BRICK_HEIGHT-LG_E>,
     2*LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
   }
   intersection {
    union {
     cylinder {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     cylinder {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     rotate <0, 0, 45>
     translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
    }
    union {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_BRICK_HEIGHT-LG_E>,
      2*LG_BRICK_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      2*LG_BRICK_WIDTH
     }
     torus {
      2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
   }
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH+0.08, 0, -LG_BRICK_WIDTH/2>,
      <2*LG_BRICK_WIDTH-0.08, 0, -LG_BRICK_WIDTH/2>,
      LG_CYLINDER_RADIUS
     }
     box {
      <LG_BRICK_WIDTH+0.08, LG_CYLINDER_RADIUS, -LG_BRICK_WIDTH/2>,
      <2*LG_BRICK_WIDTH-0.08, -LG_CYLINDER_RADIUS, -LG_CORNER_SPACE>
     }
    }
    cylinder {
     <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
     <2*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
     0.24
    }
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0.06, -2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E, -0.06, -LG_CORNER_SPACE>
   }
   difference {
    object {
     lg_brick_cylinder
    }
    box {
     <0.08, 0.4, 0>,
     <-0.04, -0.4, 1>
    }
    translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_brick_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
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
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-0.1
   }
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS, -LG_BRICK_HEIGHT-LG_E>,
     <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_E>
     translate <2*LG_BRICK_WIDTH, 0, 0>
     rotate <0, 0, 45+90*ROT>
    }
    box {
     <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT-LG_E>,
     <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
     translate <2*LG_BRICK_WIDTH, 0, 0>
     rotate <0, 0, 45+90*ROT>
    }
    cylinder {
     <2*LG_BRICK_WIDTH+0.08, 0, -LG_BRICK_WIDTH/2>,
     <2*LG_BRICK_WIDTH-0.2, 0, -LG_BRICK_WIDTH/2>,
     0.3
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
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
}

#declare lg_6222_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   intersection {
    merge {
     difference {
      object {
       lg_brick_cylinder_clear
      }
      box {
       <0, LG_BRICK_WIDTH/2, LG_BRICK_HEIGHT>,
       <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_E>
      }
     }
     box {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_CYLINDER_RADIUS, LG_BRICK_INNER_HEIGHT+LG_E>
     }
     box {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_CYLINDER_RADIUS, LG_BRICK_INNER_HEIGHT+LG_E>
     }
     rotate <0, 0, 45>
     translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_BRICK_HEIGHT-LG_E>,
     2*LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
   }
   intersection {
    merge {
     cylinder {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     cylinder {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     rotate <0, 0, 45>
     translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
    }
    merge {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_BRICK_HEIGHT-LG_E>,
      2*LG_BRICK_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      2*LG_BRICK_WIDTH
     }
     torus {
      2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
   }
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH+0.08, 0, -LG_BRICK_WIDTH/2>,
      <2*LG_BRICK_WIDTH-0.08, 0, -LG_BRICK_WIDTH/2>,
      LG_CYLINDER_RADIUS
     }
     box {
      <LG_BRICK_WIDTH+0.08, LG_CYLINDER_RADIUS, -LG_BRICK_WIDTH/2>,
      <2*LG_BRICK_WIDTH-0.08, -LG_CYLINDER_RADIUS, -LG_CORNER_SPACE>
     }
    }
    cylinder {
     <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
     <2*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
     0.24
    }
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 0.06, -2*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_E, -0.06, -LG_CORNER_SPACE>
   }
   difference {
    object {
     lg_brick_cylinder_clear
    }
    box {
     <0.08, 0.4, 0>,
     <-0.04, -0.4, 1>
    }
    translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_brick_cylinder_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
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
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-0.1
   }
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS, -LG_BRICK_HEIGHT-LG_E>,
     <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_E>
     translate <2*LG_BRICK_WIDTH, 0, 0>
     rotate <0, 0, 45+90*ROT>
    }
    box {
     <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT-LG_E>,
     <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
     translate <2*LG_BRICK_WIDTH, 0, 0>
     rotate <0, 0, 45+90*ROT>
    }
    cylinder {
     <2*LG_BRICK_WIDTH+0.08, 0, -LG_BRICK_WIDTH/2>,
     <2*LG_BRICK_WIDTH-0.2, 0, -LG_BRICK_WIDTH/2>,
     0.3
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
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
}

#end
