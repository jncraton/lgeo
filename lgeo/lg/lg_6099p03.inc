/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080120 Lutz Uhlmann fixed                                                 */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6099p03: Baseplate 32 x 32 Road 9-Stud Landing Pad with Yellow Circle    */
/*             Pattern                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6099p03)
#else
#include "lg_6099.inc"
#declare lg_6099p03_decals = 
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 6.8*LG_BRICK_WIDTH, 0.0001>,
    <LENGTH/2*LG_BRICK_WIDTH-2, 6.2*LG_BRICK_WIDTH, -0.0001>
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <-6.2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+2, 0.0001>,
    <-6.8*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.0001>
    material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <0.65, 0.2, 0.0001>,
    <1.3, -0.2, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <2.15, 0.2, 0.0001>,
    <3.15, -0.2, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <4.05, 0.2, 0.0001>,
    <5.5, -0.2, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <6.35, 0.2, 0.0001>,
    <8.15, -0.2, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <9.05, 0.2, 0.0001>,
    <11.15, -0.2, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <11.95, 0.2, 0.0001>,
    <12.8-LG_CORNER_SPACE, -0.2, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  cylinder {
   <0, 0, 0.0001>,
   <0, 0, -0.0001>,
   10.8
  }
  union {
   cylinder {
    <0, 0, 0.01>,
    <0, 0, -0.01>,
    9.9
   }
   box {
    <11. 0.32, 0.01>,
    <-11, -0.32, -0.01>
   }
   box {
    <0.32, 11, 0.01>,
    <-0.32, -11, -0.01>
   }
  }
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <6.65, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <4.15, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <3.25, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <0.75, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <6.65, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <4.15, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <3.25, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <0.75, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-6.65, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <-4.15, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-3.25, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <-0.75, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-6.65, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <-4.15, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-3.25, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <-0.75, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_yellow  normal { bumps 0.1 scale 2 } } }
 }
}


#declare lg_6099p03 =
union {
 object { lg_6099 }
 object { lg_6099p03_decals }
}

#declare lg_6099p03_clear =
union {
 object { lg_6099_clear }
 object { lg_6099p03_decals }
}

#end
