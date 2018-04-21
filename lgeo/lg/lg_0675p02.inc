/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071111 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0675p02: Roadsign Square Tall with Parking Pattern                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0675p02)
#else
#include "lg_0675.inc"
#declare lg_0675p02_decals =
union {
 difference {
  box {
   <0.0601, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4.64-LG_CORNER_SPACE>,
   <0.0599, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2.72+LG_CORNER_SPACE>
  }
  union {
   box {
    <0.06+LG_E, 0.36, 4.4>,
    <0.06-LG_E, 0.20, 3.44>
   }
   box {
    <0.06+LG_E, -0.08, 4.0>,
    <0.06-LG_E, 0.2001, 3.84>
   }
   box {
    <0.06+LG_E, -0.08, 4.4>,
    <0.06-LG_E, 0.2001, 4.24>
   }
   difference {
    cylinder {
     <0.06+LG_E, -0.08, 4.12>,
     <0.06-LG_E, -0.08, 4.12>,
     0.28
    }
    union {
     cylinder {
      <0.06+LG_E, -0.08, 4.12>,
      <0.06-LG_E, -0.08, 4.12>,
      0.12
     }
     box {
      <0.06+LG_E, -0.08, 4.4>,
      <0.06-LG_E, 0.22, 3.84>
     }
    }
   }
  }
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 union {
  box {
   <0.0601, 0.36, 4.4>,
   <0.0599, 0.20, 3.44>
  }
  box {
   <0.0601, -0.08, 4.0>,
   <0.0599, 0.2001, 3.84>
  }
  box {
   <0.0602, -0.08, 4.4>,
   <0.0599, 0.2001, 4.24>
  }
  difference {
   cylinder {
    <0.0601, -0.08, 4.12>,
    <0.0599, -0.08, 4.12>,
    0.28
   }
   union {
    cylinder {
     <0.06+LG_E, -0.08, 4.12>,
     <0.06-LG_E, -0.08, 4.12>,
     0.12
    }
    box {
     <0.06+LG_E, -0.08, 4.4>,
     <0.06-LG_E, 0.22, 3.84>
    }
   }
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0675p02 = 
union {
 object { lg_0675 }
 object { lg_0675p02_decals }
}

#declare lg_0675p02_clear = 
union {
 object { lg_0675_clear }
 object { lg_0675p02_decals }
}

#end
