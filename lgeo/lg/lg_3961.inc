/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3961: Space Radar Dish 8 x 8                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3961)
#else
#declare lg_radius=7.86081425;
#declare lg_angle=asin(LG_BRICK_WIDTH/lg_radius);
#declare lg_3961 =
union {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -3*LG_PLATE_HEIGHT>,
   4*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)>, lg_radius
   }
   union {
    difference {
     sphere {
      <0, 0, -lg_radius*cos(lg_angle)-0.08>, lg_radius
     }
     cylinder {
      <0, 0, -LG_TOP_HEIGHT>,
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH+0.12
     }
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
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
  }
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((4*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, lg_radius*cos(asin((4*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -LG_BRICK_HEIGHT>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, lg_radius*cos(asin((4*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   4*LG_BRICK_WIDTH-LG_WALL_WIDTH
  }
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH+0.12
   }
   cylinder {
    <0, 0, -2*LG_TOP_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, 0>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
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

#declare lg_3961_clear =
merge {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -3*LG_PLATE_HEIGHT>,
   4*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)>, lg_radius
   }
   union {
    difference {
     sphere {
      <0, 0, -lg_radius*cos(lg_angle)-0.08>, lg_radius
     }
     cylinder {
      <0, 0, -LG_TOP_HEIGHT>,
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH+0.12
     }
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
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
   }
  }
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((4*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, lg_radius*cos(asin((4*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -LG_BRICK_HEIGHT>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, lg_radius*cos(asin((4*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   4*LG_BRICK_WIDTH-LG_WALL_WIDTH
  }
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH+0.12
   }
   cylinder {
    <0, 0, -2*LG_TOP_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH+0.12-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, 0>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, LG_BRICK_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
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
