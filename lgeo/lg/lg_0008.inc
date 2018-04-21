/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990118 Lutz Uhlmann                                                       */
/* 20071201 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0008: Plate 2 x 2 with Wheel Holder Single                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0008)
#else
#declare lg_angle=atan2(0.12, 0.96-LG_TOP_HEIGHT);
#declare lg_0008 =
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, -0.88>,
    <0, -LG_BRICK_WIDTH/2, -0.88>,
    0.8
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   #declare MIR2 = 0;
   #while (MIR2 < 2)
    union {
     cylinder {
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_E, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>
     }
     rotate <0, lg_angle*180/pi, 0>
     translate <0.36-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     #if (MIR2 = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   difference {
    box {
     <0.36, 2*LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_E>,
     <-0.36, 3*LG_WALL_WIDTH, -0.96>
    }
    union {
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.96/cos(lg_angle)>
      rotate <0, lg_angle*180/pi, 0>
      translate <0.36-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.96/cos(lg_angle)>
      rotate <0, -lg_angle*180/pi, 0>
      translate <-0.36+LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.88>,
      <0, 3*LG_WALL_WIDTH, -0.88>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.88>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.88>,
      0.08+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.96>,
      <0, 3*LG_WALL_WIDTH, -0.96>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.96>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.96>,
      0.08+LG_CORNER_SPACE
     }
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.88>
    }
    box {
     <0.12, 3*LG_WALL_WIDTH+LG_E, -0.92>,
     <-0.12, 2.5*LG_WALL_WIDTH, -1.2>
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.96>
    }
    union {
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.92>,
      <-0.12, 2.5*LG_WALL_WIDTH, -0.5>
     }
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.96>,
      <-0.12, 2.5*LG_WALL_WIDTH, -1.5>
     }
    }
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
}

#declare lg_0008_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, -0.88>,
    <0, -LG_BRICK_WIDTH/2, -0.88>,
    0.8
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   #declare MIR2 = 0;
   #while (MIR2 < 2)
    merge {
     cylinder {
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_E, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.96-LG_TOP_HEIGHT)/cos(lg_angle)>
     }
     rotate <0, lg_angle*180/pi, 0>
     translate <0.36-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     #if (MIR2 = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   difference {
    box {
     <0.36, 2*LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_E>,
     <-0.36, 3*LG_WALL_WIDTH, -0.96>
    }
    union {
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.96/cos(lg_angle)>
      rotate <0, lg_angle*180/pi, 0>
      translate <0.36-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.96/cos(lg_angle)>
      rotate <0, -lg_angle*180/pi, 0>
      translate <-0.36+LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.88>,
      <0, 3*LG_WALL_WIDTH, -0.88>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.88>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.88>,
      0.08+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.96>,
      <0, 3*LG_WALL_WIDTH, -0.96>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.96>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.96>,
      0.08+LG_CORNER_SPACE
     }
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.88>
    }
    box {
     <0.12, 3*LG_WALL_WIDTH+LG_E, -0.92>,
     <-0.12, 2.5*LG_WALL_WIDTH, -1.2>
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.96>
    }
    union {
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.92>,
      <-0.12, 2.5*LG_WALL_WIDTH, -0.5>
     }
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.96>,
      <-0.12, 2.5*LG_WALL_WIDTH, -1.5>
     }
    }
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
}

#end
