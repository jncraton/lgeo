/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971216 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2620: Windscreen 4 x 4 x 3 with Hinge                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2620)
#else
#declare lg_angle1 = 24.79628311*pi/180;
#declare lg_angle2 = atan2 (2*LG_BRICK_HEIGHT, 2*LG_BRICK_WIDTH);
#declare lg_2620 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    LG_CORNER_SPACE
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   sphere {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   difference {
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <(2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE)/cos(lg_angle1), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
     rotate <0, lg_angle1*180/pi, 0>
    }
    box {
     <0, 2*LG_BRICK_WIDTH+LG_E, 2*LG_WALL_WIDTH>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH>
     rotate <0, lg_angle1*180/pi, 0>
     translate <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
   }  
   cylinder {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    torus {
     LG_WALL_WIDTH+LG_CORNER_SPACE
     LG_CORNER_SPACE
    }
    union {
     box {
      <0, LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH+2*LG_CORNER_SPACE+LG_E>,
      <-LG_WALL_WIDTH-2*LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH-2*LG_CORNER_SPACE-LG_E>
     }
     box {
      <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH+2*LG_CORNER_SPACE+LG_E, 0>,
      <-LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH+2*LG_CORNER_SPACE+LG_E>
      rotate <0, lg_angle1*180/pi, 0>
     }
    }
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.08, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    <-0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-0.08, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    <-0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    0.08
   }
   box {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
    <LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH>
   }
   box {
    <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
    rotate <0, lg_angle1*180/pi, 0> 
   }
   box {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>,
    <-0.08, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   difference {
    box {
     <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
    union {
     box {
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-2*LG_BRICK_WIDTH/cos(lg_angle1), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, LG_BRICK_HEIGHT>
      rotate <0, lg_angle1*180/pi, 0>
      translate <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-3*LG_BRICK_WIDTH/cos(lg_angle2), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 2*LG_BRICK_HEIGHT>
      rotate <0, lg_angle2*180/pi, 0>
      translate <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0, 2*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0>
      rotate <0, lg_angle1*180/pi, 0>
     }
     box {
      <-0.08, 2*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0>,
      LG_WALL_WIDTH
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
    }
   }  
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR +1;
 #end
 cylinder {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
  rotate <0, lg_angle1*180/pi, 0>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>,
  <4*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  rotate <0, lg_angle1*180/pi, 0>
 }
 difference {
  box {
   <0.1, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH/cos(lg_angle2), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 0>
   translate <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
  }
  box {
   <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH>,
   <4*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
  }
 }
 difference {
  box {
   <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH/cos(lg_angle1), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle1*180/pi, 0>
   translate <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
  }
  box {
   <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_E>,
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
   rotate <0, lg_angle1*180/pi, 0>
  }
 }

 union {
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   union {
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
     <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
     <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
     <0, LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
     <0, -LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
     <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
   }
   union {
    box {
     <LG_WALL_WIDTH+LG_WALL_WIDTH+LG_E, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, 0>,
     <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>
    }
    box {
     <-LG_WALL_WIDTH/2, LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>,
     <LG_WALL_WIDTH+LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
    }
    box {
     <0, 2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
     <LG_WALL_WIDTH+LG_E, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
    }
   }
  }
  difference {
   union {
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, 0.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, 0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, -0.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, -0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, -LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, -LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
   }
   union {
    box {
     <LG_WALL_WIDTH+LG_WALL_WIDTH+LG_E, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, 0>,
     <-LG_E, -LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>
    }
    box {
     <-LG_E, LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>,
     <LG_WALL_WIDTH+LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
    }
   }
  }
  rotate <0, lg_angle1*180/pi, 0>
 }
}

#declare lg_2620_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    LG_CORNER_SPACE
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH,  -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   cylinder {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   sphere {
    <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, lg_angle1*180/pi, 0>
   }
   difference {
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <(2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE)/cos(lg_angle1), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
     rotate <0, lg_angle1*180/pi, 0>
    }
    box {
     <0, 2*LG_BRICK_WIDTH+LG_E, 2*LG_WALL_WIDTH>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH>
     rotate <0, lg_angle1*180/pi, 0>
     translate <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
   }  
   cylinder {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    torus {
     LG_WALL_WIDTH+LG_CORNER_SPACE
     LG_CORNER_SPACE
    }
    union {
     box {
      <0, LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH+2*LG_CORNER_SPACE+LG_E>,
      <-LG_WALL_WIDTH-2*LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH-2*LG_CORNER_SPACE-LG_E>
     }
     box {
      <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, LG_WALL_WIDTH+2*LG_CORNER_SPACE+LG_E, 0>,
      <-LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, LG_WALL_WIDTH+2*LG_CORNER_SPACE+LG_E>
      rotate <0, lg_angle1*180/pi, 0>
     }
    }
    translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.08, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    <-0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-0.08, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    <-0.08, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    0.08
   }
   box {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
    <LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH>
   }
   box {
    <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_E>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
    rotate <0, lg_angle1*180/pi, 0> 
   }
   box {
    <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>,
    <-0.08, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   difference {
    box {
     <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
    }
    union {
     box {
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-2*LG_BRICK_WIDTH/cos(lg_angle1), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, LG_BRICK_HEIGHT>
      rotate <0, lg_angle1*180/pi, 0>
      translate <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-3*LG_BRICK_WIDTH/cos(lg_angle2), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 2*LG_BRICK_HEIGHT>
      rotate <0, lg_angle2*180/pi, 0>
      translate <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <0, 2*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_CORNER_SPACE>
     }
     box {
      <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0>
      rotate <0, lg_angle1*180/pi, 0>
     }
     box {
      <-0.08, 2*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+0.08>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0>,
      LG_WALL_WIDTH
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
    }
   }  
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR +1;
 #end
 cylinder {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
  rotate <0, lg_angle1*180/pi, 0>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>,
  <4*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  rotate <0, lg_angle1*180/pi, 0>
 }
 difference {
  box {
   <0.1, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH/cos(lg_angle2), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 0>
   translate <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
  }
  box {
   <4*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT+LG_WALL_WIDTH>,
   <4*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
  }
 }
 difference {
  box {
   <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <-2*LG_BRICK_WIDTH/cos(lg_angle1), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle1*180/pi, 0>
   translate <2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -2*LG_PLATE_HEIGHT+LG_WALL_WIDTH-LG_CORNER_SPACE>
  }
  box {
   <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_E>,
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, LG_BRICK_HEIGHT>
   rotate <0, lg_angle1*180/pi, 0>
  }
 }

 merge {
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  difference {
   merge {
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
    }
    torus {
     LG_WALL_WIDTH-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
     <0, LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
     <0, -LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
     LG_WALL_WIDTH
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
     <0, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
     <0, LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH/2, 0>,
     <0, -LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
     <0, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
     LG_WALL_WIDTH-LG_CORNER_SPACE
    }
   }
   union {
    box {
     <LG_WALL_WIDTH+LG_WALL_WIDTH+LG_E, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, 0>,
     <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>
    }
    box {
     <-LG_WALL_WIDTH/2, LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>,
     <LG_WALL_WIDTH+LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
    }
    box {
     <0, 2*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
     <LG_WALL_WIDTH+LG_E, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
    }
   }
  }
  difference {
   merge {
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, 0.5*LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, 0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, -0.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH+0.5*LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, -0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <0, -LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>
    }
    box {
     <LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>,
     <0, -LG_BRICK_WIDTH-0.5*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
    }
   }
   union {
    box {
     <LG_WALL_WIDTH+LG_WALL_WIDTH+2*LG_E, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, 0>,
     <-LG_E, -LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>
    }
    box {
     <-LG_E, LG_WALL_WIDTH, -LG_WALL_WIDTH-LG_E>,
     <LG_WALL_WIDTH+LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
    }
   }
  }
  rotate <0, lg_angle1*180/pi, 0>
 }
}

#end