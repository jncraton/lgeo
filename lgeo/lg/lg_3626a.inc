/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980413 Lutz Uhlmann                                                       */
/* 20000721 Lutz Uhlmann moved from lg_0018 to lg_3626                         */
/* 20070912 Lutz Uhlmann moved from lg_3626 to lg_3626a                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3626a: Minifig Head Plain (Stud Solid)                                   */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3626a)
#else
#declare lg_3626a =
union {
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT+0.1>,
    0.35
   }
   cylinder {
    <0, 0, -0.16>,
    <0, 0, -LG_BRICK_HEIGHT+0.26>,
    0.51
   }
   torus {
    0.35,
    0.16
    rotate <90, 0, 0>
    translate <0, 0, -0.16>
   }
   torus {
    0.35,
    0.16
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+0.26>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+0.3>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+0.05>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
}

#declare lg_3626a_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT+0.1>,
    0.35
   }
   cylinder {
    <0, 0, -0.16>,
    <0, 0, -LG_BRICK_HEIGHT+0.26>,
    0.51
   }
   torus {
    0.35,
    0.16
    rotate <90, 0, 0>
    translate <0, 0, -0.16>
   }
   torus {
    0.35,
    0.16
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+0.26>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+0.3>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+0.05>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
}

#end
