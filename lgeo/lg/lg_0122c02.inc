/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071021 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0122c02: Plate 2 x 2 with White Wheels                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0122c02)
#else
 #ifdef(lg_0422)
 #else
  #include "lg_0422.inc"
 #end 
#declare lg_0122c02 = 
union {
 object { lg_0422 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
  <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
  0.08
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while ( ROT < 2 )
  union {
   cylinder {
    <0, -0.2, 0>,
    <0, -0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE, 0>,
    <0, -0.16, 0>,
    0.4
   }
   cylinder {
    <0, 0.2, 0>,
    <0, 0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, 0.16, 0>,
    0.4
   }
   cone {
    <0, -0.16, 0>, 0.4,
    <0, -0.048, 0>, 0.26
   }
   cone {
    <0, 0.16, 0>, 0.4,
    <0, 0.048, 0>, 0.26
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    0.26
   }
   difference {
    union {
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.2-LG_CORNER_SPACE, 0>
     }
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, -0.2+LG_CORNER_SPACE, 0>
     }
    }
    cylinder {
     <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
     <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
     0.4+LG_E
    }
   }
   cylinder {
    <0, 0.32, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
   }
   cone {
    <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
    <0, -0.3, 0>, 0.25
   }
   translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
   material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT +1;
 #end
}

#declare lg_0122c02_clear = 
union {
 object { lg_0422_clear }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
  <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
  0.08
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while ( ROT < 2 )
  merge {
   cylinder {
    <0, -0.2, 0>,
    <0, -0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE, 0>,
    <0, -0.16, 0>,
    0.4
   }
   cylinder {
    <0, 0.2, 0>,
    <0, 0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, 0.16, 0>,
    0.4
   }
   cone {
    <0, -0.16, 0>, 0.4,
    <0, -0.048, 0>, 0.26
   }
   cone {
    <0, 0.16, 0>, 0.4,
    <0, 0.048, 0>, 0.26
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    0.26
   }
   difference {
    union {
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.2-LG_CORNER_SPACE, 0>
     }
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, -0.2+LG_CORNER_SPACE, 0>
     }
    }
    cylinder {
     <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
     <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
     0.4+LG_E
    }
   }
   cylinder {
    <0, 0.32, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
   }
   cone {
    <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
    <0, -0.3, 0>, 0.25
   }
   translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
   material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT +1;
 #end
}

#end
