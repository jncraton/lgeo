/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3899: Town Cup                                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3899)
#else
#declare lg_3899 =
union {
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-0.12
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2-0.12+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
  }
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
  translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-0.12+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+0.12-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
  <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT>,
  <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE+LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE>
 }
}

#declare lg_3899_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-0.12
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2-0.12+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
  }
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
  translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-0.12+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+0.12-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
  <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT>,
  <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE+LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+LG_CORNER_SPACE>
 }
}

#end
