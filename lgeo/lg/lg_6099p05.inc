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
/* lg_6099p05: Baseplate 32 x 32 Road 9-Stud Landing Pad with Orange Circle    */
/*             Pattern Type 2                                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6099p05)
#else
#include "lg_6099.inc"
#declare lg_6099p05_decals = 
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
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
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 6.8*LG_BRICK_WIDTH, 0.01>,
    <8.1*LG_BRICK_WIDTH, 6.2*LG_BRICK_WIDTH, -0.01>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6.8*LG_BRICK_WIDTH, 0.01>,
    <8.1*LG_BRICK_WIDTH, -6.2*LG_BRICK_WIDTH, -0.01>
   }
  }
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <5.6, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <3.6, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <2.72, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <0.68, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <5.6, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <3.6, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <2.72, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <0.68, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-5.6, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <-3.6, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-2.72, 6.8*LG_BRICK_WIDTH, 0.0001>,
  <-0.68, 6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-5.6, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <-3.6, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-2.72, -6.8*LG_BRICK_WIDTH, 0.0001>,
  <-0.68, -6.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 6.8*LG_BRICK_WIDTH, 0.0001>,
    <8.1*LG_BRICK_WIDTH, 6.2*LG_BRICK_WIDTH, -0.0001>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6.8*LG_BRICK_WIDTH, 0.0001>,
    <8.1*LG_BRICK_WIDTH, -6.2*LG_BRICK_WIDTH, -0.0001>
   }
  }
  difference {
   cylinder {
    <0, 0, 0.001>,
    <0, 0, -0.001>,
    10.8
   }
   cylinder {
    <0, 0, 0.01>,
    <0, 0, -0.01>,
    9.9
   }
  }
  material { texture { lg_medium_orange  normal { bumps 0.1 scale 2 } } }
 }
}


#declare lg_6099p05 =
union {
 object { lg_6099 }
 object { lg_6099p05_decals }
}

#declare lg_6099p05_clear =
union {
 object { lg_6099_clear }
 object { lg_6099p05_decals }
}

#end
