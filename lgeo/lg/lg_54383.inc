/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080323 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_54383: Wedge Plate 6 x 3 Right                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_54383)
#else
#declare lg_angle=atan2(1,3);
#declare lg_54383 =
union {
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <-(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <-0.24, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.24, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <0.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, 0>,
    <-3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 difference {
  union {
   object {
    lg_plate_cylinder
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
  }
  union {
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-6*LG_BRICK_WIDTH/cos(lg_angle), -2*LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
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
  }
 }
 object {
  lg_plate_cylinder
  translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_KNOB_RADIUS, -0.06, -LG_PLATE_HEIGHT>,
  <-1.75*LG_KNOB_RADIUS, 0.06, -LG_CORNER_SPACE>
  rotate <0, 0, 90+lg_angle*180/pi>
  translate <-LG_BRICK_WIDTH/2, 0, 0>
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
 scale <1, -1, 1>
}

#declare lg_54383_clear =
merge {
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+2*sin(lg_angle)), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <-(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle*180/pi>
    translate <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <-0.24, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.24, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-2.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <0.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-0.26, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    <0.26, -1.5*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle*180/pi>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, 0>,
    <-3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 difference {
  merge {
   object {
    lg_plate_cylinder_clear
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
  }
  union {
   box {
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    <-6*LG_BRICK_WIDTH/cos(lg_angle), -2*LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
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
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_KNOB_RADIUS, -0.06, -LG_PLATE_HEIGHT>,
  <-1.75*LG_KNOB_RADIUS, 0.06, -LG_CORNER_SPACE>
  rotate <0, 0, 90+lg_angle*180/pi>
  translate <-LG_BRICK_WIDTH/2, 0, 0>
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
 scale <1, -1, 1>
}

#end
