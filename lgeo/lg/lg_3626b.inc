/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980413 Lutz Uhlmann                                                       */
/* 20070912 Lutz Uhlmann moved from lg_3626a to lg_3626b                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3626b: Minifig Head Plain (Stud Hollow)                                  */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3626b)
#else
#declare lg_3626b =
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
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 object {
  lg_tech_knob
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  box {
   <0, -0.04, 0>,
   <LG_KNOB_INNER_RADIUS, 0.04, -LG_TOP_HEIGHT>
   rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_3626b_clear =
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
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 object {
  lg_tech_knob_clear
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  box {
   <0, -0.04, 0>,
   <LG_KNOB_INNER_RADIUS, 0.04, -LG_TOP_HEIGHT>
   rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
