/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080402 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4294998: _Minifig Lance White                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4294998)
#else
#include "lg_3849.inc"

#declare lg_4294998 = 
union {
 object {
  lg_3849
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4294998_clear = 
union {
 object {
  lg_3849
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#end