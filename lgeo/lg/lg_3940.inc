/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971008 Lutz Uhlmann                                                       */
/* 20080105 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3940: Space Stand 2 x 2 x 2                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3940)
#else
#declare lg_3940 =
union {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.08+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  union {
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -6*LG_PLATE_HEIGHT>,
    <0, 0, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -0.08+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -0.08>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, 0, -3*LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -4*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <0, 0, -6*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -5*LG_PLATE_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <0, 0, -6*LG_PLATE_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_E
  }
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     difference {
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT+LG_E>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        LG_KNOB_INNER_RADIUS
       }
      }
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     #if (lg_quality > 3)
      object { lego_logo_text scale 0.75 rotate <0, 0, -90*ROT> translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0> }
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
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -6*LG_PLATE_HEIGHT>
 }
}

#declare lg_3940_clear =
merge {
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.08+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -6*LG_PLATE_HEIGHT>,
    <0, 0, -6*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -0.08+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -0.08>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, 0, -3*LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -6*LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -4*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <0, 0, -6*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -5*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -5*LG_PLATE_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <0, 0, -6*LG_PLATE_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_E
  }
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     difference {
      merge {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_RADIUS
       }
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT+LG_E>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
        LG_KNOB_INNER_RADIUS
       }
      }
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
     }
     #if (lg_quality > 3)
      object { lego_logo_text scale 0.75 rotate <0, 0, -90*ROT> translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0> }
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
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -6*LG_PLATE_HEIGHT>
 }
}

#end
