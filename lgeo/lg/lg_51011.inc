/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080730 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_51011: Tire 17.5 x 6 Shallow Staggered Treads                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_51011)
#else
#declare lg_51011 =
union {
 #declare MIR = 0
 #while (MIR < 2)
  union {
   torus {
    0.56+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.84-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <0.32, 0, 0>,
      <-LG_CORNER_SPACE, 0, 0>,
      0.88-LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.88
     }
     torus {
      0.88-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
     }
     torus {
      0.88-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.32-LG_CORNER_SPACE, 0, 0>
     }
    }
    union {
     cylinder {
      <0.32+LG_E, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      0.84-LG_CORNER_SPACE-LG_E
     }
     #declare ROT = 0;
     #while (ROT < 18)
      box {
       <0.32+LG_E, -LG_CORNER_SPACE/2, 0.88+LG_E>,
       <-LG_CORNER_SPACE-LG_E, 0.08, 0.8>
       rotate <ROT*20 , 0, 0>
      }
      box {
       <0.32+LG_E, LG_CORNER_SPACE/2, 0.88+LG_E>,
       <-LG_CORNER_SPACE-LG_E, -0.08, 0.8>
       rotate <ROT*20 + 10, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    rotate <10*MIR, 0, 0>
   }
   #declare ROT = 0;
   #while (ROT < 18)
    union {
     sphere {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, -LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, -LG_CORNER_SPACE, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0.88-LG_CORNER_SPACE>,
      <0, 0, 0.8>
     }
     rotate <ROT*20 + 10*MIR, 0, 0>
    }
    union {
     sphere {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE, 0.88-LG_CORNER_SPACE>,
      <0, 0, 0.8>
     }
     rotate <ROT*20 + 10*MIR + 10, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1
 #end
 difference {
  union {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    0.84
   }
   cylinder {
    <0.32, 0, 0>,
    <-0.32, 0, 0>,
    0.84-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.32, 0, 0>,
    <-0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.12-LG_E, 0, 0>,
    <0.12+LG_E, 0, 0>,
    0.48
   }
  }
 }
}

#declare lg_51011_clear =
merge {
 #declare MIR = 0
 #while (MIR < 2)
  merge {
   torus {
    0.56+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.84-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <0.32, 0, 0>,
      <-LG_CORNER_SPACE, 0, 0>,
      0.88-LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.88
     }
     torus {
      0.88-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
     }
     torus {
      0.88-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.32-LG_CORNER_SPACE, 0, 0>
     }
    }
    union {
     cylinder {
      <0.32+LG_E, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      0.84-LG_CORNER_SPACE-LG_E
     }
     #declare ROT = 0;
     #while (ROT < 18)
      box {
       <0.32+LG_E, -LG_CORNER_SPACE/2, 0.88+LG_E>,
       <-LG_CORNER_SPACE-LG_E, 0.08, 0.8>
       rotate <ROT*20 , 0, 0>
      }
      box {
       <0.32+LG_E, LG_CORNER_SPACE/2, 0.88+LG_E>,
       <-LG_CORNER_SPACE-LG_E, -0.08, 0.8>
       rotate <ROT*20 + 10, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    rotate <10*MIR, 0, 0>
   }
   #declare ROT = 0;
   #while (ROT < 18)
    merge {
     sphere {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, -LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, -LG_CORNER_SPACE, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.32-LG_CORNER_SPACE, -LG_CORNER_SPACE, 0.88-LG_CORNER_SPACE>,
      <0, 0, 0.8>
     }
     rotate <ROT*20 + 10*MIR, 0, 0>
    }
    merge {
     sphere {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     sphere {
      <0, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, LG_CORNER_SPACE/2, 0.8>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      <0, LG_CORNER_SPACE/2, 0.88-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.32-LG_CORNER_SPACE, LG_CORNER_SPACE, 0.88-LG_CORNER_SPACE>,
      <0, 0, 0.8>
     }
     rotate <ROT*20 + 10*MIR + 10, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1
 #end
 difference {
  merge {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    0.84
   }
   cylinder {
    <0.32, 0, 0>,
    <-0.32, 0, 0>,
    0.84-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.32, 0, 0>,
    <-0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.12-LG_E, 0, 0>,
    <0.12+LG_E, 0, 0>,
    0.48
   }
  }
 }
}

#end
