/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080101 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3680c01: Turntable 2 x2 complete assembly (light grey top)               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3680c01)
#else
#include "lg_3679.inc"
#include "lg_3680.inc"

#declare lg_3680c01 =
union {
 object {
  lg_3679
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3680
 }
}

#declare lg_3680c01_clear =
union {
 object {
  lg_3679
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3680_clear
 }
}

#end
