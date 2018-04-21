/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071126 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2466p07: Panel 3 x 2 x 6 with Black Grille Pattern                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2466p07)
#else
#include "lg_2466.inc"
#declare lg_2466p07_decals = 
union {
 box {
  <0.0001, 0.68, -1.52>,
  <-0.0001, -0.68, -1.68>
 }
 box {
  <0.0001, 0.68, -1.96>,
  <-0.0001, -0.68, -2.12>
 }
 box {
  <0.0001, 0.68, -2.4>,
  <-0.0001, -0.68, -2.56>
 }
 box {
  <0.0001, 0.68, -2.84>,
  <-0.0001, -0.68, -3.0>
 }
 box {
  <0.0001, 0.68, -3.28>,
  <-0.0001, -0.68, -3.44>
 }
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 translate <2.5*LG_BRICK_WIDTH, 0, 0>
}

#declare lg_2466p07 =
union {
 object { lg_2466 }
 object {
  lg_2466p07_decals
 }
}

#declare lg_2466p07_clear =
union {
 object { lg_2466_clear }
 object {
  lg_2466p07_decals
 }
}

#end
