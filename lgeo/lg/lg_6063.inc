/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990613 Lutz Uhlmann                                                       */
/* 20080119 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6063: Plate 10 x 10 Octagonal Open Center                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6063)
#else
#declare lg_6063 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE>
   }
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, 45>
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, 45>
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, -135>
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, -135>
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   difference {
    union {
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <-3*LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
      rotate <0, 0, -45>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-3*LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
      rotate <0, 0, -45>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
      rotate <0, 0, 45>
      translate <2.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
      rotate <0, 0, 45>
      translate <3.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
      rotate <0, 0, 45>
      translate <4.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
     }
    }
   }
   object {
    lg_plate_cylinder
    translate <3*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <0, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <-LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  box {
   <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, -45>
    translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, 45>
    translate <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, 135>
    translate <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, -135>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>,
    <-3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-4.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
}

#declare lg_6063_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE>
   }
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, 45>
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, 45>
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, -135>
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0.06, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS*2, -0.06, -LG_CORNER_SPACE>
    rotate <0, 0, -135>
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   difference {
    merge {
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <-3*LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
      rotate <0, 0, -45>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-3*LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
      rotate <0, 0, -45>
      translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
      rotate <0, 0, 45>
      translate <2.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
      rotate <0, 0, 45>
      translate <3.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_TOP_HEIGHT>
      rotate <0, 0, 45>
      translate <4.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
     }
    }
   }
   object {
    lg_plate_cylinder_clear
    translate <3*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <1*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <0, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <-LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  box {
   <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, -45>
    translate <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, 45>
    translate <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, 135>
    translate <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <-3*LG_BRICK_WIDTH*sqrt(2), 3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
    rotate <0, 0, -135>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_E>,
    <-3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-4.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-4.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
}

#end
