/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970713 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0970: Minifig Hips                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0970)
#else
#declare lg_angle=asin((0.24+LG_CORNER_SPACE)/(0.36+LG_CORNER_SPACE));
#declare lg_0970 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.32-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.2>,
    <0.32-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.4>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.2>,
    <-0.32+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.4>,
    LG_CORNER_SPACE
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>
   }
   torus {
    0.12-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>
   }
   difference {
    torus {
     0.36+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>
    }
    union {
     box {
      <0.5, 0.5, 0>,
      <-0.5, 1, -0.5>
      rotate <0, lg_angle*180/pi, 0>
      translate <0, 0, -LG_BRICK_HEIGHT/2>
     }
     box {
      <0.5, 0.5, 0>,
      <-0.5, 1, -0.5>
      rotate <0, -lg_angle*180/pi, 0>
      translate <0, 0, -LG_BRICK_HEIGHT/2>
     }
    }
   }
   difference {
    box {
     <LG_KNOB_RADIUS, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, -LG_E>,
     <-LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, 2*LG_KNOB_RADIUS>
    }
    union {
     box {
      <0.3, 0, -LG_E>,
      <-0.3, 0.2, 0.5>
      rotate <10, 0, 0>
      translate <0, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, 0.2>
     }
     difference {
      cylinder {
       <0, LG_BRICK_WIDTH/2, -2*LG_E>,
       <0, LG_BRICK_WIDTH/2, 0.5>,
       0.16
      }
      box {
       <0.2, LG_BRICK_WIDTH/2+0.1, -3*LG_E>,
       <-0.2, 1, 0.5>
      }
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_E>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0.5>,
      0.32
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, -LG_E>,
      <LG_BRICK_WIDTH/2, 0, 0.5>,
      0.32
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_E>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0.5>,
      0.32
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, 0, -LG_E>,
      <-LG_BRICK_WIDTH/2, 0, 0.5>,
      0.32
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  0.36
 }
 cylinder {
  <0, LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  <0, -LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  0.12
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  <0, -LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  0.12-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <(0.36+LG_CORNER_SPACE)*cos(lg_angle), -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.32-LG_CORNER_SPACE, LG_WALL_WIDTH/2, -0.2>,
  <-0.32+LG_CORNER_SPACE, -LG_WALL_WIDTH/2, -0.4>
 }
 box {
  <0.32, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.2>,
  <-0.32, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -0.4>
 }
 box {
  <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE+LG_E>
 }
 box {
  <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE+LG_E>
 }
 difference {
  cylinder {
   <0, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
   <0, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
   0.47
  }
  union {
   cylinder {
    <0, 0.9*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT/2>,
    <0, -0.9*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT/2>,
    0.36
   }
   box {
    <0.5, -1, 0>,
    <-0.5, 1, -0.5>
    rotate <0, lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_HEIGHT/2>
   }
   box {
    <0.5, -1, 0>,
    <-0.5, 1, -0.5>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_HEIGHT/2>
   }
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH, -0.24+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0.9*LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT/2>,
   <0, -0.9*LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT/2>,
   0.36+LG_CORNER_SPACE
  }
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>
 }
}

#declare lg_0970_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.32-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.2>,
    <0.32-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.4>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.2>,
    <-0.32+LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.4>,
    LG_CORNER_SPACE
   }
   torus {
    0.36-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>
   }
   torus {
    0.12-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>
   }
   difference {
    torus {
     0.36+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>
    }
    union {
     box {
      <0.5, 0.5, 0>,
      <-0.5, 1, -0.5>
      rotate <0, lg_angle*180/pi, 0>
      translate <0, 0, -LG_BRICK_HEIGHT/2>
     }
     box {
      <0.5, 0.5, 0>,
      <-0.5, 1, -0.5>
      rotate <0, -lg_angle*180/pi, 0>
      translate <0, 0, -LG_BRICK_HEIGHT/2>
     }
    }
   }
   difference {
    box {
     <LG_KNOB_RADIUS, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, -LG_E>,
     <-LG_KNOB_RADIUS, LG_BRICK_WIDTH/2-LG_KNOB_RADIUS, 2*LG_KNOB_RADIUS>
    }
    union {
     box {
      <0.3, 0, -LG_E>,
      <-0.3, 0.2, 0.5>
      rotate <10, 0, 0>
      translate <0, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS, 0.2>
     }
     difference {
      cylinder {
       <0, LG_BRICK_WIDTH/2, -2*LG_E>,
       <0, LG_BRICK_WIDTH/2, 0.5>,
       0.16
      }
      box {
       <0.2, LG_BRICK_WIDTH/2+0.1, -3*LG_E>,
       <-0.2, 1, 0.5>
      }
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_E>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0.5>,
      0.32
     }
     cylinder {
      <LG_BRICK_WIDTH/2, 0, -LG_E>,
      <LG_BRICK_WIDTH/2, 0, 0.5>,
      0.32
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_E>,
      <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0.5>,
      0.32
     }
     cylinder {
      <-LG_BRICK_WIDTH/2, 0, -LG_E>,
      <-LG_BRICK_WIDTH/2, 0, 0.5>,
      0.32
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  0.36
 }
 cylinder {
  <0, LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  <0, -LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  0.36-LG_CORNER_SPACE
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
  0.12
 }
 cylinder {
  <0, LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  <0, -LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT/2>,
  0.12-LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <(0.36+LG_CORNER_SPACE)*cos(lg_angle), -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.32-LG_CORNER_SPACE, LG_WALL_WIDTH/2, -0.2>,
  <-0.32+LG_CORNER_SPACE, -LG_WALL_WIDTH/2, -0.4>
 }
 box {
  <0.32, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -0.2>,
  <-0.32, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -0.4>
 }
 box {
  <-(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE+LG_E>
 }
 box {
  <(0.36+LG_CORNER_SPACE)*cos(lg_angle), 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.24>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE+LG_E>
 }
 difference {
  cylinder {
   <0, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
   <0, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2>,
   0.47
  }
  union {
   cylinder {
    <0, 0.9*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT/2>,
    <0, -0.9*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT/2>,
    0.36
   }
   box {
    <0.5, -1, 0>,
    <-0.5, 1, -0.5>
    rotate <0, lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_HEIGHT/2>
   }
   box {
    <0.5, -1, 0>,
    <-0.5, 1, -0.5>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0, 0, -LG_BRICK_HEIGHT/2>
   }
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH, -0.24+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0.9*LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT/2>,
   <0, -0.9*LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT/2>,
   0.36+LG_CORNER_SPACE
  }
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE-LG_E, 0.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -0.9*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>
 }
}

#end
