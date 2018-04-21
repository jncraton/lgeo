/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080817 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30389b: Hinge Brick 2 x 2 Locking with 1 Finger on end with Axlehole     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30389b)
#else
#declare lg_angle1=atan2(0.16, 0.06);
#declare lg_angle2=atan2(0.6, 0.08);
#declare lg_30389b =
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
   translate <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.18/sin(pi/4), -LG_CORNER_SPACE>
    rotate <-45, 0, 0>
    translate <0, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH+LG_E, 0, 0>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -0.181/sin(pi/4), -0.2>
     rotate <-45, 0, 0>
     translate <0, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
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
     <0.36+LG_E, LG_E, 0.2>,
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
     <-LG_WALL_WIDTH, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
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
     <0.36+LG_E, LG_E, 0.4>,
     <-0.36-LG_E, 0.2, -0.4>
    }
   }
  }
  translate <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0.2>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/sin(pi/4), -LG_CORNER_SPACE>
   rotate <-45, 0, 0>
   translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
   <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+2*LG_WALL_WIDTH, -LG_BRICK_HEIGHT/2>
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
}

#declare lg_30389b_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
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
   translate <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, LG_E>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.18/sin(pi/4), -LG_CORNER_SPACE>
    rotate <-45, 0, 0>
    translate <0, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH+LG_E, 0, 0>,
     <LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -0.181/sin(pi/4), -0.2>
     rotate <-45, 0, 0>
     translate <0, -LG_BRICK_WIDTH+0.18+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
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
   merge {
    merge {
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
    merge {
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
     <0.36+LG_E, LG_E, 0.2>,
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
   merge {
    merge {
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
    merge {
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
     <-LG_WALL_WIDTH, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>
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
     <0.36+LG_E, LG_E, 0.4>,
     <-0.36-LG_E, 0.2, -0.4>
    }
   }
  }
  translate <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0.2>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/sin(pi/4), -LG_CORNER_SPACE>
   rotate <-45, 0, 0>
   translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
   <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+2*LG_WALL_WIDTH, -LG_BRICK_HEIGHT/2>
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT+0.18+LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_cylinder_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
}

#end
