/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071121 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2360p02: Baseplate 32 x 32 Road T Intersection 7 Studs with Runway       */
/*             Narrow Pattern                                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2360p04)
#else
#include "lg_2360.inc"
#declare lg_2360p02_decals = 
union {
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8.25*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -7.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8.25*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 7.85*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 7.85*LG_BRICK_WIDTH, 0.0001>,
  <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.2*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-0.2*LG_BRICK_WIDTH, -8.25*LG_BRICK_WIDTH, 0.0001>,
  <0.2*LG_BRICK_WIDTH, -8.6*LG_BRICK_WIDTH, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-0.2*LG_BRICK_WIDTH, -8.6*LG_BRICK_WIDTH, 0.0001>,
  <0.2*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-8.25*LG_BRICK_WIDTH, -8.25*LG_BRICK_WIDTH, 0.0001>,
  <-7.85*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <8.25*LG_BRICK_WIDTH, -8.25*LG_BRICK_WIDTH, 0.0001>,
  <7.85*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.0001>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <-0.2*LG_BRICK_WIDTH, -8.25*LG_BRICK_WIDTH, 0.0001>,
  <-7.85*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 box {
  <0.2*LG_BRICK_WIDTH, -8.25*LG_BRICK_WIDTH, 0.0001>,
  <7.85*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.0001>
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  cylinder {
   <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0.0001>,
   <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -0.0001>,
   9.5*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, LG_E>,
    <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -LG_E>,
    9*LG_BRICK_WIDTH
   }
   box {
    <9.6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_E>,
    <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
    translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <9.6*LG_BRICK_WIDTH, 0, LG_E>,
    <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
    rotate <0, 0, 127>
    translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
   }
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  cylinder {
   <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0.0001>,
   <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -0.0001>,
   9.5*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, LG_E>,
    <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -LG_E>,
    9*LG_BRICK_WIDTH
   }
   box {
    <9.6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_E>,
    <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
    translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <9.6*LG_BRICK_WIDTH, 0, LG_E>,
    <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
    rotate <0, 0, 127>
    translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
   }
  }
  scale <-1, 1, 1>
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  box {
   <16*LG_BRICK_WIDTH-LG_CORNER_SPACE, -7.85*LG_BRICK_WIDTH, 0.0001>,
   <-16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.2*LG_BRICK_WIDTH, -0.0001>
  }
  union {
   difference {
    cylinder {
     <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, LG_E>,
     <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -LG_E>,
     9.5*LG_BRICK_WIDTH
    }
    union {
     cylinder {
      <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, LG_E>,
      <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -LG_E>,
      9*LG_BRICK_WIDTH
     }
     box {
      <9.6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_E>,
      <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
      translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <9.6*LG_BRICK_WIDTH, 0, LG_E>,
      <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
      rotate <0, 0, 127>
      translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
     }
    }
   }
   difference {
    cylinder {
     <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, LG_E>,
     <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -LG_E>,
     9.5*LG_BRICK_WIDTH
    }
    union {
     cylinder {
      <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, LG_E>,
      <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, -LG_E>,
      9*LG_BRICK_WIDTH
     }
     box {
      <9.6*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_E>,
      <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
      translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <9.6*LG_BRICK_WIDTH, 0, LG_E>,
      <-9.6*LG_BRICK_WIDTH, -9.6*LG_BRICK_WIDTH, -LG_E>
      rotate <0, 0, 127>
      translate <9.4*LG_BRICK_WIDTH, -8.5*LG_BRICK_WIDTH, 0>
     }
    }
    scale <-1, 1, 1>
   }
  }
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_2360p02 = 
union {
 object { lg_2360 }
 object { lg_2360p02_decals }
}

#declare lg_2360p02_clear = 
union {
 object { lg_2360_clear }
 object { lg_2360p02_decals }
}

#end