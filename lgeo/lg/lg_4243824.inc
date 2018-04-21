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
/* lg_4243824: _Plate  4 x  4 Tan                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4243824)
#else
#include "lg_3031.inc"

#declare lg_4243824 = 
union {
 object {
  lg_3031
  material { texture { lg_tan  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4243824_clear = 
union {
 object {
  lg_3031
  material { texture { lg_tan  normal { bumps 0.1 scale 2 } } }
 }
}

#end