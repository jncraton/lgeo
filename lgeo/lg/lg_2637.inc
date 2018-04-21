/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980405 Lutz Uhlmann                                                       */
/* 20071202 Lutz Uhlmann fixed orientation                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2637: Technic Axle 16 with Holes                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2637)
#else
#declare lg_2637 =
union {
 difference {
  cylinder {
   <0, 7.5*LG_BRICK_WIDTH-0.08, 0>,
   <0, -7.5*LG_BRICK_WIDTH+0.08, 0>,
   LG_KNOB_RADIUS
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, 7.5*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -7.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <LG_BRICK_WIDTH/2, 7.5*LG_BRICK_WIDTH, 0>,
   <-LG_BRICK_WIDTH/2, 7.5*LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS+LG_E
  }
  cylinder {
   <LG_BRICK_WIDTH/2, -7.5*LG_BRICK_WIDTH, 0>,
   <-LG_BRICK_WIDTH/2, -7.5*LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS+LG_E
  }
 }
 #declare MIR = -1;
 #while (MIR < 2)
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2, 0, 0>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      0.3
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
      0.3
     }
     cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
     }
    }
   }
   matrix <1, 0, 0, 0, 1, 0, 0, 0, 1, 0, MIR*7.5*LG_BRICK_WIDTH, 0>
  }
  #declare MIR = MIR + 2;
 #end
 rotate <0, 90, 90>
 translate <7.5*LG_BRICK_WIDTH, 0, 0>
}

#declare lg_2637_clear =
merge {
 difference {
  cylinder {
   <0, 7.5*LG_BRICK_WIDTH-0.08, 0>,
   <0, -7.5*LG_BRICK_WIDTH+0.08, 0>,
   LG_KNOB_RADIUS
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <LG_CROSSAXLE_WIDTH/2, 7.5*LG_BRICK_WIDTH+LG_E, LG_CROSSAXLE_WIDTH/2>,
     <LG_KNOB_RADIUS, -7.5*LG_BRICK_WIDTH-LG_E, LG_KNOB_RADIUS>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <LG_BRICK_WIDTH/2, 7.5*LG_BRICK_WIDTH, 0>,
   <-LG_BRICK_WIDTH/2, 7.5*LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS+LG_E
  }
  cylinder {
   <LG_BRICK_WIDTH/2, -7.5*LG_BRICK_WIDTH, 0>,
   <-LG_BRICK_WIDTH/2, -7.5*LG_BRICK_WIDTH, 0>,
   LG_KNOB_RADIUS+LG_E
  }
 }
 #declare MIR = -1;
 #while (MIR < 2)
  merge {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2, 0, 0>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, 0>,
      <LG_BRICK_WIDTH/2-0.08, 0, 0>,
      0.3
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, 0, 0>,
      <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
      0.3
     }
     cylinder {
      <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
      0.3+LG_CORNER_SPACE
     }
    }
   }
   matrix <1, 0, 0, 0, 1, 0, 0, 0, 1, 0, MIR*7.5*LG_BRICK_WIDTH, 0>
  }
  #declare MIR = MIR + 2;
 #end
 rotate <0, 90, 90>
 translate <7.5*LG_BRICK_WIDTH, 0, 0>
}

#end
