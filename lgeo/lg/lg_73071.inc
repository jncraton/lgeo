/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990125 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_73071: Technic Differential Old 28 Tooth                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_73071)
#else
#declare lg_angle1=asin((LG_BRICK_WIDTH/2-LG_CORNER_SPACE)/(1.04-LG_CORNER_SPACE));
#declare lg_angle2=25.920611535/180*pi;
#declare lg_73071 =
union {
 difference {
  union {
   difference {
    union {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <0, -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      1.04
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <0, -1.3*LG_BRICK_WIDTH, 0>,
      1.04-LG_CORNER_SPACE
     }
    }
    union {
     box {
      <0, 2, 0>,
      <1.1, -0.5, 1.1>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 2, 0>,
      <1.1, -0.5, -1.1>
      rotate <0, lg_angle1*180/pi, 0>
     }
     box {
      <0, 2, 0>,
      <-1.1, -0.5, 1.1>
      rotate <0, lg_angle1*180/pi, 0>
     }
     box {
      <0, 2, 0>,
      <-1.1, -0.5, -1.1>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), 2, 0.5>
      <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -0.5, -0.5>
     }
     translate <0, -LG_BRICK_WIDTH, 0>
    }
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1)-LG_E, -1.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, -LG_BRICK_WIDTH, 0>,
    <0, -2*LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH-LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2>
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2>
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2>
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1)-LG_E, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 difference {
  torus {
   1.04-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  union {
   box {
    <0, LG_E, 0>,
    <1.1, -0.5, 1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <0, LG_E, 0>,
    <1.1, -0.5, -1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, LG_E, 0>,
    <-1.1, -0.5, 1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, LG_E, 0>,
    <-1.1, -0.5, -1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_E, 0.5>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -0.5, -0.5>
   }
   translate <0, -LG_BRICK_WIDTH, 0>
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 sphere {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  1.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>
 }
 torus {
  1.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  1.04+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  0.72+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 difference {
  cylinder {
   <0, 1.3*LG_BRICK_WIDTH, 0>,
   <0, 1.3*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
   0.88-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1.3*LG_BRICK_WIDTH+LG_E, 0>,
   <0, 1.3*LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0>,
   0.72+LG_CORNER_SPACE
  }
 }
 difference {
  union {
   difference {
    union {
     cylinder {
      <0, LG_BRICK_WIDTH-0.08, 0>,
      <0, LG_BRICK_WIDTH+0.24, 0>,
      1.28-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>,
      1.28
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 0.5, 0>,
      1.04
     }
     cylinder {
      <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>,
      <0, 0.5, 0>,
      1.04+LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 1.3*LG_BRICK_WIDTH+LG_E, 0>,
      0.88+LG_CORNER_SPACE
     }
    }
   }
   cylinder {
    <0, 1.3*LG_BRICK_WIDTH, 0>,
    <0, 1.3*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    0.56-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH, 0>,
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
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
 #declare ROT = 0;
 #while (ROT < 28)
  union {
   box {
    <LG_CORNER_SPACE, 0.1, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5>,
     <2*LG_WALL_WIDTH-0.04, -0.1+LG_CORNER_SPACE,- LG_BRICK_WIDTH/5>
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
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/5>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/5>,
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    0.04
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   sphere {
    <2*LG_WALL_WIDTH-0.08, 0, 0.28>,
    0.04
   }
   sphere {
    <2*LG_WALL_WIDTH-0.04, 0, 0.16>,
    0.04
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, 0.28>,
    <2*LG_WALL_WIDTH-0.04, 0, 0.16>,
    0.04
   }
   sphere {
    <LG_WALL_WIDTH-0.08, 0, 0.2>,
    0.04
   }
   cylinder {
    <LG_WALL_WIDTH-0.08, 0, 0.2>,
    <LG_WALL_WIDTH-0.08, 0, 0.1>,
    0.04
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, 0.28>,
    <LG_WALL_WIDTH-0.08, 0, 0.2>,
    0.04
   }
   difference {
    box {
     <2*LG_WALL_WIDTH-0.04, 0.04, 0.28>,
     <LG_WALL_WIDTH-0.08, -0.04, 0.2>
    }
    union {
     box {
      <0, 0.05, 0>,
      <0.1, -0.05, -0.2>
      rotate <0, -atan2(0.04, 0.12)*180/pi, 0>
      translate <2*LG_WALL_WIDTH-0.08, 0, 0.28>
     }
     box {
      <0, 0.05, 0>,
      <-0.3, -0.05, 0.2>
      rotate <0, -atan2(0.08, 0.16)*180/pi, 0>
      translate <2*LG_WALL_WIDTH-0.08, 0, 0.28>
     }
    }
   }
   translate <1.18, 0, 0>
   rotate <0, 0, ROT*360/28>
   rotate <90, 0, 0>
   translate <0, 0.88, 0>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 0, 90>
 rotate <-90, 0, 0>
}

#declare lg_73071_clear =
merge {
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <0, -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      1.04
     }
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <0, -1.3*LG_BRICK_WIDTH, 0>,
      1.04-LG_CORNER_SPACE
     }
    }
    union {
     box {
      <0, 2, 0>,
      <1.1, -0.5, 1.1>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 2, 0>,
      <1.1, -0.5, -1.1>
      rotate <0, lg_angle1*180/pi, 0>
     }
     box {
      <0, 2, 0>,
      <-1.1, -0.5, 1.1>
      rotate <0, lg_angle1*180/pi, 0>
     }
     box {
      <0, 2, 0>,
      <-1.1, -0.5, -1.1>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), 2, 0.5>
      <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -0.5, -0.5>
     }
     translate <0, -LG_BRICK_WIDTH, 0>
    }
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, -LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1)-LG_E, -1.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, -LG_BRICK_WIDTH, 0>,
    <0, -2*LG_BRICK_WIDTH, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH-LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2>
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2>
 }
 box {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2>
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2>
 }
 box {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1)-LG_E, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
 }
 difference {
  torus {
   1.04-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  }
  union {
   box {
    <0, LG_E, 0>,
    <1.1, -0.5, 1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <0, LG_E, 0>,
    <1.1, -0.5, -1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, LG_E, 0>,
    <-1.1, -0.5, 1.1>
    rotate <0, lg_angle1*180/pi, 0>
   }
   box {
    <0, LG_E, 0>,
    <-1.1, -0.5, -1.1>
    rotate <0, -lg_angle1*180/pi, 0>
   }
   box {
    <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_E, 0.5>
    <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -0.5, -0.5>
   }
   translate <0, -LG_BRICK_WIDTH, 0>
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 sphere {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <(1.04-LG_CORNER_SPACE)*cos(lg_angle1), -1.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
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
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
 }
 torus {
  1.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>
 }
 torus {
  1.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  1.04+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  0.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  0.72+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>
 }
 difference {
  cylinder {
   <0, 1.3*LG_BRICK_WIDTH, 0>,
   <0, 1.3*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
   0.88-LG_CORNER_SPACE
  }
  cylinder {
   <0, 1.3*LG_BRICK_WIDTH+LG_E, 0>,
   <0, 1.3*LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0>,
   0.72+LG_CORNER_SPACE
  }
 }
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <0, LG_BRICK_WIDTH-0.08, 0>,
      <0, LG_BRICK_WIDTH+0.24, 0>,
      1.28-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH+0.24-LG_CORNER_SPACE, 0>,
      1.28
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, 0.5, 0>,
      1.04
     }
     cylinder {
      <0, LG_BRICK_WIDTH-0.08+LG_CORNER_SPACE, 0>,
      <0, 0.5, 0>,
      1.04+LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 1.3*LG_BRICK_WIDTH+LG_E, 0>,
      0.88+LG_CORNER_SPACE
     }
    }
   }
   cylinder {
    <0, 1.3*LG_BRICK_WIDTH, 0>,
    <0, 1.3*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    0.56-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH, 0>,
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
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
 #declare ROT = 0;
 #while (ROT < 28)
  merge {
   box {
    <LG_CORNER_SPACE, 0.1, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5>,
     <2*LG_WALL_WIDTH-0.04, -0.1+LG_CORNER_SPACE,- LG_BRICK_WIDTH/5>
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
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), -LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/5>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/5>,
    0.04-LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>,
    <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>,
    0.04
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>
   }
   torus {
    0.04-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_WALL_WIDTH-0.04, 0, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, 0.1-LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, LG_BRICK_WIDTH/5-LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, 0>,
    <(LG_WALL_WIDTH-0.04)/cos(lg_angle2)+0.015*sin(lg_angle2), 0, 0>,
    LG_CORNER_SPACE
    rotate <0, 0, lg_angle2*180/pi>
    translate <LG_WALL_WIDTH, -0.1+LG_CORNER_SPACE, -LG_BRICK_WIDTH/5+LG_CORNER_SPACE>
   }
   sphere {
    <2*LG_WALL_WIDTH-0.08, 0, 0.28>,
    0.04
   }
   sphere {
    <2*LG_WALL_WIDTH-0.04, 0, 0.16>,
    0.04
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, 0.28>,
    <2*LG_WALL_WIDTH-0.04, 0, 0.16>,
    0.04
   }
   sphere {
    <LG_WALL_WIDTH-0.08, 0, 0.2>,
    0.04
   }
   cylinder {
    <LG_WALL_WIDTH-0.08, 0, 0.2>,
    <LG_WALL_WIDTH-0.08, 0, 0.1>,
    0.04
   }
   cylinder {
    <2*LG_WALL_WIDTH-0.08, 0, 0.28>,
    <LG_WALL_WIDTH-0.08, 0, 0.2>,
    0.04
   }
   difference {
    box {
     <2*LG_WALL_WIDTH-0.04, 0.04, 0.28>,
     <LG_WALL_WIDTH-0.08, -0.04, 0.2>
    }
    union {
     box {
      <0, 0.05, 0>,
      <0.1, -0.05, -0.2>
      rotate <0, -atan2(0.04, 0.12)*180/pi, 0>
      translate <2*LG_WALL_WIDTH-0.08, 0, 0.28>
     }
     box {
      <0, 0.05, 0>,
      <-0.3, -0.05, 0.2>
      rotate <0, -atan2(0.08, 0.16)*180/pi, 0>
      translate <2*LG_WALL_WIDTH-0.08, 0, 0.28>
     }
    }
   }
   translate <1.18, 0, 0>
   rotate <0, 0, ROT*360/28>
   rotate <90, 0, 0>
   translate <0, 0.88, 0>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 0, 90>
 rotate <-90, 0, 0>
}

#end
