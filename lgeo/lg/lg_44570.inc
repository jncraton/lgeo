/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081026 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_44570: Hinge Car Roof 4 x 4 Locking 1 x 2 Locking                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_44570)
#else
#declare lg_angle1=atan2(0.16, 0.06);
#declare lg_angle2=atan2(0.6, 0.08);
#declare lg_44570 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  #declare MIR2 = 0;
  #while (MIR2 < 2)
   difference {
    // hinge double finger locking
    union {
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
     }
     cylinder {
      <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
      <0.36, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     difference {
      union {
       box {
        <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
        <LG_WALL_WIDTH, LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>
       }
       box {
        <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
        <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS>
       }
      }
      union {
       box {
        <0.4, 0, 0>,
        <LG_WALL_WIDTH-LG_E, 0.3, 0.3>
        rotate <-45, 0, 0>
        translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
       }
       box {
        <0.4, -LG_WALL_WIDTH, LG_KNOB_RADIUS+LG_E>,
        <LG_WALL_WIDTH-LG_E, 0, LG_KNOB_RADIUS-LG_CORNER_SPACE>
       }
      }
     }
     cone {
      <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
      <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
     }
     box {
      <0.36-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
      rotate <-45, 0, 0>
      translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
     }
    }
    union {
     #declare ROT = -5;
     #while (ROT < 5)
      union {
       cylinder {
        <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
        <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
        0.04
       }
       difference {
        cylinder {
         <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
         0.04+LG_CORNER_SPACE
        }
        torus {
         0.04+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
         translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        }
       }
       difference {
        cylinder {
         <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
         0.04+LG_CORNER_SPACE
        }
        torus {
         0.04+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
         translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        }
       }
       rotate <(ROT+0.5)*90/4, 0, 0>
       translate <0, -LG_BRICK_WIDTH/2, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    #if (MIR = 1)
     matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
    #end
    translate <(1-MIR2*2)*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_PLATE_HEIGHT>
   }
   #declare MIR2 = MIR2 + 1;
  #end
  union {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   difference {
    union {
     difference {
      union {
       box {
        <2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <1.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH-LG_CORNER_SPACE>
       }
       box {
        <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
        <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH >
       }
      }
      union {
       box {
        <2*LG_BRICK_WIDTH+LG_E, 0, 0>,
        <1.6*LG_BRICK_WIDTH-LG_E, 0.3, 0.3>
        rotate <-45, 0, 0>
        translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
       }
       box {
        <2*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH +LG_E>,
        <1.6*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
       }
      }
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
      rotate <-45, 0, 0>
      translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     cylinder {
      <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <1.6*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
      <2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    box {
     <2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -0.7, -LG_PLATE_HEIGHT-LG_E>,
     <1.6*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -1.6*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <0.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 difference {
  union {
   difference {
    union {
     box {
      <0.4*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-0.4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH >
     }
    }
    union {
     box {
      <0.4*LG_BRICK_WIDTH+LG_E, 0, 0>,
      <-0.4*LG_BRICK_WIDTH-LG_E, 0.22, 0.3>
      rotate <-45, 0, 0>
      translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0.4*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH +LG_E>,
      <-0.4*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
    }
   }
   box {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
    rotate <-45, 0, 0>
    translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   cylinder {
    <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-0.4*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
    <0.4*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
  }
  box {
   <0.4*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -0.7, -LG_PLATE_HEIGHT-LG_E>,
   <-0.4*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -1.6*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
  }
 }
 intersection {
  object {
   lg_plate_cylinder
   translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  box {
   <0, 0, 0>
   <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
   rotate <0, 0, 45>
   translate <0, LG_BRICK_WIDTH, 0>
  }
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 rotate <0, 0, -90>
}

#declare lg_44570_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  #declare MIR2 = 0;
  #while (MIR2 < 2)
   difference {
    // hinge double finger locking
    union {
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
     }
     cylinder {
      <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
      <0.36, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     difference {
      union {
       box {
        <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
        <LG_WALL_WIDTH, LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>
       }
       box {
        <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
        <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS>
       }
      }
      union {
       box {
        <0.4, 0, 0>,
        <LG_WALL_WIDTH-LG_E, 0.3, 0.3>
        rotate <-45, 0, 0>
        translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
       }
       box {
        <0.4, -LG_WALL_WIDTH, LG_KNOB_RADIUS+LG_E>,
        <LG_WALL_WIDTH-LG_E, 0, LG_KNOB_RADIUS-LG_CORNER_SPACE>
       }
      }
     }
     cone {
      <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
      <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
     }
     box {
      <0.36-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <LG_WALL_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
      rotate <-45, 0, 0>
      translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
     }
    }
    union {
     #declare ROT = -5;
     #while (ROT < 5)
      union {
       cylinder {
        <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
        <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
        0.04
       }
       difference {
        cylinder {
         <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
         0.04+LG_CORNER_SPACE
        }
        torus {
         0.04+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
         translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        }
       }
       difference {
        cylinder {
         <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
         <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
         0.04+LG_CORNER_SPACE
        }
        torus {
         0.04+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
         translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        }
       }
       rotate <(ROT+0.5)*90/4, 0, 0>
       translate <0, -LG_BRICK_WIDTH/2, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    #if (MIR = 1)
     matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
    #end
    translate <(1-MIR2*2)*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_PLATE_HEIGHT>
   }
   #declare MIR2 = MIR2 + 1;
  #end
  union {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE-LG_E>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   difference {
    union {
     difference {
      union {
       box {
        <2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
        <1.6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH-LG_CORNER_SPACE>
       }
       box {
        <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
        <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH >
       }
      }
      union {
       box {
        <2*LG_BRICK_WIDTH+LG_E, 0, 0>,
        <1.6*LG_BRICK_WIDTH-LG_E, 0.3, 0.3>
        rotate <-45, 0, 0>
        translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
       }
       box {
        <2*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH +LG_E>,
        <1.6*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
       }
      }
     }
     box {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
      <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
      rotate <-45, 0, 0>
      translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     cylinder {
      <1.6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <1.6*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
      <2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    box {
     <2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -0.7, -LG_PLATE_HEIGHT-LG_E>,
     <1.6*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -1.6*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <0.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 difference {
  union {
   difference {
    union {
     box {
      <0.4*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-0.4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH >
     }
    }
    union {
     box {
      <0.4*LG_BRICK_WIDTH+LG_E, 0, 0>,
      <-0.4*LG_BRICK_WIDTH-LG_E, 0.22, 0.3>
      rotate <-45, 0, 0>
      translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0.4*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH +LG_E>,
      <-0.4*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
    }
   }
   box {
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
    <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
    rotate <-45, 0, 0>
    translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   cylinder {
    <-0.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
    <0.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -0.08>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-0.4*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
    <0.4*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.08>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
  }
  box {
   <0.4*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -0.7, -LG_PLATE_HEIGHT-LG_E>,
   <-0.4*LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -1.6*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
  }
 }
 intersection {
  object {
   lg_plate_cylinder_clear
   translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  box {
   <0, 0, 0>
   <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>
   rotate <0, 0, 45>
   translate <0, LG_BRICK_WIDTH, 0>
  }
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 rotate <0, 0, -90>
}

#end
