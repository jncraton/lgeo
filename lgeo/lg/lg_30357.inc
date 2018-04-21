/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080129 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30357: Plate 3 x 3 Corner Round                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30357)
#else
#declare lg_30357 =
union {
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   box {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
    <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
  }
  union {
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <2.5*LG_BRICK_WIDTH+LG_E, -1.5*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+2*LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <2.5*LG_BRICK_WIDTH+LG_E, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+2*LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH/3, 0, -LG_TOP_HEIGHT>,
    <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/3, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_TOP_HEIGHT>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, 45>
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_E, LG_E>
    <2.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_E, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
    <2.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <0, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  translate <0, 0, 0>
 }
 object {
  lg_knob
  translate <-LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <0, -LG_BRICK_WIDTH, 0>
 }
 translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
}

#declare lg_30357_clear =
merge {
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
   box {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
    <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
  }
  union {
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <2.5*LG_BRICK_WIDTH+LG_E, -1.5*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+2*LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_E, 0.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <2.5*LG_BRICK_WIDTH+LG_E, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+2*LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH/3, 0, -LG_TOP_HEIGHT>,
    <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/3, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_TOP_HEIGHT>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, 45>
    translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH-LG_E, LG_E>
    <2.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-LG_E, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
    <2.5*LG_BRICK_WIDTH+LG_E, 2.5*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  translate <0, 0, 0>
 }
 object {
  lg_knob_clear
  translate <-LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -LG_BRICK_WIDTH, 0>
 }
 translate <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
}

#end
