/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080129 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30359b: Brick 1 x 2 Round Top with Rod 1 x 8 and Stud with Axlehole      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30359b)
#else
#include "lg_30359a.inc"
#declare lg_30359b =
union {
 object {
  lg_30359a
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     sphere {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.16, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.16>,
      0.08
     }
     cylinder {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <6*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     box {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <6*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.16, LG_CROSSAXLE_WIDTH/2>
     }
     box {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <6*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.16>
     }
   
     rotate <90*ROT, 0 ,0>
     translate <0, 0, -LG_BRICK_WIDTH/2>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <7*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
   <6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2>,
   LG_KNOB_RADIUS+LG_E
  }
 }
}

#declare lg_30359b_clear =
merge {
 object {
  lg_30359a_clear
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     sphere {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.16, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.16>,
      0.08
     }
     cylinder {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <6*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     box {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <6*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.16, LG_CROSSAXLE_WIDTH/2>
     }
     box {
      <7*LG_BRICK_WIDTH-0.1, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <6*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.16>
     }
   
     rotate <90*ROT, 0 ,0>
     translate <0, 0, -LG_BRICK_WIDTH/2>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <7*LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>,
   <6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_BRICK_WIDTH/2>,
   LG_KNOB_RADIUS+LG_E
  }
 }
}

#end
