/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080721 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4144485: _Exhaust Pipe with Pin Chrome Silver                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4144485)
#else
#include "lg_40620.inc"

#declare lg_4144485 = 
union {
 object {
  lg_40620
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_4144485_clear = 
union {
 object {
  lg_40620
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
}

#end