/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980826 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3351p01: Roadsign Triangle with Train Gates Crossing Pattern             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3351p01)
#else
#include "lg_3351.inc"
#declare lg_3351p01_decals =
union {
 difference {
  box {
   <0.0601, -0.9*LG_BRICK_WIDTH, 2.92>,
   <0.0599, 0.9*LG_BRICK_WIDTH, 2.72+LG_CORNER_SPACE>
  }
  union {
   box {
    <0.06+LG_E, 0.2, 0.08-LG_CORNER_SPACE>,
    <-0.06-LG_E, -2*LG_BRICK_WIDTH, 1>
    rotate <-60, 0, 0>
    translate <0, 0.9*LG_BRICK_WIDTH, 2.8>
   }
   box {
    <0.06+LG_E, -0.2, 0.08-LG_CORNER_SPACE>,
    <-0.06-LG_E, 2*LG_BRICK_WIDTH, 1>
    rotate <60, 0, 0>
    translate <0, -0.9*LG_BRICK_WIDTH, 2.8>
   }
  }
 }
 difference {
  box {
   <0.0601, 0, 0.08-LG_CORNER_SPACE>,
   <0.0599, -1.8*LG_BRICK_WIDTH, -0.12>
   rotate <-60, 0, 0>
   translate <0, 0.9*LG_BRICK_WIDTH, 2.8>
  }
  union {
   box {
    <0.06+LG_E, -0.9*LG_BRICK_WIDTH, 2>,
    <0.0, 0.9*LG_BRICK_WIDTH, 2.72+LG_CORNER_SPACE>
   }
   box {
    <0.06+LG_E, 0, 4.2>,
    <0, -0.3, 3>
   }
  }
 }
 difference {
  box {
   <0.0601, 0, 0.08-LG_CORNER_SPACE>,
   <0.0599, 1.8*LG_BRICK_WIDTH, -0.12>
   rotate <60, 0, 0>
   translate <0, -0.9*LG_BRICK_WIDTH, 2.8>
  }
  union {
   box {
    <0.06+LG_E, -0.9*LG_BRICK_WIDTH, 2>,
    <0.0, 0.9*LG_BRICK_WIDTH, 2.72+LG_CORNER_SPACE>
   }
   box {
    <0.06+LG_E, 0, 4.2>,
    <0, 0.3, 3>
   }
  }
 }
 cylinder {
  <0.0601, 0, 2.8+1.44*cos(pi/6)>,
  <0.0599, 0, 2.8+1.44*cos(pi/6)>,
  0.08-LG_CORNER_SPACE
 }
 cylinder {
  <0.0601, 0.9*LG_BRICK_WIDTH, 2.8>,
  <0.0599, 0.9*LG_BRICK_WIDTH, 2.8>,
  0.08-LG_CORNER_SPACE
 }
 cylinder {
  <0.0601, -0.9*LG_BRICK_WIDTH, 2.8>,
  <0.0599, -0.9*LG_BRICK_WIDTH, 2.8>,
  0.08-LG_CORNER_SPACE
 }
 union {
  #declare LINE_X=-0.24;
  #while (LINE_X<0.3)
   box {
    <0.0601, LINE_X+0.025, 2.98>,
    <0.0599, LINE_X-0.025, 3.3>
   }
   box {
    <0.0601, 0.025/sqrt(2), 0.025/sqrt(2)>,
    <0.0599, -0.025/sqrt(2), -0.025/sqrt(2)>
    rotate <45, 0, 0>
    translate <0, LINE_X, 3.3>
   }
   #declare LINE_X = LINE_X + 0.12;
  #end
  box {
   <0.0601, 0.3, 3>,
   <0.0599, -0.3, 3.05>
  }
  box {
   <0.0601, 0.3, 3.22>,
   <0.0599, -0.3, 3.27>
  }
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
  translate <0, 0, -0.03>
 }
 material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
}

#declare lg_3351p01 = 
union {
 object { lg_3351 }
 object { lg_3351p01_decals }
}

#declare lg_3351p01_clear = 
union {
 object { lg_3351_clear }
 object { lg_3351p01_decals }
}

#end
