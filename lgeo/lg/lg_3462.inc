/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20070914 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3462: Plate 2 x 3 with Helicopter Rotor Holder old                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3462)
#else
#declare LENGTH = 3;
#declare WIDTH = 2;
#declare lg_3462 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare KNOB_X = -1;
   #while (KNOB_X < 2)
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -1;
 #while (KNOB_X < 2)
  object {
   lg_knob
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  union {
   difference {
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, -LG_E>,
      0.29
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.32
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, 4*LG_WALL_WIDTH>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, -2*LG_E>,
      0.14
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH+LG_E>,
      0.14+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
   }
   torus {
    0.14+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 3)
    box {
     <0, 0.04, LG_BRICK_WIDTH+LG_E>,
     <LG_BRICK_WIDTH/2, -0.04, LG_PLATE_HEIGHT+0.04>
     rotate <0, 0, 120*ROT>
    }
    cylinder {
     <0, 0, LG_PLATE_HEIGHT+0.04>,
     <LG_BRICK_WIDTH/2, 0, LG_PLATE_HEIGHT+0.04>,
     0.04
     rotate <0, 0, 120*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 rotate <0, 0, 90>
} 

#declare lg_3462_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare KNOB_X = -1;
   #while (KNOB_X < 2)
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -1;
 #while (KNOB_X < 2)
  object {
   lg_knob_clear
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob_clear
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, -LG_E>,
      0.29
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.32
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, 4*LG_WALL_WIDTH>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32
     }
     cylinder {
      <0, 0, LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, LG_BRICK_WIDTH>,
      <0, 0, -2*LG_E>,
      0.14
     }
     cylinder {
      <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>,
      <0, 0, LG_BRICK_WIDTH+LG_E>,
      0.14+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
   }
   torus {
    0.14+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_BRICK_WIDTH-LG_CORNER_SPACE>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 3)
    box {
     <0, 0.04, LG_BRICK_WIDTH+LG_E>,
     <LG_BRICK_WIDTH/2, -0.04, LG_PLATE_HEIGHT+0.04>
     rotate <0, 0, 120*ROT>
    }
    cylinder {
     <0, 0, LG_PLATE_HEIGHT+0.04>,
     <LG_BRICK_WIDTH/2, 0, LG_PLATE_HEIGHT+0.04>,
     0.04
     rotate <0, 0, 120*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 rotate <0, 0, 90>
} 

#end
