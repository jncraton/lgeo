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
/* lg_4177932: _Plate  1 x  2 Orange                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4177932)
#else
#include "lg_3023.inc"

#declare lg_4177932 = 
union {
 object {
  lg_3023
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4177932_clear = 
union {
 object {
  lg_3023
  material { texture { lg_orange  normal { bumps 0.1 scale 2 } } }
 }
}

#end