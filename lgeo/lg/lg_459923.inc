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
/* lg_459923: _Tap  1 x  1 Blue                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_459923)
#else
#include "lg_4599.inc"

#declare lg_459923 = 
union {
 object {
  lg_4599
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_459923_clear = 
union {
 object {
  lg_4599
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#end