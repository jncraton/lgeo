/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071231 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3648b: Technic Gear 24 Tooth                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3648b)
#else
#declare lg_angle1=acos((LG_BRICK_WIDTH/2-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE)/(0.3+LG_CORNER_SPACE));
#declare lg_angle2=25.920611535/180*pi;
#declare lg_3648b =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   difference {
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    union {
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, 0, 0.06>,
   <0, 0, -0.06>,
   1
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.1>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.1>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.1>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.1>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, 0.1>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS
   }
   box {
    <0.2, LG_BRICK_WIDTH/2, 0.1>,
    <-0.2, LG_BRICK_WIDTH/2+0.12, -0.1>
   }
   box {
    <0.2, -LG_BRICK_WIDTH/2, 0.1>,
    <-0.2, -LG_BRICK_WIDTH/2-0.12, -0.1>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2, 0.8*LG_BRICK_WIDTH, 0.1>,
    <-LG_CROSSAXLE_WIDTH/2, -0.8*LG_BRICK_WIDTH, -0.1>
   }
   cylinder {
    <0, 0.8*LG_BRICK_WIDTH, 0.1>,
    <0, 0.8*LG_BRICK_WIDTH, -0.1>,
    LG_CROSSAXLE_WIDTH/2
   }
   cylinder {
    <0, -0.8*LG_BRICK_WIDTH, 0.1>,
    <0, -0.8*LG_BRICK_WIDTH, -0.1>,
    LG_CROSSAXLE_WIDTH/2
   }
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    1.08
   }
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    1.08-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    0.98
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    0.98+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    0.98+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.98+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  0.98+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    union {
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_E, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_E, -LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3), LG_CROSSAXLE_WIDTH/2+LG_E, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3), -LG_CROSSAXLE_WIDTH/2-LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     cylinder {
      <0, 0, 0.4>,
      <0, 0, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, 0.4+LG_E>,
      <0, 0, 0.4-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.4-LG_E>,
      <0, 0, -0.4+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.3, 0.5>,
      <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.3, -0.5>
     }
    }
   }
   difference {
    union {
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.3, 0.5>,
     <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.3, -0.5>
    }
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    matrix <1,0,0,0,-1,0,0,0,1,0,0,0>
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    matrix <-1,0,0,0,-1,0,0,0,1,0,0,0>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -0.5>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -0.5>
   }
  }
 }
 cylinder {
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, 0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, -0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, 0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, -0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, 0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, -0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, 0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, -0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2>,
  <LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2>,
  (LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  (LG_BRICK_WIDTH/2-0.3)
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2>,
  <-LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2>,
  (LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  (LG_BRICK_WIDTH/2-0.3)
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 union {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
 }
 union {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 ,0>
 }
 union {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 union {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  matrix <-1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 #declare ROT = 0;
 #while (ROT < 24)
  union {
   box {
    <LG_CORNER_SPACE, 0.1, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <2*LG_WALL_WIDTH-0.04, -0.1+LG_CORNER_SPACE,- LG_BRICK_WIDTH/4>
    }
    union {
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle2), 0.2, -0.3>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle2), -0.2, -0.3>
      rotate <0, 0, lg_angle2*180/pi>
      translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4>,
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    0.04
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   translate <0.98, 0, 0>
   rotate <0, 0, ROT*15>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#declare lg_3648b_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   difference {
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    merge {
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_E>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90,0,0>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, 0, 0.06>,
   <0, 0, -0.06>,
   1
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.1>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.1>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.1>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.1>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, 0.1>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS
   }
   box {
    <0.2, LG_BRICK_WIDTH/2, 0.1>,
    <-0.2, LG_BRICK_WIDTH/2+0.12, -0.1>
   }
   box {
    <0.2, -LG_BRICK_WIDTH/2, 0.1>,
    <-0.2, -LG_BRICK_WIDTH/2-0.12, -0.1>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2, 0.8*LG_BRICK_WIDTH, 0.1>,
    <-LG_CROSSAXLE_WIDTH/2, -0.8*LG_BRICK_WIDTH, -0.1>
   }
   cylinder {
    <0, 0.8*LG_BRICK_WIDTH, 0.1>,
    <0, 0.8*LG_BRICK_WIDTH, -0.1>,
    LG_CROSSAXLE_WIDTH/2
   }
   cylinder {
    <0, -0.8*LG_BRICK_WIDTH, 0.1>,
    <0, -0.8*LG_BRICK_WIDTH, -0.1>,
    LG_CROSSAXLE_WIDTH/2
   }
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    1.08
   }
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    1.08-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    0.98
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    0.98+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    0.98+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.98+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  0.98+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 }
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -5*LG_WALL_WIDTH>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -5*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     rotate <0, 0, 90*ROT>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    merge {
     box {
      <LG_BRICK_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_BRICK_WIDTH/2>,
      <-LG_BRICK_WIDTH/2, -LG_CROSSAXLE_WIDTH, -LG_BRICK_WIDTH/2>
     }
     box {
      <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_E, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, -LG_CROSSAXLE_WIDTH/2-LG_E, -LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3), LG_CROSSAXLE_WIDTH/2+LG_E, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3), -LG_CROSSAXLE_WIDTH/2-LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     cylinder {
      <0, 0, 0.4>,
      <0, 0, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, 0.4+LG_E>,
      <0, 0, 0.4-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.4-LG_E>,
      <0, 0, -0.4+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.3, 0.5>,
      <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.3, -0.5>
     }
    }
   }
   difference {
    union {
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.3, 0.5>,
     <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.3, -0.5>
    }
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
    0.3
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4+LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4-LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4-LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4+LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    matrix <1,0,0,0,-1,0,0,0,1,0,0,0>
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    matrix <-1,0,0,0,1,0,0,0,1,0,0,0>
   }
   box {
    <0, 0.3-LG_CORNER_SPACE, 0.5>,
    <-0.3-LG_CORNER_SPACE, -0.3-LG_CORNER_SPACE, -0.5>
    rotate <0, 0, 90+lg_angle1*180/pi>
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    matrix <-1,0,0,0,-1,0,0,0,1,0,0,0>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -0.5>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -0.5>
   }
  }
 }
 cylinder {
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, 0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, -0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, 0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, -0.12, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, 0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2+(LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE, -0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, 0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2-(LG_BRICK_WIDTH/2-0.3)+LG_CORNER_SPACE, -0.12, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2>,
  <LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2>,
  (LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  (LG_BRICK_WIDTH/2-0.3)
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2>,
  <-LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2>,
  (LG_BRICK_WIDTH/2-0.3)-LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  (LG_BRICK_WIDTH/2-0.3)
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-LG_BRICK_WIDTH/2, 0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 merge {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
 }
 merge {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 ,0>
 }
 merge {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 merge {
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_CROSSAXLE_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
  }
  difference {
   torus {
    0.3+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
   }
   union {
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
    }
    box {
     <0, 0.4, 0.1>,
     <-0.4, -0.4, -0.1>
     rotate <0, 0, 90+lg_angle1*180/pi>
    }
   }
   translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
  }
  matrix <-1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 #declare ROT = 0;
 #while (ROT < 24)
  merge {
   box {
    <LG_CORNER_SPACE, 0.1, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <2*LG_WALL_WIDTH-0.04, -0.1+LG_CORNER_SPACE,- LG_BRICK_WIDTH/4>
    }
    union {
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle2), 0.2, -0.3>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle2), -0.2, -0.3>
      rotate <0, 0, lg_angle2*180/pi>
      translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4>,
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    0.04
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   translate <0.98, 0, 0>
   rotate <0, 0, ROT*15>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#end
