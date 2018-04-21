/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980228 Lutz Uhlmann                                                       */
/* 20080113 Lutz Uhlmann fixed hollow stud logo and orientation                */
/* 20081124 Lutz Uhlmann fixed missing semicolon                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4262: Technic Plate 1 x 6 with Holes                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4262)
#else
#declare LENGTH=2;
#declare lg_4262 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -(LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, -LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare CYL=-LENGTH+1;
 #while (CYL<LENGTH)
  object {
   lg_plate_column
   translate <0, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL = CYL + 1;
 #end
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, 0>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LENGTH*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
 }
 #declare KNOB=-LENGTH+0.5;
 #while (KNOB<LENGTH)
  object {
   lg_tech_knob_logo
   translate <0, KNOB*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB = KNOB + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, 0>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, 0>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, LG_E>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    union {
     box {
      <LG_BRICK_WIDTH/2, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/2, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_E, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
    union {
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, 0>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, LG_E>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
     box {
      <LG_BRICK_WIDTH/2+LG_E, (LENGTH+0.5)*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2-LG_E, (LENGTH+0.5)*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  union {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   union {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, -(LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
 intersection {
  union {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   union {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
}

#declare lg_4262_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -(LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, -LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LENGTH*LG_BRICK_WIDTH+LG_WALL_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare CYL=-LENGTH+1;
 #while (CYL<LENGTH)
  object {
   lg_plate_column
   translate <0, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL = CYL + 1;
 #end
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH, 0>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LENGTH*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
 }
 #declare KNOB=-LENGTH+0.5;
 #while (KNOB<LENGTH)
  object {
   lg_tech_knob_logo_clear
   translate <0, KNOB*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB = KNOB + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.06>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, 0>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, 0>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, LG_E>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   difference {
    merge {
     box {
      <LG_BRICK_WIDTH/2, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/2, LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.04>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LENGTH*LG_BRICK_WIDTH-LG_E, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    }
    union {
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, 0>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, LG_E>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>,
      <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
      LG_BRICK_WIDTH/2
     }
     box {
      <LG_BRICK_WIDTH/2+LG_E, (LENGTH+0.5)*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2-LG_E, (LENGTH+0.5)*LG_BRICK_WIDTH+LG_E, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
     }
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  merge {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   merge {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, -(LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
 intersection {
  merge {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
     }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   merge {
    cylinder {
     <0, -LG_CORNER_SPACE-LG_E, 0>,
     <0, 0.08-LG_CORNER_SPACE, 0>,
     LG_BRICK_WIDTH/2
    }
    cylinder {
     <0, 0.08, 0>,
     <0, 0.08-LG_CORNER_SPACE-LG_E, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
    torus {
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.08-LG_CORNER_SPACE, 0>
    }
   }
   cylinder {
    <0, -2*LG_CORNER_SPACE, 0>,
    <0, 0.1, 0>,
    LG_KNOB_RADIUS
   }
  }
  rotate <-90, 0, 0>
  translate <0, (LENGTH+0.5)*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08>
 }
}

#end
