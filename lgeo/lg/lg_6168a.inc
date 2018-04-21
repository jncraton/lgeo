/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970623 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6168a: Pillar 2 x 2 x 11                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6168a)
#else
#include "lg_6167.inc"
#include "lg_6168.inc"
#declare lg_6168a = 
union {
 object { lg_6167 }
 object { lg_6168 }
}

#declare lg_6160_clear = 
union {
 object { lg_6167_clear }
 object { lg_6168_clear }
}

#end
