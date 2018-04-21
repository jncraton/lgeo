/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3326: Technic Universal Joint Center                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3326)
#else
#declare lg_3326 =
union {
 cylinder {
  <0.2, 0, 0>,
  <-0.2, 0, 0>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0.2-LG_CORNER_SPACE, 0, 0>,
  <-0.2+LG_CORNER_SPACE, 0, 0>,
  LG_KNOB_RADIUS
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, 0>,
  <0, -LG_BRICK_WIDTH/2, 0>,
  0.06-LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
  0.06
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE,  0>
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE,  0>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, -LG_BRICK_WIDTH/2>,
  0.06-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  0.06
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
}

#declare lg_3326_clear =
merge {
 cylinder {
  <0.2, 0, 0>,
  <-0.2, 0, 0>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0.2-LG_CORNER_SPACE, 0, 0>,
  <-0.2+LG_CORNER_SPACE, 0, 0>,
  LG_KNOB_RADIUS
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, 0>,
  <0, -LG_BRICK_WIDTH/2, 0>,
  0.06-LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
  0.06
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE,  0>
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE,  0>
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2>,
  <0, 0, -LG_BRICK_WIDTH/2>,
  0.06-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  0.06
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 torus {
  0.06-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
}

#end
