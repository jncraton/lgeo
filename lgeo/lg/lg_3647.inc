/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990101 Lutz Uhlmann                                                       */
/* 20081123 Lutz Uhlmann removed unneccessary lg_angle1                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3647: Technic Gear 8 Tooth                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3647)
#else
#declare lg_angle2=atan2(1,2);
#declare lg_angle3=atan2(0.055*cos(lg_angle2)-0.015*cos(lg_angle2), 0.08+0.015*sin(lg_angle2)-0.055*sin(lg_angle2)) ;
#declare LEN=sqrt(
	((1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2))-(LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2)))*
	((1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2))-(LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2)))+
	((0.08-LG_CORNER_SPACE)*cos(lg_angle2)-(0.04-LG_CORNER_SPACE)*cos(lg_angle2))*
	((0.08-LG_CORNER_SPACE)*cos(lg_angle2)-(0.04-LG_CORNER_SPACE)*cos(lg_angle2)) );
#declare lg_3647 =
union {
 difference {
  union {
   cylinder {
    <0, 0, 0.4-LG_CORNER_SPACE>,
    <0, 0, -0.4+LG_CORNER_SPACE>,
    0.3
   }
   cylinder {
    <0, 0, 0.4>,
    <0, 0,-0.4>,
    0.3-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.4>,
    <0, 0, -0.4>,
    0.24
   }
   cylinder {
    <0, 0, 0.4-LG_CORNER_SPACE>,
    <0, 0, 0.4+LG_E>,
    0.24+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.4+LG_CORNER_SPACE>,
    <0, 0, -0.4-LG_E>,
    0.24+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.4-LG_CORNER_SPACE>
 } 
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.4+LG_CORNER_SPACE>
 } 
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.4-LG_CORNER_SPACE>
 } 
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.4+LG_CORNER_SPACE>
 } 
 intersection {
  union {
   #declare ROT2 = 0;
   #while (ROT2 < 4)
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
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
  }
  cylinder {
   <0, 0, 0.5>,
   <0, 0, -0.5>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
 #declare ROT = 0;
 #while (ROT < 8)
  union {
   box {
    <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04, -0.08, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <1.5*LG_WALL_WIDTH-0.04, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
    }
    union {
     box {
      <0, 3*LG_CORNER_SPACE, LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <2*LEN, 0, -LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
     }
     box {
      <0, 0, LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <2*LEN, -3*LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
      rotate <0, 0, lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LEN, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LEN, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), (0.04-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), -(0.04-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), (0.04-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), -(0.04-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4>,
    <1.5*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4>,
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    0.04
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <1.5*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <1.5*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4>,
    <LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    0.08
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   translate <LG_KNOB_RADIUS, 0, 0>
   rotate <0, 0, ROT*45>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#declare lg_3647_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, 0.4-LG_CORNER_SPACE>,
    <0, 0, -0.4+LG_CORNER_SPACE>,
    0.3
   }
   cylinder {
    <0, 0, 0.4>,
    <0, 0,-0.4>,
    0.3-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.4>,
    <0, 0, -0.4>,
    0.24
   }
   cylinder {
    <0, 0, 0.4-LG_CORNER_SPACE>,
    <0, 0, 0.4+LG_E>,
    0.24+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.4+LG_CORNER_SPACE>,
    <0, 0, -0.4-LG_E>,
    0.24+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.4-LG_CORNER_SPACE>
 } 
 torus {
  0.3-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.4+LG_CORNER_SPACE>
 } 
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.4-LG_CORNER_SPACE>
 } 
 torus {
  0.24+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.4+LG_CORNER_SPACE>
 } 
 intersection {
  merge {
   #declare ROT2 = 0;
   #while (ROT2 < 4)
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
     rotate <0, 0, 90*ROT2>
     translate <0, 0, 2.5*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
  }
  cylinder {
   <0, 0, 0.5>,
   <0, 0, -0.5>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
 #declare ROT = 0;
 #while (ROT < 8)
  merge {
   box {
    <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04, -0.08, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <1.5*LG_WALL_WIDTH-0.04, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4>
    }
    union {
     box {
      <0, 3*LG_CORNER_SPACE, LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <2*LEN, 0, -LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
     }
     box {
      <0, 0, LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
      <2*LEN, -3*LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
      rotate <0, 0, lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LEN, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LEN, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), 0>
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), (0.04-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), -(0.04-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), (0.04-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), (0.08-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04+0.015*sin(lg_angle2), -(0.04-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04+0.055*sin(lg_angle2), -(0.08-LG_CORNER_SPACE)*cos(lg_angle2), -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4>,
    <1.5*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4>,
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    0.04
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <1.5*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <1.5*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4>,
    <LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    0.08
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-0.04, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   translate <LG_KNOB_RADIUS, 0, 0>
   rotate <0, 0, ROT*45>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#end
