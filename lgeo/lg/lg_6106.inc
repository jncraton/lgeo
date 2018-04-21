/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990514 Lutz Uhlmann                                                       */
/* 20080120 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6106: Plate 6 x 6 without Corner                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6106)
#else
#declare lg_6106 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder
    translate <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <4*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <3*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 difference {
  union {
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <4*LG_BRICK_WIDTH/cos(pi/4), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH/cos(pi/4), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
  }
  translate <0*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, 0>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <0, 0, LG_E>,
    <4*LG_BRICK_WIDTH/cos(pi/4), -4*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
}

#declare lg_6106_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder_clear
    translate <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <4*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <3*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90+90*MIR>
    scale <1, 1-2*MIR, 1>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <4*LG_BRICK_WIDTH/cos(pi/4), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH/cos(pi/4), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  union {
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
    rotate <0, 0, 45>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
  }
  translate <0*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, 0>
 }
 difference {
  box {
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <0, 0, LG_E>,
    <4*LG_BRICK_WIDTH/cos(pi/4), -4*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
}

#end







