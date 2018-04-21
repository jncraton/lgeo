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
/* lg_0027ac01: Window 1 x 2 x 1 with long sill, closed studs with clear glass */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0027ac01)
#else
#include "lg_0027a.inc"
#declare LENGTH = 1;
#declare WIDTH = 2;
#declare HEIGHT = 1;
#declare lg_0027ac01 = 
union {
 object { lg_0027a }
 box {
  <LENGTH/2*LG_BRICK_WIDTH-0.2-LG_E, WIDTH/2*LG_BRICK_WIDTH-0.1-LG_E, -0.08-LG_E>,
  <LENGTH/2*LG_BRICK_WIDTH-0.3, -WIDTH/2*LG_BRICK_WIDTH+0.1+LG_E, -HEIGHT*LG_BRICK_HEIGHT+0.28+LG_E>
  material { texture { lg_clear } interior { lg_ior } }
 }  
} 

#declare lg_0027ac01_clear = 
merge {
 object { lg_0027a_clear }
 box {
  <LENGTH/2*LG_BRICK_WIDTH-0.2-LG_E, WIDTH/2*LG_BRICK_WIDTH-0.1-LG_E, -0.08-LG_E>,
  <LENGTH/2*LG_BRICK_WIDTH-0.3, -WIDTH/2*LG_BRICK_WIDTH+0.1+LG_E, -HEIGHT*LG_BRICK_HEIGHT+0.28+LG_E>
  material { texture { lg_clear } interior { lg_ior } }
 }  
} 

#end
