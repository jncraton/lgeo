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
/* lg_618843: _Cone  1 x  1 Trans-Blue                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_618843)
#else
#include "lg_6188.inc"

#declare lg_618843 = 
union {
 object {
  lg_6188_clear
  material { texture { lg_clear_blue } interior { lg_ior } }
 }
}

#declare lg_618843_clear = 
union {
 object {
  lg_6188_clear
  material { texture { lg_clear_blue } interior { lg_ior } }
 }
}

#end