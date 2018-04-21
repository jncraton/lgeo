/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080309 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0973p01: Minifig Torso with Vertical Striped Red/Blue Pattern            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0973p01)
#else
#include "lg_0973.inc"
#declare lg_0973p01_decals = 
union {
 box {
  <0.0001, 0.28, -LG_CORNER_SPACE>,
  <-0.0001, -0.28, -4*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <0.0001, 0.48, -LG_CORNER_SPACE>,
  <-0.0001, 0.38, -4*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <0.0001, -0.48, -LG_CORNER_SPACE>,
  <-0.0001, -0.38, -4*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#declare lg_0973p01 =
union {
 object { lg_0973 }
 object { lg_0973p01_decals }
}

#declare lg_0973p01_clear =
union {
 object { lg_0973_clear }
 object { lg_0973p01_decals }
}

#end
