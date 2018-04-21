/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990609 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0104: Antenna 6H                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0104)
#else
#declare lg_0104 =
union {
 torus {
  0.2-LG_CORNER_SPACE,
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  0.2-LG_CORNER_SPACE,
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_HEIGHT/8-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_HEIGHT/8-LG_CORNER_SPACE>,
  <0, 0, LG_CORNER_SPACE>,
  0.2
 }
 cylinder {
  <0, 0, LG_BRICK_HEIGHT/8>,
  <0, 0, 0>,
  0.2-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, LG_E>,
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
  <0, 0, LG_BRICK_HEIGHT/24*141>,
  0.1
 }
 sphere {
  <0, 0, LG_BRICK_HEIGHT/24*141>,
  LG_KNOB_INNER_RADIUS
 }
}

#declare lg_0104_clear =
merge {
 torus {
  0.2-LG_CORNER_SPACE,
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  0.2-LG_CORNER_SPACE,
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_HEIGHT/8-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_BRICK_HEIGHT/8-LG_CORNER_SPACE>,
  <0, 0, LG_CORNER_SPACE>,
  0.2
 }
 cylinder {
  <0, 0, LG_BRICK_HEIGHT/8>,
  <0, 0, 0>,
  0.2-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, LG_E>,
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
  <0, 0, LG_BRICK_HEIGHT/24*141>,
  0.1
 }
 sphere {
  <0, 0, LG_BRICK_HEIGHT/24*141>,
  LG_KNOB_INNER_RADIUS
 }
}

#end
