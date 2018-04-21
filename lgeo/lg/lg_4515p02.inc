/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080114 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4515p02: Slope Brick 10  6 x 8 with green stripes pattern                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4515p02)
#else
#include "lg_4515.inc"
#declare lg_4515p02_decals =
union {
 box {
  <0, 3.5*LG_BRICK_WIDTH, LG_CORNER_SPACE+0.0001>,
  <(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 2.5*LG_BRICK_WIDTH, LG_CORNER_SPACE-0.0001>
 }
 box {
  <0, 1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE+0.0001>,
  <(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 0.5*LG_BRICK_WIDTH, LG_CORNER_SPACE-0.0001>
 }
 box {
  <0, -0.5*LG_BRICK_WIDTH, LG_CORNER_SPACE+0.0001>,
  <(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), -1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE-0.0001>
 }
 box {
  <0, -2.5*LG_BRICK_WIDTH, LG_CORNER_SPACE+0.0001>,
  <(6*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), -3.5*LG_BRICK_WIDTH, LG_CORNER_SPACE-0.0001>
 }
 rotate <0, lg_angle*180/pi, 0>
 translate <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 material { texture { lg_green normal { bumps 0.1 scale 2 } } }
}

#declare lg_4515p02 =
union {
 object { lg_4515 }
 object { lg_4515p02_decals }
}

#declare lg_4515p02_clear =
union {
 object { lg_4515_clear }
 object { lg_4515p02_decals }
}

#end
