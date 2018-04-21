/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980510 Lutz Uhlmann                                                       */
/* 20071223 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2655: Plate 2 x 2 Round with Plane Wheels Holder                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2655)
#else
#declare lg_angle=atan2(0.12, 0.64-LG_TOP_HEIGHT) ;
#declare lg_2655 =
union {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <LG_WALL_WIDTH, 0, 0>,
    <LG_WALL_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <LG_WALL_WIDTH, 0, LG_E>,
    <LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>,
    LG_WALL_WIDTH/2+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH, 0, 0>,
    <-LG_WALL_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <-LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>,
    LG_WALL_WIDTH/2+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_WALL_WIDTH/2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH/2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     difference {
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT+LG_E>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        LG_KNOB_INNER_RADIUS
       }
      }
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     #if (lg_quality > 3)
      object {
       lego_logo_text
       scale <3/4, 3/4, 3/4>
       rotate <0, 0, -90*ROT>
       translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
      }
     #end
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
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
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_E, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>
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
     <-0.36, 3*LG_WALL_WIDTH, -0.64>
    }
    union {
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.64/cos(lg_angle)>
      rotate <0, lg_angle*180/pi, 0>
      translate <0.36-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.64/cos(lg_angle)>
      rotate <0, -lg_angle*180/pi, 0>
      translate <-0.36+LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.56>,
      <0, 3*LG_WALL_WIDTH, -0.56>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.56>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.56>,
      0.08+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.64>,
      <0, 3*LG_WALL_WIDTH, -0.64>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.64>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.64>,
      0.08+LG_CORNER_SPACE
     }
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.56>
    }
    box {
     <0.12, 3*LG_WALL_WIDTH+LG_E, -0.6>,
     <-0.12, 2.5*LG_WALL_WIDTH, -0.8>
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.64>
    }
    union {
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.6>,
      <-0.12, 2.5*LG_WALL_WIDTH, -0.4>
     }
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.64>,
      <-0.12, 2.5*LG_WALL_WIDTH, -0.8>
     }
    }
   }
   box {
    <-0.25*LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_E, -LG_TOP_HEIGHT+LG_E>,
    <0.25*LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
}

#declare lg_2655_clear =
merge {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <LG_WALL_WIDTH, 0, 0>,
    <LG_WALL_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <LG_WALL_WIDTH, 0, LG_E>,
    <LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>,
    LG_WALL_WIDTH/2+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH, 0, 0>,
    <-LG_WALL_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_WALL_WIDTH/2
   }
   cylinder {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <-LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>,
    LG_WALL_WIDTH/2+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_WALL_WIDTH/2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH/2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_WALL_WIDTH, 0, -LG_CORNER_SPACE>
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     difference {
      merge {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT+LG_E>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        LG_KNOB_INNER_RADIUS
       }
      }
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     #if (lg_quality > 3)
      object {
       lego_logo_text
       scale <3/4, 3/4, 3/4>
       rotate <0, 0, -90*ROT>
       translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
      }
     #end
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  merge {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
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
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      LG_CORNER_SPACE
     }
     box {
      <-LG_E, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
      <LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08
     }
     cylinder {
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.08+LG_CORNER_SPACE, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -(0.64-LG_TOP_HEIGHT)/cos(lg_angle)>
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
     <-0.36, 3*LG_WALL_WIDTH, -0.64>
    }
    union {
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.64/cos(lg_angle)>
      rotate <0, lg_angle*180/pi, 0>
      translate <0.36-LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.64/cos(lg_angle)>
      rotate <0, -lg_angle*180/pi, 0>
      translate <-0.36+LG_CORNER_SPACE, 0, -LG_TOP_HEIGHT>
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.56>,
      <0, 3*LG_WALL_WIDTH, -0.56>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.56>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.56>,
      0.08+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_WALL_WIDTH-LG_E, -0.64>,
      <0, 3*LG_WALL_WIDTH, -0.64>,
      0.08
     }
     cylinder {
      <0, 3*LG_WALL_WIDTH+LG_E, -0.64>,
      <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.64>,
      0.08+LG_CORNER_SPACE
     }
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.56>
    }
    box {
     <0.12, 3*LG_WALL_WIDTH+LG_E, -0.6>,
     <-0.12, 2.5*LG_WALL_WIDTH, -0.8>
    }
   }
   difference {
    torus {
     0.08+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.64>
    }
    union {
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.6>,
      <-0.12, 2.5*LG_WALL_WIDTH, -0.4>
     }
     box {
      <0.12, 3*LG_WALL_WIDTH+LG_E, -0.64>,
      <-0.12, 2.5*LG_WALL_WIDTH, -0.8>
     }
    }
   }
   box {
    <-0.25*LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_E, -LG_TOP_HEIGHT+LG_E>,
    <0.25*LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
}

#end
