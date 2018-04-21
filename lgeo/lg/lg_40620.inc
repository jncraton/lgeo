/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080701 Lutz Uhlmann                                                       */
/* 20080721 Lutz Uhlmann added friction to Pin                                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_40620: Exhaust Pipe with Pin                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_40620)
#else
#declare lg_40620 =
union {
 difference {
  torus {
   2.5*LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_KNOB_RADIUS
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  union {
   box {
    <2*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_E, 1.5*LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH, -LG_KNOB_RADIUS-LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_E, 1.5*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0 ,LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0 ,LG_BRICK_WIDTH/2>,
  <0, 0 ,LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.8>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24-LG_E>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56+LG_E>,
  0.35*LG_BRICK_WIDTH
 }
 union {
  torus {
   LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_CORNER_SPACE-LG_E>,
   LG_WALL_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -1.4*LG_BRICK_HEIGHT>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_WALL_WIDTH
  }
  matrix <1, 0, 1,
          0, 1, 0,
          0, 0, 1,
          0, 0, 0>
  translate <0, 0, 15.5*LG_PLATE_HEIGHT>
 }
 #declare RING = 0
 #while (RING < 14)
  union {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.08-LG_CORNER_SPACE>,
    0.45*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, 0.08>,
    0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.08-LG_CORNER_SPACE>
   }
   torus {
    0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.32+RING*0.16>
  }
  #declare RING = RING + 1;
 #end
 difference {
  union {
   torus {
    2*LG_KNOB_RADIUS,
    0.04
    scale <1/2, 1, 1/2>
    translate <0, LG_BRICK_WIDTH-0.04, 0>
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    <0, -2*LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
    <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, 0.56, 0.04>,
    <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
   }
  }
  matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, LG_BRICK_WIDTH/2, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder {
    <0, 0.55, -0.48>,
    <0, 0.78, -0.48>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.55, -0.48>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.25, -0.48>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, LG_CORNER_SPACE, -0.48>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.25, -0.48>,
    <0, LG_CORNER_SPACE, -0.48>,
    LG_CORNER_SPACE
   }
   scale <1, 1, 1/2>
   matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, LG_BRICK_WIDTH/2, 0, 0>
   rotate <45+90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = -1;
 #while (ROT < 2)
  union {
   sphere {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   box {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.2>
   }
   box {
    <0.08, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0, -0.04+LG_CORNER_SPACE, -0.2>
   }
   box {
    <0.08-LG_CORNER_SPACE, 0.04, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04, -0.2>
   }
   translate <LG_BRICK_WIDTH/2, 0, 0>
   rotate <80*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 union {
  sphere {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <-0.2, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <-0.2, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.2>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.2>,
   LG_CORNER_SPACE
  }
  box {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28>,
   <-0.2, -0.04+LG_CORNER_SPACE, 0.2>
  }
  box {
   <0.08, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <-0.2, -0.04+LG_CORNER_SPACE, 0.2>
  }
  box {
   <0.08-LG_CORNER_SPACE, 0.04, 0.28-LG_CORNER_SPACE>,
   <-0.2, -0.04, 0.2>
  }
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#declare lg_40620_clear =
merge {
 difference {
  torus {
   2.5*LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_KNOB_RADIUS
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  union {
   box {
    <2*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_E, 1.5*LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH, -LG_KNOB_RADIUS-LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_E, 1.5*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0 ,LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0 ,LG_BRICK_WIDTH/2>,
  <0, 0 ,LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.8>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.24-LG_E>,
  <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+2.56+LG_E>,
  0.35*LG_BRICK_WIDTH
 }
 merge {
  torus {
   LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_CORNER_SPACE-LG_E>,
   LG_WALL_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -1.4*LG_BRICK_HEIGHT>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_WALL_WIDTH
  }
  matrix <1, 0, 1,
          0, 1, 0,
          0, 0, 1,
          0, 0, 0>
  translate <0, 0, 15.5*LG_PLATE_HEIGHT>
 }
 #declare RING = 0
 #while (RING < 14)
  merge {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.08-LG_CORNER_SPACE>,
    0.45*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, 0.08>,
    0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.08-LG_CORNER_SPACE>
   }
   torus {
    0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_CORNER_SPACE>
   }
   translate <0, 0, LG_BRICK_WIDTH+2*LG_PLATE_HEIGHT+0.32+RING*0.16>
  }
  #declare RING = RING + 1;
 #end
 difference {
  merge {
   torus {
    2*LG_KNOB_RADIUS,
    0.04
    scale <1/2, 1, 1/2>
    translate <0, LG_BRICK_WIDTH-0.04, 0>
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    <0, -2*LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
    <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, 0.56, 0.04>,
    <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
   }
  }
  matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, LG_BRICK_WIDTH/2, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder {
    <0, 0.55, -0.48>,
    <0, 0.78, -0.48>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.55, -0.48>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.25, -0.48>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, LG_CORNER_SPACE, -0.48>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.25, -0.48>,
    <0, LG_CORNER_SPACE, -0.48>,
    LG_CORNER_SPACE
   }
   scale <1, 1, 1/2>
   matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, LG_BRICK_WIDTH/2, 0, 0>
   rotate <45+90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = -1;
 #while (ROT < 2)
  merge {
   sphere {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.2>,
    LG_CORNER_SPACE
   }
   box {
    <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -0.28>,
    <LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -0.2>
   }
   box {
    <0.08, 0.04-LG_CORNER_SPACE, -0.28+LG_CORNER_SPACE>,
    <0, -0.04+LG_CORNER_SPACE, -0.2>
   }
   box {
    <0.08-LG_CORNER_SPACE, 0.04, -0.28+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.04, -0.2>
   }
   translate <LG_BRICK_WIDTH/2, 0, 0>
   rotate <80*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 merge {
  sphere {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <-0.2, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <-0.2, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.2>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <0.08-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, 0.2>,
   LG_CORNER_SPACE
  }
  box {
   <0.08-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, 0.28>,
   <-0.2, -0.04+LG_CORNER_SPACE, 0.2>
  }
  box {
   <0.08, 0.04-LG_CORNER_SPACE, 0.28-LG_CORNER_SPACE>,
   <-0.2, -0.04+LG_CORNER_SPACE, 0.2>
  }
  box {
   <0.08-LG_CORNER_SPACE, 0.04, 0.28-LG_CORNER_SPACE>,
   <-0.2, -0.04, 0.2>
  }
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 translate <-LG_BRICK_WIDTH, 0, 0>
}

#end
