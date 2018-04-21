/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071229 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3137c01: Brick 2 x 2 with Wheels complete assembly                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3137c01)
#else
#include "lg_0020.inc"
#include "lg_3137.inc"
#declare lg_3137c01 = 
union {
 object { lg_3137 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  <0, -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  0.08
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while ( ROT < 2 )
  object {
   lg_0020
   rotate <0, 0, 90>
   translate <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>
   material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT +1;
 #end
}

#declare lg_3137c01_clear = 
union {
 object { lg_3137_clear }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  <0, -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  0.08
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while ( ROT < 2 )
  object {
   lg_0020
   rotate <0, 0, 90>
   translate <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>
   material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT +1;
 #end
}

#end
