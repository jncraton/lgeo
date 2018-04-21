/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970730 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6015: Tyre Wide                                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6015)
#else
#declare lg_6015 =
union {
 difference {
  union {
   cylinder {
    <-0.56, 0, 0>,
    <0.56, 0, 0,>,
    0.84-LG_CORNER_SPACE
   }
   cylinder {
    <-0.56+LG_CORNER_SPACE, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.84
   }
  }
  union {
   cylinder {
    <-0.56, 0, 0>,
    <-0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <0.56, 0, 0>,
    <0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <-0.08, 0, 0>,
    <0.08, 0, 0,>,
    0.5
   }
   intersection {
    union {
     cone {
      <-0.02, 0, 0>,0.46 
      <-0.08-LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
     cone {
      <0.02, 0, 0>,0.46 
      <0.08+LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
    }
    cylinder {
     <0.1, 0, 0>,
     <-0.1, 0, 0,>,
     0.56
    }
   }
   cylinder {
    <-0.56-LG_E, 0, 0>,
    <-0.56+LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.56+LG_E, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 2)
    union {
     #declare ROT2 = 0;
     #while (ROT2 < 18)
      box {
       <-LG_CORNER_SPACE, -0.095, 1-LG_CORNER_SPACE>,
       <0.6, 0.095, 0.8-LG_CORNER_SPACE>
       rotate <ROT2*20+5, 0, 0>
      }
      #declare ROT2 = ROT2 + 1;
     #end
     #if (ROT=1)
      rotate <0, 0, 180>
     #end
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0.48, 0, 0>,
   <-0.48, 0, 0>,
   1-LG_CORNER_SPACE
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 2)
    union {
     #declare ROT2 = 0;
     #while (ROT2 < 18)
      box {
       <0, -0.095, 1>,
       <0.6, 0.095, 0.8>
       rotate <ROT2*20+5, 0, 0>
      }
      #declare ROT2 = ROT2 + 1;
     #end
     #if (ROT=1)
      rotate <0, 0, 180>
     #end
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0.48-LG_CORNER_SPACE, 0, 0>,
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    1
   }
   cone {
    <0.56-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <0.48-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   cone {
    <-0.56+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <-0.48+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.48-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.48+LG_CORNER_SPACE, 0, 0>
   }
  }
 }
 torus {
  1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
 }
}

#declare lg_6015_clear =
merge {
 difference {
  merge {
   cylinder {
    <-0.56, 0, 0>,
    <0.56, 0, 0,>,
    0.84-LG_CORNER_SPACE
   }
   cylinder {
    <-0.56+LG_CORNER_SPACE, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.84
   }
  }
  merge {
   cylinder {
    <-0.56, 0, 0>,
    <-0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <0.56, 0, 0>,
    <0.08, 0, 0,>,
    0.56
   }
   cylinder {
    <-0.08, 0, 0>,
    <0.08, 0, 0,>,
    0.5
   }
   intersection {
    merge {
     cone {
      <-0.02, 0, 0>,0.46 
      <-0.08-LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
     cone {
      <0.02, 0, 0>,0.46 
      <0.08+LG_E*0.6, 0, 0,>, 0.56+LG_E
     }
    }
    cylinder {
     <0.1, 0, 0>,
     <-0.1, 0, 0,>,
     0.56
    }
   }
   cylinder {
    <-0.56-LG_E, 0, 0>,
    <-0.56+LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.56+LG_E, 0, 0>,
    <0.56-LG_CORNER_SPACE, 0, 0,>,
    0.56+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.56-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.84-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 2)
    merge {
     #declare ROT2 = 0;
     #while (ROT2 < 18)
      box {
       <-LG_CORNER_SPACE, -0.095, 1-LG_CORNER_SPACE>,
       <0.6, 0.095, 0.8-LG_CORNER_SPACE>
       rotate <ROT2*20+5, 0, 0>
      }
      #declare ROT2 = ROT2 + 1;
     #end
     #if (ROT=1)
      rotate <0, 0, 180>
     #end
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0.48, 0, 0>,
   <-0.48, 0, 0>,
   1-LG_CORNER_SPACE
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 2)
    merge {
     #declare ROT2 = 0;
     #while (ROT2 < 18)
      box {
       <0, -0.095, 1>,
       <0.6, 0.095, 0.8>
       rotate <ROT2*20+5, 0, 0>
      }
      #declare ROT2 = ROT2 + 1;
     #end
     #if (ROT=1)
      rotate <0, 0, 180>
     #end
    }
    #declare ROT = ROT + 1;
   #end
  }
  merge {
   cylinder {
    <0.48-LG_CORNER_SPACE, 0, 0>,
    <-0.48+LG_CORNER_SPACE, 0, 0>,
    1
   }
   cone {
    <0.56-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <0.48-LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   cone {
    <-0.56+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 0.84-LG_CORNER_SPACE/2
    <-0.48+LG_CORNER_SPACE*(1-cos(pi/6)), 0, 0>, 1-LG_CORNER_SPACE/2
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.48-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.48+LG_CORNER_SPACE, 0, 0>
   }
  }
 }
 torus {
  1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
 }
}

#end
