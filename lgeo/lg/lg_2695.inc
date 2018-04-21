/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990817 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2695: Wheel Center Model Team                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2695)
#else
#declare lg_2695 =
union {
 difference {
  union {
   cylinder {
    <-2*LG_WALL_WIDTH, 0, 0>,
    <2*LG_WALL_WIDTH, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH+LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_WALL_WIDTH, 0, 0>,
    <2*LG_WALL_WIDTH, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   cylinder {
    <-2*LG_WALL_WIDTH+0.08, 0, 0>,
    <-2*LG_WALL_WIDTH+0.12, 0, 0>,
    1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_WALL_WIDTH+0.08+LG_CORNER_SPACE, 0, 0>,
    <-2*LG_WALL_WIDTH+0.12, 0, 0>,
    1.6*LG_BRICK_WIDTH
   }
   cone {
    <-2*LG_WALL_WIDTH+0.12, 0, 0>, 1.6*LG_BRICK_WIDTH
    <-2*LG_WALL_WIDTH+0.16, 0, 0>, 1.5*LG_BRICK_WIDTH
   }
   cylinder {
    <-2*LG_WALL_WIDTH+0.08, 0, 0>,
    <-2*LG_WALL_WIDTH+0.12, 0, 0>,
    1.5*LG_BRICK_WIDTH
   }
   #declare ROT = 0;
   #while (ROT <6)
    union {
     difference {
      union {
       intersection {
        difference {
         box {
          <2*LG_WALL_WIDTH, 0.3, 1.5*LG_BRICK_WIDTH>,
          <-1.5*LG_WALL_WIDTH, -0.3, 1.2*LG_BRICK_WIDTH>
         }
         union {
          union {
           box {
            <LG_BRICK_WIDTH/2, 0, 1.4>,
            <-0.4, -0.2, 0>
           }
           cylinder {
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <-LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08
           }
           cylinder {
            <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08+LG_CORNER_SPACE
           }
           rotate <15, 0, 0>
          }
          union {
           box {
            <LG_BRICK_WIDTH/2, 0, 1.4>,
            <-0.4, 0.2, 0>
           }
           cylinder {
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <-LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08
           }
           cylinder {
            <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08+LG_CORNER_SPACE
           }
           rotate <-15, 0, 0>
          }
         }
        }
        cylinder {
         <LG_BRICK_WIDTH/2, 0, 0>,
         <-0.4, 0, 0>,
         1.5*LG_BRICK_WIDTH-LG_E
        }
        translate <0, 0, -LG_BRICK_WIDTH>
       }
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0>,
        <-1.75*LG_WALL_WIDTH, 0, 0>,
        0.3-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
        0.3
       }
       difference {
        torus {
         0.08+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
        }
        box {
         <0.1, 0, 0.2>,
         <-0.1, 0.2, -0.2>
        }
        translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>
        rotate <-15, 0, 0>
        translate <0, 0, -LG_BRICK_WIDTH>
       }
       difference {
        torus {
         0.08+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
        }
        box {
         <0.1, 0, 0.2>,
         <-0.1, -0.2, -0.2>
        }
        translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>
        rotate <15, 0, 0>
        translate <0, 0, -LG_BRICK_WIDTH>
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
        0.24+LG_CORNER_SPACE
       }
       cylinder {
        <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <-1.75*LG_WALL_WIDTH-LG_E, 0, 0>,
        0.24+LG_CORNER_SPACE
       }
      }
     }
     torus {
      0.24+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.24+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.3-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.3-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
     }
     box {
      <1.5*LG_WALL_WIDTH, 0.06, -LG_KNOB_RADIUS-LG_E>,
      <-1.5*LG_WALL_WIDTH+LG_E, -0.06, -LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_E>
     }
     translate <0, 0, LG_BRICK_WIDTH>
     rotate <60*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_KNOB_RADIUS
   }
   #declare ROT = 0;
   #while (ROT < 6)
    cylinder {
     <0.5, 0, LG_BRICK_WIDTH>,
     <-0.4, 0, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
     rotate <60*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 difference {
  union {
   cylinder {
    <6*LG_WALL_WIDTH, 0, 0>,
    <5.5*LG_WALL_WIDTH, 0, 0>, 
    1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <1.5*LG_WALL_WIDTH, 0, 0>, 
    1.9*LG_BRICK_WIDTH
   }
   cone {
    <0.5*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH,
    <1.5*LG_WALL_WIDTH, 0, 0>, 1.9*LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <6*LG_WALL_WIDTH, 0, 0>,
    <2.5*LG_WALL_WIDTH, 0, 0>, 
    1.7*LG_BRICK_WIDTH
   }
   cylinder {
    <6*LG_WALL_WIDTH+LG_E, 0, 0>,
    <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>, 
    1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   intersection {
    cone {
     <3*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH+LG_WALL_WIDTH/2,
     <1.5*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    cylinder {
     <6*LG_WALL_WIDTH, 0, 0>,
     <2*LG_WALL_WIDTH, 0, 0>, 
     1.7*LG_BRICK_WIDTH
    }
   }
   cylinder {
    <2*LG_WALL_WIDTH, 0, 0>,
    <-1.5*LG_WALL_WIDTH-2*LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH
   }
   cylinder {
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH+LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 difference {
  cylinder {
   <-2*LG_WALL_WIDTH+0.04, 0, 0>,
   <-2*LG_WALL_WIDTH+0.08+LG_E, 0, 0>,
   1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
   <-2*LG_WALL_WIDTH+0.1+LG_E, 0, 0>,
   1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <2*LG_WALL_WIDTH, 0, 0>,
   <-2*LG_WALL_WIDTH+0.12, 0, 0>,
   1.5*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <2*LG_WALL_WIDTH, 0, 0>,
    <-1.5*LG_WALL_WIDTH-2*LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH
   }
   cylinder {
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH+LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
}

#declare lg_2695_clear =
merge {
 difference {
  merge {
   cylinder {
    <-2*LG_WALL_WIDTH, 0, 0>,
    <2*LG_WALL_WIDTH, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH+LG_E, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_WALL_WIDTH, 0, 0>,
    <2*LG_WALL_WIDTH, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-2*LG_WALL_WIDTH+0.04+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <-2*LG_WALL_WIDTH+0.08, 0, 0>,
    <-2*LG_WALL_WIDTH+0.12, 0, 0>,
    1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_WALL_WIDTH+0.08+LG_CORNER_SPACE, 0, 0>,
    <-2*LG_WALL_WIDTH+0.12, 0, 0>,
    1.6*LG_BRICK_WIDTH
   }
   cone {
    <-2*LG_WALL_WIDTH+0.12, 0, 0>, 1.6*LG_BRICK_WIDTH
    <-2*LG_WALL_WIDTH+0.16, 0, 0>, 1.5*LG_BRICK_WIDTH
   }
   cylinder {
    <-2*LG_WALL_WIDTH+0.08, 0, 0>,
    <-2*LG_WALL_WIDTH+0.12, 0, 0>,
    1.5*LG_BRICK_WIDTH
   }
   #declare ROT = 0;
   #while (ROT <6)
    merge {
     difference {
      merge {
       intersection {
        difference {
         box {
          <2*LG_WALL_WIDTH, 0.3, 1.5*LG_BRICK_WIDTH>,
          <-1.5*LG_WALL_WIDTH, -0.3, 1.2*LG_BRICK_WIDTH>
         }
         union {
          union {
           box {
            <LG_BRICK_WIDTH/2, 0, 1.4>,
            <-0.4, -0.2, 0>
           }
           cylinder {
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <-LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08
           }
           cylinder {
            <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08+LG_CORNER_SPACE
           }
           rotate <15, 0, 0>
          }
          union {
           box {
            <LG_BRICK_WIDTH/2, 0, 1.4>,
            <-0.4, 0.2, 0>
           }
           cylinder {
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <-LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08
           }
           cylinder {
            <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            <LG_BRICK_WIDTH/2, 0, 1.4*LG_BRICK_WIDTH-0.08>,
            0.08+LG_CORNER_SPACE
           }
           rotate <-15, 0, 0>
          }
         }
        }
        cylinder {
         <LG_BRICK_WIDTH/2, 0, 0>,
         <-0.4, 0, 0>,
         1.5*LG_BRICK_WIDTH-LG_E
        }
        translate <0, 0, -LG_BRICK_WIDTH>
       }
       cylinder {
        <LG_BRICK_WIDTH/2, 0, 0>,
        <-1.75*LG_WALL_WIDTH, 0, 0>,
        0.3-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
        0.3
       }
       difference {
        torus {
         0.08+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
        }
        box {
         <0.1, 0, 0.2>,
         <-0.1, 0.2, -0.2>
        }
        translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>
        rotate <-15, 0, 0>
        translate <0, 0, -LG_BRICK_WIDTH>
       }
       difference {
        torus {
         0.08+LG_CORNER_SPACE,
         LG_CORNER_SPACE
         rotate <0, 0, 90>
        }
        box {
         <0.1, 0, 0.2>,
         <-0.1, -0.2, -0.2>
        }
        translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 1.4*LG_BRICK_WIDTH-0.08>
        rotate <15, 0, 0>
        translate <0, 0, -LG_BRICK_WIDTH>
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
        <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
        0.24+LG_CORNER_SPACE
       }
       cylinder {
        <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
        <-1.75*LG_WALL_WIDTH-LG_E, 0, 0>,
        0.24+LG_CORNER_SPACE
       }
      }
     }
     torus {
      0.24+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.24+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.3-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>
     }
     torus {
      0.3-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-1.75*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
     }
     box {
      <1.5*LG_WALL_WIDTH, 0.06, -LG_KNOB_RADIUS-LG_E>,
      <-1.5*LG_WALL_WIDTH+LG_E, -0.06, -LG_BRICK_WIDTH+LG_KNOB_RADIUS+LG_E>
     }
     translate <0, 0, LG_BRICK_WIDTH>
     rotate <60*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, 0>,
    <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_KNOB_RADIUS
   }
   #declare ROT = 0;
   #while (ROT < 6)
    cylinder {
     <0.5, 0, LG_BRICK_WIDTH>,
     <-0.4, 0, LG_BRICK_WIDTH>,
     LG_KNOB_RADIUS
     rotate <60*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 difference {
  merge {
   cylinder {
    <6*LG_WALL_WIDTH, 0, 0>,
    <5.5*LG_WALL_WIDTH, 0, 0>, 
    1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <1.5*LG_WALL_WIDTH, 0, 0>, 
    1.9*LG_BRICK_WIDTH
   }
   cone {
    <0.5*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH,
    <1.5*LG_WALL_WIDTH, 0, 0>, 1.9*LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <6*LG_WALL_WIDTH, 0, 0>,
    <2.5*LG_WALL_WIDTH, 0, 0>, 
    1.7*LG_BRICK_WIDTH
   }
   cylinder {
    <6*LG_WALL_WIDTH+LG_E, 0, 0>,
    <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>, 
    1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   intersection {
    cone {
     <3*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH+LG_WALL_WIDTH/2,
     <1.5*LG_WALL_WIDTH, 0, 0>, 1.7*LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    cylinder {
     <6*LG_WALL_WIDTH, 0, 0>,
     <2*LG_WALL_WIDTH, 0, 0>, 
     1.7*LG_BRICK_WIDTH
    }
   }
   cylinder {
    <2*LG_WALL_WIDTH, 0, 0>,
    <-1.5*LG_WALL_WIDTH-2*LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH
   }
   cylinder {
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH+LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 difference {
  cylinder {
   <-2*LG_WALL_WIDTH+0.04, 0, 0>,
   <-2*LG_WALL_WIDTH+0.08+LG_E, 0, 0>,
   1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <-2*LG_WALL_WIDTH-LG_E, 0, 0>,
   <-2*LG_WALL_WIDTH+0.1+LG_E, 0, 0>,
   1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE
  }
 }
 difference {
  cylinder {
   <2*LG_WALL_WIDTH, 0, 0>,
   <-2*LG_WALL_WIDTH+0.12, 0, 0>,
   1.5*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <2*LG_WALL_WIDTH, 0, 0>,
    <-1.5*LG_WALL_WIDTH-2*LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH
   }
   cylinder {
    <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH+LG_E, 0, 0>,
    1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.7*LG_BRICK_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <6*LG_WALL_WIDTH-LG_CORNER_SPACE, 0, 0>
 }
}

#end
