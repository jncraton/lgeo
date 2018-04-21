/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071224 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2878: Train Wheel Holder 9V with black wheels                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2878c01)
#else
#include "lg_2878.inc"
#include "lg_2879c01.inc"
#declare lg_2878c01 =
union {
 object { lg_2878 }
 object { lg_2879c01 material { texture { lg_black  normal { bumps 0.1 scale 2 } } } }
}

#declare lg_2878c01_clear =
union {
 object { lg_2878_clear }
 object { lg_2879c01 material { texture { lg_black  normal { bumps 0.1 scale 2 } } } }
}

#end
