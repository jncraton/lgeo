/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071030 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4592c01: Lever small Base with black lever                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4592c01)
#else
#include "lg_4592.inc"
#include "lg_4593.inc"
#declare lg_4592c01 =
union {
 object {
  lg_4592
 }
 object {
  lg_4593
  rotate <0, -15, 0>
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4592c01_clear =
union {
 object {
  lg_4592_clear
 }
 object {
  lg_4593
  rotate <0, -15, 0>
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end
