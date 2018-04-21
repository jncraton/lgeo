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
/* lg_2431p51: Tile 1 x 4 with Long white stripes pattern                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2431p51)
#else
#include "lg_2431.inc"
#declare lg_2431p51_decals = 
union {
 box {
  <0.24, 1.52, 0.0001>,
  <0.08, -1.52, -0.0001>
 }
 box {
  <-0.24, 1.52, 0.0001>,
  <-0.08, -1.52, -0.0001>
 }
 material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
}

#declare lg_2431p51 =
union {
 object { lg_2431 }
 object {
  lg_2431p51_decals
 }
}

#declare lg_2431p51_clear =
union {
 object { lg_2431_clear }
 object {
  lg_2431p51_decals
 }
}

#end
