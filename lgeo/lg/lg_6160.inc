/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970623 Lutz Uhlmann                                                       */
/* 20080120 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6160: Window 1 x 4 x 6 with cyan glass                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6160)
#else
#include "lg_6160a.inc"
#include "lg_6160b.inc"
#declare lg_6160 = 
union {
 object { lg_6160a }
 object {
  lg_6160b 
  material { texture { lg_clear_cyan } interior { lg_ior } }
 }
}

#declare lg_6160_clear = 
union {
 object { lg_6160a_clear }
 object {
  lg_6160b 
  material { texture { lg_clear_cyan } interior { lg_ior } }
 }
}

#end
