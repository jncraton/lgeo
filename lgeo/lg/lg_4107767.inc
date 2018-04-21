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
/* lg_4107767: _Technic Angle Connector #6 (90 degree) Black                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4107767)
#else
#include "lg_32014.inc"

#declare lg_4107767 = 
union {
 object {
  lg_32014
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4107767_clear = 
union {
 object {
  lg_32014
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end