/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001119 Lutz Uhlmann                                                       */
/* 20081025 Lutz Uhlmann fixed orientation (reported by John Winning)          */
/* 20081124 Lutz Uhlmann fixed name of clear version                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32062: Technic Axle 2 Notched                                            */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_32062)
#else
#declare LENGTH=2;
#declare lg_32062 =
difference {
 union {
  cylinder {
   <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
   <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
   LG_KNOB_RADIUS
  }
  torus {
   LG_KNOB_RADIUS-0.08,
   0.08
   translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
  }
  cylinder {
   <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
   <0, LENGTH/2*LG_BRICK_WIDTH-0.08-LG_E, 0>,
   LG_KNOB_RADIUS-0.08
  }
  torus {
   LG_KNOB_RADIUS-0.08,
   0.08
   translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>
  }
  cylinder {
   <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
   <0, -LENGTH/2*LG_BRICK_WIDTH+0.08+LG_E, 0>,
   LG_KNOB_RADIUS-0.08
  }
 }
 union {
  #declare ROT = 0;
  #while (ROT < 4)
   box {
    <LG_CROSSAXLE_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
    <LG_KNOB_RADIUS, -LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
    rotate <0, 90*ROT, 0>
   }
   #declare ROT = ROT + 1;
  #end
  difference {
   cylinder {
    <0, 0.32, 0>,
    <0, 0.44, 0>,
    0.25
   }
   cylinder {
    <0, 0.31, 0>,
    <0, 0.45, 0>,
    0.16
   }
  }
  difference {
   cylinder {
    <0, -0.32, 0>,
    <0, -0.44, 0>,
    0.25
   }
   cylinder {
    <0, -0.31, 0>,
    <0, -0.45, 0>,
    0.16
   }
  }
 }
}

#declare lg_32062_clear =
difference {
 merge {
  cylinder {
   <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>,
   <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>,
   LG_KNOB_RADIUS
  }
  torus {
   LG_KNOB_RADIUS-0.08,
   0.08
   translate <0, LENGTH/2*LG_BRICK_WIDTH-0.08, 0>
  }
  cylinder {
   <0, LENGTH/2*LG_BRICK_WIDTH, 0>,
   <0, LENGTH/2*LG_BRICK_WIDTH-0.08-LG_E, 0>,
   LG_KNOB_RADIUS-0.08
  }
  torus {
   LG_KNOB_RADIUS-0.08,
   0.08
   translate <0, -LENGTH/2*LG_BRICK_WIDTH+0.08, 0>
  }
  cylinder {
   <0, -LENGTH/2*LG_BRICK_WIDTH, 0>,
   <0, -LENGTH/2*LG_BRICK_WIDTH+0.08+LG_E, 0>,
   LG_KNOB_RADIUS-0.08
  }
 }
 union {
  #declare ROT = 0;
  #while (ROT < 4)
   box {
    <LG_CROSSAXLE_WIDTH/2, LENGTH/2*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
    <LG_KNOB_RADIUS, -LENGTH/2*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
    rotate <0, 90*ROT, 0>
   }
   #declare ROT = ROT + 1;
  #end
  difference {
   cylinder {
    <0, 0.32, 0>,
    <0, 0.44, 0>,
    0.25
   }
   cylinder {
    <0, 0.31, 0>,
    <0, 0.45, 0>,
    0.16
   }
  }
  difference {
   cylinder {
    <0, -0.32, 0>,
    <0, -0.44, 0>,
    0.25
   }
   cylinder {
    <0, -0.31, 0>,
    <0, -0.45, 0>,
    0.16
   }
  }
 }
}

#end
