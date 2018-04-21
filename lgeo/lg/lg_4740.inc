/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4740: Space Radar Dish 2 x 2                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4740)
#else
#declare lg_radius=1.35476115;
#declare lg_angle=asin(LG_KNOB_RADIUS/lg_radius);
#declare lg_4740 =
union {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT>,
   LG_BRICK_WIDTH
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)>, lg_radius
   }
   union {
    sphere {
     <0, 0, -lg_radius*cos(lg_angle)-0.08>, lg_radius
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT>,
     LG_KNOB_INNER_RADIUS
    }
   }
  }
 }
 object {
  lg_tech_knob
 }
 difference {
  cylinder {
   <0, 0, -0.04>,
   <0, 0, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
}

#declare lg_4740_clear =
merge {
 intersection {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT>,
   LG_BRICK_WIDTH
  }
  difference {
   sphere {
    <0, 0, -lg_radius*cos(lg_angle)>, lg_radius
   }
   union {
    sphere {
     <0, 0, -lg_radius*cos(lg_angle)-0.08>, lg_radius
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT>,
     LG_KNOB_INNER_RADIUS
    }
   }
  }
 }
 object {
  lg_tech_knob_clear
 }
 difference {
  cylinder {
   <0, 0, -0.04>,
   <0, 0, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_PLATE_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
}

#end
