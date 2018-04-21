/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071124 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2431p79: Tile 1 x 4 with 5 red stripes pattern                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2431p79)
#else
#include "lg_2431.inc"
#declare lg_2431p79_decals = 
union {
 box {
  <0.36, 1.56, 0.0001>,
  <-0.36, 1.24, -0.0001>
 }
 box {
  <0.36, 0.86, 0.0001>,
  <-0.36, 0.54, -0.0001>
 }
 box {
  <0.36, 0.16, 0.0001>,
  <-0.36, -0.16, -0.0001>
 }
 box {
  <0.36, -0.86, 0.0001>,
  <-0.36, -0.54, -0.0001>
 }
 box {
  <0.36, -1.56, 0.0001>,
  <-0.36, -1.24, -0.0001>
 }
 material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
}

#declare lg_2431p79 =
union {
 object { lg_2431 }
 object {
  lg_2431p79_decals
 }
}

#declare lg_2431p79_clear =
union {
 object { lg_2431_clear }
 object {
  lg_2431p79_decals
 }
}

#end
