/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970925 Lutz Uhlmann                                                       */
/* 20071230 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3404: Turntable 4 x 4 Top                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3404)
#else
#declare lg_3404 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   intersection {
    union {
     box {
      <LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      <0, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      LG_WALL_WIDTH/2
     }
     rotate <-10, 0, 0>
    }
    box {
     <LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_E>,
     <-LG_WALL_WIDTH, -LG_WALL_WIDTH, -2*LG_WALL_WIDTH>
    }
    translate <0, LG_BRICK_WIDTH, 0>
   }
   intersection {
    union {
     box {
      <LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      <0, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      LG_WALL_WIDTH/2
     }
     rotate <-10, 0, 0>
    }
    box {
     <LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_E>,
     <-LG_WALL_WIDTH, -LG_WALL_WIDTH, -2*LG_WALL_WIDTH>
    }
    translate <0, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 45>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   2*LG_BRICK_WIDTH-LG_WALL_WIDTH
  }
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH/2
   }
   torus {
    LG_BRICK_WIDTH/2,
    LG_TOP_HEIGHT/2
    rotate <90, 0, 0>
    scale <1, 1, 2>
    translate <0, 0, -2*LG_PLATE_HEIGHT>
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   box {
    <0.06, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>,
    <-0.06, -LG_BRICK_WIDTH, -1.5*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, 0.06, -LG_BRICK_HEIGHT>,
    <-LG_BRICK_WIDTH, -0.06, -1.5*LG_PLATE_HEIGHT>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#declare lg_3404_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   intersection {
    merge {
     box {
      <LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      <0, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      LG_WALL_WIDTH/2
     }
     rotate <-10, 0, 0>
    }
    box {
     <LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_E>,
     <-LG_WALL_WIDTH, -LG_WALL_WIDTH, -2*LG_WALL_WIDTH>
    }
    translate <0, LG_BRICK_WIDTH, 0>
   }
   intersection {
    merge {
     box {
      <LG_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, LG_WALL_WIDTH>,
      <-LG_WALL_WIDTH/2, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      <0, 0, -LG_TOP_HEIGHT+LG_WALL_WIDTH/2>,
      LG_WALL_WIDTH/2
     }
     rotate <-10, 0, 0>
    }
    box {
     <LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_E>,
     <-LG_WALL_WIDTH, -LG_WALL_WIDTH, -2*LG_WALL_WIDTH>
    }
    translate <0, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 45>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    2*LG_BRICK_WIDTH
   }
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   2*LG_BRICK_WIDTH-LG_WALL_WIDTH
  }
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    LG_BRICK_WIDTH/2
   }
   torus {
    LG_BRICK_WIDTH/2,
    LG_TOP_HEIGHT/2
    rotate <90, 0, 0>
    scale <1, 1, 2>
    translate <0, 0, -2*LG_PLATE_HEIGHT>
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   box {
    <0.06, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>,
    <-0.06, -LG_BRICK_WIDTH, -1.5*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, 0.06, -LG_BRICK_HEIGHT>,
    <-LG_BRICK_WIDTH, -0.06, -1.5*LG_PLATE_HEIGHT>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#end
