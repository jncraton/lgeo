/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071103 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0374p03: Baseplate 16 x 32 with Set 356 dots pattern                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0374p03)
#else
#include "lg_0374.inc"
#declare lg_0374p03_dots = 
union {
 object {
  lg_knob_dot
  translate <-3.5*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-2.5*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-1.5*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-0.5*LG_BRICK_WIDTH, 6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-3.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-2.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -4.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <1.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <2.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <3.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <1.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <2.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <3.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -7.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -7.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -12.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -12.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <-4.5*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  translate <0.5*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_0374p03 =
union {
 object { lg_0374 }
 object {
  lg_0374p03_dots
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0374p03_clear =
union {
 object { lg_0374_clear }
 object {
  lg_0374p03_dots
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end
