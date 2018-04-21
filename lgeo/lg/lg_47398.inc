/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080512 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_47398: Wedge Plate 12 x 3 Right                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_47398)
#else
#declare lg_angle=atan2(1,6);
#declare lg_47398 =
union {
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <6*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-6*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <-(12*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(12*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <-0.24, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.24, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-4.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <2.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <3.5*LG_BRICK_WIDTH, 0, 0>
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, 0>,
    <-6*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 difference {
  union {
   object {
    lg_plate_cylinder
    translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_CYLINDER_RADIUS, 0.06, -LG_TOP_HEIGHT+LG_E>,
    <-LG_CYLINDER_RADIUS, -0.06, -LG_PLATE_HEIGHT>
    rotate <0, 0, 45>
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_CYLINDER_RADIUS, 0.06, -LG_TOP_HEIGHT+LG_E>,
    <-LG_CYLINDER_RADIUS, -0.06, -LG_PLATE_HEIGHT>
    rotate <0, 0, -45>
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
   }
   box {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
  }
  union {
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-12*LG_BRICK_WIDTH/cos(lg_angle), -2*LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   object {
    lg_knob_inner_space
    translate <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-5.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_cylinder
  translate <-5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <5.5*LG_BRICK_WIDTH-0.06, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
  <5.5*LG_BRICK_WIDTH+0.06, 0.7*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 box {
  <2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 box {
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 box {
  <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <0.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-0.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-2.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-3.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-4.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-5.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
 }
 scale <1, -1, 1>
}

#declare lg_47398_clear =
merge {
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <6*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-6*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <-(12*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(12*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <-0.24, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.24, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-4.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <2.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <3.5*LG_BRICK_WIDTH, 0, 0>
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, 0>,
    <-6*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 difference {
  merge {
   object {
    lg_plate_cylinder_clear
    translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_CYLINDER_RADIUS, 0.06, -LG_TOP_HEIGHT+LG_E>,
    <-LG_CYLINDER_RADIUS, -0.06, -LG_PLATE_HEIGHT>
    rotate <0, 0, 45>
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_CYLINDER_RADIUS, 0.06, -LG_TOP_HEIGHT+LG_E>,
    <-LG_CYLINDER_RADIUS, -0.06, -LG_PLATE_HEIGHT>
    rotate <0, 0, -45>
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
   }
   box {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
  }
  union {
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-12*LG_BRICK_WIDTH/cos(lg_angle), -2*LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   object {
    lg_knob_inner_space_clear
    translate <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-5.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <-5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <5.5*LG_BRICK_WIDTH-0.06, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
  <5.5*LG_BRICK_WIDTH+0.06, 0.7*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 box {
  <2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 box {
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 box {
  <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -LG_TOP_HEIGHT>,
  <0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-0.06, -LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-3.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <0.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-0.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-2.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-3.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-4.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-5.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  scale <1, -1, 1>
  translate <-5.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
 }
 scale <1, -1, 1>
}

#end
