/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990817 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2696: Tyre Model Team                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2696)
#else
#declare lg_2696 =
union {
 difference {
  cylinder {
   <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
   <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
   2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   cylinder {
    <6*LG_WALL_WIDTH, 0, 0>,
    <1.5*LG_WALL_WIDTH, 0, 0>, 
    1.9*LG_BRICK_WIDTH
   }
   intersection {
    cone {
     <0.5*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH,
     <2*LG_WALL_WIDTH, 0, 0>, 2*LG_BRICK_WIDTH
    }
    cylinder {
     <6*LG_WALL_WIDTH, 0, 0>,
     <0, 0, 0>, 
     1.9*LG_BRICK_WIDTH
    }
   }
   cylinder {
    <2*LG_WALL_WIDTH, 0, 0>,
    <-2*LG_WALL_WIDTH, 0, 0>, 
    1.5*LG_BRICK_WIDTH
   }
   cone {
    <-2*LG_WALL_WIDTH+LG_E, 0, 0>, 1.9*LG_BRICK_WIDTH,
    <-2*LG_WALL_WIDTH+0.16, 0, 0>, 1.6*LG_BRICK_WIDTH
   }
  }
 }
 torus {
  2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.9*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
}

#declare lg_2696_clear =
merge {
 difference {
  cylinder {
   <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
   <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
   2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   cylinder {
    <6*LG_WALL_WIDTH, 0, 0>,
    <1.5*LG_WALL_WIDTH, 0, 0>, 
    1.9*LG_BRICK_WIDTH
   }
   intersection {
    cone {
     <0.5*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH,
     <2*LG_WALL_WIDTH, 0, 0>, 2*LG_BRICK_WIDTH
    }
    cylinder {
     <6*LG_WALL_WIDTH, 0, 0>,
     <0, 0, 0>, 
     1.9*LG_BRICK_WIDTH
    }
   }
   cylinder {
    <2*LG_WALL_WIDTH, 0, 0>,
    <-2*LG_WALL_WIDTH, 0, 0>, 
    1.5*LG_BRICK_WIDTH
   }
   cone {
    <-2*LG_WALL_WIDTH+LG_E, 0, 0>, 1.9*LG_BRICK_WIDTH,
    <-2*LG_WALL_WIDTH+0.16, 0, 0>, 1.6*LG_BRICK_WIDTH
   }
  }
 }
 torus {
  2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.9*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
}

#declare lg_2696_slope =
union {
 difference {
  union {
   cylinder {
    <6*LG_WALL_WIDTH, 0, 0>,
    <-2*LG_WALL_WIDTH, 0, 0>,
    2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    2.5*LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <6*LG_WALL_WIDTH+LG_E, 0, 0>,
    <1.5*LG_WALL_WIDTH, 0, 0>, 
    1.9*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   intersection {
    cone {
     <0.5*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH+LG_E,
     <2*LG_WALL_WIDTH, 0, 0>, 2*LG_BRICK_WIDTH+LG_E
    }
    cylinder {
     <6*LG_WALL_WIDTH, 0, 0>,
     <0, 0, 0>, 
     1.9*LG_BRICK_WIDTH+LG_CORNER_SPACE
    }
   }
   cylinder {
    <2*LG_WALL_WIDTH+LG_E, 0, 0>,
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>, 
    1.5*LG_BRICK_WIDTH+LG_E
   }
   cone {
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>, 1.9*LG_BRICK_WIDTH,
    <-2*LG_WALL_WIDTH+0.16, 0, 0>, 1.5*LG_BRICK_WIDTH
   }
  }
 }
 intersection {
  difference {
   union {
    cylinder {
     <6*LG_WALL_WIDTH, 0, 0>,
     <-2*LG_WALL_WIDTH, 0, 0>,
     2.6*LG_BRICK_WIDTH
    }
    cylinder {
     <5.5*LG_WALL_WIDTH, 0, 0>,
     <-1.5*LG_WALL_WIDTH, 0, 0>,
     2.7*LG_BRICK_WIDTH
    }
    cone {
     <6*LG_WALL_WIDTH, 0, 0>, 2.6*LG_BRICK_WIDTH
     <5.5*LG_WALL_WIDTH, 0, 0>, 2.7*LG_BRICK_WIDTH
    }
    cone {
     <-2*LG_WALL_WIDTH, 0, 0>, 2.6*LG_BRICK_WIDTH
     <-1.5*LG_WALL_WIDTH, 0, 0>, 2.7*LG_BRICK_WIDTH
    }
   }
   cylinder {
    <6*LG_WALL_WIDTH+LG_E, 0, 0>,
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 30)
    box {
     <6*LG_WALL_WIDTH+LG_E, 0.125, 2.4*LG_BRICK_WIDTH>,
     <2*LG_WALL_WIDTH, -0.125, 2.7*LG_BRICK_WIDTH>
     rotate <12*ROT, 0, 0>
    }
    box {
     <-2*LG_WALL_WIDTH-LG_E, 0.125, 2.4*LG_BRICK_WIDTH>,
     <2*LG_WALL_WIDTH, -0.125, 2.7*LG_BRICK_WIDTH>
     rotate <6+12*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#end
