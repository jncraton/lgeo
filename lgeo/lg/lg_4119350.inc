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
/* lg_4119350: _Brick  1 x  1 Trans_Blue                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4119350)
#else
#include "lg_3005.inc"

#declare lg_4119350 = 
union {
 object {
  lg_3005
  material { texture { lg_clear_blue } interior { lg_ior } }
 }
}

#declare lg_4119350_clear = 
union {
 object {
  lg_3005
  material { texture { lg_clear_blue } interior { lg_ior } }
 }
}

#end