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
/* lg_4506697: _Technic Angle Connector #5 (112.5 degree) White                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4506697)
#else
#include "lg_32015.inc"

#declare lg_4506697 = 
union {
 object {
  lg_32015
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4506697_clear = 
union {
 object {
  lg_32015
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end