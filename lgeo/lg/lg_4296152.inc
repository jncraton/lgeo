/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080303 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4296152: _Hinge Control Stick and Base Black/Blue                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4296152)
#else
#include "lg_4592.inc"
#include "lg_4593.inc"
#declare lg_4296152 =
union {
 object {
  lg_4592
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4593
  rotate <0, -22.5, 0>
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4296152_clear =
union {
 object {
  lg_4592
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_4593
  rotate <0, -22.5, 0>
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end
