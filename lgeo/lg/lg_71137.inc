/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080220 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_71137: Exhaust Pipe                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_71137)
#else
#declare lg_71137 =
union {
 difference {
  torus {
   2.5*LG_WALL_WIDTH,
   LG_WALL_WIDTH
   translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2>
  }
  union {
   box {
    <2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH/2>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2, -LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>
   }
  }
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,0 ,0>
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH,0 ,0>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E,0 ,0>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH,0 ,0>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,0 ,0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH,0 ,0>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,0 ,0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.8>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24-LG_E>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56+LG_E>,
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
   translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.32+RING*0.16>
  }
  #declare RING = RING + 1;
 #end
}

#declare lg_71137_clear =
merge {
 difference {
  torus {
   2.5*LG_WALL_WIDTH,
   LG_WALL_WIDTH
   translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2>
  }
  union {
   box {
    <2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH>,
    <-LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH/2>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH/2, -LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>
   }
  }
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,0 ,0>
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH,0 ,0>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E,0 ,0>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH,0 ,0>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,0 ,0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH,0 ,0>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,0 ,0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>,
  0.45*LG_BRICK_WIDTH
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.8>,
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.8-LG_CORNER_SPACE>
 }
 torus {
  0.45*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.24-LG_E>,
  <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+2.56+LG_E>,
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
   translate <0, 0, LG_BRICK_WIDTH/2+2*LG_PLATE_HEIGHT+0.32+RING*0.16>
  }
  #declare RING = RING + 1;
 #end
}

#end
