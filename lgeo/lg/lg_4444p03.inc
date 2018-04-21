/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080113 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4444p03: Castle Wall 2 x 5 x 6 with Black Tudor Wall Pattern             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4444p03)
#else
#include "lg_4444.inc"
#declare lg_4444p03_decals =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   box {
    <0.5*LG_BRICK_WIDTH-0.0001, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.0001, LG_BRICK_WIDTH/2+2*LG_WALL_WIDTH, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.0001, 2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.0001, 2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.0001, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.0001, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.0001, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.0001, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.0001, 0, -0.2>,
    <0.5*LG_BRICK_WIDTH+0.0001, -0.32, -3>
    rotate <-22.5, 0, 0>
    translate <0, 2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH/3, -LG_BRICK_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 box {
  <0.5*LG_BRICK_WIDTH-0.0001, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+0.0001, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.0001, 2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+0.0001, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT-2*LG_WALL_WIDTH>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.0001, 2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+0.0001, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.0001, 2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+0.0001, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>
 }
 box {
  <0.5*LG_BRICK_WIDTH-0.0001, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+0.0001, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>
 }
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
}

#declare lg_4444p03 =
union {
 object { lg_4444 }
 object { lg_4444p03_decals }
}

#declare lg_4444p03_clear =
union {
 object { lg_4444_clear }
 object { lg_4444p03_decals }
}

#end
