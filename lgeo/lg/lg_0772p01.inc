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
/* lg_0772p01: Brick 1 x 2 x 2 without centre Studs with Train Window Pattern  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0772p01)
#else
#include "lg_0772.inc"
#declare lg_0772p01_decals =
union {
 box {
  <0.0001, -0.75*LG_BRICK_WIDTH, -0.08>,
  <-0.0001, 0.75*LG_BRICK_WIDTH, -0.2>
 }
 box {
  <0.0001, -0.8*LG_BRICK_WIDTH, -0.92>,
  <-0.0001, 0.8*LG_BRICK_WIDTH, -1.04>
 }
 box {
  <0.0001, -0.75*LG_BRICK_WIDTH, -1.76>,
  <-0.0001, 0.75*LG_BRICK_WIDTH, -1.88>
 }
 box {
  <0.0001, -0.8*LG_BRICK_WIDTH, -0.24>,
  <-0.0001, -0.95*LG_BRICK_WIDTH, -1.72>
 }
 box {
  <0.0001, 0.8*LG_BRICK_WIDTH, -0.24>,
  <-0.0001, 0.95*LG_BRICK_WIDTH, -1.72>
 }
 #declare MIR = -1;
 #while (MIR < 2)
  intersection {
   difference {
    cylinder {
     <0.0001, 0.75*LG_BRICK_WIDTH, -0.24>,
     <-0.0001, 0.75*LG_BRICK_WIDTH, -0.24>,
     0.16
    }
    cylinder {
     <LG_E, 0.75*LG_BRICK_WIDTH, -0.24>,
     <-LG_E, 0.75*LG_BRICK_WIDTH, -0.24>,
     0.04
    }
   }
   box {
    <LG_E, LG_BRICK_WIDTH, -0.08>,
    <-LG_E, 0.75*LG_BRICK_WIDTH, -0.24>
   }
   scale <1, MIR, 1>
  }
  intersection {
   difference {
    cylinder {
     <0.0001, 0.75*LG_BRICK_WIDTH, -1.72>,
     <-0.0001, 0.75*LG_BRICK_WIDTH, -1.72>,
     0.16
    }
    cylinder {
     <LG_E, 0.75*LG_BRICK_WIDTH, -1.72>,
     <-LG_E, 0.75*LG_BRICK_WIDTH, -1.72>,
     0.04
    }
   }
   box {
    <LG_E, LG_BRICK_WIDTH, -1.88>,
    <-LG_E, 0.75*LG_BRICK_WIDTH, -1.72>
   }
   scale <1, MIR, 1>
  }
  #declare MIR = MIR + 2;
 #end
 material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 translate <0.5*LG_BRICK_WIDTH, 0, 0>
}

#declare lg_0772p01 = 
union {
 object { lg_0772 }
 object { lg_0772p01_decals }
}

#declare lg_0772p01_clear = 
union {
 object { lg_0772_clear }
 object { lg_0772p01_decals }
}

#end
