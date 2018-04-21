/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4073: Plate 1 x 1 Round                                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4073)
#else
#declare lg_4073 =
union {
 object {
  lg_knob
  translate <0,0, LG_PLATE_HEIGHT>
 }
 union {
  difference {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
    <0, 0, LG_CORNER_SPACE>,
    (LG_CYLINDER_RADIUS) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+2*LG_E>,
    <0, 0, 0>,
    (LG_KNOB_RADIUS)
   }
  }
  difference {
   cylinder {
    <0, 0, LG_CORNER_SPACE+LG_E>,
    <0, 0, 0>,
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  torus {
   (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
   (LG_KNOB_RADIUS+LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  object {
   lg_knob_inner_space
   translate <0,0, LG_PLATE_INNER_HEIGHT>
  }
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_4073_clear =
merge {
 object {
  lg_knob_clear
  translate <0,0, LG_PLATE_HEIGHT>
 }
 merge {
  difference {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
    <0, 0, LG_CORNER_SPACE>,
    (LG_CYLINDER_RADIUS) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+2*LG_E>,
    <0, 0, 0>,
    (LG_KNOB_RADIUS)
   }
  }
  difference {
   cylinder {
    <0, 0, LG_CORNER_SPACE+LG_E>,
    <0, 0, 0>,
    (LG_CYLINDER_RADIUS-LG_CORNER_SPACE) 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  torus {
   (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
  torus {
   (LG_KNOB_RADIUS+LG_CORNER_SPACE),
   (LG_CORNER_SPACE)
   rotate <90, 0, 0>
   translate <0, 0, LG_CORNER_SPACE>
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2 
   }
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT>,
    <0, 0, LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  object {
   lg_knob_inner_space_clear
   translate <0,0, LG_PLATE_INNER_HEIGHT>
  }
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
