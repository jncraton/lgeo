/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080213 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_43898: Space Radar Dish 3 x 3                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_43898)
#else
#declare lg_radius=1.85;
#declare lg_angle=asin((LG_BRICK_WIDTH/2)/lg_radius);
#declare lg_43898 =
union {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT>,
   1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
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
    cylinder {
     <0, 0, 0.1>,
     <0, 0, -LG_PLATE_HEIGHT>,
     LG_KNOB_INNER_RADIUS
    }
   }
  }
 }
 torus {
  1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>
 }
 difference {
  union {
   cylinder {
    <0, 0, lg_radius*cos(asin((1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    1.5*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.1+lg_radius*cos(asin((1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-0.02>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   1.5*LG_BRICK_WIDTH-0.09
  }
 }
 torus {
  1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_tech_knob
 }
}

#declare lg_43898_clear =
merge {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT>,
   1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
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
    cylinder {
     <0, 0, 0.1>,
     <0, 0, -LG_PLATE_HEIGHT>,
     LG_KNOB_INNER_RADIUS
    }
   }
  }
 }
 torus {
  1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, lg_radius*cos(asin((1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>
 }
 difference {
  merge {
   cylinder {
    <0, 0, lg_radius*cos(asin((1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-LG_CORNER_SPACE-0.02>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    1.5*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.1+lg_radius*cos(asin((1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE)/lg_radius))-lg_radius*cos(lg_angle)-0.02>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   1.5*LG_BRICK_WIDTH-0.09
  }
 }
 torus {
  1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_tech_knob_clear
 }
}

#end
