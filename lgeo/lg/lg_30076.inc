/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971204 Lutz Uhlmann                                                       */
/* 20080127 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30076: Brick 4 x 10 with Pins                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30076)
#else
#declare lg_30076 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare PIN = -3;
   #while (PIN < 4)
    difference {
     union {
      torus {
       0.3-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
      }
      torus {
       2*LG_KNOB_RADIUS,
       0.04
       scale <1/2, 1, 1/2>
       translate <0, LG_BRICK_WIDTH-0.04, 0>
      }
      cylinder {
       <0, LG_WALL_WIDTH/2, 0>,
       <0, -LG_E, 0>,
       0.3-LG_CORNER_SPACE
      }
      cylinder {
       <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
       <0, -LG_E, 0>,
       0.3
      }
      cylinder {
       <0, LG_BRICK_WIDTH, 0>,
       <0, -LG_E, 0>,
       LG_KNOB_RADIUS
      }
     }
     union {
      cylinder {
       <0, LG_BRICK_WIDTH+LG_E, 0>,
       <0, -2*LG_E, 0>,
       LG_KNOB_INNER_RADIUS
      }
      cylinder {
       <0, 0.56, LG_KNOB_RADIUS+LG_E>,
       <0, 0.56, -LG_KNOB_RADIUS-LG_E>,
       0.04
      }
      box {
       <0.04, 0.56, LG_CYLINDER_RADIUS>,
       <-0.04, LG_BRICK_WIDTH+LG_E, -LG_CYLINDER_RADIUS>
      }
     }
     translate <PIN*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
    }
    #declare PIN = PIN + 6;
   #end
   #declare KNOB = -4.5;
   #while (KNOB < 5)
    object {
     lg_knob
     rotate <0, 0, 90-180*ROT>
     translate <KNOB*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
    }
    object {
     lg_knob
     rotate <0, 0, 90-180*ROT>
     translate <KNOB*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
    }
    #declare KNOB = KNOB + 1;
   #end
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04, -LG_TOP_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 0.04, -LG_TOP_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   #declare CYL = -4;
   #while (CYL < 5)
    object {
     lg_brick_cylinder
     translate <CYL*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
    }
    #if (CYL < 3)
     box {
      <(CYL+1)*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_E>,
      <(CYL+1)*LG_BRICK_WIDTH-0.04, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    #end
    #declare CYL = CYL + 2;
   #end
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   #declare KNOB = -4.5;
   #while (KNOB < 5)
    object {
     lg_knob_inner_space
     translate <KNOB*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <KNOB*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
   #end
  }
 }
 box {
  <-LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 0.04, -LG_TOP_HEIGHT+LG_E>,
  <LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_brick_cylinder
  translate <-3*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder
  translate <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder
  translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder
  translate <3*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
} 

#declare lg_30076_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare PIN = -3;
   #while (PIN < 4)
    difference {
     merge {
      torus {
       0.3-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
      }
      torus {
       2*LG_KNOB_RADIUS,
       0.04
       scale <1/2, 1, 1/2>
       translate <0, LG_BRICK_WIDTH-0.04, 0>
      }
      cylinder {
       <0, LG_WALL_WIDTH/2, 0>,
       <0, -LG_E, 0>,
       0.3-LG_CORNER_SPACE
      }
      cylinder {
       <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
       <0, -LG_E, 0>,
       0.3
      }
      cylinder {
       <0, LG_BRICK_WIDTH, 0>,
       <0, -LG_E, 0>,
       LG_KNOB_RADIUS
      }
     }
     union {
      cylinder {
       <0, LG_BRICK_WIDTH+LG_E, 0>,
       <0, -2*LG_E, 0>,
       LG_KNOB_INNER_RADIUS
      }
      cylinder {
       <0, 0.56, LG_KNOB_RADIUS+LG_E>,
       <0, 0.56, -LG_KNOB_RADIUS-LG_E>,
       0.04
      }
      box {
       <0.04, 0.56, LG_CYLINDER_RADIUS>,
       <-0.04, LG_BRICK_WIDTH+LG_E, -LG_CYLINDER_RADIUS>
      }
     }
     translate <PIN*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
    }
    #declare PIN = PIN + 6;
   #end
   #declare KNOB = -4.5;
   #while (KNOB < 5)
    object {
     lg_knob_clear
     rotate <0, 0, 90-180*ROT>
     translate <KNOB*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
    }
    object {
     lg_knob_clear
     rotate <0, 0, 90-180*ROT>
     translate <KNOB*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
    }
    #declare KNOB = KNOB + 1;
   #end
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04, -LG_TOP_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 0.04, -LG_TOP_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   #declare CYL = -4;
   #while (CYL < 5)
    object {
     lg_brick_cylinder_clear
     translate <CYL*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
    }
    #if (CYL < 3)
     box {
      <(CYL+1)*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_E>,
      <(CYL+1)*LG_BRICK_WIDTH-0.04, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    #end
    #declare CYL = CYL + 2;
   #end
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   #declare KNOB = -4.5;
   #while (KNOB < 5)
    object {
     lg_knob_inner_space_clear
     translate <KNOB*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <KNOB*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
   #end
  }
 }
 box {
  <-LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, 0.04, -LG_TOP_HEIGHT+LG_E>,
  <LG_BRICK_WIDTH-LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, -0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_brick_cylinder_clear
  translate <-3*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder_clear
  translate <-LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder_clear
  translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_brick_cylinder_clear
  translate <3*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
 }
} 

#end
