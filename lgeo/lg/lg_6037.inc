/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981024 Lutz Uhlmann                                                       */
/* 20080118 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6037: Brick 2 x 2 x 3 & 1/3 Octagonal                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6037)
#else
#declare lg_6037 =
union {
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
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
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_WIDTH>,
   LG_CYLINDER_RADIUS-LG_E
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -10*LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -10*LG_PLATE_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_CYLINDER_WALL_WIDTH/2+LG_KNOB_RADIUS,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -10*LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 #declare ROT = 0;
 #while (ROT < 8)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   rotate <0, 0, 45*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 4)
  box {
   <0.06, LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>,
   <-0.06, LG_BRICK_WIDTH*0.9, -LG_CORNER_SPACE>
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 8)
    union {
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>
     }
     rotate <0, 0, 45*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  box {
   <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT-LG_E>,
   <-4*LG_WALL_WIDTH, -4*LG_WALL_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <0.5, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
     <-0.5, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
     rotate <0, 0, 45+90*ROT>
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
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     torus {
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
      LG_KNOB_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
     }
     #if (lg_quality > 2)
      object { lego_logo_text rotate <0, 0, -90*ROT> translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT> }
     #end
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  union {
   #declare ROT = 0;
   #while (ROT < 8)
    cylinder {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
     rotate <0, 0, 45*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT+LG_E>,
     <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
    }
    union {
     #declare ROT = 0;
     #while (ROT < 4)
      box {
       <0.5, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
       <-0.5, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
       rotate <0, 0, 45+90*ROT>
      }
      box {
       <0.5, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT+LG_E>,
       <-0.5, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
       rotate <0, 0, 45+90*ROT>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
  }
 }
}

#declare lg_6037_clear =
merge {
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
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
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_WIDTH>,
   LG_CYLINDER_RADIUS-LG_E
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -10*LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -10*LG_PLATE_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_CYLINDER_WALL_WIDTH/2+LG_KNOB_RADIUS,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -10*LG_PLATE_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 #declare ROT = 0;
 #while (ROT < 8)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   rotate <0, 0, 45*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 #declare ROT = 0;
 #while (ROT < 4)
  box {
   <0.06, LG_KNOB_RADIUS, -3*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>,
   <-0.06, LG_BRICK_WIDTH*0.9, -LG_CORNER_SPACE>
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 8)
    merge {
     cylinder {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT>
     }
     box {
      <LG_BRICK_WIDTH, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -10*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH-LG_WALL_WIDTH, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), -LG_CORNER_SPACE>
     }
     rotate <0, 0, 45*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  box {
   <4*LG_WALL_WIDTH, 4*LG_WALL_WIDTH, -10*LG_PLATE_HEIGHT-LG_E>,
   <-4*LG_WALL_WIDTH, -4*LG_WALL_WIDTH, -9*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
  }
 }
 difference {
  box {
   <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    box {
     <0.5, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
     <-0.5, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
     rotate <0, 0, 45+90*ROT>
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
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
     torus {
      LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
      LG_KNOB_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
     }
     #if (lg_quality > 2)
      object { lego_logo_text rotate <0, 0, -90*ROT> translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT> }
     #end
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 8)
    cylinder {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/cos(pi/8)*sin(pi/8), LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
     rotate <0, 0, 45*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   difference {
    box {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT+LG_E>,
     <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
    }
    union {
     #declare ROT = 0;
     #while (ROT < 4)
      box {
       <0.5, LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
       <-0.5, 1.5*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
       rotate <0, 0, 45+90*ROT>
      }
      box {
       <0.5, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_KNOB_HEIGHT+LG_E>,
       <-0.5, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
       rotate <0, 0, 45+90*ROT>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
  }
 }
}

#end
