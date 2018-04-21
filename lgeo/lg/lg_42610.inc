/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080803 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_42610: Wheel 11 x  8 with Center Groove                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_42610)
#else
#declare lg_angle=atan2(0.27+LG_CORNER_SPACE,0.05);
#declare lg_42610 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.12+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.48+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.4-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.4-LG_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0.12+LG_CORNER_SPACE, 0, 0>,
      0.56
     }
     cylinder {
      <0.32, 0, 0>,
      <0.12, 0, 0>,
      0.56-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0.32+LG_E, 0, 0>,
      0.48+LG_CORNER_SPACE
     }
     cylinder {
      <0.32, 0, 0>,
      <0.24, 0, 0>,
      0.48
     }
     cylinder {
      <0.4, 0, 0>,
      <-0.4, 0, 0>,
      0.24
     }
    }
   }
   scale <1-2*MIR, 1, 1>
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   cylinder {
    <0.4-LG_CORNER_SPACE, 0, 0>,
    <-0.4+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <0.4, 0, 0>,
    <-0.4, 0, 0>,
    0.36-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0.4-LG_CORNER_SPACE, 0, 0>,
    <0.4+LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-0.4+LG_CORNER_SPACE, 0, 0>,
    <-0.4-LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.4+LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <-0.32, 0, 0>,
    <-0.4-LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <0.4, 0, 0>,
    <-0.4, 0, 0>,
    0.24
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder {
    <0.3-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.32>,
    <0.3-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.32>,
    <0.3-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   box {
    <0.3-LG_CORNER_SPACE, 0.06, 0.32>,
    <0.24-LG_E, -0.06, 0.5>
   }
   box {
    <0.3, 0.06-LG_CORNER_SPACE, 0.32>,
    <0.3-LG_CORNER_SPACE-LG_E, -0.06+LG_CORNER_SPACE, 0.5>
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.32>,
    <-0.3+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.32>,
    <-0.3+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   box {
    <-0.3+LG_CORNER_SPACE, 0.06, 0.32>,
    <-0.24+LG_E, -0.06, 0.5>
   }
   box {
    <-0.3, 0.06-LG_CORNER_SPACE, 0.32>,
    <-0.3+LG_CORNER_SPACE-LG_E, -0.06+LG_CORNER_SPACE, 0.5>
   }
   rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_42610_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.12+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.48+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.4-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.4-LG_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0.12+LG_CORNER_SPACE, 0, 0>,
      0.56
     }
     cylinder {
      <0.32, 0, 0>,
      <0.12, 0, 0>,
      0.56-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0.32+LG_E, 0, 0>,
      0.48+LG_CORNER_SPACE
     }
     cylinder {
      <0.32, 0, 0>,
      <0.24, 0, 0>,
      0.48
     }
     cylinder {
      <0.4, 0, 0>,
      <-0.4, 0, 0>,
      0.24
     }
    }
   }
   scale <1-2*MIR, 1, 1>
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   cylinder {
    <0.4-LG_CORNER_SPACE, 0, 0>,
    <-0.4+LG_CORNER_SPACE, 0, 0>,
    0.36
   }
   cylinder {
    <0.4, 0, 0>,
    <-0.4, 0, 0>,
    0.36-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0.4-LG_CORNER_SPACE, 0, 0>,
    <0.4+LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-0.4+LG_CORNER_SPACE, 0, 0>,
    <-0.4-LG_E, 0, 0>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.4+LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <-0.32, 0, 0>,
    <-0.4-LG_E, 0, 0>,
    0.3
   }
   cylinder {
    <0.4, 0, 0>,
    <-0.4, 0, 0>,
    0.24
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder {
    <0.3-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.32>,
    <0.3-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.32>,
    <0.3-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   box {
    <0.3-LG_CORNER_SPACE, 0.06, 0.32>,
    <0.24-LG_E, -0.06, 0.5>
   }
   box {
    <0.3, 0.06-LG_CORNER_SPACE, 0.32>,
    <0.3-LG_CORNER_SPACE-LG_E, -0.06+LG_CORNER_SPACE, 0.5>
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.32>,
    <-0.3+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.32>,
    <-0.3+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.5>,
    LG_CORNER_SPACE
   }
   box {
    <-0.3+LG_CORNER_SPACE, 0.06, 0.32>,
    <-0.24+LG_E, -0.06, 0.5>
   }
   box {
    <-0.3, 0.06-LG_CORNER_SPACE, 0.32>,
    <-0.3+LG_CORNER_SPACE-LG_E, -0.06+LG_CORNER_SPACE, 0.5>
   }
   rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
