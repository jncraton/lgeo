/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/* 20080228 Lutz Uhlmann added texture lg_grey                                 */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_9244: Technic Universal Joint                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_9244)
#else
#include "lg_0090.inc"
#ifndef(lg_9244a)
 #declare lg_9244a = lg_0090
 #declare lg_9244a_clear = lg_0090_clear
#end
#include "lg_0091.inc"
#ifndef(lg_9244b)
 #declare lg_9244b = lg_0091
 #declare lg_9244b_clear = lg_0091_clear
#end

#declare lg_9244 =
union {
 object {
  lg_9244b
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_9244a
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_9244a
  matrix <-1, 0, 0, 0, 0, 1, 0, 1, 0, 1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_9244_clear =
union {
 object {
  lg_9244b_clear
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_9244a_clear
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_9244a_clear
  matrix <-1, 0, 0, 0, 0, 1, 0, 1, 0, 1.5*LG_BRICK_WIDTH, 0, 0>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end
