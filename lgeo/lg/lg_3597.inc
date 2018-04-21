/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980731 Lutz Uhlmann                                                       */
/* 20071231 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3597: Plate 2 x 4 with Hinge                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3597)
#else
#declare lg_angle=asin(1.5/3.5);
#declare lg_3597 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
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
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 0)
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
 #declare KNOB_X = -1.5;
 #while (KNOB_X < 0)
  object {
   lg_knob
   rotate <0, 0, 90>
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob
   rotate <0, 0, 90>
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 #declare MIR = -1;
 #while (MIR < 2)
  union {
   difference {
    union {
     torus {
      4*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     torus {
      4*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
     }
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 4*LG_WALL_WIDTH, 0>,
      4*LG_WALL_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
      4*LG_WALL_WIDTH
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>
     }
     cylinder {
      <0, LG_BRICK_WIDTH, LG_WALL_WIDTH>,
      <0, 4*LG_WALL_WIDTH-LG_E, LG_WALL_WIDTH>,
      LG_WALL_WIDTH
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
      <0, LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>,
      <0, 0.8*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH-LG_E, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <-2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <-LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <-1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH-LG_E, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <-1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <-1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   difference {
    union {
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
    cylinder {
     <0, LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH>,
     <0, 4*LG_WALL_WIDTH-LG_E, LG_WALL_WIDTH>,
     LG_WALL_WIDTH+LG_CORNER_SPACE
    }
   }
   intersection {
    union {
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
    union {
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
    }
   }
   difference {
    union {
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
    }
    union {
     box {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <-1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
   }
   matrix <1, 0, 0, 0, MIR, 0, 0, 0, 1, 6*LG_WALL_WIDTH, 0, 0>
  }
  #declare MIR = MIR + 2;
 #end
 union {
  torus {
   LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>
  }
  torus {
   LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>
  }
  cylinder {
   <0, -LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
   <0, LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
   LG_WALL_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   LG_WALL_WIDTH
  }
  cylinder {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  box {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2, -LG_CORNER_SPACE-LG_E>
  }
  box {
   <LG_WALL_WIDTH, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
  }
  translate <6*LG_WALL_WIDTH, 0, 0>
 }
} 

#declare lg_3597_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
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
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 0)
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
 #declare KNOB_X = -1.5;
 #while (KNOB_X < 0)
  object {
   lg_knob_clear
   rotate <0, 0, 90>
   translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
  }
  object {
   lg_knob_clear
   rotate <0, 0, 90>
   translate <KNOB_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 #declare MIR = -1;
 #while (MIR < 2)
  merge {
   difference {
    merge {
     torus {
      4*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     torus {
      4*LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
     }
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 4*LG_WALL_WIDTH, 0>,
      4*LG_WALL_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 4*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
      4*LG_WALL_WIDTH
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH>
     }
     cylinder {
      <0, LG_BRICK_WIDTH, LG_WALL_WIDTH>,
      <0, 4*LG_WALL_WIDTH-LG_E, LG_WALL_WIDTH>,
      LG_WALL_WIDTH
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
      <0, LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>,
      <0, 0.8*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH-LG_E, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <-2*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <-LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <-1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH-LG_E, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <-1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <-1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <1.5*LG_WALL_WIDTH, LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    <1.5*LG_WALL_WIDTH, 0.8*LG_BRICK_WIDTH, 3.5*LG_WALL_WIDTH*cos(lg_angle)>,
    LG_WALL_WIDTH/2-LG_CORNER_SPACE
   }
   difference {
    merge {
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
    cylinder {
     <0, LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH>,
     <0, 4*LG_WALL_WIDTH-LG_E, LG_WALL_WIDTH>,
     LG_WALL_WIDTH+LG_CORNER_SPACE
    }
   }
   intersection {
    merge {
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     cylinder {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_WALL_WIDTH>,
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
    merge {
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
    }
   }
   difference {
    merge {
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
     torus {
      LG_WALL_WIDTH+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
     }
    }
    union {
     box {
      <-LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <-1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, lg_angle*180/pi-15, 0>
      translate <1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
     box {
      <LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -3*LG_WALL_WIDTH>,
      <1.7*LG_WALL_WIDTH, LG_BRICK_WIDTH/2, LG_WALL_WIDTH>
      rotate <0, -lg_angle*180/pi+15, 0>
      translate <-1.5*LG_WALL_WIDTH, 0, 3.5*LG_WALL_WIDTH*cos(lg_angle)>
     }
    }
   }
   matrix <1, 0, 0, 0, MIR, 0, 0, 0, 1, 6*LG_WALL_WIDTH, 0, 0>
  }
  #declare MIR = MIR + 2;
 #end
 merge {
  torus {
   LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>
  }
  torus {
   LG_WALL_WIDTH-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>
  }
  cylinder {
   <0, -LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
   <0, LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
   LG_WALL_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   LG_WALL_WIDTH
  }
  cylinder {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
   LG_CORNER_SPACE
  }
  box {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2, -LG_CORNER_SPACE-LG_E>
  }
  box {
   <LG_WALL_WIDTH, LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
  }
  translate <6*LG_WALL_WIDTH, 0, 0>
 }
} 

#end
