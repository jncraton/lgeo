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
/* lg_395701: _Antenna 4H White                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_395701)
#else
#include "lg_3957.inc"

#declare lg_395701 = 
union {
 object {
  lg_3957
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_395701_clear = 
union {
 object {
  lg_3957
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end