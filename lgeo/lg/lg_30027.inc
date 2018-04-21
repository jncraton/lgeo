/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990113 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30027: Wheel Slick Centre                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30027)
#else
#declare lg_30027 =
union {
 difference {
  union {
   difference {
    union {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0.04, 0, 0>,
      0.4
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.04, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <-0.02, 0, 0>,
      0.32
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.16, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
    } 
   }
   difference {
    union {
     cylinder {
      <-0.2, 0, 0>,
      <0, 0, 0>,
      0.24-LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.24
     }
    }
    union {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <-0.2-LG_E, 0, 0>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      0.16
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <0.6-LG_CORNER_SPACE, 0, 0>,
      <0.36, 0, 0>,
      0.4
     }
     cylinder {
      <0.6, 0, 0>,
      <0.36, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <0.36, 0, 0>,
      <0.04, 0, 0>,
      0.34
     }
     cone {
      <0.36, 0, 0>, 0.4
      <0.30, 0, 0>, 0.34
     }
     cone {
      <0.04, 0, 0>, 0.4
      <0.1, 0, 0>, 0.34
     }
    }
    union {
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.45, 0, 0>,
      0.32
     }
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.8-LG_CORNER_SPACE, 0, 0>,
      0.32+LG_CORNER_SPACE
     }
     cone {
      <0.45001, 0, 0>, 0.32
      <0.23, 0, 0>, 0.2
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <0.16, LG_KNOB_RADIUS, LG_BRICK_WIDTH>,
   <0.24, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
  }
 }
 cylinder {
  <0.45, 0, 0>,
  <0.28, 0, 0>,
  0.16
 }
 box {
  <0.45, 0.06, 0.32>,
  <0.28, -0.06, -0.32>
 }
 box {
  <0.45, 0.32, 0.06>,
  <0.28, -0.32, -0.06>
 }
 rotate <0, 0, -90>
}

#declare lg_30027_clear =
merge {
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0.04, 0, 0>,
      0.4
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.04, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <-0.02, 0, 0>,
      0.32
     }
     cylinder {
      <-0.2, 0, 0>,
      <0.16, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
    } 
   }
   difference {
    merge {
     cylinder {
      <-0.2, 0, 0>,
      <0, 0, 0>,
      0.24-LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <0, 0, 0>,
      0.24
     }
    }
    union {
     cylinder {
      <-0.2+LG_CORNER_SPACE, 0, 0>,
      <-0.2-LG_E, 0, 0>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <-0.2-LG_E, 0, 0>,
      <LG_E, 0, 0>,
      0.16
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.2+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <0.6-LG_CORNER_SPACE, 0, 0>,
      <0.36, 0, 0>,
      0.4
     }
     cylinder {
      <0.6, 0, 0>,
      <0.36, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <0.36, 0, 0>,
      <0.04, 0, 0>,
      0.34
     }
     cone {
      <0.36, 0, 0>, 0.4
      <0.30, 0, 0>, 0.34
     }
     cone {
      <0.04, 0, 0>, 0.4
      <0.1, 0, 0>, 0.34
     }
    }
    union {
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.45, 0, 0>,
      0.32
     }
     cylinder {
      <0.8+LG_E, 0, 0>,
      <0.8-LG_CORNER_SPACE, 0, 0>,
      0.32+LG_CORNER_SPACE
     }
     cone {
      <0.45001, 0, 0>, 0.32
      <0.23, 0, 0>, 0.2
     }
    }
   }
   torus {
    0.32+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.6-LG_CORNER_SPACE, 0, 0>
   }
  }
  box {
   <0.16, LG_KNOB_RADIUS, LG_BRICK_WIDTH>,
   <0.24, -LG_KNOB_RADIUS, -LG_BRICK_WIDTH>
  }
 }
 cylinder {
  <0.45, 0, 0>,
  <0.28, 0, 0>,
  0.16
 }
 box {
  <0.45, 0.06, 0.32>,
  <0.28, -0.06, -0.32>
 }
 box {
  <0.45, 0.32, 0.06>,
  <0.28, -0.32, -0.06>
 }
 rotate <0, 0, -90>
}

#end


