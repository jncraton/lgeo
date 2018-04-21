/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980703 Lutz Uhlmann                                                       */
/* 20071118 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0967: Plate 4 x 8 with Pin                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0967)
#else
#declare lg_0967 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
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
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <4*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, LG_E>,
    0.14
   }
   #declare KNOB_X = -3.5;
   #while (KNOB_X < 4)
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -3.5;
 #while (KNOB_X < 4)
  object {
   lg_knob
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 #declare CYL_X = -3;
 #while (CYL_X < 4)
  object {
   lg_plate_cylinder
   translate <CYL_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder
   translate <CYL_X*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder
   translate <CYL_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL_X = CYL_X + 1;
 #end
 difference {
  union {
   difference {
    union {
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT>,
      <0, 0, -LG_E>,
      0.29
     }
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, 3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.32
     }
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT>,
      <0, 0, 3*LG_WALL_WIDTH>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_WALL_WIDTH-3*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32
     }
     cylinder {
      <0, 0, LG_WALL_WIDTH-2*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT>,
      <0, 0, -2*LG_E>,
      0.14
     }
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, 2*LG_PLATE_HEIGHT+LG_E>,
      0.14+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 3*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_WALL_WIDTH-3*LG_CORNER_SPACE>
   }
   torus {
    0.14+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 2)
    box {
     <-LG_BRICK_WIDTH/2, 0.04, 2*LG_PLATE_HEIGHT+LG_E>,
     <LG_BRICK_WIDTH/2, -0.04, LG_WALL_WIDTH+0.04>
     rotate <0, 0, 90*ROT>
    }
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, LG_WALL_WIDTH+0.04>,
     <LG_BRICK_WIDTH/2, 0, LG_WALL_WIDTH+0.04>,
     0.04
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  translate <2*LG_BRICK_WIDTH, 0, 0>
 }
 translate <-2*LG_BRICK_WIDTH, 0, 0>
} 

#declare lg_0967_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
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
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <4*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, LG_E>,
    0.14
   }
   #declare KNOB_X = -3.5;
   #while (KNOB_X < 4)
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -3.5;
 #while (KNOB_X < 4)
  object {
   lg_knob_clear
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob_clear
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob_clear
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob_clear
   rotate <0, 0, -90>
   translate <KNOB_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 #declare CYL_X = -3;
 #while (CYL_X < 4)
  object {
   lg_plate_cylinder_clear
   translate <CYL_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder_clear
   translate <CYL_X*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder_clear
   translate <CYL_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL_X = CYL_X + 1;
 #end
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT>,
      <0, 0, -LG_E>,
      0.29
     }
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, 3*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.32
     }
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT>,
      <0, 0, 3*LG_WALL_WIDTH>,
      0.32-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, LG_WALL_WIDTH-3*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32
     }
     cylinder {
      <0, 0, LG_WALL_WIDTH-2*LG_CORNER_SPACE>,
      <0, 0, -LG_E>,
      0.32-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT>,
      <0, 0, -2*LG_E>,
      0.14
     }
     cylinder {
      <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, 2*LG_PLATE_HEIGHT+LG_E>,
      0.14+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 3*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   torus {
    0.32-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_WALL_WIDTH-3*LG_CORNER_SPACE>
   }
   torus {
    0.14+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 2)
    box {
     <-LG_BRICK_WIDTH/2, 0.04, 2*LG_PLATE_HEIGHT+LG_E>,
     <LG_BRICK_WIDTH/2, -0.04, LG_WALL_WIDTH+0.04>
     rotate <0, 0, 90*ROT>
    }
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, LG_WALL_WIDTH+0.04>,
     <LG_BRICK_WIDTH/2, 0, LG_WALL_WIDTH+0.04>,
     0.04
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  translate <2*LG_BRICK_WIDTH, 0, 0>
 }
 translate <-2*LG_BRICK_WIDTH, 0, 0>
} 

#end
