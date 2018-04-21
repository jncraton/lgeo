/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990119 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2736: Technic Axle Towball                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2736)
#else
#declare lg_2736 =
union {
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_CORNER_SPACE, 0>
 }
 cylinder {
  <0, -LG_WALL_WIDTH/2, 0>,
  <0, 0, 0>,
  0.3-LG_CORNER_SPACE
 }
 cylinder {
  <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
  <0, -LG_CORNER_SPACE, 0>,
  0.3
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, 0>,
  <0, -LG_E, 0>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, 0.6*LG_BRICK_WIDTH, 0>,
  0.32
 }
 difference {
  union {
   cylinder {
    <0, -LG_E, 0>,
    <0, -LG_BRICK_WIDTH+0.08, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, -LG_BRICK_WIDTH+0.08, 0>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, 0>,
    <0, -LG_BRICK_WIDTH+0.08+LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 translate <0, LG_WALL_WIDTH/2, 0>
}

#declare lg_2736_clear =
merge {
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_CORNER_SPACE, 0>
 }
 cylinder {
  <0, -LG_WALL_WIDTH/2, 0>,
  <0, 0, 0>,
  0.3-LG_CORNER_SPACE
 }
 cylinder {
  <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
  <0, -LG_CORNER_SPACE, 0>,
  0.3
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, 0>,
  <0, -LG_E, 0>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, 0.6*LG_BRICK_WIDTH, 0>,
  0.32
 }
 difference {
  merge {
   cylinder {
    <0, -LG_E, 0>,
    <0, -LG_BRICK_WIDTH+0.08, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    translate <0, -LG_BRICK_WIDTH+0.08, 0>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, 0>,
    <0, -LG_BRICK_WIDTH+0.08+LG_E, 0>,
    LG_KNOB_RADIUS-0.08
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 translate <0, LG_WALL_WIDTH/2, 0>
}

#end
