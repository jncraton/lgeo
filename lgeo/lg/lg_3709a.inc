/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990115 Lutz Uhlmann                                                       */
/* 20080101 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3709a: Brick 2 x 4 with Holes                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3709a)
#else
#declare LENGTH = 4;
#declare WIDTH = 2;
#declare lg_angle = atan2(LG_CORNER_SPACE/2, LG_KNOB_RADIUS+LG_CORNER_SPACE);
#declare lg_3709a =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
      <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
      <0, 2*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     intersection {
      cylinder {
       <0, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
       <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      union {
       difference {
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, lg_angle*180/pi, 0>
        }
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, -lg_angle*180/pi, 0>
        }
       }
       difference {
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, -lg_angle*180/pi, 0>
        }
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, lg_angle*180/pi, 0>
        }
       }
       translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
      }
     }
    }
   }
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.3, 0.2, 0>,
      <-0.3, -0.2, -0.3>
      rotate <0, lg_angle*180/pi, 0>
     }
     box {
      <0.3, 0.1, 0>,
      <-0.3, -0.2, -0.3>
      rotate <0, -lg_angle*180/pi, 0>
     }
    }
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.3, 0.2, 0>,
      <-0.3, -0.2, 0.3>
      rotate <0, lg_angle*180/pi, 0>
     }
     box {
      <0.3, 0.2, 0>,
      <-0.3, -0.2, 0.3>
      rotate <0, -lg_angle*180/pi, 0>
     }
    }
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   object {
    lg_plate_cylinder
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
    }
    union {
     #declare HOLE = -1;
     #while (HOLE < 2)
      union {
       cylinder {
        <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
        <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
        <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       intersection {
        cylinder {
         <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
         <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
         LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        union {
         difference {
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, lg_angle*180/pi, 0>
          }
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, -lg_angle*180/pi, 0>
          }
         }
         difference {
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, -lg_angle*180/pi, 0>
          }
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, lg_angle*180/pi, 0>
          }
         }
         translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
        }
       }
       translate <HOLE*LG_BRICK_WIDTH, 0, 0>
      }
      #declare HOLE = HOLE + 1;
     #end
    }
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0>
   }
   #declare HOLE = -1;
   #while (HOLE<2)
    union {
     difference {
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
      }
      union {
       box {
        <0.3, 0.2, 0>,
        <-0.3, -0.2, -0.3>
        rotate <0, lg_angle*180/pi, 0>
       }
       box {
        <0.3, 0.1, 0>,
        <-0.3, -0.2, -0.3>
        rotate <0, -lg_angle*180/pi, 0>
       }
      }
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     difference {
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
      }
      union {
       box {
        <0.3, 0.2, 0>,
        <-0.3, -0.2, 0.3>
        rotate <0, lg_angle*180/pi, 0>
       }
       box {
        <0.3, 0.2, 0>,
        <-0.3, -0.2, 0.3>
        rotate <0, -lg_angle*180/pi, 0>
       }
      }
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     sphere {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     sphere {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     sphere {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     sphere {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, 0, HOLE*LG_BRICK_WIDTH, 0>
    }
    #declare HOLE = HOLE + 1;
   #end
   object {
    lg_tech_knob_logo
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>,
    <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, LG_E>,
    <0, LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH, LG_E>,
    <0, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
}

#declare lg_3709a_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
      <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
      <0, 2*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     intersection {
      cylinder {
       <0, 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
       <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
       LG_KNOB_RADIUS+LG_CORNER_SPACE
      }
      union {
       difference {
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, lg_angle*180/pi, 0>
        }
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, -lg_angle*180/pi, 0>
        }
       }
       difference {
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, -lg_angle*180/pi, 0>
        }
        box {
         <0.3, 0.2, 0>,
         <-0.3, -0.2, -0.3>
         rotate <0, lg_angle*180/pi, 0>
        }
       }
       translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
      }
     }
    }
   }
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.3, 0.2, 0>,
      <-0.3, -0.2, -0.3>
      rotate <0, lg_angle*180/pi, 0>
     }
     box {
      <0.3, 0.1, 0>,
      <-0.3, -0.2, -0.3>
      rotate <0, -lg_angle*180/pi, 0>
     }
    }
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.3, 0.2, 0>,
      <-0.3, -0.2, 0.3>
      rotate <0, lg_angle*180/pi, 0>
     }
     box {
      <0.3, 0.2, 0>,
      <-0.3, -0.2, 0.3>
      rotate <0, -lg_angle*180/pi, 0>
     }
    }
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
    LG_CORNER_SPACE
   }
   object {
    lg_plate_cylinder_clear
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
    }
    union {
     #declare HOLE = -1;
     #while (HOLE < 2)
      union {
       cylinder {
        <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
        <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>,
        <0, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2>,
        LG_KNOB_RADIUS+LG_CORNER_SPACE
       }
       intersection {
        cylinder {
         <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
         <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2>,
         LG_KNOB_RADIUS+LG_CORNER_SPACE
        }
        union {
         difference {
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, lg_angle*180/pi, 0>
          }
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, -lg_angle*180/pi, 0>
          }
         }
         difference {
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, -lg_angle*180/pi, 0>
          }
          box {
           <0.3, 0.2, 0>,
           <-0.3, -0.2, -0.3>
           rotate <0, lg_angle*180/pi, 0>
          }
         }
         translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
        }
       }
       translate <HOLE*LG_BRICK_WIDTH, 0, 0>
      }
      #declare HOLE = HOLE + 1;
     #end
    }
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0>
   }
   #declare HOLE = -1;
   #while (HOLE<2)
    merge {
     difference {
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
      }
      union {
       box {
        <0.3, 0.2, 0>,
        <-0.3, -0.2, -0.3>
        rotate <0, lg_angle*180/pi, 0>
       }
       box {
        <0.3, 0.1, 0>,
        <-0.3, -0.2, -0.3>
        rotate <0, -lg_angle*180/pi, 0>
       }
      }
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     difference {
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
      }
      union {
       box {
        <0.3, 0.2, 0>,
        <-0.3, -0.2, 0.3>
        rotate <0, lg_angle*180/pi, 0>
       }
       box {
        <0.3, 0.2, 0>,
        <-0.3, -0.2, 0.3>
        rotate <0, -lg_angle*180/pi, 0>
       }
      }
      translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
     }
     sphere {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     sphere {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     sphere {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     sphere {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      <-(LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_CORNER_SPACE/2>,
      LG_CORNER_SPACE
     }
     matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, 0, HOLE*LG_BRICK_WIDTH, 0>
    }
    #declare HOLE = HOLE + 1;
   #end
   object {
    lg_tech_knob_logo_clear
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo_clear
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo_clear
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo_clear
    scale <1-2*MIR, 1, 1>
    translate <LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH>
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>,
    <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, LG_E>,
    <0, LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH, LG_E>,
    <0, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, LG_E>,
    <0, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
}

#end
