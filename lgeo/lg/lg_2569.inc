/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990615 Lutz Uhlmann                                                       */
/* 20071101 Lutz Uhlmann fixed top sphere position in solid version            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2569: Antenna Whip                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2569)
#else
#declare lg_2569 =
union {
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_KNOB_RADIUS+LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, LG_PLATE_HEIGHT-LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  (LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cone {
  <0, 0, 4*LG_PLATE_HEIGHT+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(45*pi/180)
  <0, 0, 4*LG_PLATE_HEIGHT+0.06+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, 0.1
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, LG_BRICK_HEIGHT/24*188-LG_KNOB_INNER_RADIUS>,
  0.1
 }
 sphere {
  <0, 0, LG_BRICK_HEIGHT/24*188-LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_2569_clear =
merge {
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_KNOB_RADIUS+LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, LG_PLATE_HEIGHT-LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  (LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cone {
  <0, 0, 4*LG_PLATE_HEIGHT+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(45*pi/180)
  <0, 0, 4*LG_PLATE_HEIGHT+0.06+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, 0.1
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, LG_BRICK_HEIGHT/24*188-LG_KNOB_INNER_RADIUS>,
  0.1
 }
 sphere {
  <0, 0, LG_BRICK_HEIGHT/24*188-LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
