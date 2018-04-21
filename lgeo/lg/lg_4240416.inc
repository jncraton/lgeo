/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080302 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4240416: Technic Universal Joint Medium Stone                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4240416)
#else
#include "lg_0090.inc"
#ifndef(lg_4240416a)
 #declare lg_4240416a = lg_0090
 #declare lg_4240416a_clear = lg_0090_clear
#end
#include "lg_0091.inc"
#ifndef(lg_4240416b)
 #declare lg_4240416b = lg_0091
 #declare lg_4240416b_clear = lg_0091_clear
#end

#declare lg_4240416 =
union {
 object {
  lg_4240416b
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4240416a
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4240416a
  matrix <-1, 0, 0, 0, 0, 1, 0, 1, 0, 1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4240416_clear =
union {
 object {
  lg_4240416b
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4240416a
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4240416a
  matrix <-1, 0, 0, 0, 0, 1, 0, 1, 0, 1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end
