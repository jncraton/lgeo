/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2583: Bar 1 x 8 x 3                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2583)
#else
#declare lg_2583 =
union {
 #declare CYL_X = -2.5;
 #while (CYL_X < 3)
  difference {
   union {
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, 0>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, 0>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     LG_KNOB_RADIUS
    }
    sphere {
     <0, 0, 0>,
     LG_KNOB_RADIUS
     scale <1, 1, 0.5>
     translate <0, CYL_X*LG_BRICK_WIDTH, 0>
    }
   }
   union {
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, -LG_E>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     LG_KNOB_INNER_RADIUS
    }
   }
  }
  torus {
   LG_KNOB_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  #declare CYL_X = CYL_X + 5;
 #end
 cylinder {
  <0, -3*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
  <0, 3*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, -3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  <0, 3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 3*LG_BRICK_WIDTH, LG_E>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>
     }
    }
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT-LG_E>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, 0>
     }
     box {
      <-LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, 0>
     }
    }
   }
   cylinder {
    <0, 3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
    <0, 3.5*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS
   }
   sphere {
    <0, 0, 0>,
    LG_KNOB_RADIUS
    scale <1, 1, 0.5>
    translate <0, 2.5*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT>
   }
   cylinder {
    <0, 2.5*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT>,
    <0, 2.5*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    union {
     sphere {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 2.5*LG_BRICK_WIDTH, 0>
    }
    #declare ROT2 = ROT2 + 1;
   #end
   difference {
    union {
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <0, 2.5*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  } 
  #declare ROT = ROT + 1;
 #end
 #declare CYL_X = -2.5;
 #while (CYL_X < 3)
  cylinder {
   <0, CYL_X*LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
   <0, CYL_X*LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
   LG_WALL_WIDTH/2
  }
  #declare CYL_X = CYL_X + 1;
 #end
}

#declare lg_2583_clear =
merge {
 #declare CYL_X = -2.5;
 #while (CYL_X < 3)
  difference {
   merge {
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, 0>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, 0>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     LG_KNOB_RADIUS
    }
    sphere {
     <0, 0, 0>,
     LG_KNOB_RADIUS
     scale <1, 1, 0.5>
     translate <0, CYL_X*LG_BRICK_WIDTH, 0>
    }
   }
   union {
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
     LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, CYL_X*LG_BRICK_WIDTH, -LG_E>,
     <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     LG_KNOB_INNER_RADIUS
    }
   }
  }
  torus {
   LG_KNOB_RADIUS-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  torus {
   LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <0, CYL_X*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
  }
  #declare CYL_X = CYL_X + 5;
 #end
 cylinder {
  <0, -3*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
  <0, 3*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, -3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  <0, 3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 3*LG_BRICK_WIDTH, LG_E>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, 2*-LG_BRICK_WIDTH>
     }
     box {
      <-LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>
     }
    }
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2,
     LG_KNOB_INNER_RADIUS
     rotate <0, 0, 90>
     translate <0, 3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>
    }
    union {
     box {
      <-LG_KNOB_RADIUS, 3*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT-LG_E>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, 0>
     }
     box {
      <-LG_KNOB_RADIUS, 4*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
      <LG_KNOB_RADIUS, 2*LG_BRICK_WIDTH, 0>
     }
    }
   }
   cylinder {
    <0, 3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_INNER_RADIUS>,
    <0, 3.5*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT+LG_BRICK_WIDTH/2+LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS
   }
   sphere {
    <0, 0, 0>,
    LG_KNOB_RADIUS
    scale <1, 1, 0.5>
    translate <0, 2.5*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT>
   }
   cylinder {
    <0, 2.5*LG_BRICK_WIDTH, -7.5*LG_PLATE_HEIGHT>,
    <0, 2.5*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    merge {
     sphere {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     rotate <0, 0, 90*ROT2>
     translate <0, 2.5*LG_BRICK_WIDTH, 0>
    }
    #declare ROT2 = ROT2 + 1;
   #end
   difference {
    merge {
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_PLATE_HEIGHT-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <0, 2.5*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  } 
  #declare ROT = ROT + 1;
 #end
 #declare CYL_X = -2.5;
 #while (CYL_X < 3)
  cylinder {
   <0, CYL_X*LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
   <0, CYL_X*LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
   LG_WALL_WIDTH/2
  }
  #declare CYL_X = CYL_X + 1;
 #end
}

#end
