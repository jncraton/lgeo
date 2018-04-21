/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980413 Lutz Uhlmann                                                       */
/* 19990123 Lutz Uhlmann moved from lg_0028 to lg_3062                         */
/* 20070914 Lutz Uhlmann moved from lg_3062 to lg_3062b                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3062b: Brick 1 x 1 Round Open Stud                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3062b)
#else
#declare lg_3062b =
union {
 object {
  lg_tech_knob
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
}

#declare lg_3062b_clear =
merge {
 object {
  lg_tech_knob_clear
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
}

#end
