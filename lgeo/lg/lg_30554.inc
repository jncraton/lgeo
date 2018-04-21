/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081116 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30554: Hinge Arm Locking with Single and Dual Fingers                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30554)
#else
#declare lg_angle1=atan2(0.16, 0.06);
#declare lg_angle2=atan2(0.6, 0.08);
#declare lg_anlge3=atan2(0.36-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE);
#declare lg_30554 =
union {
 intersection {
  union {
   #declare MIR = 0;
   #while (MIR < 2)
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
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
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
      box {
       <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH, LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_RADIUS>
      }
      cone {
       <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
       <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
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
     rotate <0, 0, 90>
    }
    #declare MIR = MIR + 1;
   #end
  }
  cylinder {
   <LG_BRICK_WIDTH, 0, 0>,
   <-LG_CORNER_SPACE-LG_E, 0, 0>,
   0.36
  }
  translate <LG_BRICK_WIDTH/2, 0, 0>
  rotate <0, 0, 180>
 }
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
}

#declare lg_30554_clear =
merge {
 intersection {
  merge {
   #declare MIR = 0;
   #while (MIR < 2)
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
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
       <0.36-LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
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
      box {
       <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH, LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE, LG_KNOB_RADIUS>
      }
      cone {
       <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
       <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
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
     rotate <0, 0, 90>
    }
    #declare MIR = MIR + 1;
   #end
  }
  cylinder {
   <LG_BRICK_WIDTH, 0, 0>,
   <-LG_CORNER_SPACE-LG_E, 0, 0>,
   0.36
  }
  translate <LG_BRICK_WIDTH/2, 0, 0>
  rotate <0, 0, 180>
 }
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
}

#end
