/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971015 Lutz Uhlmann                                                       */
/* 20080115 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4591: Brick 2 x 2 x 2 Round with Fins                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4591)
#else
#declare lg_4591 =
union {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  union {
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   intersection {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    union {
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
    }
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
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
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
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
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
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
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
     }
     box {
      <2*LG_BRICK_WIDTH, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_WALL_WIDTH/2, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     difference {
      union {
       cylinder {
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
        <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>,
        LG_CORNER_SPACE
       }
       box {
        <-LG_E, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>
       }
       box {
        <0, LG_WALL_WIDTH/2, 0>,
        <-LG_BRICK_WIDTH, -LG_WALL_WIDTH/2, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>
       }
       rotate <0, -26.7, 0>
       translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
       <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       <0, 0, -2.5*LG_BRICK_HEIGHT>,
       2*LG_BRICK_WIDTH
      }
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
 }
}

#declare lg_4591_clear =
merge {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -2*LG_BRICK_HEIGHT>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_KNOB_HEIGHT+2*LG_E>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   intersection {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_BRICK_WIDTH-LG_WALL_WIDTH
    }
    union {
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
    }
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
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
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
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
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
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
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, 0>,
   <0, 0, -2*LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
     }
     box {
      <2*LG_BRICK_WIDTH, LG_WALL_WIDTH/2-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH-LG_KNOB_RADIUS, LG_WALL_WIDTH/2, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     difference {
      merge {
       cylinder {
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>,
        LG_CORNER_SPACE
       }
       cylinder {
        <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 0>,
        <0, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>,
        LG_CORNER_SPACE
       }
       box {
        <-LG_E, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
        <LG_CORNER_SPACE, -LG_WALL_WIDTH/2+LG_CORNER_SPACE, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>
       }
       box {
        <0, LG_WALL_WIDTH/2, 0>,
        <-LG_BRICK_WIDTH, -LG_WALL_WIDTH/2, 5*LG_PLATE_HEIGHT/cos(26.7*pi/180)>
       }
       rotate <0, -26.7, 0>
       translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
      }
      cylinder {
       <0, 0, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       <0, 0, -2.5*LG_BRICK_HEIGHT>,
       2*LG_BRICK_WIDTH
      }
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -2*LG_BRICK_HEIGHT-LG_E>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
 }
}

#end
