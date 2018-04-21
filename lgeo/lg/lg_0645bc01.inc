/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20070914 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0645bc01: Window 1 x 6 x 2 with long sill, open studs with clear glass   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0645bc01)
#else
#include "lg_0645b.inc"
#declare LENGTH = 1;
#declare WIDTH = 6;
#declare HEIGHT = 2;
#declare lg_0645bc01 = 
union {
 object { lg_0645b }
 box {
  <LENGTH/2*LG_BRICK_WIDTH-0.2-LG_E, WIDTH/2*LG_BRICK_WIDTH-0.1-LG_E, -0.08-LG_E>,
  <LENGTH/2*LG_BRICK_WIDTH-0.3, -WIDTH/2*LG_BRICK_WIDTH+0.1+LG_E, -HEIGHT*LG_BRICK_HEIGHT+0.28+LG_E>
  material { texture { lg_clear } interior { lg_ior } }
 }  
} 

#declare lg_0645bc01_clear = 
merge {
 object { lg_0645b_clear }
 box {
  <LENGTH/2*LG_BRICK_WIDTH-0.2-LG_E, WIDTH/2*LG_BRICK_WIDTH-0.1-LG_E, -0.08-LG_E>,
  <LENGTH/2*LG_BRICK_WIDTH-0.3, -WIDTH/2*LG_BRICK_WIDTH+0.1+LG_E, -HEIGHT*LG_BRICK_HEIGHT+0.28+LG_E>
  material { texture { lg_clear } interior { lg_ior } }
 }  
} 

#end
