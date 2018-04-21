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
/* lg_4160689: _Technic Pulley Large White                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4160689)
#else
#include "lg_3736.inc"

#declare lg_4160689 = 
union {
 object {
  lg_3736
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4160689_clear = 
union {
 object {
  lg_3736
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end