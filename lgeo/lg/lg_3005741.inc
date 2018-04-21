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
/* lg_3005741: _Plate  1 x  1 Round Trans Red                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3005741)
#else
#include "lg_30057.inc"

#declare lg_3005741 = 
union {
 object {
  lg_30057_clear
  material { texture { lg_clear_red } interior { lg_ior } }
 }
}

#declare lg_3005741_clear = 
union {
 object {
  lg_30057_clear
  material { texture { lg_clear_red } interior { lg_ior } }
 }
}

#end