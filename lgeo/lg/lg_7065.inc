/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080126 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_7065: Plate 5 x 2 Hinge complete assembly red                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_7065)
#else
#include "lg_3149ec01.inc"

#declare lg_7065 =
union {
 object {
  lg_3149ec01
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_7065 =
union {
 object {
  lg_3149ec01
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
}

#end
