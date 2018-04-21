/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990514 Lutz Uhlmann                                                       */
/* 20080105 Lutz Uhlmann fixed wrong difference                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30065: Space Radar Dish 4 x 4                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30065)
#else
#declare lg_radius=3.5360305;
#declare lg_angle=asin((LG_BRICK_WIDTH/2)/lg_radius);
#declare lg_30065 =
union {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)-0.02>, lg_radius
   }
   union {
    difference {
     sphere {
      <0, 0, -lg_radius*cos(lg_angle)-0.1>, lg_radius
     }
     cylinder {
      <0, 0, -LG_TOP_HEIGHT>,
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
    }
    object {
     lg_knob_inner_space
     translate <0, 0, -LG_TOP_HEIGHT>
    }
   }
  }
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>
 }
 difference {
  union {
   cylinder {
    <0, 0, lg_radius*cos(asin((2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.1+lg_radius*cos(asin((2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-0.02>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   2*LG_BRICK_WIDTH-0.09
  }
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -2*LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
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

#declare lg_30065_clear =
merge {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)-0.02>, lg_radius
   }
   union {
    difference {
     sphere {
      <0, 0, -lg_radius*cos(lg_angle)-0.1>, lg_radius
     }
     cylinder {
      <0, 0, -LG_TOP_HEIGHT>,
      <0, 0, LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
    }
    object {
     lg_knob_inner_space_clear
     translate <0, 0, -LG_TOP_HEIGHT>
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
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>
 }
 difference {
  merge {
   cylinder {
    <0, 0, lg_radius*cos(asin((2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.1+lg_radius*cos(asin((2*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-0.02>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   2*LG_BRICK_WIDTH-0.09
  }
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -2*LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_PLATE_HEIGHT>,
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
