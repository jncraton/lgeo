/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071124 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2580c01: Scaffolding 2 x 2 x 5 complete assembly                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2580c01)
#else
#include "lg_2579.inc"
#include "lg_2580.inc"
#declare lg_2580c01 =
union {
 object { lg_2579 }
 object { lg_2580 }
}

#declare lg_2580c01_clear =
union {
 object { lg_2579_clear }
 object { lg_2580_clear }
}

#end

