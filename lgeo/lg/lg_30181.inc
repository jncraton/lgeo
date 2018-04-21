/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001119 Lutz Uhlmann                                                       */
/* 20080128 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30181: Brick 4 x 10 with Cut Corners                                     */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30181)
#else
#declare lg_angle=atan2(2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH);
#declare lg_30181 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, 0.04, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <LG_BRICK_WIDTH/2, -0.04, -LG_TOP_HEIGHT+LG_E>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, 0.04, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <LG_BRICK_WIDTH/2, -0.04, -LG_TOP_HEIGHT+LG_E>
    rotate <0, 0, 45>
    translate <0, 3*LG_BRICK_WIDTH, 0>
   }
   box {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <-LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_WALL_WIDTH, 0, -LG_BRICK_HEIGHT>,
      <2*LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle*180/pi>
      translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <-LG_WALL_WIDTH, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle*180/pi>
      translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 45>
      translate <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 45>
      translate <1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>,
      <-2*LG_WALL_WIDTH, 5*LG_BRICK_WIDTH, LG_E>
     }
    }
   }
   object {
    lg_brick_cylinder
    translate <0, 3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder
    translate <-LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <LG_CYLINDER_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <0, LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <0, 3*LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   box {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   box {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 3*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 3*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   box {
    <LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_brick_cylinder
  translate <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder
  translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 box {
  <-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
  <LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
 }
 cylinder {
  <0, -LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
  <0, LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
  LG_CYLINDER_WALL_WIDTH/2
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   box {
    <0, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle)+LG_E, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle)+LG_E, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
    <1.5*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>,
    <1.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
  }
 }
}

#declare lg_30181_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, 0.04, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <LG_BRICK_WIDTH/2, -0.04, -LG_TOP_HEIGHT+LG_E>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, 0.04, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <LG_BRICK_WIDTH/2, -0.04, -LG_TOP_HEIGHT+LG_E>
    rotate <0, 0, 45>
    translate <0, 3*LG_BRICK_WIDTH, 0>
   }
   box {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <-LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_WALL_WIDTH, 0, -LG_BRICK_HEIGHT>,
      <2*LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle*180/pi>
      translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <-LG_WALL_WIDTH, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH/cos(lg_angle), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle*180/pi>
      translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 45>
      translate <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 45>
      translate <1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>,
      <-2*LG_WALL_WIDTH, 5*LG_BRICK_WIDTH, LG_E>
     }
    }
   }
   object {
    lg_brick_cylinder_clear
    translate <0, 3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_cylinder_clear
    translate <-LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <LG_CYLINDER_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <0, LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <0, 3*LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   box {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   box {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 3*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 3*LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   box {
    <LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
   }
   cylinder {
    <LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, LG_BRICK_WIDTH+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_WALL_WIDTH/2
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_brick_cylinder_clear
  translate <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder_clear
  translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 box {
  <-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
  <LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_E>
 }
 cylinder {
  <0, -LG_BRICK_WIDTH+LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
  <0, LG_BRICK_WIDTH-LG_CYLINDER_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
  LG_CYLINDER_WALL_WIDTH/2
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   box {
    <0, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle)+LG_E, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle)+LG_E, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
    <1.5*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>,
    <1.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
  }
 }
}

#end
