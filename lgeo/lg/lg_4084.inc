/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970810 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4084: Tyre Medium                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4084)
#else
#declare lg_4084 =
union {
 difference {
  cylinder {
   <-0.16, 0, 0>,
   <0.16, 0, 0>,
   0.4
  }
  union {
   cylinder {
    <-0.16, 0, 0>,
    <0.16, 0, 0>,
    0.32
   }
   cone {
    <-0.2, 0, 0>, 0.45,
    <-0.08, 0, 0>, 0.3
   }
   cone {
    <0.2, 0, 0>, 0.45,
    <0.08, 0, 0>, 0.3
   }
  }
 }
 difference {
  union {
   cylinder {
    <-0.3, 0, 0>,
    <0.46, 0, 0>,
    0.84-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0.46-LG_CORNER_SPACE, 0, 0>,
    0.84
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.3+LG_E, 0, 0>,
    0.52
   }
   cylinder {
    <-0.38, 0, 0>,
    <-0.3+LG_E, 0, 0>,
    0.52-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-0.4, 0, 0>,
    <0.46, 0, 0>,
    0.4
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.38-LG_E, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cone {
    <0.47, 0, 0>,0.57
    <0.3, 0, 0>,0.4
   }
  }
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.3+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.46-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.52-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  union {
   cylinder {
    <0.46, 0, 0>,
    <0.08-LG_CORNER_SPACE, 0, 0>,
    1-LG_CORNER_SPACE
   }
   cylinder {
    <0.46-LG_CORNER_SPACE, 0, 0>,
    <0.08, 0, 0>,
    1
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.08, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.46-LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 18)
    box {
     <0.46+LG_E, -0.11, 1+LG_E>,
     <0.08-LG_CORNER_SPACE-LG_E, 0.11, 0.8>
     rotate <ROT * 360/18, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  union {
   cylinder {
    <-0.3, 0, 0>,
    <0.08+LG_CORNER_SPACE, 0, 0>,
    1-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0.08, 0, 0>,
    1
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.08, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.3+LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 18)
    box {
     <-0.3-LG_E, -0.11, 1+LG_E>,
     <0.08+LG_CORNER_SPACE+LG_E, 0.11, 0.8>
     rotate <(ROT+0.5) * 360/18, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#declare lg_4084_clear =
merge {
 difference {
  cylinder {
   <-0.16, 0, 0>,
   <0.16, 0, 0>,
   0.4
  }
  union {
   cylinder {
    <-0.16, 0, 0>,
    <0.16, 0, 0>,
    0.32
   }
   cone {
    <-0.2, 0, 0>, 0.45,
    <-0.08, 0, 0>, 0.3
   }
   cone {
    <0.2, 0, 0>, 0.45,
    <0.08, 0, 0>, 0.3
   }
  }
 }
 difference {
  merge {
   cylinder {
    <-0.3, 0, 0>,
    <0.46, 0, 0>,
    0.84-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0.46-LG_CORNER_SPACE, 0, 0>,
    0.84
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.3+LG_E, 0, 0>,
    0.52
   }
   cylinder {
    <-0.38, 0, 0>,
    <-0.3+LG_E, 0, 0>,
    0.52-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-0.4, 0, 0>,
    <0.46, 0, 0>,
    0.4
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.38-LG_E, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cone {
    <0.47, 0, 0>,0.57
    <0.3, 0, 0>,0.4
   }
  }
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.3+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.46-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.52-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  merge {
   cylinder {
    <0.46, 0, 0>,
    <0.08-LG_CORNER_SPACE, 0, 0>,
    1-LG_CORNER_SPACE
   }
   cylinder {
    <0.46-LG_CORNER_SPACE, 0, 0>,
    <0.08, 0, 0>,
    1
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.08, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.46-LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 18)
    box {
     <0.46+LG_E, -0.11, 1+LG_E>,
     <0.08-LG_CORNER_SPACE-LG_E, 0.11, 0.8>
     rotate <ROT * 360/18, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  merge {
   cylinder {
    <-0.3, 0, 0>,
    <0.08+LG_CORNER_SPACE, 0, 0>,
    1-LG_CORNER_SPACE
   }
   cylinder {
    <-0.3+LG_CORNER_SPACE, 0, 0>,
    <0.08, 0, 0>,
    1
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.08, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.3+LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 18)
    box {
     <-0.3-LG_E, -0.11, 1+LG_E>,
     <0.08+LG_CORNER_SPACE+LG_E, 0.11, 0.8>
     rotate <(ROT+0.5) * 360/18, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#end








