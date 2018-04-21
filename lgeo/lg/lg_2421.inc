/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/* 20071123 Lutz Uhlmann fixed blade orientation                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2421: Rotor small                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2421)
#else
#declare lg_2421 =
union {
 difference {
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  union {
   box {
    <LG_KNOB_INNER_RADIUS, LG_KNOB_RADIUS-0.08, 0.08>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_KNOB_RADIUS+0.08, -0.08>
   }
   cylinder {
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS-0.08, 0>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_KNOB_RADIUS-0.08, 0>,
    0.08
   }
   cylinder {
    <LG_KNOB_RADIUS, -LG_KNOB_RADIUS+0.08, 0>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_KNOB_RADIUS+0.08, 0>,
    0.08
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0, 0.08>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0, -0.08>,
    LG_KNOB_RADIUS-0.08
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0, 0>
   }
   rotate <-20, 0, 0>
   rotate <0, 0, ROT*120>
  }
  #declare ROT = ROT +1;
 #end
}

#declare lg_2421_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  merge {
   box {
    <LG_KNOB_INNER_RADIUS, LG_KNOB_RADIUS-0.08, 0.08>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_KNOB_RADIUS+0.08, -0.08>
   }
   cylinder {
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS-0.08, 0>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_KNOB_RADIUS-0.08, 0>,
    0.08
   }
   cylinder {
    <LG_KNOB_RADIUS, -LG_KNOB_RADIUS+0.08, 0>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_KNOB_RADIUS+0.08, 0>,
    0.08
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0, 0.08>,
    <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0, -0.08>,
    LG_KNOB_RADIUS-0.08
   }
   torus {
    LG_KNOB_RADIUS-0.08,
    0.08
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0, 0>
   }
   rotate <-20, 0, 0>
   rotate <0, 0, ROT*120>
  }
  #declare ROT = ROT +1;
 #end
}

#end
