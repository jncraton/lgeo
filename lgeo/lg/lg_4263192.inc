/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080721 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4263192: _Exhaust Pipe with Pin Stone Grey                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4263192)
#else
#include "lg_40620.inc"

#declare lg_4263192 = 
union {
 object {
  lg_40620
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4263192_clear = 
union {
 object {
  lg_40620
  material { texture { lg_bluish_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end