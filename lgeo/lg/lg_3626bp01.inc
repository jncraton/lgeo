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
/* lg_3626bp01: Minifig Head Plain with standard grin Pattern                  */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3626b)
#else
#include "lg_3626b.inc"
#declare lg_3626bp01_decals =
intersection {
 union {
  cylinder {
   <0.3, 0, -0.42>,
   <0.6, 0, -0.42>,
   0.06
   rotate <0, 0, 17>
  }
  cylinder {
   <0.3, 0, -0.42>,
   <0.6, 0, -0.42>,
   0.06
   rotate <0, 0, -17>
  }
  difference {
   cylinder {
    <0, 0, -0.25>,
    <0.6, 0, -0.25>,
    0.45
   }
   union {
    cylinder {
     <0, 0, -0.25>,
     <0.6, 0, -0.25>,
     0.39
    }
    box {
     <0, 0, 0.6>,
     <0.6, 0.6, -0.6>
     rotate <20, 0, 0>
     translate <0, 0, -0.25>
    }
    box {
     <0, 0, 0.6>,
     <0.6, -0.6, -0.6>
     rotate <-20, 0, 0>
     translate <0, 0, -0.25>
    }
   }
  }
  cylinder {
   <0, 0, -0.42>,
   <0.6, 0, -0.42>,
   0.03
   rotate <20, 0, 0>
   translate <0, 0, -0.25>
  }
  cylinder {
   <0, 0, -0.42>,
   <0.6, 0, -0.42>,
   0.03
   rotate <-20, 0, 0>
   translate <0, 0, -0.25>
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_BRICK_HEIGHT>,
   0.51+0.001
  }
  cylinder {
   <0, 0, 0.01>,
   <0, 0, -LG_BRICK_HEIGHT-0.01>,
   0.51-0.001
  }
 }
 material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
}

#declare lg_3626bp01 =
union {
 object { lg_3626b }
 object { lg_3626bp01_decals }
}

#declare lg_3626bp01_clear =
union {
 object { lg_3626b_clear }
 object { lg_3626bp01_decals }
}

#end
