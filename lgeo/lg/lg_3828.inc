/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080102 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3828: Car Steering Wheel                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3828)
#else
#declare lg_3828 =
union {
 difference {
  union {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.28-LG_CORNER_SPACE>,
    0.24
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, 0.28>,
    0.24-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, 0.28+LG_E>,
   0.16
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, 0.19+LG_CORNER_SPACE>,
    <0, 0, 0.31>,
    0.54
   }
   cylinder {
    <0, 0, 0.19>,
    <0, 0, 0.31>,
    0.54-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.19-LG_E>,
   <0, 0, 0.31+LG_E>,
   0.4
  }
 }
 torus {
  0.47
  0.07
  rotate <90, 0, 0>
  translate <0, 0, 0.31>
 }
 torus {
  0.54-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.19+LG_CORNER_SPACE>
 }
 torus {
  0.16+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.28-LG_CORNER_SPACE>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.28-LG_CORNER_SPACE>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  union {
   union {
    cylinder {
     <0, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <-0.22, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    cylinder {
     <0, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <-0.22, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    box {
     <0, -0.08+LG_CORNER_SPACE, 0>,
     <-0.22, 0.08-LG_CORNER_SPACE, -0.11>
    }
    box {
     <0, -0.08, -LG_CORNER_SPACE>,
     <-0.22, 0.08, -0.11>
    }
    rotate <0, 8, 0>
    translate <-0.21, 0, 0.28>
   }
   union {
    cylinder {
     <0, 0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
     <-0.22, 0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    cylinder {
     <0, -0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
     <-0.22, -0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    box {
     <0, -0.08+LG_CORNER_SPACE, 0>,
     <-0.22, 0.08-LG_CORNER_SPACE, 0.11>
    }
    box {
     <0, -0.08, LG_CORNER_SPACE>,
     <-0.22, 0.08, 0.11>
    }
    scale <1/cos(pi/4.5), 1, 1>
    rotate <0, 40, 0>
    translate <-0.21, 0, 0.02>
   }
   rotate <0, 0, ROT*120>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_3828_clear =
merge {
 difference {
  union {
   cylinder {
    <0, 0, LG_CORNER_SPACE>,
    <0, 0, 0.28-LG_CORNER_SPACE>,
    0.24
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, 0.28>,
    0.24-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, 0.28+LG_E>,
   0.16
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, 0.19+LG_CORNER_SPACE>,
    <0, 0, 0.31>,
    0.54
   }
   cylinder {
    <0, 0, 0.19>,
    <0, 0, 0.31>,
    0.54-LG_CORNER_SPACE
   }
  }
  cylinder {
   <0, 0, 0.19-LG_E>,
   <0, 0, 0.31+LG_E>,
   0.4
  }
 }
 torus {
  0.47
  0.07
  rotate <90, 0, 0>
  translate <0, 0, 0.31>
 }
 torus {
  0.54-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.19+LG_CORNER_SPACE>
 }
 torus {
  0.16+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.28-LG_CORNER_SPACE>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.28-LG_CORNER_SPACE>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  union {
   union {
    cylinder {
     <0, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <-0.22, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    cylinder {
     <0, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <-0.22, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    box {
     <0, -0.08+LG_CORNER_SPACE, 0>,
     <-0.22, 0.08-LG_CORNER_SPACE, -0.11>
    }
    box {
     <0, -0.08, -LG_CORNER_SPACE>,
     <-0.22, 0.08, -0.11>
    }
    rotate <0, 8, 0>
    translate <-0.21, 0, 0.28>
   }
   union {
    cylinder {
     <0, 0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
     <-0.22, 0.08-LG_CORNER_SPACE, LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    cylinder {
     <0, -0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
     <-0.22, -0.08+LG_CORNER_SPACE, LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }   
    box {
     <0, -0.08+LG_CORNER_SPACE, 0>,
     <-0.22, 0.08-LG_CORNER_SPACE, 0.11>
    }
    box {
     <0, -0.08, LG_CORNER_SPACE>,
     <-0.22, 0.08, 0.11>
    }
    scale <1/cos(pi/4.5), 1, 1>
    rotate <0, 40, 0>
    translate <-0.21, 0, 0.02>
   }
   rotate <0, 0, ROT*120>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
