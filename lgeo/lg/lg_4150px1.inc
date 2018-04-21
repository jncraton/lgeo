/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080625 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4150px1: Tile 2 x 2 Round with black clock Pattern                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4150px1)
#else
#include "lg_4150.inc"
#declare lg_4150px1_decals =
union {
 #declare STRIPE = 0;
 #while (STRIPE<12)
  box {
   #if ((STRIPE=0)|(STRIPE=3)|(STRIPE=6)|(STRIPE=9))
    <0.55*LG_BRICK_WIDTH, 0.04, 0.0001>,
    <0.75*LG_BRICK_WIDTH, -0.04, -0.0001>
   #else
    <0.6*LG_BRICK_WIDTH, 0.03, 0.0001>,
    <0.75*LG_BRICK_WIDTH, -0.03, -0.0001>
   #end
   rotate <0, 0, STRIPE*30>
   }
  #declare STRIPE = STRIPE + 1;
 #end
 cylinder {
  <0, 0, 0.0001>,
  <0, 0, -0.0001>,
  0.04
 }
 cylinder {
  <0, -0.4*LG_BRICK_WIDTH, 0.0001>,
  <0, -0.4*LG_BRICK_WIDTH, -0.0001>,
  0.04
 }
 box {
  <0.04, 0, 0.0001>,
  <-0.04, -0.4*LG_BRICK_WIDTH, -0.0001>
 }
 union {
  cylinder {
   <0, -0.55*LG_BRICK_WIDTH, 0.0001>,
   <0, -0.55*LG_BRICK_WIDTH, -0.0001>,
   0.04
  }
  box {
   <0.04, 0, 0.0001>,
   <-0.04, -0.55*LG_BRICK_WIDTH, -0.0001>
  }
  rotate <0, 0, -105>
 }
 box {
  <0.01, 0, 0.0001>,
  <-0.01, -0.6*LG_BRICK_WIDTH, -0.0001>
  rotate <0, 0, 135>
 }
 difference {
  cylinder {
   <0, 0, 0.0001>,
   <0, 0, -0.0001>,
   0.825*LG_BRICK_WIDTH
  }
  cylinder {
   <0, 0, 0.0002>,
   <0, 0, -0.0002>,
   0.75*LG_BRICK_WIDTH
  }
 }
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
}

#declare lg_4150px1 = 
union {
 object { lg_4150 }
 object { lg_4150px1_decals }
}

#declare lg_4150p01_clear = 
union {
 object { lg_4150_clear }
 object { lg_4150px1_decals }
}

#end
