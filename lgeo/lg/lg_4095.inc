/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4095: Town Umbrella Stand Small                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4095)
#else
#declare lg_4095 =
union {
 cylinder {
  <0, 0, LG_CORNER_SPACE>,
  <0, 0, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_KNOB_RADIUS
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, LG_WALL_WIDTH>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>,
  <0, 0, 5*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, -LG_BRICK_HEIGHT/2>,
  <0, 0, 5*LG_BRICK_HEIGHT>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
 }
}

#declare lg_4095_clear =
merge {
 cylinder {
  <0, 0, LG_CORNER_SPACE>,
  <0, 0, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_KNOB_RADIUS
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, LG_WALL_WIDTH>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>,
  <0, 0, 5*LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, -LG_BRICK_HEIGHT/2>,
  <0, 0, 5*LG_BRICK_HEIGHT>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 5*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
 }
}

#end
