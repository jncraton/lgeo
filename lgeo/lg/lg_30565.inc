/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080217 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30565: Plate 4 x 4 with Round Corner                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30565)
#else
#declare lg_angle=atan2(LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE);
#declare lg_30565 =
union {
 sphere {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   box {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE+0.001, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR=1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR +1;
 #end
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
    translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   box {
    <LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-4*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <4*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -atan2(3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, atan2(3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH)*180/pi>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <0, 0, LG_E>,
    <4*LG_BRICK_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle*180/pi>
   }
   box {
    <0, 0, LG_E>,
    <-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle*180/pi>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   4*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-4*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <4*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <0, 0, LG_E>,
    <4*LG_BRICK_WIDTH, LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle*180/pi>
   }
   box {
    <0, 0, LG_E>,
    <-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle*180/pi>
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
    translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
}

#declare lg_30565_clear =
merge {
 sphere {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   box {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE+0.001, -(4*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR=1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR +1;
 #end
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
    translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   box {
    <LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-4*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <4*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>,
    <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -atan2(3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT+LG_KNOB_HEIGHT+LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, atan2(3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH)*180/pi>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <0, 0, LG_E>,
    <4*LG_BRICK_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle*180/pi>
   }
   box {
    <0, 0, LG_E>,
    <-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle*180/pi>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   4*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-4*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <0, 4*LG_BRICK_WIDTH+LG_E, LG_E>,
    <4*LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <0, 0, LG_E>,
    <4*LG_BRICK_WIDTH, LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle*180/pi>
   }
   box {
    <0, 0, LG_E>,
    <-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle*180/pi>
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
    translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
}

#end

