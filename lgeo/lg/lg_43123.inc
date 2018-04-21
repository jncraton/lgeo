/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081215 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_43123: Technic Brick 4 x 6 with 2 x 4 Cutout with dual Pins              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_43123)
#else
#include "lg_40344.inc"
#include "lg_bb62.inc"
#declare lg_43123 =
union {
 object {
  lg_40344
 }
 object {
  lg_bb62
  translate <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
 }
 object {
  lg_bb62
  translate <-LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
 }
}

#declare lg_43123_clear =
union {
 object {
  lg_40344_clear
 }
 object {
  lg_bb62_clear
  translate <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
 }
 object {
  lg_bb62_clear
  translate <-LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
 }
}

#end
