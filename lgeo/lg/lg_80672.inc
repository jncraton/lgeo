/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080119 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_80672: Baseplate 32 x 32 Road 9-Stud T Intersection black with Green     */
/*           Octagon Pattern                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_80672)
#else
#include "lg_0608p02.inc"
#declare lg_80672 = 
union {
 object { lg_0608p02_decals }
 object { lg_0608 material { texture { lg_black  normal { bumps 0.1 scale 2 } } } }
}

#declare lg_80672_clear = 
union {
 object { lg_0608p02_decals }
 object { lg_0608 material { texture { lg_black  normal { bumps 0.1 scale 2 } } } }
}

#end
