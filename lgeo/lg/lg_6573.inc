/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990112 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6573: Technic Differential New 24/16 Tooth                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6573)
#else
#declare lg_angle1=asin((LG_BRICK_WIDTH/2-LG_CORNER_SPACE)/(1.04-LG_CORNER_SPACE));
#declare lg_angle2=25.920611535/180*pi;
#declare lg_angle3=atan2(1,2);
#declare lg_6573 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    1.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    0.58+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    0.68-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 1.25*LG_BRICK_WIDTH, 0>,
      1.04-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, 1.25*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      1.04
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CYLINDER_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH-LG_E, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 1.25*LG_BRICK_WIDTH-LG_E, 0>,
      0.68
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
      <0, 2*LG_BRICK_WIDTH, 0>,
      0.68-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      0.58+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 1.25*LG_BRICK_WIDTH-2*LG_E, 0>,
      0.58
     }
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <0.03, 1.95*LG_BRICK_WIDTH, 0.58+LG_E>,
     <-0.03, 1.2*LG_BRICK_WIDTH, 0.5>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
   <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   1.04
  }
  union {
   box {
    <0, 1, 0>,
    <1.1, -1, 1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <0, 1, 0>,
    <1.1, -1, -1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, 1, 0>,
    <-1.1, -1, 1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, 1, 0>,
    <-1.1, -1, -1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), 1, 0.5>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1, -0.5>
   }
  }
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1)-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH+LG_E, 0, 0>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 0, 0>,
  <LG_BRICK_WIDTH/2, 0, 0>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.04-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.75*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, 1.75*LG_BRICK_WIDTH, 0>,
    <0, 1.25*LG_BRICK_WIDTH, 0>,
    1.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 1.75*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    1.08
   }
   cylinder {
    <0, 1.25*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_E, 0>,
    <0, 1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    1.04
   }
  }
  cone {
   <0, 1.8*LG_BRICK_WIDTH, 0>, 0.98
   <0, 1.1*LG_BRICK_WIDTH, 0>, 0.88
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  box {
   <0.04, 1.95*LG_BRICK_WIDTH, 0.98+LG_E>,
   <-0.04, 1.2*LG_BRICK_WIDTH, 0.6>
   rotate <0, 90*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
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
   rotate <90, 0, 0>
   translate <0, 1.5*LG_BRICK_WIDTH, 0>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 16)
  union {
   box {
    <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08, -LG_BRICK_WIDTH/4-LG_E>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>
    }
    union {
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle3), 0.2, -0.3>
      rotate <0, 0, -lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle3), -0.2, -0.3>
      rotate <0, 0, lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle3)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>
    rotate <0, 0, lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle3)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <1.5*LG_WALL_WIDTH, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   translate <0.6, 0, 0>
   rotate <0, 0, ROT*22.5>
   rotate <90, 0, 0>
   translate <0, -1.5*LG_BRICK_WIDTH, 0>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 0, 90>
 rotate <-90, 0, 0>
}

#declare lg_6573_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    1.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    0.58+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    0.68-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    merge {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 1.25*LG_BRICK_WIDTH, 0>,
      1.04-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, 1.25*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      1.04
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      LG_CYLINDER_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH-LG_E, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    merge {
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 1.25*LG_BRICK_WIDTH-LG_E, 0>,
      0.68
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
      <0, 2*LG_BRICK_WIDTH, 0>,
      0.68-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      0.58+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 1.25*LG_BRICK_WIDTH-2*LG_E, 0>,
      0.58
     }
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <0.03, 1.95*LG_BRICK_WIDTH, 0.58+LG_E>,
     <-0.03, 1.2*LG_BRICK_WIDTH, 0.5>
     rotate <0, 90*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  cylinder {
   <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
   <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   1.04
  }
  union {
   box {
    <0, 1, 0>,
    <1.1, -1, 1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <0, 1, 0>,
    <1.1, -1, -1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, 1, 0>,
    <-1.1, -1, 1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, 1, 0>,
    <-1.1, -1, -1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), 1, 0.5>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1, -0.5>
   }
  }
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1)-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
  <LG_BRICK_WIDTH+LG_E, 0, 0>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 0, 0>,
  <LG_BRICK_WIDTH/2, 0, 0>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.04-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  1.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 1.75*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, 1.75*LG_BRICK_WIDTH, 0>,
    <0, 1.25*LG_BRICK_WIDTH, 0>,
    1.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 1.75*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    1.08
   }
   cylinder {
    <0, 1.25*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_E, 0>,
    <0, 1.25*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    1.04
   }
  }
  cone {
   <0, 1.8*LG_BRICK_WIDTH, 0>, 0.98
   <0, 1.1*LG_BRICK_WIDTH, 0>, 0.88
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  box {
   <0.04, 1.95*LG_BRICK_WIDTH, 0.98+LG_E>,
   <-0.04, 1.2*LG_BRICK_WIDTH, 0.6>
   rotate <0, 90*ROT, 0>
  }
  #declare ROT = ROT + 1;
 #end
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
   rotate <90, 0, 0>
   translate <0, 1.5*LG_BRICK_WIDTH, 0>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 16)
  merge {
   box {
    <LG_CORNER_SPACE, 0.08, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08, -LG_BRICK_WIDTH/4-LG_E>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4>,
     <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>
    }
    union {
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle3), 0.2, -0.3>
      rotate <0, 0, -lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, 0.3>,
      <(LG_WALL_WIDTH)/cos(lg_angle3), -0.2, -0.3>
      rotate <0, 0, lg_angle3*180/pi>
      translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle3)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>
    rotate <0, 0, lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/cos(lg_angle3)/2, -LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>
    rotate <0, 0, -lg_angle3*180/pi>
    translate <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.04+LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, -0.04+LG_CORNER_SPACE, -LG_BRICK_WIDTH/4-LG_E>,
    <1.5*LG_WALL_WIDTH, 0.04-LG_CORNER_SPACE, LG_BRICK_WIDTH/4-LG_CORNER_SPACE>
   }
   translate <0.6, 0, 0>
   rotate <0, 0, ROT*22.5>
   rotate <90, 0, 0>
   translate <0, -1.5*LG_BRICK_WIDTH, 0>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 0, 90>
 rotate <-90, 0, 0>
}

#end
