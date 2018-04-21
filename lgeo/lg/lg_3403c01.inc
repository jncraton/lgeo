/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071230 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3403c01: Turntable 4 x 4 complete assembly                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3034c01)
#else
#include "lg_3403.inc"
#include "lg_3404.inc"

#declare lg_3403c01 =
union {
 object {
  lg_3403
 }
 object {
  lg_3404
 }
}

#declare lg_3403c01_clear =
union {
 object {
  lg_3403_clear
 }
 object {
  lg_3404_clear
 }
}

#end
