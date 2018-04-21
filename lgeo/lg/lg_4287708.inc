/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080721 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4287708: _Wing 3 x 6 Left White                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4287708)
#else
#include "lg_54384.inc"

#declare lg_4287708 = 
union {
 object {
  lg_54384
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4287708_clear = 
union {
 object {
  lg_54384
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end