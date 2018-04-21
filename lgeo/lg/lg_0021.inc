/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970914 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0021: Windscreen 2 x 4 x 1 & 2/3                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0021)
#else
#declare lg_angle=atan2(LG_BRICK_WIDTH, 4*LG_PLATE_HEIGHT)*180/pi;
#declare lg_0021 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   intersection {
    difference {
     cylinder {
      <0, 0, 0>,
      <0, 0, -4*LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
     cylinder {
      <0, 0, LG_CORNER_SPACE+LG_E>,
      <0, 0, -6*LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2-LG_WALL_WIDTH
     }
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -5*LG_PLATE_HEIGHT>
    }
    matrix <1, 0, 2/LG_BRICK_WIDTH*LG_CORNER_SPACE*sin(lg_angle*pi/180),
            0, 1, 0,
            -.8/1.28, 0, 1,
            LG_CORNER_SPACE*(cos(lg_angle*pi/180)-1), 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>
    }
    translate <0, 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>
    }
    translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>
    }
    translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   intersection {
    difference {
     union {
      cylinder {
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       LG_BRICK_WIDTH/2
      }
      cylinder {
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>,
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>,
       LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
     }
     cylinder {
      <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT+LG_TOP_HEIGHT>,
      <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_E>,
      LG_BRICK_WIDTH/2-LG_WALL_WIDTH
     }
    }
    box {
     <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <1.5*LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH+LG_E, -5*LG_PLATE_HEIGHT-LG_E>
    }
   }
   difference {
    union {
     box {
      <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    box {
     <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -5*LG_PLATE_HEIGHT>
     matrix <1, 0, 2/LG_BRICK_WIDTH*LG_CORNER_SPACE*sin(lg_angle*pi/180),
             0, 1, 0,
             -.8/1.28, 0, 1,
             LG_CORNER_SPACE*(cos(lg_angle*pi/180)-1), 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>
    }
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob
    translate <0, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    translate <0, 0.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -5*LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   intersection {
    union {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_CORNER_SPACE-LG_E>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -LG_WALL_WIDTH>,
      LG_BRICK_WIDTH/2
     }
    } 
    box {
     <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2-LG_E, LG_E>,
     <0, 0, -LG_WALL_WIDTH-LG_E>
    }
    translate <0, 1.5*LG_BRICK_WIDTH, 0>
   }
   intersection {
    union {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_CORNER_SPACE-LG_E>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -LG_WALL_WIDTH>,
      LG_BRICK_WIDTH/2
     }
    } 
    box {
     <LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E, LG_E>,
     <0, 0, -LG_WALL_WIDTH-LG_E>
    }
    translate <0, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
  }
  union {
   object {
    lg_knob_inner_space
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space
    translate <0, -0.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space
    translate <0, -1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>
  matrix <1, 0, 2/LG_BRICK_WIDTH*LG_CORNER_SPACE*sin(lg_angle*pi/180),
          0, 1, 0,
          -.8/1.28, 0, 1,
          LG_CORNER_SPACE*(cos(lg_angle*pi/180)-1), 0, -LG_CORNER_SPACE>
 }
}

#declare lg_0021_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   intersection {
    difference {
     cylinder {
      <0, 0, 0>,
      <0, 0, -4*LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
     cylinder {
      <0, 0, LG_CORNER_SPACE+LG_E>,
      <0, 0, -6*LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2-LG_WALL_WIDTH
     }
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -5*LG_PLATE_HEIGHT>
    }
    matrix <1, 0, 2/LG_BRICK_WIDTH*LG_CORNER_SPACE*sin(lg_angle*pi/180),
            0, 1, 0,
            -.8/1.28, 0, 1,
            LG_CORNER_SPACE*(cos(lg_angle*pi/180)-1), 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>
    }
    translate <0, 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>
    }
    translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>
    }
    translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   intersection {
    difference {
     merge {
      cylinder {
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       LG_BRICK_WIDTH/2
      }
      cylinder {
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>,
       <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>,
       LG_BRICK_WIDTH/2-LG_CORNER_SPACE
      }
     }
     cylinder {
      <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT+LG_TOP_HEIGHT>,
      <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_E>,
      LG_BRICK_WIDTH/2-LG_WALL_WIDTH
     }
    }
    box {
     <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <1.5*LG_BRICK_WIDTH+LG_E, 2*LG_BRICK_WIDTH+LG_E, -5*LG_PLATE_HEIGHT-LG_E>
    }
   }
   difference {
    merge {
     box {
      <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
    }
    box {
     <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2+LG_E, LG_CORNER_SPACE+LG_E>,
     <0, 0, -5*LG_PLATE_HEIGHT>
     matrix <1, 0, 2/LG_BRICK_WIDTH*LG_CORNER_SPACE*sin(lg_angle*pi/180),
             0, 1, 0,
             -.8/1.28, 0, 1,
             LG_CORNER_SPACE*(cos(lg_angle*pi/180)-1), 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>
    }
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_clear
    translate <0, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    translate <0, 0.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH/2, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -5*LG_PLATE_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT>,
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   intersection {
    merge {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_CORNER_SPACE-LG_E>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -LG_WALL_WIDTH>,
      LG_BRICK_WIDTH/2
     }
    } 
    box {
     <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2-LG_E, LG_E>,
     <0, 0, -LG_WALL_WIDTH-LG_E>
    }
    translate <0, 1.5*LG_BRICK_WIDTH, 0>
   }
   intersection {
    merge {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_CORNER_SPACE-LG_E>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -LG_WALL_WIDTH>,
      LG_BRICK_WIDTH/2
     }
    } 
    box {
     <LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E, LG_E>,
     <0, 0, -LG_WALL_WIDTH-LG_E>
    }
    translate <0, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, 0>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -0.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH, -4*LG_PLATE_HEIGHT>
  matrix <1, 0, 2/LG_BRICK_WIDTH*LG_CORNER_SPACE*sin(lg_angle*pi/180),
          0, 1, 0,
          -.8/1.28, 0, 1,
          LG_CORNER_SPACE*(cos(lg_angle*pi/180)-1), 0, -LG_CORNER_SPACE>
 }
}

#end
