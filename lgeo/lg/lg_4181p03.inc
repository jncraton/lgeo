/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080107 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4181p03: Train Door 1 x 4 x 5 Left with lower white half Pattern         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4181p03)
#else
#include "lg_4181.inc"
#declare lg_4181p03_decals =
union {
 difference {
  cylinder {
   <0, 0, -3*LG_BRICK_HEIGHT>,
   <0, 0, -4*LG_BRICK_HEIGHT>,
   LG_BRICK_WIDTH/2+0.0001
  }
  union {
   cylinder {
    <0, 0, -3*LG_BRICK_HEIGHT+LG_E>,
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-0.0001
   }
   box {
    <LG_BRICK_WIDTH/2+LG_E, 0, -3*LG_BRICK_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2+LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -3*LG_BRICK_HEIGHT>,
   <0, 0, -4*LG_BRICK_HEIGHT>,
   LG_BRICK_WIDTH/2+0.0001
  }
  union {
   cylinder {
    <0, 0, -3*LG_BRICK_HEIGHT+LG_E>,
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-0.0001
   }
   box {
    <LG_BRICK_WIDTH/2+LG_E, 0, -3*LG_BRICK_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2+LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
  scale <-1, 0, 0>
  translate <-3*LG_BRICK_WIDTH, 0, 0>
 }
 box {
  <0, -LG_BRICK_WIDTH/2-0.0001, -3*LG_BRICK_HEIGHT>,
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+0.0001, -4*LG_BRICK_HEIGHT-LG_E>
 }
 material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
}

#declare lg_4181p03 = 
union {
 object { lg_4181 }
 object { lg_4181p03_decals }
}

#declare lg_4181p03_clear = 
union {
 object { lg_4181_clear }
 object { lg_4181p03_decals }
}

#end
