/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071127 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2429c01: Hinge Plate 1 x 4 complete assembly                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2429c01)
#else
#include "lg_2429.inc"
#include "lg_2430.inc"
#declare lg_2429c01 =
union {
 object { lg_2429 }
 object { lg_2430 }
}

#declare lg_2429c01_clear =
union {
 object { lg_2429_clear }
 object { lg_2430_clear }
}

#end

