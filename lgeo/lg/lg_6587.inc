/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971202 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6587: Technic Axle 3 with Stud                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6587)
#else
#declare lg_6587 =
union {
 difference {
  union {
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-0.08, 0>,
    <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, 1.5*LG_BRICK_WIDTH-0.08, 0>
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0>,
    <0, 1.5*LG_BRICK_WIDTH-0.08-LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, 1.5*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -1.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
  <0, -1.5*LG_BRICK_WIDTH, 0>,
  0.3-LG_CORNER_SPACE
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
  <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  0.3
 }
 object {
  lg_tech_knob
  rotate <90, 0, 0>
  translate <0, -1.5*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_6587_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-0.08, 0>,
    <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, 1.5*LG_BRICK_WIDTH-0.08, 0>
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0>,
    <0, 1.5*LG_BRICK_WIDTH-0.08-LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, 1.5*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -1.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
  <0, -1.5*LG_BRICK_WIDTH, 0>,
  0.3-LG_CORNER_SPACE
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
  <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  0.3
 }
 object {
  lg_tech_knob_clear
  rotate <90, 0, 0>
  translate <0, -1.5*LG_BRICK_WIDTH, 0>
 }
}

#end
