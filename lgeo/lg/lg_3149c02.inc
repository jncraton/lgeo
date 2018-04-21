/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080202 Lutz Uhlmann fixed stud orientation                                */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3149c02: Plate 5 x 2 Hinge                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3149c02)
#else
#include "lg_3149a.inc"
#include "lg_3149b.inc"
#include "lg_3149c.inc"

#declare lg_3149c02 =
union {
 object {
  lg_3149a
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3149b
 }
 object {
  lg_3149c
 }
 translate <-2.5*LG_BRICK_WIDTH, 0, -0.4>
 rotate <0, 0, 90>
}

#declare lg_3149c02_clear =
union {
 object {
  lg_3149a
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3149b_clear
 }
 object {
  lg_3149c_clear
 }
 translate <-2.5*LG_BRICK_WIDTH, 0, -0.4>
 rotate <0, 0, 90>
}

#end
