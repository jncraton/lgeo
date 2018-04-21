/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971015 Lutz Uhlmann                                                       */
/* 20071231 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3585: Wing 7 x 12 Left                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3585)
#else
#declare lg_angle1=atan2(5*LG_BRICK_WIDTH, 10*LG_BRICK_WIDTH);
#declare lg_angle2=atan2(LG_BRICK_WIDTH, 10*LG_BRICK_WIDTH);
#declare lg_3585 =
union {
 sphere {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 difference {
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <-2*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2.5*LG_BRICK_WIDTH-LG_E, 6*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2-LG_E, 0, LG_E>,
    <LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <3.5*LG_BRICK_WIDTH+LG_E, -4.5*LG_BRICK_WIDTH, LG_E>,
    <2.5*LG_BRICK_WIDTH-LG_E, -5*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2-LG_E, 0, LG_E>,
    <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH,0>
   }
   cylinder {
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-3.5*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   rotate <0, 0, lg_angle2*180/pi>
   translate <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  box {
   <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT-LG_E>,
   <-3.5*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, 4*LG_BRICK_WIDTH, 0>
  }
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2.5*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 box {
  <LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 object {
  lg_plate_cylinder
  translate <2.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <2.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <1.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <1.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-2.5*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 difference {
  union {
   box {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <0, 0, 0>,
    <2*LG_BRICK_WIDTH, -10*LG_BRICK_WIDTH/cos(lg_angle2), -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
    <LG_E, -10*LG_BRICK_WIDTH/cos(lg_angle2), -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <3.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT>
   }
   box {
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH-LG_E, -4.5*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
   }
  }
  union {
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <3*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-3*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <-3*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_3585_clear =
merge {
 sphere {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <-2*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2.5*LG_BRICK_WIDTH-LG_E, 6*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2-LG_E, 0, LG_E>,
    <LG_BRICK_WIDTH/2+LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
   }
   cylinder {
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <3.5*LG_BRICK_WIDTH+LG_E, -4.5*LG_BRICK_WIDTH, LG_E>,
    <2.5*LG_BRICK_WIDTH-LG_E, -5*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2-LG_E, 0, LG_E>,
    <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH,0>
   }
   cylinder {
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
    <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-3.5*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   rotate <0, 0, lg_angle2*180/pi>
   translate <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  box {
   <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_PLATE_HEIGHT-LG_E>,
   <-3.5*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, 4*LG_BRICK_WIDTH, 0>
  }
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 4*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_BRICK_WIDTH*sin(lg_angle2), 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2.5*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 box {
  <LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  rotate <0, 0, lg_angle1*180/pi>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH,0>
 }
 object {
  lg_plate_cylinder_clear
  translate <2.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <2.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <1.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <1.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, -5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-2.5*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 } 
 difference {
  merge {
   box {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH, 5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <0, 0, 0>,
    <2*LG_BRICK_WIDTH, -10*LG_BRICK_WIDTH/cos(lg_angle2), -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
    <LG_E, -10*LG_BRICK_WIDTH/cos(lg_angle2), -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <3.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT>
   }
   box {
    <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH-LG_E, -4.5*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH, 0, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -10*LG_BRICK_WIDTH/cos(lg_angle1), -LG_TOP_HEIGHT>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
   }
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  translate <3*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <3*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 3.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-2*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-3*LG_BRICK_WIDTH, 4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <-3*LG_BRICK_WIDTH, 5.5*LG_BRICK_WIDTH, 0>
 }
}

#end
