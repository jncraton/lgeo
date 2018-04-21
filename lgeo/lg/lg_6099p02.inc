/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990616 Lutz Uhlmann                                                       */
/* 20080119 Lutz Uhlmann fixed stud orientation                                */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6099p02: Baseplate 32 x 32 Road 9-Stud Landing Pad with Green Octagon    */
/*             Pattern                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6099p02)
#else
#include "lg_6099.inc"
#declare lg_6099p02_decals = 
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   box {
    <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6.2*LG_BRICK_WIDTH, 0.0001>,
    <13*LG_BRICK_WIDTH, -6.8*LG_BRICK_WIDTH, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <6.2*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.0001>,
    <6.8*LG_BRICK_WIDTH, -13*LG_BRICK_WIDTH, -0.0001>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <0, 0, 0.0001>,
    <-3.1*LG_BRICK_WIDTH, -0.6*LG_BRICK_WIDTH, -0.0001>
    rotate <0, 0, -45>
    translate <12.4*LG_BRICK_WIDTH, 7.2*LG_BRICK_WIDTH, 0>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <0, 0, 0.0001>,
    <-3.1*LG_BRICK_WIDTH, 0.6*LG_BRICK_WIDTH, -0.0001>
    rotate <0, 0, 135>
    translate <7.2*LG_BRICK_WIDTH, 12.4*LG_BRICK_WIDTH, 0>
    material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <14.7*LG_BRICK_WIDTH, 1.1*LG_BRICK_WIDTH, 0.0001>,
    <14.05*LG_BRICK_WIDTH, -1.1*LG_BRICK_WIDTH, -0.0001>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <12.5*LG_BRICK_WIDTH, 2.3*LG_BRICK_WIDTH, 0.0001>,
    <11.85*LG_BRICK_WIDTH, -2.3*LG_BRICK_WIDTH, -0.0001>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <3.05*LG_BRICK_WIDTH, 1.4*LG_BRICK_WIDTH, 0.0001>,
    <3.7*LG_BRICK_WIDTH, -1.4*LG_BRICK_WIDTH, -0.0001>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <0, 0, 0.0001>,
    <-2.3*LG_BRICK_WIDTH*sqrt(2), -0.65*LG_BRICK_WIDTH, -0.0001>
    rotate <0, 0, -45>
    translate <3.7*LG_BRICK_WIDTH, 1.4*LG_BRICK_WIDTH, 0>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <10.25*LG_BRICK_WIDTH, 3.75*LG_BRICK_WIDTH, 0.0001>,
    <9.6*LG_BRICK_WIDTH, -3.75*LG_BRICK_WIDTH, -0.0001>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   box {
    <0, 0, 0.0001>,
    <-6.5*LG_BRICK_WIDTH*sqrt(2), -0.65*LG_BRICK_WIDTH, -0.0001>
    rotate <0, 0, -45>
    translate <10.25*LG_BRICK_WIDTH, 3.75*LG_BRICK_WIDTH, 0>
    material { texture { lg_bright_green  normal { bumps 0.1 scale 2 } } }
   }
   rotate <0, 0, -90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}


#declare lg_6099p02 =
union {
 object { lg_6099 }
 object { lg_6099p02_decals }
}

#declare lg_6099p02_clear =
union {
 object { lg_6099_clear }
 object { lg_6099p02_decals }
}

#end
