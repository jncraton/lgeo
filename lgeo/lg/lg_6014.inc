/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970728 Lutz Uhlmann                                                       */
/* 20080126 Lutz Uhlmann added logo for lg_quality > 2                         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6014: Wheel Wide                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6014)
#else
#declare lg_6014 =
union {
 difference {
  union {
   difference {
    union {
     cylinder {
      <-0.32+LG_KNOB_CORNER_SPACE, 0, 0>,
      <0.16, 0, 0>,
      0.56
     }
     cylinder {
      <-0.32, 0, 0>,
      <0.16, 0, 0>,
      0.56-LG_KNOB_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <-0.02, 0, 0>,
      0.48
     }
     cylinder {
      <0, 0, 0>,
      <0.16, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
    } 
   }
   difference {
    union {
     cylinder {
      <-0.32, 0, 0>,
      <0, 0, 0>,
      0.29-LG_CORNER_SPACE
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.29
     }
    }
    union {
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      0.16
     }
    }
   }
   torus {
    0.29-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.56-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_KNOB_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <0.8-LG_KNOB_CORNER_SPACE, 0, 0>,
      <0.32, 0, 0>,
      0.56
     }
     cylinder {
      <0.8, 0, 0>,
      <0.32, 0, 0>,
      0.56-LG_KNOB_CORNER_SPACE
     }
     cylinder {
      <0.32, 0, 0>,
      <0.16, 0, 0>,
      0.46
     }
     cone {
      <0.32, 0, 0>, 0.56
      <0.26, 0, 0>, 0.46
     }
     cone {
      <0.16, 0, 0>, 0.56
      <0.22, 0, 0>, 0.46
     }
    }
    union {
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.45, 0, 0>,
      0.48
     }
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.8-LG_CORNER_SPACE, 0, 0>,
      0.48+LG_CORNER_SPACE
     }
     cone {
      <0.45001, 0, 0>, 0.48
      <0.23, 0, 0>, 0.36
     }
    }
   }
   torus {
    0.48+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.56-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_KNOB_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <0.08, LG_KNOB_RADIUS, LG_BRICK_WIDTH>,
   <0.28, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
  }
 }
 torus {
  0.24-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.45-LG_KNOB_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0.45-LG_CORNER_SPACE, 0, 0>,
  <0.28, 0, 0>,
  0.24
 }
 cylinder {
  <0.45, 0, 0>,
  <0.45-LG_CORNER_SPACE-LG_E, 0, 0>,
  0.24-LG_CORNER_SPACE
 }
 box {
  <0.45, 0.08, 0.48>,
  <0.28, -0.08, -0.48>
 }
 box {
  <0.45, 0.48, 0.08>,
  <0.28, -0.48, -0.08>
 }
 #if (lg_quality > 2)
  object {
   lego_logo_text
   rotate <0, 0, 90>
   rotate <0, 90, 0>
   translate <0.45, 0, 0>
  }
 #end
}

#declare lg_6014_clear =
merge {
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <-0.32+LG_KNOB_CORNER_SPACE, 0, 0>,
      <0.16, 0, 0>,
      0.56
     }
     cylinder {
      <-0.32, 0, 0>,
      <0.16, 0, 0>,
      0.56-LG_KNOB_CORNER_SPACE
     }
    }
    merge {
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <-0.02, 0, 0>,
      0.48
     }
     cylinder {
      <0, 0, 0>,
      <0.16, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
    } 
   }
   difference {
    merge {
     cylinder {
      <-0.32, 0, 0>,
      <0, 0, 0>,
      0.29-LG_CORNER_SPACE
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.29
     }
    }
    merge {
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      0.16
     }
    }
   }
   torus {
    0.29-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.56-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_KNOB_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <0.8-LG_KNOB_CORNER_SPACE, 0, 0>,
      <0.32, 0, 0>,
      0.56
     }
     cylinder {
      <0.8, 0, 0>,
      <0.32, 0, 0>,
      0.56-LG_KNOB_CORNER_SPACE
     }
     cylinder {
      <0.32, 0, 0>,
      <0.16, 0, 0>,
      0.46
     }
     cone {
      <0.32, 0, 0>, 0.56
      <0.26, 0, 0>, 0.46
     }
     cone {
      <0.16, 0, 0>, 0.56
      <0.22, 0, 0>, 0.46
     }
    }
    merge {
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.45, 0, 0>,
      0.48
     }
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.8-LG_CORNER_SPACE, 0, 0>,
      0.48+LG_CORNER_SPACE
     }
     cone {
      <0.45001, 0, 0>, 0.48
      <0.23, 0, 0>, 0.36
     }
    }
   }
   torus {
    0.48+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.56-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.8-LG_KNOB_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <0.08, LG_KNOB_RADIUS, LG_BRICK_WIDTH>,
   <0.28, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
  }
 }
 torus {
  0.24-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.45-LG_KNOB_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0.45-LG_CORNER_SPACE, 0, 0>,
  <0.28, 0, 0>,
  0.24
 }
 cylinder {
  <0.45, 0, 0>,
  <0.45-LG_CORNER_SPACE-LG_E, 0, 0>,
  0.24-LG_CORNER_SPACE
 }
 box {
  <0.45, 0.08, 0.48>,
  <0.28, -0.08, -0.48>
 }
 box {
  <0.45, 0.48, 0.08>,
  <0.28, -0.48, -0.08>
 }
 #if (lg_quality > 2)
  object {
   lego_logo_text
   rotate <0, 0, 90>
   rotate <0, 90, 0>
   translate <0.45, 0, 0>
  }
 #end
}

#end


