/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971210 Lutz Uhlmann                                                       */
/* 20080106 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4079: Town Seat 2 x 2                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4079)
#else
#declare lg_4079 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      0.16-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     torus {
      0.16-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
     }   
     cylinder {
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.16
     }
     cylinder {
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, 0>,
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_PLATE_HEIGHT>,
      0.16-LG_CORNER_SPACE
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH+LG_E, LG_E>,
      <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH-0.16, LG_E>,
      <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH/3, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH/2, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, 1.5*LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  union {
   difference {
    union {
     difference {
      union {
       cylinder {
        <-0.35, LG_BRICK_WIDTH, 0.35>,
        <-0.35, -LG_BRICK_WIDTH, 0.35>,
        0.55-LG_CORNER_SPACE
       }
       cylinder {
        <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
        <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>,
        0.55
       }
      }
      union {
       cylinder {
        <-0.35, LG_BRICK_WIDTH, 0.35>,
        <-0.35, -LG_BRICK_WIDTH, 0.35>,
        0.35
       }
       cylinder {
        <-0.35, -LG_BRICK_WIDTH-LG_E, 0.35>,
        <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>,
        0.35+LG_CORNER_SPACE
       }
       cylinder {
        <-0.35, LG_BRICK_WIDTH+LG_E, 0.35>,
        <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
        0.35+LG_CORNER_SPACE
       }
      }
     }
     torus {
      0.55-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>
     }
     torus {
      0.35+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>
     }
     torus {
      0.55-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>
     }
     torus {
      0.35+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>
     }
    }
    union {
     box {
      <-0.35, LG_BRICK_WIDTH+LG_E, 0.35+LG_E>,
      <0.3, -LG_BRICK_WIDTH-LG_E, -0.3>
     }
     box {
      <-1, LG_BRICK_WIDTH+LG_E, 0.35>,
      <0.3, -LG_BRICK_WIDTH-LG_E, 1>
     }
     box {
      <-1, LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
      <0.3, -LG_BRICK_WIDTH-LG_E, -0.3>
     }
    }
   }
   #declare MIR = 0;
   #while (MIR < 2)
    union {
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
     }
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
     }
     cylinder {
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      LG_WALL_WIDTH
     }
     cylinder {
      <-0.7, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      LG_WALL_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
      LG_CORNER_SPACE
     }
     box {
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0.35>
     }
     box {
      <-0.7, LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0.35>
     }
     #if (MIR = 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR = MIR + 1;
   #end
   cylinder {
    <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.7-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.9+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-0.9+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT>
   }
   box {
    <-0.7, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.9, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.35>
   }
   matrix <1, 0, 0, 0, 1, 0, -0.1/1.60, 0, 1, 0, 0, 0>
  }
  union {
   box {
    <-LG_BRICK_WIDTH, 0.55, 5*LG_PLATE_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2, -0.55, 0.35>
   }
   cylinder {
    <-0.35, -0.55, 0.35>,
    <-0.35, 0.55, 0.35>,
    0.45
   }
  }
 }
}

#declare lg_4079_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     torus {
      0.16-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     torus {
      0.16-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
     }   
     cylinder {
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      0.16
     }
     cylinder {
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, 0>,
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH-0.16, -LG_PLATE_HEIGHT>,
      0.16-LG_CORNER_SPACE
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH-0.16, LG_BRICK_WIDTH+LG_E, LG_E>,
      <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
     box {
      <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH-0.16, LG_E>,
      <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH/3, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH/2, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, 1.5*LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   difference {
    merge {
     difference {
      merge {
       cylinder {
        <-0.35, LG_BRICK_WIDTH, 0.35>,
        <-0.35, -LG_BRICK_WIDTH, 0.35>,
        0.55-LG_CORNER_SPACE
       }
       cylinder {
        <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
        <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>,
        0.55
       }
      }
      union {
       cylinder {
        <-0.35, LG_BRICK_WIDTH, 0.35>,
        <-0.35, -LG_BRICK_WIDTH, 0.35>,
        0.35
       }
       cylinder {
        <-0.35, -LG_BRICK_WIDTH-LG_E, 0.35>,
        <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>,
        0.35+LG_CORNER_SPACE
       }
       cylinder {
        <-0.35, LG_BRICK_WIDTH+LG_E, 0.35>,
        <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
        0.35+LG_CORNER_SPACE
       }
      }
     }
     torus {
      0.55-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>
     }
     torus {
      0.35+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>
     }
     torus {
      0.55-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>
     }
     torus {
      0.35+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-0.35, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35>
     }
    }
    union {
     box {
      <-0.35, LG_BRICK_WIDTH+LG_E, 0.35+LG_E>,
      <0.3, -LG_BRICK_WIDTH-LG_E, -0.3>
     }
     box {
      <-1, LG_BRICK_WIDTH+LG_E, 0.35>,
      <0.3, -LG_BRICK_WIDTH-LG_E, 1>
     }
     box {
      <-1, LG_BRICK_WIDTH+LG_E, -LG_CORNER_SPACE>,
      <0.3, -LG_BRICK_WIDTH-LG_E, -0.3>
     }
    }
   }
   #declare MIR = 0;
   #while (MIR < 2)
    merge {
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
     }
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
     }
     cylinder {
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      LG_WALL_WIDTH
     }
     cylinder {
      <-0.7, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      LG_WALL_WIDTH-LG_CORNER_SPACE
     }
     cylinder {
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35>,
      LG_CORNER_SPACE
     }
     box {
      <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH, 0.35>
     }
     box {
      <-0.7, LG_BRICK_WIDTH-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
      <-0.9, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 0.35>
     }
     #if (MIR = 1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR = MIR + 1;
   #end
   cylinder {
    <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.7-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.9+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.9+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.7-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-0.9+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT>
   }
   box {
    <-0.7, LG_BRICK_WIDTH-LG_WALL_WIDTH, 5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.9, -LG_BRICK_WIDTH+LG_WALL_WIDTH, 0.35>
   }
   matrix <1, 0, 0, 0, 1, 0, -0.1/1.60, 0, 1, 0, 0, 0>
  }
  union {
   box {
    <-LG_BRICK_WIDTH, 0.55, 5*LG_PLATE_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2, -0.55, 0.35>
   }
   cylinder {
    <-0.35, -0.55, 0.35>,
    <-0.35, 0.55, 0.35>,
    0.45
   }
  }
 }
}

#end
