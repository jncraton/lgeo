/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980406 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3849: Castle Lance                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3849)
#else
#declare lg_3849 =
union {
 cylinder {
  <0, 0, 0>,
  <0, 0, -0.7+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, -0.7+LG_CORNER_SPACE+LG_E>,
  <0, 0, -0.7>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.7+LG_CORNER_SPACE>
 }
 cylinder {
  <-1.08+LG_CORNER_SPACE, 0, 0>,
  <6, 0, 0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-1.08, 0, 0>,
  <-1.08+LG_CORNER_SPACE+LG_E, 0, 0>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.08+LG_CORNER_SPACE, 0, 0>
 }
 sphere {
  <6, 0, 0>,
  LG_WALL_WIDTH
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32+LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0.32, 0, 0>,
  <0.32+2*LG_CORNER_SPACE, 0, 0>,
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE
 }
 cone {
  <0.32+LG_CORNER_SPACE+LG_CORNER_SPACE*sin(pi/4), 0, 0>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(pi/4)
  <0.32+LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE*sin(pi/4), 0, 0>, 0
 }
}

#declare lg_3849_clear =
merge {
 cylinder {
  <0, 0, 0>,
  <0, 0, -0.7+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, -0.7+LG_CORNER_SPACE+LG_E>,
  <0, 0, -0.7>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.7+LG_CORNER_SPACE>
 }
 cylinder {
  <-1.08+LG_CORNER_SPACE, 0, 0>,
  <6, 0, 0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-1.08, 0, 0>,
  <-1.08+LG_CORNER_SPACE+LG_E, 0, 0>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.08+LG_CORNER_SPACE, 0, 0>
 }
 sphere {
  <6, 0, 0>,
  LG_WALL_WIDTH
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32+LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0.32, 0, 0>,
  <0.32+2*LG_CORNER_SPACE, 0, 0>,
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE
 }
 cone {
  <0.32+LG_CORNER_SPACE+LG_CORNER_SPACE*sin(pi/4), 0, 0>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(pi/4)
  <0.32+LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE*sin(pi/4), 0, 0>, 0
 }
}

#end
