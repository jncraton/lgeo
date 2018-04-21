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
/* lg_4181142: _Brick  2 x  6 White                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4181142)
#else
#include "lg_2456.inc"

#declare lg_4181142 = 
union {
 object {
  lg_2456
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4181142_clear = 
union {
 object {
  lg_2456
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end