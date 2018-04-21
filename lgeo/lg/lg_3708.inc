/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971202 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3708: Technic Axle 12                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3708)
#else
#declare LENGTH=12;
#declare lg_3708 =
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
 }
}

#declare lg_3708_clear =
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
 }
}

#end
