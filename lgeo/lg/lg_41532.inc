/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081117 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_41532: Hinge Arm Locking with Single Finger and Friction Pin             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_41532)
#else
#declare lg_angle1=atan2(0.16, 0.06);
#declare lg_angle2=atan2(0.6, 0.08);
#declare lg_anlge3=atan2(0.36-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE);
#declare lg_41532 =
union {
 intersection {
  union {
   #declare MIR = 0;
   #while (MIR < 2)
    union {
     // hinge finger locking
     torus {
      0.04-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.36-LG_CORNER_SPACE, -0.16, 0.05>
     }
     torus {
      0.04-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.36-LG_CORNER_SPACE, -0.16, -0.05>
     }
     cylinder {
      <0, 0, 0.04-LG_CORNER_SPACE>,
      <0, 0.2, 0.04-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
      rotate <90-lg_angle1*180/pi, 0, 0>
      translate <0.36-LG_CORNER_SPACE, -0.16, 0.05>
     }
     cylinder {
      <0, 0, -0.04+LG_CORNER_SPACE>,
      <0, 0.2, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
      rotate <-90+lg_angle1*180/pi, 0, 0>
      translate <0.36-LG_CORNER_SPACE, -0.16, -0.05>
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -0.16, 0.01+LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -0.12, 0.01+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -0.16, -0.01-LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -0.12, -0.01-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     difference {
      torus {
       0.01+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
      }
      box {
       <0.2, 0, 0.2>,
       <-0.2, -0.2, -0.2>
      }
      translate <0.36-LG_CORNER_SPACE, -0.12, 0>
     }
     sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <0, 0.6/sin(lg_angle2), 0>,
      LG_CORNER_SPACE
      rotate <90-lg_angle2*180/pi, 0, 0>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0.6/sin(lg_angle2), 0>,
      LG_CORNER_SPACE
      rotate <-90+lg_angle2*180/pi, 0, 0>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     #if (MIR = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
     rotate <0, 0, 90>
    }
    #declare MIR = MIR + 1;
   #end
   union {
    // hinge finger locking
    cylinder {
     <0.36-LG_CORNER_SPACE, -0.16, -0.05>,
     <-0.36+LG_CORNER_SPACE, -0.16, -0.05>
     0.04
    }
    cylinder {
     <0.36, -0.16, -0.05>,
     <-0.36, -0.16, -0.05>
     0.04-LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -0.16, 0.05>,
     <-0.36+LG_CORNER_SPACE, -0.16, 0.05>
     0.04
    }
    cylinder {
     <0.36, -0.16, 0.05>,
     <-0.36, -0.16, 0.05>
     0.04-LG_CORNER_SPACE
    }
    difference {
     union {
      union {
       box {
        <0.36-LG_CORNER_SPACE, 0, 0.04>,
        <-0.36+LG_CORNER_SPACE, 0.2, 0.04-LG_CORNER_SPACE-LG_E>
       }
       box {
        <0.36, 0, -0.12>,
        <-0.36, 0.2, 0.04-LG_CORNER_SPACE>
       }
       rotate <90-lg_angle1*180/pi, 0, 0>
       translate <0, -0.16, 0.05>
      }
      union {
       box {
        <0.36-LG_CORNER_SPACE, 0, -0.04>,
        <-0.36+LG_CORNER_SPACE, 0.2, -0.04+LG_CORNER_SPACE+LG_E>
       }
       box {
        <0.36, 0, 0.12>,
        <-0.36, 0.2, -0.04+LG_CORNER_SPACE>
       }
       rotate <-90+lg_angle1*180/pi, 0, 0>
       translate <0, -0.16, -0.05>
      }
     }
     union {
      cylinder {
       <0.36, -0.12, 0>,
       <-0.36, -0.12, 0>,
       0.01
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -0.12, 0>,
       <0.36+LG_E, -0.12, 0>,
       0.01+LG_CORNER_SPACE
      }
      cylinder {
       <-0.36+LG_CORNER_SPACE, -0.12, 0>,
       <-0.36-LG_E, -0.12, 0>,
       0.01+LG_CORNER_SPACE
      }
      box {
       <0.36, -0.12, 0.01>,
       <-0.36, -0.16, -0.01>
      }
      box {
       <0.36+LG_E, -0.12, 0.01+LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, -0.16-LG_E, -0.01-LG_CORNER_SPACE>
      }
      box {
       <-0.36-LG_E, -0.12, 0.01+LG_CORNER_SPACE>,
       <-0.36+LG_CORNER_SPACE, -0.16-LG_E, -0.01-LG_CORNER_SPACE>
      }
      box {
       <0.36+LG_E, LG_CORNER_SPACE, 0.2>,
       <-0.36-LG_E, 0.2, -0.2>
      }
     }
    }
    cylinder {
     <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    difference {
     union {
      union {
       box {
        <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
        <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.7, -LG_E>
       }
       box {
        <LG_WALL_WIDTH, 0, 0>,
        <-LG_WALL_WIDTH, 0.7, -0.12>
       }
       rotate <90-lg_angle2*180/pi, 0, 0>
       translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      union {
       box {
        <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
        <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.7, LG_E>
       }
       box {
        <LG_WALL_WIDTH, 0, 0>,
        <-LG_WALL_WIDTH, 0.7, 0.12>
       }
       rotate <-90+lg_angle2*180/pi, 0, 0>
       translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
      }
      box {
       <LG_WALL_WIDTH, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <-LG_WALL_WIDTH, LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
      }
      box {
       <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
      }
     }
     union {
      cone {
       <0.1, -LG_BRICK_WIDTH/2, 0>, 0.1
       <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
      }
      cone {
       <-0.1, -LG_BRICK_WIDTH/2, 0>, 0.1
       <-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
      }
      box {
       <0.36+LG_E, LG_CORNER_SPACE, 0.4>,
       <-0.36-LG_E, 0.2, -0.4>
      }
     }
    }
    rotate <0, 0, 90>
   }
  }
  cylinder {
   <LG_BRICK_WIDTH, 0, 0>,
   <-LG_CORNER_SPACE-LG_E, 0, 0>,
   0.36
  }
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2, 0, 0>,
  <LG_BRICK_WIDTH/2-1/7*LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2-2/7*LG_BRICK_WIDTH, 0, 0>,
  <LG_BRICK_WIDTH/2-3/7*LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2-4/7*LG_BRICK_WIDTH, 0, 0>,
  <LG_BRICK_WIDTH/2-5/7*LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2-6/7*LG_BRICK_WIDTH, 0, 0>,
  <LG_BRICK_WIDTH/2-LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06>
   }
   intersection {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.36+LG_E, 0.06-LG_CORNER_SPACE*(1-cos(lg_anlge3))>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.36-LG_E, -0.06+LG_CORNER_SPACE*(1-cos(lg_anlge3))>
    }
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2, 0, 0>,
     0.36
    }
   }   
   rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
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
    <0, LG_E, 0>,
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
    <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
    <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, 0.56, 0.04>,
    <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
   }
  }
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder {
    <0, LG_BRICK_WIDTH-0.04, 0>,
    <0, 0.6, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.6, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2, 0>,
    <0, LG_E, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.2, 0>,
    LG_CORNER_SPACE
   }
   scale <1, 1, 1/2>
   translate <0, 0, LG_KNOB_RADIUS>
   rotate <0, 45+90*ROT, 0>
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_41532_clear =
merge {
 intersection {
  merge {
   #declare MIR = 0;
   #while (MIR < 2)
    union {
     // hinge finger locking
     torus {
      0.04-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.36-LG_CORNER_SPACE, -0.16, 0.05>
     }
     torus {
      0.04-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <0.36-LG_CORNER_SPACE, -0.16, -0.05>
     }
     cylinder {
      <0, 0, 0.04-LG_CORNER_SPACE>,
      <0, 0.2, 0.04-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
      rotate <90-lg_angle1*180/pi, 0, 0>
      translate <0.36-LG_CORNER_SPACE, -0.16, 0.05>
     }
     cylinder {
      <0, 0, -0.04+LG_CORNER_SPACE>,
      <0, 0.2, -0.04+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
      rotate <-90+lg_angle1*180/pi, 0, 0>
      translate <0.36-LG_CORNER_SPACE, -0.16, -0.05>
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -0.16, 0.01+LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -0.12, 0.01+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -0.16, -0.01-LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -0.12, -0.01-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     difference {
      torus {
       0.01+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
      }
      box {
       <0.2, 0, 0.2>,
       <-0.2, -0.2, -0.2>
      }
      translate <0.36-LG_CORNER_SPACE, -0.12, 0>
     }
     sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <0, 0.6/sin(lg_angle2), 0>,
      LG_CORNER_SPACE
      rotate <90-lg_angle2*180/pi, 0, 0>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0.6/sin(lg_angle2), 0>,
      LG_CORNER_SPACE
      rotate <-90+lg_angle2*180/pi, 0, 0>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     #if (MIR = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
     rotate <0, 0, 90>
    }
    #declare MIR = MIR + 1;
   #end
   merge {
    // hinge finger locking
    cylinder {
     <0.36-LG_CORNER_SPACE, -0.16, -0.05>,
     <-0.36+LG_CORNER_SPACE, -0.16, -0.05>
     0.04
    }
    cylinder {
     <0.36, -0.16, -0.05>,
     <-0.36, -0.16, -0.05>
     0.04-LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -0.16, 0.05>,
     <-0.36+LG_CORNER_SPACE, -0.16, 0.05>
     0.04
    }
    cylinder {
     <0.36, -0.16, 0.05>,
     <-0.36, -0.16, 0.05>
     0.04-LG_CORNER_SPACE
    }
    difference {
     union {
      union {
       box {
        <0.36-LG_CORNER_SPACE, 0, 0.04>,
        <-0.36+LG_CORNER_SPACE, 0.2, 0.04-LG_CORNER_SPACE-LG_E>
       }
       box {
        <0.36, 0, -0.12>,
        <-0.36, 0.2, 0.04-LG_CORNER_SPACE>
       }
       rotate <90-lg_angle1*180/pi, 0, 0>
       translate <0, -0.16, 0.05>
      }
      union {
       box {
        <0.36-LG_CORNER_SPACE, 0, -0.04>,
        <-0.36+LG_CORNER_SPACE, 0.2, -0.04+LG_CORNER_SPACE+LG_E>
       }
       box {
        <0.36, 0, 0.12>,
        <-0.36, 0.2, -0.04+LG_CORNER_SPACE>
       }
       rotate <-90+lg_angle1*180/pi, 0, 0>
       translate <0, -0.16, -0.05>
      }
     }
     union {
      cylinder {
       <0.36, -0.12, 0>,
       <-0.36, -0.12, 0>,
       0.01
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -0.12, 0>,
       <0.36+LG_E, -0.12, 0>,
       0.01+LG_CORNER_SPACE
      }
      cylinder {
       <-0.36+LG_CORNER_SPACE, -0.12, 0>,
       <-0.36-LG_E, -0.12, 0>,
       0.01+LG_CORNER_SPACE
      }
      box {
       <0.36, -0.12, 0.01>,
       <-0.36, -0.16, -0.01>
      }
      box {
       <0.36+LG_E, -0.12, 0.01+LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, -0.16-LG_E, -0.01-LG_CORNER_SPACE>
      }
      box {
       <-0.36-LG_E, -0.12, 0.01+LG_CORNER_SPACE>,
       <-0.36+LG_CORNER_SPACE, -0.16-LG_E, -0.01-LG_CORNER_SPACE>
      }
      box {
       <0.36+LG_E, LG_CORNER_SPACE, 0.2>,
       <-0.36-LG_E, 0.2, -0.2>
      }
     }
    }
    cylinder {
     <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    difference {
     union {
      union {
       box {
        <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
        <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.7, -LG_E>
       }
       box {
        <LG_WALL_WIDTH, 0, 0>,
        <-LG_WALL_WIDTH, 0.7, -0.12>
       }
       rotate <90-lg_angle2*180/pi, 0, 0>
       translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      union {
       box {
        <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
        <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.7, LG_E>
       }
       box {
        <LG_WALL_WIDTH, 0, 0>,
        <-LG_WALL_WIDTH, 0.7, 0.12>
       }
       rotate <-90+lg_angle2*180/pi, 0, 0>
       translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
      }
      box {
       <LG_WALL_WIDTH, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <-LG_WALL_WIDTH, LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
      }
      box {
       <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
      }
     }
     union {
      cone {
       <0.1, -LG_BRICK_WIDTH/2, 0>, 0.1
       <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
      }
      cone {
       <-0.1, -LG_BRICK_WIDTH/2, 0>, 0.1
       <-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
      }
      box {
       <0.36+LG_E, LG_CORNER_SPACE, 0.4>,
       <-0.36-LG_E, 0.2, -0.4>
      }
     }
    }
    rotate <0, 0, 90>
   }
  }
  cylinder {
   <LG_BRICK_WIDTH, 0, 0>,
   <-LG_CORNER_SPACE-LG_E, 0, 0>,
   0.36
  }
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.36-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-1/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2, 0, 0>,
  <LG_BRICK_WIDTH/2-1/7*LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-2/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-3/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2-2/7*LG_BRICK_WIDTH, 0, 0>,
  <LG_BRICK_WIDTH/2-3/7*LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-4/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-5/7*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2-4/7*LG_BRICK_WIDTH, 0, 0>,
  <LG_BRICK_WIDTH/2-5/7*LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-6/7*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH/2-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
  0.36
 }
 cylinder {
  <LG_BRICK_WIDTH/2-6/7*LG_BRICK_WIDTH, 0, 0>,
  <LG_BRICK_WIDTH/2-LG_BRICK_WIDTH, 0, 0>,
  0.36-LG_CORNER_SPACE
 }
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.36-LG_CORNER_SPACE)*sin(lg_anlge3), 0.06>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -(0.36-LG_CORNER_SPACE)*sin(lg_anlge3), -0.06>
   }
   intersection {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.36+LG_E, 0.06-LG_CORNER_SPACE*(1-cos(lg_anlge3))>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.36-LG_E, -0.06+LG_CORNER_SPACE*(1-cos(lg_anlge3))>
    }
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2, 0, 0>,
     0.36
    }
   }   
   rotate <90*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
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
    <0, LG_E, 0>,
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
    <LG_KNOB_RADIUS+LG_E, 0.56, 0>,
    <-LG_KNOB_RADIUS-LG_E, 0.56, 0>,
    0.04
   }
   box {
    <LG_CYLINDER_RADIUS, 0.56, 0.04>,
    <-LG_CYLINDER_RADIUS, LG_BRICK_WIDTH+LG_E, -0.04>
   }
  }
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder {
    <0, LG_BRICK_WIDTH-0.04, 0>,
    <0, 0.6, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.6, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2, 0>,
    <0, LG_E, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, 0.2, 0>,
    LG_CORNER_SPACE
   }
   scale <1, 1, 1/2>
   translate <0, 0, LG_KNOB_RADIUS>
   rotate <0, 45+90*ROT, 0>
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
