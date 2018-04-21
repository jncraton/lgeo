/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4593: Lever Small Handle                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4593)
#else
#declare lg_4593 =
union {
 cylinder {
  <0, -0.08, 0>,
  <0, 0.08, 0>,
  0.2-LG_CORNER_SPACE
 }
 cylinder {
  <0, -0.08+LG_CORNER_SPACE, 0>,
  <0, 0.08-LG_CORNER_SPACE, 0>,
  0.2
 }
 torus {
  0.2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.08-LG_CORNER_SPACE, 0>
 }
 torus {
  0.2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.08+LG_CORNER_SPACE, 0>
 }
 cylinder {
  <0, 0, 0.15>,
  <0, 0, 1.4>,
  0.08
 }
 sphere {
  <0, 0, 1.4>, 0.14
 }
}

#declare lg_4593_clear =
merge {
 cylinder {
  <0, -0.08, 0>,
  <0, 0.08, 0>,
  0.2-LG_CORNER_SPACE
 }
 cylinder {
  <0, -0.08+LG_CORNER_SPACE, 0>,
  <0, 0.08-LG_CORNER_SPACE, 0>,
  0.2
 }
 torus {
  0.2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.08-LG_CORNER_SPACE, 0>
 }
 torus {
  0.2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.08+LG_CORNER_SPACE, 0>
 }
 cylinder {
  <0, 0, 0.15>,
  <0, 0, 1.4>,
  0.08
 }
 sphere {
  <0, 0, 1.4>, 0.14
 }
}

#end
