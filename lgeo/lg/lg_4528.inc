/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4528: Town Frypan                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4528)
#else
#declare lg_4528 =
union {
 torus {
  0.52-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.42+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.52-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -1.5*LG_PLATE_HEIGHT>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
  <-0.42-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT>,
    0.52-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.52
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT+0.08>,
    0.42
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    0.42+LG_CORNER_SPACE
   }
  }
 }
}

#declare lg_4528_clear =
merge {
 torus {
  0.52-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.42+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.52-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -1.5*LG_PLATE_HEIGHT>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
  <-0.42-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT>,
    0.52-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.52
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT+0.08>,
    0.42
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    0.42+LG_CORNER_SPACE
   }
  }
 }
}

#end
