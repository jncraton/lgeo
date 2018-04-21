/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071029 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0251c01: Turntable 2 x 2 Plate with Hinge, Complete                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0251)
#else
 #include "lg_0251.inc"
#end
#ifdef(lg_3679)
#else
 #include "lg_3679.inc"
#end
#ifdef(lg_0251c01)
#else
#declare lg_0251c01 =
union {
 object {
  lg_0251
 }
 object {
  lg_3679
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0251c01_clear =
union {
 object {
  lg_0251_clear
 }
 object {
  lg_3679
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#end