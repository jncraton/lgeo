/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971211 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2417: Leaves 6 x 5                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2417)
#else
#declare lg_radius=sin(pi/8)*0.55-LG_WALL_WIDTH;
#declare lg_2417 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   difference {
    union {
     union {
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
      }
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH, -LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, 45>
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    union {
     union {
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
       <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
      }
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH, -LG_CORNER_SPACE>,
       <0, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <0, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <0, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, 45>
      translate <LG_BRICK_WIDTH, 0, 0>
     }
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    union {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 22.5>
   }
   difference {
    union {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 22.5>
    translate <LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT>
   }
   box {
    <LG_WALL_WIDTH, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT/2>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
     <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT/2>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
     <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    union {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 67.5>
   }
   difference {
    union {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 112.5>
   }
   union {
    box {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
    }
    box {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    rotate <0, 0, 135>
   }
   difference {
    union {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 112.5>
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    union {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 157.5>
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    union {
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     box {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     box {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
     }
     box {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
    <3*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT/2>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, 0>,
    <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
    <3*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    <3*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT/2>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#declare lg_2417_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   difference {
    merge {
     merge {
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
      }
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH, -LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, 45>
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    merge {
     merge {
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
       <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
      }
      box {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH, -LG_CORNER_SPACE>,
       <0, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <0, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <0, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <LG_BRICK_WIDTH*sqrt(2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, 45>
      translate <LG_BRICK_WIDTH, 0, 0>
     }
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    merge {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 22.5>
   }
   difference {
    merge {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 22.5>
    translate <LG_BRICK_WIDTH, 0, 0>
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT>
   }
   box {
    <LG_WALL_WIDTH, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT/2>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
     <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT/2>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
     <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
     <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    merge {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 67.5>
   }
   difference {
    merge {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 112.5>
   }
   merge {
    box {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
    }
    box {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <2*LG_BRICK_WIDTH*sqrt(2)-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    rotate <0, 0, 135>
   }
   difference {
    merge {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 112.5>
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    merge {
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     difference {
      box {
       <0, 0.08, 0>
       <-1.5*LG_WALL_WIDTH, -0.08, -LG_TOP_HEIGHT>
      }
      union {
       cylinder {
        <0, 0, 0>,
        <0, 0, -LG_TOP_HEIGHT>,
        lg_radius
       }
       cylinder {
        <0, 0, LG_E>,
        <0, 0, -LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_TOP_HEIGHT-LG_E>,
        <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
        lg_radius+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, 22.5>
     }
     box {
      <0, LG_WALL_WIDTH, LG_E>,
      <LG_WALL_WIDTH, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
      rotate <0, 0, -22.5>
     }
    }
    translate <0.55, 0, 0>
    rotate <0, 0, 157.5>
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    merge {
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     box {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     box {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
     }
     box {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
    <3*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT/2>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, 0>,
    <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
    <3*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT+LG_E>,
    <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    <3*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
 }
 box {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_KNOB_INNER_RADIUS, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT/2>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#end
