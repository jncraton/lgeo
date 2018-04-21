/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001113 Lutz Uhlmann                                                       */
/* 20080203 Lutz Uhlmann fixed wrong difference                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30056: Fence Spindled 4 x 4 x 2 Round                                    */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30056)
#else
#declare lg_angle1=asin(0.08/(4*LG_BRICK_WIDTH-0.08));
#declare lg_angle2=asin(0.08/(3*LG_BRICK_WIDTH+0.08));
#declare lg_angle3=asin(LG_CORNER_SPACE/(4*LG_BRICK_WIDTH-LG_CORNER_SPACE));
#declare lg_angle4=asin(LG_CORNER_SPACE/(3*LG_BRICK_WIDTH+LG_CORNER_SPACE));
#declare lg_30056 =
union {
 union {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <4*LG_BRICK_WIDTH-0.08, 0, 0>
  rotate <0, 0, -lg_angle1*180/pi>
 }
 union {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <0, -4*LG_BRICK_WIDTH+0.08, 0>
  rotate <0, 0, lg_angle1*180/pi>
 }
 difference {
  union {
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_WALL_WIDTH>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   box {
    <0, 4, LG_E>,
    <-4, -4, -0.5>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <4, 4, LG_E>,
    <-4, 0, -0.5>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_WALL_WIDTH-LG_E>,
    3*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH-LG_E>,
    <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   box {
    <0, 3, LG_E>,
    <-3, -3, -0.5>
    rotate <0, 0, lg_angle2*180/pi>
   }
   box {
    <3, 3, LG_E>,
    <-3, 0, -0.5>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <0, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1))+LG_E, LG_E>,
    <2*LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2))-LG_E, -LG_WALL_WIDTH-LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1))-LG_E, 0, LG_E>,
    <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2))+LG_E, -2*LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_E>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -18>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -36>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -54>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -72>
   }
  }
 }
 union {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <3*LG_BRICK_WIDTH+0.08, 0, 0>
  rotate <0, 0, -lg_angle2*180/pi>
 }
 union {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <0, -3*LG_BRICK_WIDTH-0.08, 0>
  rotate <0, 0, lg_angle2*180/pi>
 }
 difference {
  union {
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0, 3, LG_E>,
    <-3, -3, -0.5>
    rotate <0, 0, lg_angle2*180/pi>
   }
   box {
    <3, 3, LG_E>,
    <-3, 0, -0.5>
    rotate <0, 0, -lg_angle2*180/pi>
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2)), -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE>,
  <0.1, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2))-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), 0, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -0.1, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), 0>,
  <0.1, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2))-LG_E, -LG_WALL_WIDTH>
 }
 box {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE, 0>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -0.1, -LG_WALL_WIDTH>
 }
 /* Socket */
 union {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle3*180/pi>
 }
 union {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle4*180/pi>
 }
 union {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0,- 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle3*180/pi>
 }
 union {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle4*180/pi>
 }
 difference {
  union {
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -2*LG_BRICK_HEIGHT>,
     <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     3*LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    union {
     cylinder {
      <0, 0, -2*LG_BRICK_HEIGHT>,
      <0, 0, -5*LG_PLATE_HEIGHT>,
      3*LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
      <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      3*LG_BRICK_WIDTH+LG_CORNER_SPACE
     }
    }
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, -2>
    rotate <0, 0, lg_angle4*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, -2>
    rotate <0, 0, -lg_angle4*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(2,1)*180/pi>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
    rotate <0, 0, -atan2(2,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
   }
  }
 }
 difference {
  union {
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT>,
    <0, 0, -5*LG_PLATE_HEIGHT>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, -2>
    rotate <0, 0, lg_angle4*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, -2>
    rotate <0, 0, -lg_angle4*180/pi>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    4*LG_BRICK_WIDTH-0.12
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -5*LG_PLATE_HEIGHT+LG_E>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   box {
    <4*LG_BRICK_WIDTH, 0, -5*LG_PLATE_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH, LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_E>,
    <-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3))+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4))-LG_E, -5*LG_PLATE_HEIGHT+LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3))-LG_E, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4))+LG_E, -LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(3,1)*180/pi>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
    rotate <0, 0, -atan2(3,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -18>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -36>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -54>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -3.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), -LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), -LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), -LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
 }
 box {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -2*LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 #declare COL=0;
 #while (COL < 5)
  union {
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_E>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   rotate <0, 0, -18*COL>
  }
  #declare COL = COL + 1;
 #end
 object {
  lg_tech_knob
  translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_tech_knob
  translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_30056_clear =
merge {
 merge {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <4*LG_BRICK_WIDTH-0.08, 0, 0>
  rotate <0, 0, -lg_angle1*180/pi>
 }
 merge {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <0, -4*LG_BRICK_WIDTH+0.08, 0>
  rotate <0, 0, lg_angle1*180/pi>
 }
 difference {
  merge {
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_WALL_WIDTH>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   box {
    <0, 4, LG_E>,
    <-4, -4, -0.5>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <4, 4, LG_E>,
    <-4, 0, -0.5>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_WALL_WIDTH-LG_E>,
    3*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH-LG_E>,
    <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   box {
    <0, 3, LG_E>,
    <-3, -3, -0.5>
    rotate <0, 0, lg_angle2*180/pi>
   }
   box {
    <3, 3, LG_E>,
    <-3, 0, -0.5>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <0, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1))+LG_E, LG_E>,
    <2*LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2))-LG_E, -LG_WALL_WIDTH-LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1))-LG_E, 0, LG_E>,
    <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2))+LG_E, -2*LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_E>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -18>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -36>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -54>
   }
   sphere {
    <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>,
    LG_WALL_WIDTH
    scale <1, 1, 0.5>
    rotate <0, 0, -72>
   }
  }
 }
 merge {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <3*LG_BRICK_WIDTH+0.08, 0, 0>
  rotate <0, 0, -lg_angle2*180/pi>
 }
 merge {
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_WALL_WIDTH>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   0.08
  }
  translate <0, -3*LG_BRICK_WIDTH-0.08, 0>
  rotate <0, 0, lg_angle2*180/pi>
 }
 difference {
  merge {
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0, 3, LG_E>,
    <-3, -3, -0.5>
    rotate <0, 0, lg_angle2*180/pi>
   }
   box {
    <3, 3, LG_E>,
    <-3, 0, -0.5>
    rotate <0, 0, -lg_angle2*180/pi>
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2)), -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE>,
  <0.1, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2))-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), 0, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -0.1, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+0.08*(1+sin(lg_angle1)), 0>,
  <0.1, -3*LG_BRICK_WIDTH-0.08*(1-sin(lg_angle2))-LG_E, -LG_WALL_WIDTH>
 }
 box {
  <4*LG_BRICK_WIDTH-0.08*(1+sin(lg_angle1)), -LG_CORNER_SPACE, 0>,
  <3*LG_BRICK_WIDTH+0.08*(1-sin(lg_angle2)), -0.1, -LG_WALL_WIDTH>
 }
 /* Socket */
 merge {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle3*180/pi>
 }
 merge {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle4*180/pi>
 }
 merge {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0,- 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle3*180/pi>
 }
 merge {
  sphere {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle4*180/pi>
 }
 difference {
  merge {
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -2*LG_BRICK_HEIGHT>,
     <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     3*LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    union {
     cylinder {
      <0, 0, -2*LG_BRICK_HEIGHT>,
      <0, 0, -5*LG_PLATE_HEIGHT>,
      3*LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
      <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      3*LG_BRICK_WIDTH+LG_CORNER_SPACE
     }
    }
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, -2>
    rotate <0, 0, lg_angle4*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, -2>
    rotate <0, 0, -lg_angle4*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(2,1)*180/pi>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
    rotate <0, 0, -atan2(2,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
   }
  }
 }
 difference {
  merge {
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT>,
    <0, 0, -5*LG_PLATE_HEIGHT>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, -2>
    rotate <0, 0, lg_angle3*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, -2>
    rotate <0, 0, -lg_angle3*180/pi>
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    4*LG_BRICK_WIDTH-0.12
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -5*LG_PLATE_HEIGHT+LG_E>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   box {
    <4*LG_BRICK_WIDTH, 0, -5*LG_PLATE_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH, LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_E>,
    <-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3))+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4))-LG_E, -5*LG_PLATE_HEIGHT+LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3))-LG_E, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4))+LG_E, -LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(3,1)*180/pi>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
    rotate <0, 0, -atan2(3,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -18>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -36>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    rotate <0, 0, -54>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -3.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), -LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), -LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), -LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
 }
 box {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -2*LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle3)), 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle4)), -LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle3)), -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle4)), -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 #declare COL=0;
 #while (COL < 5)
  merge {
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_E>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_KNOB_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   rotate <0, 0, -18*COL>
  }
  #declare COL = COL + 1;
 #end
 object {
  lg_tech_knob_clear
  translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_tech_knob_clear
  translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
}

#end
