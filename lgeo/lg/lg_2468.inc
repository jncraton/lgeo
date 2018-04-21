/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981125 Lutz Uhlmann                                                       */
/* 20071201 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2468: Panel 3 x 3 x 6 Corner Convex                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2468)
#else
#declare lg_angle1=atan2(1.6,2*LG_BRICK_WIDTH);
#declare lg_angle2=atan2(1.6,LG_BRICK_WIDTH*sqrt(2));
#declare lg_2468 =
union {
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     box {
      <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0.75*LG_BRICK_WIDTH+LG_TOP_HEIGHT, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0.75*LG_BRICK_WIDTH+LG_TOP_HEIGHT, 0, -LG_WALL_WIDTH>
     }
    }
    box {
     <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
     rotate <0, -45, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
    }
   }
   difference {
    union {
     cylinder {
      <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, -2*LG_BRICK_WIDTH*sqrt(2)>,
      LG_CORNER_SPACE
     }
      box {
      <0, -LG_E, -LG_WALL_WIDTH>
      <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, LG_CORNER_SPACE, -2*LG_BRICK_WIDTH*sqrt(2)>
     }
     rotate <0, -45, 0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <0, LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0.3>
    }
   }
   union {
    cylinder {
     <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, 0>,
     <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH*sqrt(2)>,
     LG_CORNER_SPACE
    }
    box {
     <0, -LG_E, 0>
     <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_BRICK_WIDTH*sqrt(2)>
    }
    rotate <0, 45, 0>
    translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    difference {
     union {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.4*LG_BRICK_WIDTH, 0>,
        0.65*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.4*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.3, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.3, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_PLATE_HEIGHT/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -22.5, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH*sqrt(2), 0, -17*LG_PLATE_HEIGHT>
    }
    box {
     <0, -0.5, 1>,
     <1, 0.5, -1>
     rotate <0, 45, 0>
     matrix <1,0,0,
             1,1,0,
             0,0,1,
             0,0,0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>
    }
   }
   difference {
    difference {
     union {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.5*LG_BRICK_WIDTH, 0>,
        0.6*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_WALL_WIDTH/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -67.5, 0>
     translate <2.5*LG_BRICK_WIDTH, 0, -12*LG_PLATE_HEIGHT>
    }
    union {
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, 0, -45>
      translate <2.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, 45, 0>
      matrix <1,0,0,
              1,1,0,
              0,0,1,
              0,0,0>
      translate <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
   }
   difference {
    difference {
     union {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.5*LG_BRICK_WIDTH, 0>,
        0.6*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_WALL_WIDTH/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -112.5, 0>
     translate <2.5*LG_BRICK_WIDTH, 0, -4*LG_PLATE_HEIGHT>
    }
    union {
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, 0, -45>
      translate <2.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, -45, 0>
      matrix <1,0,0,
              1,1,0,
              0,0,1,
              0,0,0>
      translate <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
    }
   }
   difference {
    difference {
     union {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.4*LG_BRICK_WIDTH, 0>,
        0.6*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.4*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_WALL_WIDTH/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -157.5, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_PLATE_HEIGHT, 0, 0>
    }
    box {
     <0, -0.5, 1>,
     <1, 0.5, -1>
     rotate <0, -45, 0>
     matrix <1,0,0,
             1,1,0,
             0,0,1,
             0,0,0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
    }
   }
   box {
    <0.3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-0.06, -17*LG_PLATE_HEIGHT>,
    <0.4*LG_BRICK_WIDTH+LG_E, 0.5*LG_BRICK_WIDTH+0.06, -16*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.4*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <0.4*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_E>
    }
    box {
     <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
     <LG_BRICK_WIDTH, -LG_CORNER_SPACE, LG_BRICK_WIDTH>
     rotate <0, 45, 0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    box {
     <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, 2*LG_BRICK_WIDTH*sqrt(2)>
     rotate <0, 45, 0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    union {
     box {
      <0.4*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH, -17*LG_PLATE_HEIGHT>,
      <0, -LG_BRICK_WIDTH, -16*LG_PLATE_HEIGHT>
     }
     box {
      <0,0,-6>,
      <-1,-1,-4>
      rotate <0, 0, -45>
      translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*sqrt(2), -LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.3*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
   difference {
    box {
     <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH, -0.4*LG_BRICK_WIDTH, -LG_E>
    }
    union {
     box {
      <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
      rotate <0, -45, 0>
      translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
     }
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, -45, 0>
      matrix <1,0,0,
              1,1,0,
              0,0,1,
              0,0,0>
      translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
     }
    }
   }
   difference {
    box {
     <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)*sqrt(2)>
     rotate <0, -45, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
    }
    box {
     <0.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
     <0, -LG_BRICK_WIDTH, 0>
    }
   }
   translate <0, -LG_BRICK_WIDTH/2, 0>
   #if (MIR = 1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, 0>,
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 box {
  <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH, -16*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 object {
  lg_tech_knob_logo
  rotate <0, 0, -90>
  translate <0, 0, 0>
 }
 box {
  <LG_CORNER_SPACE, 0, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*(LG_BRICK_WIDTH-LG_CORNER_SPACE)*sqrt(2), -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  rotate <0, 0, -45>
  translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,0>
 }
 difference {
  box {
   <0, -1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
   <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/sqrt(2)/cos(lg_angle2), 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 45>
   translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.56-LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
  }
  union {
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, -1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  rotate <0, 0, -90>
  translate <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH,LG_PLATE_HEIGHT-3*LG_CORNER_SPACE-2.56+LG_CORNER_SPACE+2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
 }
 difference {
  box {
   <0, -1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
   <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/sqrt(2)/cos(lg_angle2), 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 45>
   translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.56-LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
  }
  union {
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, -1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  rotate <0, 0, -90>
  translate <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH,LG_PLATE_HEIGHT-3*LG_CORNER_SPACE-2.56+LG_CORNER_SPACE+2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
  matrix <1,0,0,0,1,0,0,0,-1,0,0,-16*LG_PLATE_HEIGHT>
 }
}

#declare lg_2468_clear =
merge {
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     box {
      <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0.75*LG_BRICK_WIDTH+LG_TOP_HEIGHT, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     box {
      <-0.3*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0.75*LG_BRICK_WIDTH+LG_TOP_HEIGHT, 0, -LG_WALL_WIDTH>
     }
    }
    box {
     <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
     <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
     rotate <0, -45, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
    }
   }
   difference {
    merge {
     cylinder {
      <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, -2*LG_BRICK_WIDTH*sqrt(2)>,
      LG_CORNER_SPACE
     }
      box {
      <0, -LG_E, -LG_WALL_WIDTH>
      <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, LG_CORNER_SPACE, -2*LG_BRICK_WIDTH*sqrt(2)>
     }
     rotate <0, -45, 0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
    box {
     <0, LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
     <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH, 0.3>
    }
   }
   merge {
    cylinder {
     <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, 0>,
     <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0, 2*LG_BRICK_WIDTH*sqrt(2)>,
     LG_CORNER_SPACE
    }
    box {
     <0, -LG_E, 0>
     <-LG_WALL_WIDTH+2*LG_CORNER_SPACE, LG_CORNER_SPACE, 2*LG_BRICK_WIDTH*sqrt(2)>
    }
    rotate <0, 45, 0>
    translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    difference {
     merge {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.4*LG_BRICK_WIDTH, 0>,
        0.65*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.4*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.3, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.3, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_PLATE_HEIGHT/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -22.5, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH*sqrt(2), 0, -17*LG_PLATE_HEIGHT>
    }
    box {
     <0, -0.5, 1>,
     <1, 0.5, -1>
     rotate <0, 45, 0>
     matrix <1,0,0,
             1,1,0,
             0,0,1,
             0,0,0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>
    }
   }
   difference {
    difference {
     merge {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.5*LG_BRICK_WIDTH, 0>,
        0.6*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_WALL_WIDTH/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -67.5, 0>
     translate <2.5*LG_BRICK_WIDTH, 0, -12*LG_PLATE_HEIGHT>
    }
    union {
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, 0, -45>
      translate <2.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, 45, 0>
      matrix <1,0,0,
              1,1,0,
              0,0,1,
              0,0,0>
      translate <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
   }
   difference {
    difference {
     merge {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.5*LG_BRICK_WIDTH, 0>,
        0.6*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.5*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_WALL_WIDTH/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -112.5, 0>
     translate <2.5*LG_BRICK_WIDTH, 0, -4*LG_PLATE_HEIGHT>
    }
    union {
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, 0, -45>
      translate <2.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, -45, 0>
      matrix <1,0,0,
              1,1,0,
              0,0,1,
              0,0,0>
      translate <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
    }
   }
   difference {
    difference {
     merge {
      difference {
       cylinder {
        <0, 0, 0>,
        <0, -1.4*LG_BRICK_WIDTH, 0>,
        0.6*LG_BRICK_WIDTH
       }
       union {
        cylinder {
         <0, LG_E, 0>,
         <0, -LG_CORNER_SPACE, 0>,
         0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
        }
        cylinder {
         <0, LG_E, 0>,
         <0, -1.4*LG_BRICK_WIDTH-LG_E, 0>,
         0.5*LG_BRICK_WIDTH
        }
       }
      }
      torus {
       0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <0, -LG_CORNER_SPACE, 0>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, LG_BRICK_WIDTH>
      }
      box {
       <LG_BRICK_WIDTH, -1.5, 0>,
       <-LG_BRICK_WIDTH, 0.1, -LG_BRICK_WIDTH>
       rotate <0, 45, 0>
      }
     }
     rotate <0, 67.5, 0>
     translate <0, LG_BRICK_WIDTH, LG_WALL_WIDTH/cos(pi/8)+0.5*LG_BRICK_WIDTH/cos(pi/8)>
     rotate <0, -157.5, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_PLATE_HEIGHT, 0, 0>
    }
    box {
     <0, -0.5, 1>,
     <1, 0.5, -1>
     rotate <0, -45, 0>
     matrix <1,0,0,
             1,1,0,
             0,0,1,
             0,0,0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
    }
   }
   box {
    <0.3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-0.06, -17*LG_PLATE_HEIGHT>,
    <0.4*LG_BRICK_WIDTH+LG_E, 0.5*LG_BRICK_WIDTH+0.06, -16*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <0.4*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <0.4*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT-LG_E>
    }
    box {
     <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>,
     <LG_BRICK_WIDTH, -LG_CORNER_SPACE, LG_BRICK_WIDTH>
     rotate <0, 45, 0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT+3*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    box {
     <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, 2*LG_BRICK_WIDTH*sqrt(2)>
     rotate <0, 45, 0>
     translate <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -17*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    union {
     box {
      <0.4*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH, -17*LG_PLATE_HEIGHT>,
      <0, -LG_BRICK_WIDTH, -16*LG_PLATE_HEIGHT>
     }
     box {
      <0,0,-6>,
      <-1,-1,-4>
      rotate <0, 0, -45>
      translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE*sqrt(2), -LG_CORNER_SPACE, 0>
     }
    }
   }
   box {
    <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.3*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
   difference {
    box {
     <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH, -0.4*LG_BRICK_WIDTH, -LG_E>
    }
    union {
     box {
      <0, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH>
      rotate <0, -45, 0>
      translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
     }
     box {
      <0, -0.5, 1>,
      <1, 0.5, -1>
      rotate <0, -45, 0>
      matrix <1,0,0,
              1,1,0,
              0,0,1,
              0,0,0>
      translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
     }
    }
   }
   difference {
    box {
     <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE, -(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)*sqrt(2)>
     rotate <0, -45, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, LG_PLATE_HEIGHT-3*LG_CORNER_SPACE>
    }
    box {
     <0.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
     <0, -LG_BRICK_WIDTH, 0>
    }
   }
   translate <0, -LG_BRICK_WIDTH/2, 0>
   #if (MIR = 1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 cylinder {
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, 0>,
  <-0.3*LG_BRICK_WIDTH, 0.3*LG_BRICK_WIDTH, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 box {
  <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -16*LG_PLATE_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH, -16*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 object {
  lg_tech_knob_logo_clear
  rotate <0, 0, -90>
  translate <0, 0, 0>
 }
 box {
  <LG_CORNER_SPACE, 0, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*(LG_BRICK_WIDTH-LG_CORNER_SPACE)*sqrt(2), -12*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
  rotate <0, 0, -45>
  translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,0>
 }
 difference {
  box {
   <0, -1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
   <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/sqrt(2)/cos(lg_angle2), 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 45>
   translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.56-LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
  }
  union {
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, -1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  rotate <0, 0, -90>
  translate <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH,LG_PLATE_HEIGHT-3*LG_CORNER_SPACE-2.56+LG_CORNER_SPACE+2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
 }
 difference {
  box {
   <0, -1.5*LG_BRICK_WIDTH, LG_CORNER_SPACE>,
   <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/sqrt(2)/cos(lg_angle2), 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   rotate <0, lg_angle2*180/pi, 45>
   translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 2.56-LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
  }
  union {
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
    matrix <0, 1, 0, 1, 0, 0, 0, 0, 1, -1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-0.3, LG_CORNER_SPACE/sqrt(2), 2.56>,
    <2.2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
    translate <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
  rotate <0, 0, -90>
  translate <-0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH,LG_PLATE_HEIGHT-3*LG_CORNER_SPACE-2.56+LG_CORNER_SPACE+2*LG_CORNER_SPACE/cos(lg_angle1)*sin(lg_angle1)>
  matrix <1,0,0,0,1,0,0,0,-1,0,0,-16*LG_PLATE_HEIGHT>
 }
}

#end
