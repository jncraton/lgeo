/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980308 Lutz Uhlmann                                                       */
/* 20080127 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30033: Bar 4 x 4 octagonal with 4 Studs                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30033)
#else
#declare lg_30033 =
union {
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 2)
    union {
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
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
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
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
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
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_E>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_E>
     }
     rotate <0, 0, 45+90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  cylinder {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, 0, 45+90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 4)
  object {
   lg_knob
   rotate <0, 0, -90*ROT>
   translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   rotate <0, 0, ROT*90>
  }
  #declare ROT = ROT +1;
 #end
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_TOP_HEIGHT>,
    0.08
   }
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    0.08-LG_CORNER_SPACE
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, >
    translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_TOP_HEIGHT>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 8)
  union {
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -0.08>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -0.08>
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08, -0.08>,
    <1.6*LG_BRICK_WIDTH, -0.08, -0.08>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -0.08>,
    <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -0.08>,
    LG_KNOB_RADIUS
   }
   box {
    <1.6*LG_BRICK_WIDTH, 0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, -0.08, -LG_CORNER_SPACE>
   }
   box {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-0.06, -0.08+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   rotate <0, 0, 22.5+45*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   #declare ROT=0;
   #while (ROT < 8)
    cylinder {
     <1.5*LG_BRICK_WIDTH, 0.5, -0.08>,
     <1.5*LG_BRICK_WIDTH, -0.5, -0.08>,
     LG_WALL_WIDTH
     rotate <0, 0, 45*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  box {
   <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH+LG_E, -LG_E>,
   <-LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH>
  }
 }
}

#declare lg_30033_clear =
merge {
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 2)
    merge {
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
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
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
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
      <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_CORNER_SPACE>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
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
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     box {
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_E>
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_E>
     }
     rotate <0, 0, 45+90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  cylinder {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, 0, 45+90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 4)
  object {
   lg_knob_clear
   rotate <0, 0, -90*ROT>
   translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   rotate <0, 0, ROT*90>
  }
  #declare ROT = ROT +1;
 #end
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_TOP_HEIGHT>,
    0.08
   }
   cylinder { 
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    0.08-LG_CORNER_SPACE
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, >
    translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_TOP_HEIGHT>
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
   }
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
    <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 8)
  merge {
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -0.08>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -0.08>
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08, -0.08>,
    <1.6*LG_BRICK_WIDTH, -0.08, -0.08>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -0.08>,
    <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -0.08>,
    LG_KNOB_RADIUS
   }
   box {
    <1.6*LG_BRICK_WIDTH, 0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, -0.08, -LG_CORNER_SPACE>
   }
   box {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-0.06, -0.08+LG_CORNER_SPACE, 0>
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.6*LG_BRICK_WIDTH, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-0.06, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   rotate <0, 0, 22.5+45*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   #declare ROT=0;
   #while (ROT < 8)
    cylinder {
     <1.5*LG_BRICK_WIDTH, 0.5, -0.08>,
     <1.5*LG_BRICK_WIDTH, -0.5, -0.08>,
     LG_WALL_WIDTH
     rotate <0, 0, 45*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  box {
   <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH+LG_E, -LG_E>,
   <-LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH>
  }
 }
}

#end
