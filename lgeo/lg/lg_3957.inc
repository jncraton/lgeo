/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3957: Antenna                                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3957)
#else
#declare lg_3957 =
union {
 difference {
  union {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   torus {
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
    (LG_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   torus {
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
    (LG_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    LG_KNOB_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <0, 0, LG_PLATE_INNER_HEIGHT>
   }
  }
 }
 union {
  cylinder {
   <0, 0, 0.5-LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
  cylinder {
   <0, 0, 0.5>,
   <0, 0, LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  torus {
   (LG_KNOB_RADIUS-LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, 0.5-LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0.5-LG_E>,
   <0, 0, 4*LG_BRICK_HEIGHT-LG_KNOB_INNER_RADIUS>,
   LG_KNOB_INNER_RADIUS
  }
  sphere {
   <0, 0, 4*LG_BRICK_HEIGHT-LG_KNOB_INNER_RADIUS>,
   LG_KNOB_INNER_RADIUS
  }
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_3957_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   torus {
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
    (LG_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   torus {
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
    (LG_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  merge {
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    LG_KNOB_RADIUS
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 0, LG_PLATE_INNER_HEIGHT>
   }
  }
 }
 merge {
  cylinder {
   <0, 0, 0.5-LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
  cylinder {
   <0, 0, 0.5>,
   <0, 0, LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS-LG_CORNER_SPACE
  }
  torus {
   (LG_KNOB_RADIUS-LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, 0.5-LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0.5-LG_E>,
   <0, 0, 4*LG_BRICK_HEIGHT-LG_KNOB_INNER_RADIUS>,
   LG_KNOB_INNER_RADIUS
  }
  sphere {
   <0, 0, 4*LG_BRICK_HEIGHT-LG_KNOB_INNER_RADIUS>,
   LG_KNOB_INNER_RADIUS
  }
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
