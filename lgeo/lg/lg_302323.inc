/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080301 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_302323: _Plate  1 x  2  Blue                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_302323)
#else
#include "lg_3023.inc"

#declare lg_302323 = 
union {
 object {
  lg_3023
  material { texture { lg_blue } }
 }
}

#declare lg_302323_clear = 
union {
 object {
  lg_3023
  material { texture { lg_blue } }
 }
}

#end