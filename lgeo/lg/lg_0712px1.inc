/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080227 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0712px1: Wing 4 x 8 Curved Left with red stripe                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0712px1)
#else
#include "lg_0712a.inc"
#declare lg_0712px1_decals =
union {
 box {
  <-2*LG_BRICK_WIDTH+0.0001, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH-0.0001, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-2*LG_BRICK_WIDTH-0.0001, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+0.0001, -1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
 }
 intersection {
  difference {
   cylinder {
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    2.5*LG_BRICK_WIDTH+0.0001
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>,
    <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
    2.5*LG_BRICK_WIDTH-0.0001
   }
  }
  box {
   <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_E>,
   <-2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_E>
  }
 }
 material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
}

#declare lg_0712px1 = 
union {
 object { lg_0712a }
 object { lg_0712px1_decals }
}

#declare lg_0712px1_clear = 
union {
 object { lg_0712a_clear }
 object { lg_0712px1_decals }
}

#end
