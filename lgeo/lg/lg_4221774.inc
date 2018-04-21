/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080302 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4221774: _Turntable 2 x2 complete assembly Black/Stone Grey              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4221774)
#else
#include "lg_3679.inc"
#include "lg_3680.inc"

#declare lg_4221774 =
union {
 object {
  lg_3679
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3680
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4221774_clear =
union {
 object {
  lg_3679
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3680
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end
