/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080107 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4150p01: Tile 2 x 2 Round with black grille Pattern                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4150p01)
#else
#include "lg_4150.inc"
#declare lg_4150p01_decals =
union {
 intersection {
  union {
   #declare STRIPE = -1.5;
   #while (STRIPE<2)
    box {
     <(STRIPE*0.40+0.075)*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0.0001>,
     <(STRIPE*0.40-0.075)*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -0.0001>
    }
    box {
     <(STRIPE*0.4+0.075)*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0.0001>,
     <(STRIPE*0.4-0.075)*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -0.0001>
     rotate <0, 0, 90>
    }
    #declare STRIPE = STRIPE + 1;
   #end
  }
  cylinder {
   <0, 0, 0.0002>,
   <0, 0, -0.0002>,
   0.9*LG_BRICK_WIDTH
  }
 }
 difference {
  cylinder {
   <0, 0, 0.0001>,
   <0, 0, -0.0001>,
   0.95*LG_BRICK_WIDTH
  }
  cylinder {
   <0, 0, 0.0002>,
   <0, 0, -0.0002>,
   0.875*LG_BRICK_WIDTH
  }
 }
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
}

#declare lg_4150p01 = 
union {
 object { lg_4150 }
 object { lg_4150p01_decals }
}

#declare lg_4150p01_clear = 
union {
 object { lg_4150_clear }
 object { lg_4150p01_decals }
}

#end
