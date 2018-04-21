/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971011 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4150: Tile 2 x 2 Round                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4150)
#else
#declare lg_4150 =
union {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  union {
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_PLATE_HEIGHT+0.04+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+0.04>,
    <0, 0, -LG_PLATE_HEIGHT+0.04+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+0.04+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH-0.04
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_BRICK_WIDTH+LG_E, 0.18, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH-LG_E, -0.18, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>
    rotate <0, 0, 45>
   }
   box {
    <LG_BRICK_WIDTH+LG_E, 0.18, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH-LG_E, -0.18, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>
    rotate <0, 0, -45>
   }
  }
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -LG_TOP_HEIGHT>,
  LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   cylinder {
    <0, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    <0, LG_CYLINDER_RADIUS-0.04, -LG_TOP_HEIGHT+LG_E>,
    0.04
   }
   cylinder {
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_PLATE_HEIGHT+0.04>,
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_TOP_HEIGHT+LG_E>,
    0.04
   }
   cylinder {
    <0, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_PLATE_HEIGHT+0.04>,
    0.04
   }
   sphere {
    <0, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    0.04
   }
   sphere {
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_PLATE_HEIGHT+0.04>,
    0.04
   }
   box {
    <0.04, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    <-0.04, -LG_CYLINDER_RADIUS+0.04, -LG_TOP_HEIGHT+LG_E>
   }
   rotate <0, 0, 45+90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_4150_clear =
merge {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_PLATE_HEIGHT+0.04+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+0.04>,
    <0, 0, -LG_PLATE_HEIGHT+0.04+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+0.04+LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH-0.04
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_BRICK_WIDTH+LG_E, 0.18, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH-LG_E, -0.18, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>
    rotate <0, 0, 45>
   }
   box {
    <LG_BRICK_WIDTH+LG_E, 0.18, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH-LG_E, -0.18, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>
    rotate <0, 0, -45>
   }
  }
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -LG_TOP_HEIGHT>,
  LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   cylinder {
    <0, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    <0, LG_CYLINDER_RADIUS-0.04, -LG_TOP_HEIGHT+LG_E>,
    0.04
   }
   cylinder {
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_PLATE_HEIGHT+0.04>,
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_TOP_HEIGHT+LG_E>,
    0.04
   }
   cylinder {
    <0, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_PLATE_HEIGHT+0.04>,
    0.04
   }
   sphere {
    <0, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    0.04
   }
   sphere {
    <0, -LG_CYLINDER_RADIUS+0.04, -LG_PLATE_HEIGHT+0.04>,
    0.04
   }
   box {
    <0.04, LG_CYLINDER_RADIUS-0.04, -LG_PLATE_HEIGHT+0.04>,
    <-0.04, -LG_CYLINDER_RADIUS+0.04, -LG_TOP_HEIGHT+LG_E>
   }
   rotate <0, 0, 45+90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
