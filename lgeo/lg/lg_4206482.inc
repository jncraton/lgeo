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
/* lg_4206482: _Technic Axle Pin with Friction Blue                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4206482)
#else
#include "lg_43093.inc"

#declare lg_4206482 = 
union {
 object {
  lg_43093
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4206482_clear = 
union {
 object {
  lg_43093
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#end