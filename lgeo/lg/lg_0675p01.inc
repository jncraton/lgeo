/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071111 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0675p01: Roadsign Square Tall with Parking 300m Pattern                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0675p01)
#else
#include "lg_0675.inc"
#declare lg_0675p01_decals =
union {
 difference {
  box {
   <0.0601, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, 4.64-LG_CORNER_SPACE>,
   <0.0599, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2.72+LG_CORNER_SPACE>
  }
  union {
   box {
    <0.06+LG_E, 0.36, 4.4>,
    <0.06-LG_E, 0.20, 3.44>
   }
   box {
    <0.06+LG_E, -0.08, 4.0>,
    <0.06-LG_E, 0.2001, 3.84>
   }
   box {
    <0.06+LG_E, -0.08, 4.4>,
    <0.06-LG_E, 0.2001, 4.24>
   }
   difference {
    cylinder {
     <0.06+LG_E, -0.08, 4.12>,
     <0.06-LG_E, -0.08, 4.12>,
     0.28
    }
    union {
     cylinder {
      <0.06+LG_E, -0.08, 4.12>,
      <0.06-LG_E, -0.08, 4.12>,
      0.12
     }
     box {
      <0.06+LG_E, -0.08, 4.4>,
      <0.06-LG_E, 0.22, 3.84>
     }
    }
   }
   #declare ZERO_X = 0;
   #while (ZERO_X <2)
    union {
     difference {
      union {
       cylinder {
        <0.06+LG_E, 0, 3.2>,
        <0.06-LG_E, 0, 3.2>,
        0.08
       }
       cylinder {
        <0.06+LG_E, 0, 3.12>,
        <0.06-LG_E, 0, 3.12>,
        0.08
       }
      }
      union {
       cylinder {
        <0.06+LG_E, 0, 3.2>,
        <0.06-LG_E, 0, 3.2>,
        0.04
       }
       cylinder {
        <0.06+LG_E, 0, 3.12>,
        <0.06-LG_E, 0, 3.12>,
        0.04
       }
       box {
        <0.06+LG_E, 0.1, 3.2>,
        <0.06-LG_E, -0.1, 3.12>
       }
      }
     }
     box {
      <0.06+LG_E, 0.08, 3.2>,
      <0.06-LG_E, 0.04, 3.12>
     }
     box {
      <0.06+LG_E, -0.08, 3.2>,
      <0.06-LG_E, -0.04, 3.12>
     }
     translate <0, 0.1 - 0.2 * ZERO_X, 0>
    }
    #declare ZERO_X = ZERO_X + 1;
   #end
   #declare THREE_X = 0;
   #while (THREE_X <2)
    difference {
     cylinder {
      <0.06+LG_E, 0, 3.2-0.08*THREE_X>,
      <0.06-LG_E, 0, 3.2-0.08*THREE_X>,
      0.08
     }
     union {
      cylinder {
       <0.06+LG_E, 0, 3.2-0.08*THREE_X>,
       <0.06-LG_E, 0, 3.2-0.08*THREE_X>,
       0.04
      }
      box {
       <0.06+LG_E, 0.1, 3.2-0.08*THREE_X>,
       <0.06-LG_E, 0.0, 3.12+0.08*THREE_X>
      }
      box {
       <0.06+LG_E, 0.1, 3.12+0.08*THREE_X>,
       <0.06-LG_E, -0.1, 3.16>
      }
     }
     translate <0, 0.3, 0>
    }
    #declare THREE_X = THREE_X + 1;
   #end
   #declare M_X = 0;
   #while (M_X <2)
    union {
     difference {
      cylinder {
       <0.06+LG_E, 0, 3.12>,
       <0.06-LG_E, 0, 3.12>,
       0.06
      }
      union {
       cylinder {
        <0.06+LG_E, 0, 3.12>,
        <0.06-LG_E, 0, 3.12>,
        0.02
       }
       box {
        <0.06+LG_E, 0.1, 3.12>,
        <0.06-LG_E, -0.1, 3.0>
       }
      }
     }
     box {
      <0.06+LG_E, -0.06, 3.12>,
      <0.06-LG_E, -0.02, 3.04>
     }
     translate <0, -0.28-M_X*0.08, 0>
    }
    #declare M_X = M_X + 1;
   #end
   box {
    <0.06+LG_E, -0.22, 3.18>,
    <0.06-LG_E, -0.26, 3.04>
   }
  }
  material { texture { lg_blue  normal { bumps 0.1 scale 2 } } }
 }
 union {
  box {
   <0.0601, 0.36, 4.4>,
   <0.0599, 0.20, 3.44>
  }
  box {
   <0.0601, -0.08, 4.0>,
   <0.0599, 0.2001, 3.84>
  }
  box {
   <0.0602, -0.08, 4.4>,
   <0.0599, 0.2001, 4.24>
  }
  difference {
   cylinder {
    <0.0601, -0.08, 4.12>,
    <0.0599, -0.08, 4.12>,
    0.28
   }
   union {
    cylinder {
     <0.06+LG_E, -0.08, 4.12>,
     <0.06-LG_E, -0.08, 4.12>,
     0.12
    }
    box {
     <0.06+LG_E, -0.08, 4.4>,
     <0.06-LG_E, 0.22, 3.84>
    }
   }
  }
  #declare ZERO_X = 0;
  #while (ZERO_X <2)
   union {
    difference {
     union {
      cylinder {
       <0.0601, 0, 3.2>,
       <0.0599, 0, 3.2>,
       0.08
      }
      cylinder {
       <0.0601, 0, 3.12>,
       <0.0599, 0, 3.12>,
       0.08
      }
     }
     union {
      cylinder {
       <0.06+LG_E, 0, 3.2>,
       <0.06-LG_E, 0, 3.2>,
       0.04
      }
      cylinder {
       <0.06+LG_E, 0, 3.12>,
       <0.06-LG_E, 0, 3.12>,
       0.04
      }
      box {
       <0.06+LG_E, 0.1, 3.2>,
       <0.06-LG_E, -0.1, 3.12>
      }
     }
    }
    box {
     <0.0601, 0.08, 3.2>,
     <0.0599 0.04, 3.12>
    }
    box {
     <0.0601, -0.08, 3.2>,
     <0.0599, -0.04, 3.12>
    }
    translate <0, 0.1 - 0.2 * ZERO_X, 0>
   }
   #declare ZERO_X = ZERO_X + 1;
  #end
  #declare THREE_X = 0;
  #while (THREE_X <2)
   difference {
    cylinder {
     <0.0601, 0, 3.2-0.08*THREE_X>,
     <0.0599, 0, 3.2-0.08*THREE_X>,
     0.08
    }
    union {
     cylinder {
      <0.06+LG_E, 0, 3.2-0.08*THREE_X>,
      <0.06-LG_E, 0, 3.2-0.08*THREE_X>,
      0.04
     }
     box {
      <0.06+LG_E, 0.1, 3.2-0.08*THREE_X>,
      <0.06-LG_E, 0.0, 3.12+0.08*THREE_X>
     }
     box {
      <0.06+LG_E, 0.1, 3.12+0.08*THREE_X>,
      <0.06-LG_E, -0.1, 3.16>
     }
    }
    translate <0, 0.3, 0>
   }
   #declare THREE_X = THREE_X + 1;
  #end
  #declare M_X = 0;
  #while (M_X <2)
   union {
    difference {
     cylinder {
      <0.0601, 0, 3.12>,
      <0.0599, 0, 3.12>,
      0.06
     }
     union {
      cylinder {
       <0.06+LG_E, 0, 3.12>,
       <0.06-LG_E, 0, 3.12>,
       0.02
      }
      box {
       <0.06+LG_E, 0.1, 3.12>,
       <0.06-LG_E, -0.1, 3.0>
      }
     }
    }
    box {
     <0.0601, -0.06, 3.12>,
     <0.0599, -0.02, 3.04>
    }
    translate <0, -0.28-M_X*0.08, 0>
   }
   #declare M_X = M_X + 1;
  #end
  box {
   <0.0601, -0.22, 3.18>,
   <0.0599, -0.26, 3.04>
  }
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0675p01 = 
union {
 object { lg_0675 }
 object { lg_0675p01_decals }
}

#declare lg_0675p01_clear = 
union {
 object { lg_0675_clear }
 object { lg_0675p01_decals }
}

#end
