/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080310 Lutz Uhlmann                                                       */
/* 20081215 Lutz Uhlmann fixed name of clear version                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0973p1b: Minifig Torso Dungarees Pattern Blue                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0973p1b)
#else
#include "lg_0973.inc"
#declare lg_angle2=atan2(7,24);
#declare lg_angle3=atan2(2.5,5.5);
#declare lg_angle4=atan2(1,4);
#declare lg_0973p1b_decals = 
union {
 difference {
  box {
   <0.0001, 0.7, -10/24*LG_BRICK_HEIGHT>,
   <-0.0001, -0.7, -4*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <0.001, 0, 0>,
    <-0.001, 0.38, -1>
    rotate <lg_angle2*180/pi, 0, 0>
    translate <0, 0.42, -10/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, 0, 0>,
    <-0.001, -0.38, -1>
    rotate <-lg_angle2*180/pi, 0, 0>
    translate <0, -0.42, -10/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, 0.26, -15/24*LG_BRICK_HEIGHT>,
    <-0.001, -0.26, -27/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, 0.32, -11/24*LG_BRICK_HEIGHT>,
    <-0.001, 0.36, -12/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, -0.32, -11/24*LG_BRICK_HEIGHT>,
    <-0.001, -0.36, -12/24*LG_BRICK_HEIGHT>
   }
  }
 }
 difference {
  box {
   <0.0001, 0.22, -16/24*LG_BRICK_HEIGHT>,
   <-0.0001, -0.22, -26/24*LG_BRICK_HEIGHT>
  }
  union {
   box {
    <0.001, 0, 0>,
    <-0.001, 0.38, 0.04>
    rotate <lg_angle3*180/pi, 0, 0>
    translate <0, 0, -23/24*LG_BRICK_HEIGHT>
   }
   box {
    <0.001, 0, 0>,
    <-0.001, -0.38, 0.04>
    rotate <-lg_angle3*180/pi, 0, 0>
    translate <0, 0, -23/24*LG_BRICK_HEIGHT>
   }
  }
 }
 box {
  <0.0001, 0, 0>,
  <-0.0001, 0.14, 0.28>
  matrix <1, 0, 1/7,
          0, 1, 0,
          0, 0, 1,
          0, 0, 0>
  translate <0, 0.28, -8/24*LG_BRICK_HEIGHT>
          
 }
 box {
  <0.0001, 0, 0>,
  <-0.0001, -0.14, 0.28>
  matrix <1, 0, -1/7,
          0, 1, 0,
          0, 0, 1,
          0, 0, 0>
  translate <0, -0.28, -8/24*LG_BRICK_HEIGHT>
          
 }
 box {
  <0.0001, 0, 0>,
  <-0.0001, 0.02, -0.1>
  rotate <lg_angle4*180/pi, 0, 0>
  translate <0, 0.28, -0.32>
 }
 box {
  <0.0001, 0, 0>,
  <-0.0001, -0.02, -0.1>
  rotate <-lg_angle4*180/pi, 0, 0>
  translate <0, -0.28, -0.32>
 }
 box {
  <0.0001, 0, 0>,
  <-0.0001, -0.02, -0.1>
  rotate <-lg_angle4*180/pi, 0, 0>
  translate <0, 0.42, -0.32>
 }
 box {
  <0.0001, 0, 0>,
  <-0.0001, 0.02, -0.1>
  rotate <lg_angle4*180/pi, 0, 0>
  translate <0, -0.42, -0.32>
 }
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#declare lg_0973p1b =
union {
 object { lg_0973 }
 object {
  lg_0973p1b_decals
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0973p1b_clear =
union {
 object { lg_0973_clear }
 object {
  lg_0973p1b_decals
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#end
