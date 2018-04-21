/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071229 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3137c02: Brick 2 x 2 with Wheels complete assembly                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3137c02)
#else
#declare lg_3137c02 = 
union {
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 2)
    union {
     sphere {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
     }
     sphere {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
     }
     sphere {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
     }
     sphere {
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     intersection {
      union {
       cylinder {
        <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
        <0, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.08>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
       difference {
        cylinder {
         <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
         <0, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
         LG_KNOB_RADIUS
        }
        box {
         <-0.3, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
         <0.3, LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT-LG_KNOB_RADIUS>
        }
       }
       torus {
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>
       }
       torus {
        LG_KNOB_RADIUS-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        translate <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>
       }
      }
      box {
       <-0.3, LG_BRICK_WIDTH+0.1, -LG_BRICK_HEIGHT+0.08>,
       <0.3, LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT-LG_KNOB_RADIUS>
      }
     }
     cylinder {
      <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_KNOB_RADIUS-0.14+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <LG_KNOB_RADIUS-0.14+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <-LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_KNOB_RADIUS+0.14-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <-LG_KNOB_RADIUS+0.14-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      LG_CORNER_SPACE
     }
     cylinder {
      <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <-(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     torus {
      0.07-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
     }
     torus {
      0.07-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
     }
     cylinder {
      <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      0.07
     }
     cylinder {
      <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>,
      <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      0.07-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      0.07
     }
     cylinder {
      <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>,
      <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
      0.07-LG_CORNER_SPACE
     }
     box {
      <LG_KNOB_RADIUS, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <LG_KNOB_RADIUS-0.14, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
     }
     box {
      <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <LG_KNOB_RADIUS-0.14+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>
     }
     box {
      <-LG_KNOB_RADIUS, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <-LG_KNOB_RADIUS+0.14, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
     }
     box {
      <-LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
      <-LG_KNOB_RADIUS+0.14-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>
     }
     #if (ROT=1)
      rotate <0, 0, 180>
     #end
    }
    #declare ROT = ROT + 1;
   #end 
   difference {
    union {
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
     }
     #declare ROT = 0;
     #while (ROT < 4)
      object {
       lg_knob_inner_space
       translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
       rotate <0, 0, ROT*90>
      }
      #declare ROT = ROT +1;
     #end
    }
   }
   object {
    lg_brick_cylinder
    translate <0, 0, -LG_BRICK_HEIGHT>
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH+0.1, -LG_BRICK_HEIGHT+0.08>,
    <0, -LG_BRICK_WIDTH-0.1, -LG_BRICK_HEIGHT+0.08>,
    0.1
   }
   box {
    <0.1, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
    <-0.1, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  object {
   lg_knob
   rotate <0, 0, 90-ROT*90>
   translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   rotate <0, 0, ROT*90>
  }
  #declare ROT = ROT +1;
 #end
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  <0, -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  0.08
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while ( ROT < 2 )
  union {
   cylinder {
    <0, -0.2, 0>,
    <0, -0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE, 0>,
    <0, -0.16, 0>,
    0.4
   }
   cylinder {
    <0, 0.2, 0>,
    <0, 0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, 0.16, 0>,
    0.4
   }
   cone {
    <0, -0.16, 0>, 0.4,
    <0, -0.048, 0>, 0.26
   }
   cone {
    <0, 0.16, 0>, 0.4,
    <0, 0.048, 0>, 0.26
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    0.26
   }
   difference {
    union {
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.2-LG_CORNER_SPACE, 0>
     }
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, -0.2+LG_CORNER_SPACE, 0>
     }
    }
    cylinder {
     <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
     <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
     0.4+LG_E
    }
   }
   cylinder {
    <0, 0.32, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
   }
   cone {
    <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
    <0, -0.3, 0>, 0.25
   }
   translate <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>
   material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT +1;
 #end
}

#declare lg_3137c02_clear = 
union {
 merge {
  difference {
   merge {
    #declare ROT = 0;
    #while (ROT < 2)
     merge {
      sphere {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
      }
      sphere {
       <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
      }
      sphere {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
      }
      sphere {
       <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      intersection {
       merge {
        cylinder {
         <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
         <0, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.08>,
         LG_KNOB_RADIUS-LG_CORNER_SPACE
        }
        difference {
         cylinder {
          <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
          <0, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
          LG_KNOB_RADIUS
         }
         box {
          <-0.3, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
          <0.3, LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT-LG_KNOB_RADIUS>
         }
        }
        torus {
         LG_KNOB_RADIUS-LG_CORNER_SPACE,
         LG_CORNER_SPACE
         translate <0, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>
        }
        torus {
         LG_KNOB_RADIUS-LG_CORNER_SPACE,
         LG_CORNER_SPACE
         translate <0, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>
        }
       }
       box {
        <-0.3, LG_BRICK_WIDTH+0.1, -LG_BRICK_HEIGHT+0.08>,
        <0.3, LG_BRICK_WIDTH-LG_E, -LG_BRICK_HEIGHT-LG_KNOB_RADIUS>
       }
      }
      cylinder {
       <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_KNOB_RADIUS-0.14+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <LG_KNOB_RADIUS-0.14+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <-LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-LG_KNOB_RADIUS+0.14-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <-LG_KNOB_RADIUS+0.14-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       LG_CORNER_SPACE
      }
      cylinder {
       <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       <-(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(14.34933204*pi/180), LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      torus {
       0.07-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
      }
      torus {
       0.07-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       translate <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
      }
      cylinder {
       <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       0.07
      }
      cylinder {
       <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>,
       <LG_KNOB_RADIUS-0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       0.07-LG_CORNER_SPACE
      }
      cylinder {
       <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       0.07
      }
      cylinder {
       <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>,
       <-LG_KNOB_RADIUS+0.07, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>,
       0.07-LG_CORNER_SPACE
      }
      box {
       <LG_KNOB_RADIUS, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <LG_KNOB_RADIUS-0.14, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
      }
      box {
       <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <LG_KNOB_RADIUS-0.14+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>
      }
      box {
       <-LG_KNOB_RADIUS, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <-LG_KNOB_RADIUS+0.14, LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.25>
      }
      box {
       <-LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.08>,
       <-LG_KNOB_RADIUS+0.14-LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -LG_BRICK_HEIGHT+0.25>
      }
      #if (ROT=1)
       rotate <0, 0, 180>
      #end
     }
     #declare ROT = ROT + 1;
    #end 
    difference {
     merge {
      box {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
       <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
      }
      box {
       <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      }
      box {
       <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
       <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      }
     }
     union {
      box {
       <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
       <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
      }
      #declare ROT = 0;
      #while (ROT < 4)
       object {
        lg_knob_inner_space_clear
        translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
        rotate <0, 0, ROT*90>
       }
       #declare ROT = ROT +1;
      #end
     }
    }
    object {
     lg_brick_cylinder_clear
     translate <0, 0, -LG_BRICK_HEIGHT>
    }
   }
   union {
    cylinder {
     <0, LG_BRICK_WIDTH+0.1, -LG_BRICK_HEIGHT+0.08>,
     <0, -LG_BRICK_WIDTH-0.1, -LG_BRICK_HEIGHT+0.08>,
     0.1
    }
    box {
     <0.1, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
     <-0.1, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
    }
   }
  }
  #declare ROT = 0;
  #while (ROT < 4)
   object {
    lg_knob_clear
    rotate <0, 0, -ROT*90>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
    rotate <0, 0, ROT*90>
   }
   #declare ROT = ROT +1;
  #end
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  <0, -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>,
  0.08
  material { texture { lg_chrome  normal { bumps 0.1 scale 2 } } }
 }
 #declare ROT = 0;
 #while ( ROT < 2 )
  merge {
   cylinder {
    <0, -0.2, 0>,
    <0, -0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE, 0>,
    <0, -0.16, 0>,
    0.4
   }
   cylinder {
    <0, 0.2, 0>,
    <0, 0.16, 0>,
    0.4-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, 0.16, 0>,
    0.4
   }
   cone {
    <0, -0.16, 0>, 0.4,
    <0, -0.048, 0>, 0.26
   }
   cone {
    <0, 0.16, 0>, 0.4,
    <0, 0.048, 0>, 0.26
   }
   cylinder {
    <0, 0.08, 0>,
    <0, -0.08, 0>,
    0.26
   }
   difference {
    union {
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.2-LG_CORNER_SPACE, 0>
     }
     torus {
      0.4-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, -0.2+LG_CORNER_SPACE, 0>
     }
    }
    cylinder {
     <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
     <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
     0.4+LG_E
    }
   }
   cylinder {
    <0, 0.32, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
    <0, 0, 0>,
    LG_KNOB_RADIUS
   }
   torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
   }
   cone {
    <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
    <0, -0.3, 0>, 0.25
   }
   translate <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+0.08>
   material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT +1;
 #end
}

#end
