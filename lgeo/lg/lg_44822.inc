/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081029 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_44822: Hinge Tile 1 x 4 Locking with 2 Finger on top                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_44822)
#else
#declare lg_angle1=atan2(0.16, 0.06);
#declare lg_angle2=atan2(0.6, 0.08);
#declare lg_44822 =
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
    <0, 0.1, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <90-lg_angle1*180/pi, 0, 0>
    translate <0.36-LG_CORNER_SPACE, -0.16, 0.05>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <90-lg_angle2*180/pi, 0, 0>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -0.04+LG_CORNER_SPACE>,
    <0, 0.1, -0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <-90+lg_angle1*180/pi, 0, 0>
    translate <0.36-LG_CORNER_SPACE, -0.16, -0.05>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <-90+lg_angle2*180/pi, 0, 0>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
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
   sphere {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <90-lg_angle2*180/pi, 0, 0>
    translate <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <-90+lg_angle2*180/pi, 0, 0>
    translate <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
   }
   cylinder {
    <0.36-LG_CORNER_SPACE, -0.16, -0.05>,
    <LG_E, -0.16, -0.05>
    0.04
   }
   cylinder {
    <0.36, -0.16, -0.05>,
    <LG_E, -0.16, -0.05>
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <0.36-LG_CORNER_SPACE, -0.16, 0.05>,
    <LG_E, -0.16, 0.05>
    0.04
   }
   cylinder {
    <0.36, -0.16, 0.05>,
    <LG_E, -0.16, 0.05>
    0.04-LG_CORNER_SPACE
   }
   difference {
    union {
     union {
      box {
       <0.36-LG_CORNER_SPACE, 0, 0.04>,
       <LG_E, 0.1, 0.04-LG_CORNER_SPACE-LG_E>
      }
      box {
       <0.36, 0, -0.12>,
       <LG_E, 0.1, 0.04-LG_CORNER_SPACE>
      }
      rotate <90-lg_angle1*180/pi, 0, 0>
      translate <0, -0.16, 0.05>
     }
     union {
      box {
       <0.36-LG_CORNER_SPACE, 0, -0.04>,
       <LG_E, 0.1, -0.04+LG_CORNER_SPACE+LG_E>
      }
      box {
       <0.36, 0, 0.12>,
       <LG_E, 0.1, -0.04+LG_CORNER_SPACE>
      }
      rotate <-90+lg_angle1*180/pi, 0, 0>
      translate <0, -0.16, -0.05>
     }
    }
    union {
     cylinder {
      <0.36, -0.12, 0>,
      <LG_E, -0.12, 0>,
      0.01
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -0.12, 0>,
      <0.36+LG_E, -0.12, 0>,
      0.01+LG_CORNER_SPACE
     }
     box {
      <0.36, -0.12, 0.01>,
      <0, -0.16, -0.01>
     }
     box {
      <0.36+LG_E, -0.12, 0.01+LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -0.16-LG_E, -0.01-LG_CORNER_SPACE>
     }
     box {
      <0.36+LG_E, -0.1, 0.2>,
      <-LG_E, 0.1, -0.2>
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
       <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5, -LG_E>
      }
      box {
       <LG_WALL_WIDTH, 0, 0>,
       <-LG_WALL_WIDTH, 0.5, -0.12>
      }
      rotate <90-lg_angle2*180/pi, 0, 0>
      translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
     }
     union {
      box {
       <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
       <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5, LG_E>
      }
      box {
       <LG_WALL_WIDTH, 0, 0>,
       <-LG_WALL_WIDTH, 0.5, 0.12>
      }
      rotate <-90+lg_angle2*180/pi, 0, 0>
      translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     box {
      <LG_WALL_WIDTH, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, -0.1, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
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
      <0.36+LG_E, LG_CORNER_SPACE+LG_E, 0.4>,
      <-0.36-LG_E, 0.2, -0.4>
     }
     difference {
      box {
       <0, -LG_BRICK_WIDTH/2, LG_WALL_WIDTH>,
       <-LG_WALL_WIDTH-LG_E, 0, -LG_WALL_WIDTH>
      }
      box {
       <0, 0, LG_WALL_WIDTH+LG_E>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>
       rotate <0, 0, 45>
       translate <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>
      }
     }
    }
   }
   rotate <-90, 0, 0>
   rotate <0, 0, -90>
   translate <0, -LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
  }
  union {
   cylinder {
    <0, -2*LG_BRICK_WIDTH-LG_E, 0.21>,
    <0, -LG_BRICK_WIDTH, 0.21>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH+LG_E, 0.21>,
    <0, LG_BRICK_WIDTH, 0.21>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_WALL_WIDTH, LG_BRICK_WIDTH, LG_E>,
    <-LG_WALL_WIDTH, LG_BRICK_WIDTH-0.2, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH, LG_E>,
    <-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.2, -LG_TOP_HEIGHT-LG_E>
   }
  }
 }
 object {
  lg_plate_column
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#declare lg_44822_clear =
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
    <0, 0.1, 0.04-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <90-lg_angle1*180/pi, 0, 0>
    translate <0.36-LG_CORNER_SPACE, -0.16, 0.05>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <90-lg_angle2*180/pi, 0, 0>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -0.04+LG_CORNER_SPACE>,
    <0, 0.1, -0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <-90+lg_angle1*180/pi, 0, 0>
    translate <0.36-LG_CORNER_SPACE, -0.16, -0.05>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <-90+lg_angle2*180/pi, 0, 0>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
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
   sphere {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <90-lg_angle2*180/pi, 0, 0>
    translate <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0.5/sin(lg_angle2), 0>,
    LG_CORNER_SPACE
    rotate <-90+lg_angle2*180/pi, 0, 0>
    translate <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
   }
   cylinder {
    <0.36-LG_CORNER_SPACE, -0.16, -0.05>,
    <LG_E, -0.16, -0.05>
    0.04
   }
   cylinder {
    <0.36, -0.16, -0.05>,
    <LG_E, -0.16, -0.05>
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <0.36-LG_CORNER_SPACE, -0.16, 0.05>,
    <LG_E, -0.16, 0.05>
    0.04
   }
   cylinder {
    <0.36, -0.16, 0.05>,
    <LG_E, -0.16, 0.05>
    0.04-LG_CORNER_SPACE
   }
   difference {
    union {
     union {
      box {
       <0.36-LG_CORNER_SPACE, 0, 0.04>,
       <LG_E, 0.1, 0.04-LG_CORNER_SPACE-LG_E>
      }
      box {
       <0.36, 0, -0.12>,
       <LG_E, 0.1, 0.04-LG_CORNER_SPACE>
      }
      rotate <90-lg_angle1*180/pi, 0, 0>
      translate <0, -0.16, 0.05>
     }
     union {
      box {
       <0.36-LG_CORNER_SPACE, 0, -0.04>,
       <LG_E, 0.1, -0.04+LG_CORNER_SPACE+LG_E>
      }
      box {
       <0.36, 0, 0.12>,
       <LG_E, 0.1, -0.04+LG_CORNER_SPACE>
      }
      rotate <-90+lg_angle1*180/pi, 0, 0>
      translate <0, -0.16, -0.05>
     }
    }
    union {
     cylinder {
      <0.36, -0.12, 0>,
      <LG_E, -0.12, 0>,
      0.01
     }
     cylinder {
      <0.36-LG_CORNER_SPACE, -0.12, 0>,
      <0.36+LG_E, -0.12, 0>,
      0.01+LG_CORNER_SPACE
     }
     box {
      <0.36, -0.12, 0.01>,
      <0, -0.16, -0.01>
     }
     box {
      <0.36+LG_E, -0.12, 0.01+LG_CORNER_SPACE>,
      <0.36-LG_CORNER_SPACE, -0.16-LG_E, -0.01-LG_CORNER_SPACE>
     }
     box {
      <0.36+LG_E, -0.1, 0.2>,
      <-LG_E, 0.1, -0.2>
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
       <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5, -LG_E>
      }
      box {
       <LG_WALL_WIDTH, 0, 0>,
       <-LG_WALL_WIDTH, 0.5, -0.12>
      }
      rotate <90-lg_angle2*180/pi, 0, 0>
      translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>
     }
     union {
      box {
       <LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
       <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.5, LG_E>
      }
      box {
       <LG_WALL_WIDTH, 0, 0>,
       <-LG_WALL_WIDTH, 0.5, 0.12>
      }
      rotate <-90+lg_angle2*180/pi, 0, 0>
      translate <0, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     box {
      <LG_WALL_WIDTH, -0.75*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, -0.1, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
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
      <0.36+LG_E, LG_CORNER_SPACE+LG_E, 0.4>,
      <-0.36-LG_E, 0.2, -0.4>
     }
     difference {
      box {
       <0, -LG_BRICK_WIDTH/2, LG_WALL_WIDTH>,
       <-LG_WALL_WIDTH-LG_E, 0, -LG_WALL_WIDTH>
      }
      box {
       <0, 0, LG_WALL_WIDTH+LG_E>,
       <2*LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>
       rotate <0, 0, 45>
       translate <-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>
      }
     }
    }
   }
   rotate <-90, 0, 0>
   rotate <0, 0, -90>
   translate <0, -LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH-0.04, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
  }
  union {
   cylinder {
    <0, -2*LG_BRICK_WIDTH-LG_E, 0.21>,
    <0, -LG_BRICK_WIDTH, 0.21>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH+LG_E, 0.21>,
    <0, LG_BRICK_WIDTH, 0.21>,
    LG_KNOB_RADIUS
   }
   box {
    <LG_WALL_WIDTH, LG_BRICK_WIDTH, LG_E>,
    <-LG_WALL_WIDTH, LG_BRICK_WIDTH-0.2, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <LG_WALL_WIDTH, -LG_BRICK_WIDTH, LG_E>,
    <-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.2, -LG_TOP_HEIGHT-LG_E>
   }
  }
 }
 object {
  lg_plate_column_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#end
