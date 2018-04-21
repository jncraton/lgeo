/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080217 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30374: Bar 4L (Light Sabre Blade)                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30374)
#else
#declare lg_30374 =
union {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -4*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
}

#declare lg_30374_clear =
merge {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, 0>,
  <0, 0, -4*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
}

#end
