/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080113 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4285a: Space Radar Dish 6 x 6 Webbed Type 1                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4285a)
#else
#declare lg_radius=7.03734;
#declare lg_angle=asin((LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE)/lg_radius);
#declare lg_4285a =
union {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT>,
   3*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)>, lg_radius
   }
   union {
    sphere {
     <0, 0, -lg_radius*cos(lg_angle)-0.12>, lg_radius
    }
    cylinder {
     <0, 0, -LG_PLATE_HEIGHT>,
     <0, 0, LG_PLATE_HEIGHT>,
     LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
    }
   }
   difference {
    union {
     difference {
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -2*LG_PLATE_HEIGHT>,
       3*LG_BRICK_WIDTH-0.2
      }
      cylinder {
       <0, 0, 2*LG_E>,
       <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
       2*LG_BRICK_WIDTH
      }
     }
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -2*LG_PLATE_HEIGHT>,
      1.75*LG_BRICK_WIDTH
     }
    }
    union {
     box {
      <3*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_E>,
      <-3*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
     }
     box {
      <3*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_E>,
      <-3*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
      rotate <0, 0, 60>
     }
     box {
      <3*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_E>,
      <-3*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
      rotate <0, 0, -60>
     }
    }
   }
  }
 }
 torus {
  3*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((3*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, lg_radius*cos(asin((3*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    3*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.1+lg_radius*cos(asin((3*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   3*LG_BRICK_WIDTH-0.128
  }
 }
 torus {
  3*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH+0.12
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT-LG_E>,
   LG_BRICK_WIDTH
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_TOP_HEIGHT>,
   <0, 0, 0>,
   LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
  }
  union {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE+LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
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
 torus {
  LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE,
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
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
}

#declare lg_4285a_clear =
merge {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT>,
   3*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)>, lg_radius
   }
   union {
    sphere {
     <0, 0, -lg_radius*cos(lg_angle)-0.12>, lg_radius
    }
    cylinder {
     <0, 0, -LG_PLATE_HEIGHT>,
     <0, 0, LG_PLATE_HEIGHT>,
     LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
    }
   }
   difference {
    union {
     difference {
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -2*LG_PLATE_HEIGHT>,
       3*LG_BRICK_WIDTH-0.2
      }
      cylinder {
       <0, 0, 2*LG_E>,
       <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
       2*LG_BRICK_WIDTH
      }
     }
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -2*LG_PLATE_HEIGHT>,
      1.75*LG_BRICK_WIDTH
     }
    }
    union {
     box {
      <3*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_E>,
      <-3*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
     }
     box {
      <3*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_E>,
      <-3*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
      rotate <0, 0, 60>
     }
     box {
      <3*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_E>,
      <-3*LG_BRICK_WIDTH, -LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
      rotate <0, 0, -60>
     }
    }
   }
  }
 }
 torus {
  3*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((3*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, lg_radius*cos(asin((3*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    3*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    3*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.1+lg_radius*cos(asin((3*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   3*LG_BRICK_WIDTH-0.128
  }
 }
 torus {
  3*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH+0.12
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT-LG_E>,
   LG_BRICK_WIDTH
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_TOP_HEIGHT>,
   <0, 0, 0>,
   LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
  }
  union {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE+LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
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
 torus {
  LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE,
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
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
}

#end
