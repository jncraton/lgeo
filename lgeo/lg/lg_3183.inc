/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971202 Lutz Uhlmann                                                       */
/* 20071229 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3183: Plate 1 x 4 with Towball Coupling                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3183)
#else
#declare LENGTH = 1;
#declare WIDTH = 4;
#declare lg_3183 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
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
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare ROT = 0;
   #while (ROT < 2)
    object {
     lg_knob_inner_space
     translate <0, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     rotate <0, 0, ROT*90>
    }
    object {
     lg_knob_inner_space
     translate <0, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     rotate <0, 0, ROT*180>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 object {
  lg_knob
  translate <1.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_knob
  translate <0.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_knob
  translate <-0.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_knob
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_plate_column
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 difference {
  union {
   intersection {
    union {
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, LG_E>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    }
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.43+LG_WALL_WIDTH, 0>,
     <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      LG_WALL_WIDTH
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      LG_WALL_WIDTH
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.365,
    0.085
    rotate <0, 0, 90>
    translate <1.1-0.085, 0, -LG_WALL_WIDTH>
   }
   difference {
    union {
     torus {
      0.365,
      0.085
      rotate <0, 0, 90>
      translate <0.485, 0, -LG_WALL_WIDTH>
     }
     cylinder {
      <0.4, 0, -LG_WALL_WIDTH>,
      <0.8, 0, -LG_WALL_WIDTH>,
      0.365
     }
     cylinder {
      <0.485, 0, -LG_WALL_WIDTH>,
      <1.015, 0, -LG_WALL_WIDTH>,
      0.45
     }
    }
    cylinder {
     <1.1, 0, -LG_WALL_WIDTH>,
     <0.5, 0, -LG_WALL_WIDTH>,
     0.32
    }
   }
  }
  union {
   box {
    <1.5*LG_BRICK_WIDTH, 0.04, 0.4>,
    <0.6, -0.04, -0.8>
   }
   cylinder {
    <0.6, 0, 0.4>,
    <0.6, 0, -0.8>,
    0.04
   }
   box {
    <1.5*LG_BRICK_WIDTH, 0.5, -LG_WALL_WIDTH+0.04>,
    <0.6, -0.5, -LG_WALL_WIDTH-0.04>
   }
   cylinder {
    <0.6, 0.5, -LG_WALL_WIDTH>,
    <0.6, -0.5, -LG_WALL_WIDTH>,
    0.04
   }
   cylinder {
    <1.1, 0.5, -LG_WALL_WIDTH>,
    <1.1, -0.5, -LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
  }
 }
} 

#declare lg_3183_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
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
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   #declare ROT = 0;
   #while (ROT < 2)
    object {
     lg_knob_inner_space_clear
     translate <0, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     rotate <0, 0, ROT*90>
    }
    object {
     lg_knob_inner_space_clear
     translate <0, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     rotate <0, 0, ROT*180>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 object {
  lg_knob_clear
  translate <1.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_knob_clear
  translate <0.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_knob_clear
  translate <-0.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_knob_clear
  translate <-1.5*LG_BRICK_WIDTH, 0, 0>
  rotate <0, 0, 90>
 }
 object {
  lg_plate_column_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column_clear
  translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_column_clear
  translate <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   intersection {
    merge {
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, LG_E>,
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE-LG_E, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    }
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.43+LG_WALL_WIDTH, 0>,
     <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      LG_WALL_WIDTH
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0.43+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, 0>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      LG_WALL_WIDTH
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -0.43-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_WALL_WIDTH+LG_CORNER_SPACE
     }
    }
   }
   torus {
    0.365,
    0.085
    rotate <0, 0, 90>
    translate <1.1-0.085, 0, -LG_WALL_WIDTH>
   }
   difference {
    merge {
     torus {
      0.365,
      0.085
      rotate <0, 0, 90>
      translate <0.485, 0, -LG_WALL_WIDTH>
     }
     cylinder {
      <0.4, 0, -LG_WALL_WIDTH>,
      <0.8, 0, -LG_WALL_WIDTH>,
      0.365
     }
     cylinder {
      <0.485, 0, -LG_WALL_WIDTH>,
      <1.015, 0, -LG_WALL_WIDTH>,
      0.45
     }
    }
    cylinder {
     <1.1, 0, -LG_WALL_WIDTH>,
     <0.5, 0, -LG_WALL_WIDTH>,
     0.32
    }
   }
  }
  union {
   box {
    <1.5*LG_BRICK_WIDTH, 0.04, 0.4>,
    <0.6, -0.04, -0.8>
   }
   cylinder {
    <0.6, 0, 0.4>,
    <0.6, 0, -0.8>,
    0.04
   }
   box {
    <1.5*LG_BRICK_WIDTH, 0.5, -LG_WALL_WIDTH+0.04>,
    <0.6, -0.5, -LG_WALL_WIDTH-0.04>
   }
   cylinder {
    <0.6, 0.5, -LG_WALL_WIDTH>,
    <0.6, -0.5, -LG_WALL_WIDTH>,
    0.04
   }
   cylinder {
    <1.1, 0.5, -LG_WALL_WIDTH>,
    <1.1, -0.5, -LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
  }
 }
} 

#end
