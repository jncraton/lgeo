/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_71075: Exhaust Pipe Elbow                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_71075)
#else
#declare lg_71075 =
union {
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  cylinder {
   <0, 1.5*LG_BRICK_WIDTH, 0>,
   <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1.5*LG_BRICK_WIDTH+LG_E, 0>,
   <0, 1.5*LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <-1.5*LG_BRICK_WIDTH, 0, 0>,
   <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0, 0>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  cylinder {
   <-1.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
   <-1.5*LG_BRICK_WIDTH+2*LG_CORNER_SPACE, 0, 0>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  torus {
   1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
   LG_BRICK_WIDTH/2
   rotate <90, 0, 0>
  }
  union {
   torus {
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_KNOB_RADIUS
    rotate <90, 0, 0>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH/2-LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, 2*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_E>
   }
   box {
    <-LG_E, 0, -LG_BRICK_WIDTH/2-LG_E>,
    <2*LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_E>
   }
  }
  translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
}

#declare lg_71075_clear =
merge {
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  cylinder {
   <0, 1.5*LG_BRICK_WIDTH, 0>,
   <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1.5*LG_BRICK_WIDTH+LG_E, 0>,
   <0, 1.5*LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <-1.5*LG_BRICK_WIDTH, 0, 0>,
   <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0, 0>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  cylinder {
   <-1.5*LG_BRICK_WIDTH-LG_E, 0, 0>,
   <-1.5*LG_BRICK_WIDTH+2*LG_CORNER_SPACE, 0, 0>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  torus {
   1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
   LG_BRICK_WIDTH/2
   rotate <90, 0, 0>
  }
  union {
   torus {
    1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_KNOB_RADIUS
    rotate <90, 0, 0>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH/2-LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, 2*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_E>
   }
   box {
    <-LG_E, 0, -LG_BRICK_WIDTH/2-LG_E>,
    <2*LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_E>
   }
  }
  translate <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
}

#end
