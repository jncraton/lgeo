/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080228 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3712c01: Technic Universal Joint                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3712c01)
#else
#include "lg_3712.inc"
#include "lg_3326.inc"

#declare lg_3712c01 =
union {
 object {
  lg_3326
 }
 object {
  lg_3712
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_3712
  matrix <-1, 0, 0, 0, 0, 1, 0, 1, 0, 1.5*LG_BRICK_WIDTH, 0, 0>
 }
}

#declare lg_3712c01_clear =
union {
 object {
  lg_3326_clear
 }
 object {
  lg_3712_clear
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_3712_clear
  matrix <-1, 0, 0, 0, 0, 1, 0, 1, 0, 1.5*LG_BRICK_WIDTH, 0, 0>
 }
}
#end
