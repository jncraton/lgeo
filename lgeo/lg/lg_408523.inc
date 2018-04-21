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
/* lg_408523: _Plate  1 x  1 with Clip Vertical - Type 3 Blue                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_408523)
#else
#include "lg_4085.inc"

#declare lg_408523 = 
union {
 object {
  lg_4085
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_408523_clear = 
union {
 object {
  lg_4085
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
}

#end