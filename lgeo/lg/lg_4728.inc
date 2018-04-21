/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001119 Lutz Uhlmann                                                       */
/* 20080117 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4728: Plant Flower                                                       */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4728)
#else
#declare lg_4728 =
union {
 object {
  lg_tech_knob
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 6)
  union {
   box {
    <0.6, 0.3-LG_CORNER_SPACE, 0>
    <0.2, -0.3+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   #declare MIR = 0;
   #while (MIR < 2)
    union {
     difference {
      union {
       torus {
        0.2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0.6, 0.1, -LG_CORNER_SPACE>
       }
       torus {
        0.2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0.6, 0.1, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
       }
       cylinder {
        <0.6, 0.1, -LG_CORNER_SPACE>,
        <0.6, 0.1, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        0.2
       }
       cylinder {
        <0.6, 0.1, 0>,
        <0.6, 0.1, -LG_PLATE_HEIGHT>,
        0.2-LG_CORNER_SPACE
       }
      }
      union {
       box {
        <1, 0, LG_E>,
        <0, -0.2, -LG_PLATE_HEIGHT-LG_E>
       }
       box {
        <0.6, 0.4, LG_E>,
        <0, -0.2, -LG_PLATE_HEIGHT-LG_E>
       }
       box {
        <0.68, 0.12, -LG_TOP_HEIGHT>,
        <0.5, -0.4, -LG_PLATE_HEIGHT-LG_E>
       }
       cylinder {
        <0.6, 0.1, -LG_TOP_HEIGHT>,
        <0.6, 0.1, -LG_PLATE_HEIGHT-LG_E>,
        0.08
       }
      }
     }
     difference {
      union {
       box {
        <0.6, 0.3-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
        <0.2, 0.18, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
       }
       box {
        <0.6, 0.3, -LG_CORNER_SPACE>,
        <0.2, 0.18, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
       }
       cylinder {
        <0.6, 0.3-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        <0.2, 0.3-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        LG_CORNER_SPACE
       }
       cylinder {
        <0.6, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>
        <0.2, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>
        LG_CORNER_SPACE
       }
      }
      difference {
       box {
        <0.64, -0.4, LG_E>,
        <0, 0.4, -LG_PLATE_HEIGHT-LG_E>
       }
       cylinder {
        <0.64, 0, LG_E>,
        <0.64, 0, -LG_PLATE_HEIGHT-LG_E>,
        0.16
       }
       rotate <0, 0, 30>
      }
     }
     #if (MIR = 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
     #end
    }
    #declare MIR = MIR + 1;
   #end
   rotate <0, 0, 60*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_4728_clear =
merge {
 object {
  lg_tech_knob_clear
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 6)
  union {
   box {
    <0.6, 0.3-LG_CORNER_SPACE, 0>
    <0.2, -0.3+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   #declare MIR = 0;
   #while (MIR < 2)
    union {
     difference {
      union {
       torus {
        0.2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0.6, 0.1, -LG_CORNER_SPACE>
       }
       torus {
        0.2-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0.6, 0.1, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
       }
       cylinder {
        <0.6, 0.1, -LG_CORNER_SPACE>,
        <0.6, 0.1, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        0.2
       }
       cylinder {
        <0.6, 0.1, 0>,
        <0.6, 0.1, -LG_PLATE_HEIGHT>,
        0.2-LG_CORNER_SPACE
       }
      }
      union {
       box {
        <1, 0, LG_E>,
        <0, -0.2, -LG_PLATE_HEIGHT-LG_E>
       }
       box {
        <0.6, 0.4, LG_E>,
        <0, -0.2, -LG_PLATE_HEIGHT-LG_E>
       }
       box {
        <0.68, 0.12, -LG_TOP_HEIGHT>,
        <0.5, -0.4, -LG_PLATE_HEIGHT-LG_E>
       }
       cylinder {
        <0.6, 0.1, -LG_TOP_HEIGHT>,
        <0.6, 0.1, -LG_PLATE_HEIGHT-LG_E>,
        0.08
       }
      }
     }
     difference {
      union {
       box {
        <0.6, 0.3-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
        <0.2, 0.18, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
       }
       box {
        <0.6, 0.3, -LG_CORNER_SPACE>,
        <0.2, 0.18, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
       }
       cylinder {
        <0.6, 0.3-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        <0.2, 0.3-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
        LG_CORNER_SPACE
       }
       cylinder {
        <0.6, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>
        <0.2, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>
        LG_CORNER_SPACE
       }
      }
      difference {
       box {
        <0.64, -0.4, LG_E>,
        <0, 0.4, -LG_PLATE_HEIGHT-LG_E>
       }
       cylinder {
        <0.64, 0, LG_E>,
        <0.64, 0, -LG_PLATE_HEIGHT-LG_E>,
        0.16
       }
       rotate <0, 0, 30>
      }
     }
     #if (MIR = 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
     #end
    }
    #declare MIR = MIR + 1;
   #end
   rotate <0, 0, 60*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
