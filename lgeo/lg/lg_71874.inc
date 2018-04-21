/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080719 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_71874: _Dish Inversted 2 x 2 Chrome Silver                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_71874)
#else
#include "lg_4740.inc"

#declare lg_71874 = 
union {
 object {
  lg_4740
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_71874_clear = 
union {
 object {
  lg_4740
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
}

#end