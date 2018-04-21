/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981014 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32034: Technic Connector #2 180                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32034)
#else
#declare lg_32034 =
union {
 union {
  difference {
   intersection {
    union {
     difference {
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, 0>,
       <0, 0, 0>,
       LG_BRICK_WIDTH/2+LG_E
      }
      union {
       #declare ROT = 0;
       #while (ROT < 4)
        union {
         cylinder {
          <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS
         }
         cylinder {
          <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
         }
         rotate <90*ROT, 0, 0>
        }
        #declare ROT = ROT + 1;
       #end
      }
     }
     #declare ROT = 0;
     #while (ROT < 4)
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
       rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    union {
     difference {
      union {
       cylinder {
        <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
       <LG_E, 0, 0>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
     }
    }
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  intersection {
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
    <-LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_E
   }
   union {
    #declare ROT = 0;
    #while (ROT < 2)
     union {
      torus {
       0.08-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08-LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
       LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      union {
       torus {
        0.1,
        0.03
        translate <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        <-LG_E, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        0.03
       }
       box {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, LG_KNOB_RADIUS+LG_E>,
        <-LG_E, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        <1.5*LG_BRICK_WIDTH-0.13, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        0.1
       }
       rotate <45, 0, 0>
      }
      #if (ROT=1)
       rotate <180, 0, 0>
      #end
     }
     #declare ROT = ROT + 1;
    #end
   }
  }
 }
 union {
  difference {
   intersection {
    union {
     difference {
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, 0>,
       <0, 0, 0>,
       LG_BRICK_WIDTH/2+LG_E
      }
      union {
       #declare ROT = 0;
       #while (ROT < 4)
        union {
         cylinder {
          <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS
         }
         cylinder {
          <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
         }
         rotate <90*ROT, 0, 0>
        }
        #declare ROT = ROT + 1;
       #end
      }
     }
     #declare ROT = 0;
     #while (ROT < 4)
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
       rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    union {
     difference {
      union {
       cylinder {
        <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
       <LG_E, 0, 0>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
     }
    }
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  intersection {
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
    <-LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_E
   }
   union {
    #declare ROT = 0;
    #while (ROT < 2)
     union {
      torus {
       0.08-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08-LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
       LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      union {
       torus {
        0.1,
        0.03
        translate <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        <-LG_E, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        0.03
       }
       box {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, LG_KNOB_RADIUS+LG_E>,
        <-LG_E, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        <1.5*LG_BRICK_WIDTH-0.13, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        0.1
       }
       rotate <45, 0, 0>
      }
      #if (ROT=1)
       rotate <180, 0, 0>
      #end
     }
     #declare ROT = ROT + 1;
    #end
   }
  }
  rotate <0, 180, 0>
 }
 union {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  difference {
   union {
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2, 0, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2
    }
   }
   union {
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2, 0, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <LG_BRICK_WIDTH/2-0.08, 0, 0>,
     0.3
    }
    cylinder {
     <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
     0.3
    }
    cylinder {
     <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     0.3+LG_CORNER_SPACE
    }
   }
  }
  rotate <0, 0, 90>
 }
}

#declare lg_32034_clear =
merge {
 merge {
  difference {
   intersection {
    merge {
     difference {
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, 0>,
       <0, 0, 0>,
       LG_BRICK_WIDTH/2+LG_E
      }
      union {
       #declare ROT = 0;
       #while (ROT < 4)
        union {
         cylinder {
          <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS
         }
         cylinder {
          <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
         }
         rotate <90*ROT, 0, 0>
        }
        #declare ROT = ROT + 1;
       #end
      }
     }
     #declare ROT = 0;
     #while (ROT < 4)
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
       rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    merge {
     difference {
      merge {
       cylinder {
        <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
       <LG_E, 0, 0>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
     }
    }
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  intersection {
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
    <-LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_E
   }
   merge {
    #declare ROT = 0;
    #while (ROT < 2)
     merge {
      torus {
       0.08-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08-LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
       LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      union {
       torus {
        0.1,
        0.03
        translate <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        <-LG_E, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        0.03
       }
       box {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, LG_KNOB_RADIUS+LG_E>,
        <-LG_E, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        <1.5*LG_BRICK_WIDTH-0.13, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        0.1
       }
       rotate <45, 0, 0>
      }
      #if (ROT=1)
       rotate <180, 0, 0>
      #end
     }
     #declare ROT = ROT + 1;
    #end
   }
  }
 }
 merge {
  difference {
   intersection {
    merge {
     difference {
      cylinder {
       <1.5*LG_BRICK_WIDTH, 0, 0>,
       <0, 0, 0>,
       LG_BRICK_WIDTH/2+LG_E
      }
      union {
       #declare ROT = 0;
       #while (ROT < 4)
        union {
         cylinder {
          <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <0, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS
         }
         cylinder {
          <1.5*LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>,
          LG_KNOB_RADIUS+LG_CORNER_SPACE
         }
         rotate <90*ROT, 0, 0>
        }
        #declare ROT = ROT + 1;
       #end
      }
     }
     #declare ROT = 0;
     #while (ROT < 4)
      torus {
       LG_KNOB_RADIUS+LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2>
       rotate <90*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
    merge {
     difference {
      merge {
       cylinder {
        <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <0, 0, 0>,
        LG_BRICK_WIDTH/2-LG_CORNER_SPACE
       }
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
       <LG_E, 0, 0>,
       LG_KNOB_RADIUS
      }
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
     }
    }
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  intersection {
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_E, 0, 0>,
    <-LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_E
   }
   merge {
    #declare ROT = 0;
    #while (ROT < 2)
     merge {
      torus {
       0.08-LG_CORNER_SPACE,
       LG_CORNER_SPACE
       rotate <0, 0, 90>
       translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08-LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS>,
       LG_CORNER_SPACE
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
       <1.5*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      cylinder {
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
       0.08
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      box {
       <-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
       <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, LG_KNOB_RADIUS>
      }
      union {
       torus {
        0.1,
        0.03
        translate <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        <-LG_E, 0, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>,
        0.03
       }
       box {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, LG_KNOB_RADIUS+LG_E>,
        <-LG_E, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)>
       }
       cylinder {
        <1.5*LG_BRICK_WIDTH-0.13, 0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        <1.5*LG_BRICK_WIDTH-0.13, -0.03, (LG_CROSSAXLE_WIDTH/2+0.03)/cos(pi/4)+0.1>,
        0.1
       }
       rotate <45, 0, 0>
      }
      #if (ROT=1)
       rotate <180, 0, 0>
      #end
     }
     #declare ROT = ROT + 1;
    #end
   }
  }
  rotate <0, 180, 0>
 }
 merge {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   0.3+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>
  }
  difference {
   merge {
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2, 0, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    cylinder {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2
    }
   }
   union {
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2, 0, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <LG_BRICK_WIDTH/2-0.08, 0, 0>,
     0.3
    }
    cylinder {
     <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     0.3+LG_CORNER_SPACE
    }
    cylinder {
     <-LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2+0.08, 0, 0>,
     0.3
    }
    cylinder {
     <-LG_BRICK_WIDTH/2-LG_E, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0, 0>,
     0.3+LG_CORNER_SPACE
    }
   }
  }
  rotate <0, 0, 90>
 }
}

#end
