/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981231 Lutz Uhlmann                                                       */
/* 20081125 Lutz Uhlmann fixed center                                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3649: Technic Gear 40 Tooth                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3649)
#else
#declare lg_angle1=asin(LG_CORNER_SPACE/(LG_BRICK_WIDTH/2-0.06-LG_CORNER_SPACE));
#declare lg_angle2=25.920611535/180*pi;
#declare lg_3649 =
union {
 difference {
  union {
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    1.88
   }
   cylinder {
    <0, 0, 0.2>,
    <0, 0,-0.2>,
    1.88-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    1.78
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    1.78+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    1.78+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  1.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 torus {
  1.78+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  1.78+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 difference {
  union {
   cylinder {
    <0, 0, 0.06>,
    <0, 0, -0.06>,
    1.8
   }
   intersection {
    union {
     box {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH*sqrt(2), LG_BRICK_WIDTH*sqrt(2), LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2), -LG_BRICK_WIDTH*sqrt(2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     rotate <0, 0, 45>
    }
    difference {
     box {
      <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0.5>,
      <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.5>
     }
     union {
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, 0.4>,
       <1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, 0, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <-1.5*LG_BRICK_WIDTH, 0, 0.4>,
       <-1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1
      }
      cylinder {
       <-1.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <-1.5*LG_BRICK_WIDTH, 0, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <-1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <-1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, 0.4>,
       <0, 1.5*LG_BRICK_WIDTH, -0.4>,
       0.1
      }
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <0, 1.5*LG_BRICK_WIDTH, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <0, 1.5*LG_BRICK_WIDTH, -0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, -1.5*LG_BRICK_WIDTH, 0.4>,
       <0, -1.5*LG_BRICK_WIDTH, -0.4>,
       0.1
      }
      cylinder {
       <0, -1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <0, -1.5*LG_BRICK_WIDTH, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <0, -1.5*LG_BRICK_WIDTH, -0.4>,
       0.1+LG_CORNER_SPACE
      }
     }
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      0.3-LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.3
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      0.3-LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.3
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, 0.4>,
      <LG_BRICK_WIDTH, 0, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, 0, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, 0, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH+0.04, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS-0.04, 0.4>,
      <LG_BRICK_WIDTH-0.04, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS+0.04, -0.4>
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS-0.04, 0.4>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS-0.04, -0.4>,
      0.04
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS+0.04, 0.4>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS+0.04, -0.4>,
      0.04
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   cylinder {
    <0, 0, 0.4>,
    <0, 0, -0.4>,
    LG_KNOB_RADIUS
   }
   box {
    <0.06, 0.55*LG_BRICK_WIDTH, 0.4>,
    <-0.06, -0.55*LG_BRICK_WIDTH, -0.4>
   }
   cylinder {
    <0, 0.55*LG_BRICK_WIDTH, 0.4>,
    <0, 0.55*LG_BRICK_WIDTH, -0.4>,
    0.06
   }
   cylinder {
    <0, -0.55*LG_BRICK_WIDTH, 0.4>,
    <0, -0.55*LG_BRICK_WIDTH, -0.4>,
    0.06
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   union {
    box {
     <1.78+LG_CORNER_SPACE, 0.1, 0.2-LG_CORNER_SPACE>,
     <1, -0.1, -0.2+LG_CORNER_SPACE>
    }
    box {
     <1.78+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0.2>,
     <1, -0.1+LG_CORNER_SPACE, -0.2>
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     <1, 0.1-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     <1, -0.1+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     <1, 0.1-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     <1, -0.1+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    rotate <0, 0, 45>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    torus {
     0.1+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0, 0.2, 0.1>,
     <0.2, -0.2, -0.1>
    }
    translate <3*LG_BRICK_WIDTH/2, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    torus {
     0.1+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0, 0.2, 0.1>,
     <0.2, -0.2, -0.1>
    }
    translate <3*LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     intersection {
      union {
       box {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
      }
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -0.4-LG_E>,
       LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
      }
     }
     rotate <0, 0, 90*ROT2>
     translate <LG_BRICK_WIDTH, 0, 2*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0.04, 0.3, 0.1>,
     <-0.04, -0.3, -0.1>
    }
    translate <LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0.04, 0.3, 0.1>,
     <-0.04, -0.3, -0.1>
    }
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
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
    box {
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2>,
     <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2>
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
      <0.06, 0.5, 0.5>,
      <-0.06, -0.5, -0.5>
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
     <0.06, 0.3, 0.5>,
     <-0.06, -0.3, -0.5>
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
    <0.06, 0.5*LG_BRICK_WIDTH-(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-0.06, LG_BRICK_WIDTH, -0.5>
   }
   box {
    <0.06, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-0.06, -LG_BRICK_WIDTH, -0.5>
   }
  }
 }
 union {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
 }
 union {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
  matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 ,0>
 }
 union {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
  matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 union {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
  matrix <-1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 union {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 union {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 union {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
 }
 union {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 40)
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
   translate <1.78, 0, 0>
   rotate <0, 0, ROT*9>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#declare lg_3649_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, -0.2+LG_CORNER_SPACE>,
    1.88
   }
   cylinder {
    <0, 0, 0.2>,
    <0, 0,-0.2>,
    1.88-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0.2>,
    <0, 0, -0.2>,
    1.78
   }
   cylinder {
    <0, 0, 0.2-LG_CORNER_SPACE>,
    <0, 0, 0.2+LG_E>,
    1.78+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.2+LG_CORNER_SPACE>,
    <0, 0, -0.2-LG_E>,
    1.78+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  1.88-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 torus {
  1.78+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.2-LG_CORNER_SPACE>
 } 
 torus {
  1.78+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.2+LG_CORNER_SPACE>
 } 
 difference {
  merge {
   cylinder {
    <0, 0, 0.06>,
    <0, 0, -0.06>,
    1.8
   }
   intersection {
    merge {
     box {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH*sqrt(2), LG_BRICK_WIDTH*sqrt(2), LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2), -LG_BRICK_WIDTH*sqrt(2), -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH*sqrt(2)+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     rotate <0, 0, 45>
    }
    difference {
     box {
      <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0.5>,
      <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -0.5>
     }
     union {
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, 0.4>,
       <1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, 0, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <-1.5*LG_BRICK_WIDTH, 0, 0.4>,
       <-1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1
      }
      cylinder {
       <-1.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <-1.5*LG_BRICK_WIDTH, 0, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <-1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <-1.5*LG_BRICK_WIDTH, 0, -0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, 0.4>,
       <0, 1.5*LG_BRICK_WIDTH, -0.4>,
       0.1
      }
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <0, 1.5*LG_BRICK_WIDTH, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <0, 1.5*LG_BRICK_WIDTH, -0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, -1.5*LG_BRICK_WIDTH, 0.4>,
       <0, -1.5*LG_BRICK_WIDTH, -0.4>,
       0.1
      }
      cylinder {
       <0, -1.5*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
       <0, -1.5*LG_BRICK_WIDTH, 0.4>,
       0.1+LG_CORNER_SPACE
      }
      cylinder {
       <0, -1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
       <0, -1.5*LG_BRICK_WIDTH, -0.4>,
       0.1+LG_CORNER_SPACE
      }
     }
    }
   }
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      0.3-LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.3
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
      0.3-LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.3
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, 0.4>,
      <LG_BRICK_WIDTH, 0, -0.4>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, 0, 0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, 0, -0.4>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH+0.04, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS-0.04, 0.4>,
      <LG_BRICK_WIDTH-0.04, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS+0.04, -0.4>
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS-0.04, 0.4>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_KNOB_RADIUS-0.04, -0.4>,
      0.04
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS+0.04, 0.4>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_KNOB_RADIUS+0.04, -0.4>,
      0.04
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   cylinder {
    <0, 0, 0.4>,
    <0, 0, -0.4>,
    LG_KNOB_RADIUS
   }
   box {
    <0.06, 0.55*LG_BRICK_WIDTH, 0.4>,
    <-0.06, -0.55*LG_BRICK_WIDTH, -0.4>
   }
   cylinder {
    <0, 0.55*LG_BRICK_WIDTH, 0.4>,
    <0, 0.55*LG_BRICK_WIDTH, -0.4>,
    0.06
   }
   cylinder {
    <0, -0.55*LG_BRICK_WIDTH, 0.4>,
    <0, -0.55*LG_BRICK_WIDTH, -0.4>,
    0.06
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   merge {
    box {
     <1.78+LG_CORNER_SPACE, 0.1, 0.2-LG_CORNER_SPACE>,
     <1, -0.1, -0.2+LG_CORNER_SPACE>
    }
    box {
     <1.78+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0.2>,
     <1, -0.1+LG_CORNER_SPACE, -0.2>
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     <1, 0.1-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     <1, -0.1+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, 0.1-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     <1, 0.1-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <1.78+LG_CORNER_SPACE, -0.1+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     <1, -0.1+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    rotate <0, 0, 45>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <3*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    torus {
     0.1+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0, 0.2, 0.1>,
     <0.2, -0.2, -0.1>
    }
    translate <3*LG_BRICK_WIDTH/2, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    torus {
     0.1+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0, 0.2, 0.1>,
     <0.2, -0.2, -0.1>
    }
    translate <3*LG_BRICK_WIDTH/2, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #declare ROT2 = 0;
   #while (ROT2 < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH>,
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
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     intersection {
      merge {
       box {
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
        <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
        <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -4*LG_WALL_WIDTH>
       }
       box {
        <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -4*LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
      }
      cylinder {
       <0, 0, LG_E>,
       <0, 0, -0.4-LG_E>,
       LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
      }
     }
     rotate <0, 0, 90*ROT2>
     translate <LG_BRICK_WIDTH, 0, 2*LG_WALL_WIDTH>
    }
    #declare ROT2 = ROT2 + 1;
   #end
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0.04, 0.3, 0.1>,
     <-0.04, -0.3, -0.1>
    }
    translate <LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
    }
    box {
     <0.04, 0.3, 0.1>,
     <-0.04, -0.3, -0.1>
    }
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
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
    box {
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
     <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
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
      <0.06+0*LG_CORNER_SPACE, 0.5, 0.5>,
      <-0.06-0*LG_CORNER_SPACE, -0.5, -0.5>
     }
    }
   }
   difference {
    merge {
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
     <0.04+LG_CORNER_SPACE, 0.3, 0.5>,
     <-0.04-LG_CORNER_SPACE, -0.3, -0.5>
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
    <0.06, 0.5*LG_BRICK_WIDTH-(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-0.06, LG_BRICK_WIDTH, -0.5>
   }
   box {
    <0.06, -0.5*LG_BRICK_WIDTH+(0.3+LG_CORNER_SPACE)*sin(lg_angle1), 0.5>,
    <-0.06, -LG_BRICK_WIDTH, -0.5>
   }
  }
 }
 merge {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.04, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
 }
 merge {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
  matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0 ,0>
 }
 merge {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
  matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 merge {
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  box {
   <-LG_BRICK_WIDTH/2+(0.3+LG_CORNER_SPACE)*cos(lg_angle1), -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>,
   <-0.06, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE>
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
  matrix <-1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0 ,0>
 }
 merge {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 merge {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
 }
 merge {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  rotate <0, 0, 180>
  translate <-LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
 }
 merge {
  sphere {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.1-LG_CORNER_SPACE, 0>,
   <0.12, 0.1-LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, -0.1+LG_CORNER_SPACE, 0>,
   <0.12, -0.1+LG_CORNER_SPACE, 0>,
   LG_CORNER_SPACE
  }
  box {
   <0, 0.1-LG_CORNER_SPACE, LG_CORNER_SPACE>,
   <0.12, -0.1+LG_CORNER_SPACE, -LG_E>
  }
  box {
   <0, 0.1, 0>,
   <0.12, -0.1, -0.1>
  }
  rotate <0, 40, 0>
  translate <LG_BRICK_WIDTH/2, 0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE>
  matrix <1, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 40)
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
   translate <1.78, 0, 0>
   rotate <0, 0, ROT*9>
  }
  #declare ROT = ROT + 1;
 #end
 rotate <0, 90, 0>
}

#end
