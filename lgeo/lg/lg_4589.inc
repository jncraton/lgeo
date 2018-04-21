/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971216 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4589: Cone 1 x 1                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4589)
#else
#declare lg_4589 =
union {
 difference { 
  union {
   object {
    lg_tech_knob
    translate <0, 0, LG_BRICK_HEIGHT>
   }
   union {
    difference {
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      <0, 0, LG_CORNER_SPACE>,
      (LG_CYLINDER_RADIUS) 
     }
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
      <0, 0, 0>,
      (LG_KNOB_RADIUS)
     }
    }
    difference {
     cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, 0>,
      (LG_CYLINDER_RADIUS-LG_CORNER_SPACE) 
     }
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      <0, 0, -LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
    difference {
     union {
      cone {
       <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_CORNER_SPACE*cos(77*pi/180)>,LG_BRICK_WIDTH/2-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(77*pi/180)
       <0, 0, LG_BRICK_HEIGHT>,LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_PLATE_INNER_HEIGHT>,
       <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_CORNER_SPACE*cos(77*pi/180)+LG_E>,
       (LG_BRICK_WIDTH/2-LG_CORNER_SPACE) 
      }
     }
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, 0.5>,
      LG_KNOB_RADIUS
     }
    }
    torus {
     (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
     (LG_CORNER_SPACE)
     rotate <90, 0, 0>
     translate <0, 0, LG_CORNER_SPACE>
    }
    torus {
     (LG_KNOB_RADIUS+LG_CORNER_SPACE),
     (LG_CORNER_SPACE)
     rotate <90, 0, 0>
     translate <0, 0, LG_CORNER_SPACE>
    }
   }
   torus {
    (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
    (LG_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
   }
  }
  cylinder {
   <0, 0, LG_BRICK_HEIGHT+LG_E>,
   <0, 0, 0.5-LG_E>,
   LG_KNOB_INNER_RADIUS
  }
 }
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>, 
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
     }
     box {
      <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, LG_PLATE_INNER_HEIGHT>, 
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>,
      <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, 0.5+LG_E>,
      LG_CROSSAXLE_WIDTH/2
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
    <0, 0, 0.5+2*LG_E>,
    LG_BRICK_WIDTH/2
   }
   cone {
    <0, 0, LG_PLATE_INNER_HEIGHT>,LG_BRICK_WIDTH/2-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(77*pi/180)
    <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE+LG_CORNER_SPACE*cos(77*pi/180)>,LG_KNOB_RADIUS
   }
  }
 } 
 translate <0, 0, -LG_BRICK_HEIGHT>
}

#declare lg_4589_clear =
merge {
 difference { 
  merge {
   object {
    lg_tech_knob_clear
    translate <0, 0, LG_BRICK_HEIGHT>
   }
   merge {
    difference {
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      <0, 0, LG_CORNER_SPACE>,
      (LG_CYLINDER_RADIUS) 
     }
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
      <0, 0, 0>,
      (LG_KNOB_RADIUS)
     }
    }
    difference {
     cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, 0>,
      (LG_CYLINDER_RADIUS-LG_CORNER_SPACE) 
     }
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT>,
      <0, 0, -LG_E>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
    difference {
     merge {
      cone {
       <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_CORNER_SPACE*cos(77*pi/180)>,LG_BRICK_WIDTH/2-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(77*pi/180)
       <0, 0, LG_BRICK_HEIGHT>,LG_KNOB_RADIUS
      }
      cylinder {
       <0, 0, LG_PLATE_INNER_HEIGHT>,
       <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE+LG_CORNER_SPACE*cos(77*pi/180)+LG_E>,
       (LG_BRICK_WIDTH/2-LG_CORNER_SPACE) 
      }
     }
     cylinder {
      <0, 0, LG_PLATE_INNER_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, 0.5>,
      LG_KNOB_RADIUS
     }
    }
    torus {
     (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
     (LG_CORNER_SPACE)
     rotate <90, 0, 0>
     translate <0, 0, LG_CORNER_SPACE>
    }
    torus {
     (LG_KNOB_RADIUS+LG_CORNER_SPACE),
     (LG_CORNER_SPACE)
     rotate <90, 0, 0>
     translate <0, 0, LG_CORNER_SPACE>
    }
   }
   torus {
    (LG_BRICK_WIDTH/2-LG_CORNER_SPACE),
    (LG_CORNER_SPACE)
    rotate <90, 0, 0>
    translate <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
   }
  }
  cylinder {
   <0, 0, LG_BRICK_HEIGHT+LG_E>,
   <0, 0, 0.5-LG_E>,
   LG_KNOB_INNER_RADIUS
  }
 }
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>, 
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
     }
     box {
      <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, LG_PLATE_INNER_HEIGHT>, 
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, 0.5+LG_E> 
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, LG_PLATE_INNER_HEIGHT>,
      <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, 0.5+LG_E>,
      LG_CROSSAXLE_WIDTH/2
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  difference {
   cylinder {
    <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
    <0, 0, 0.5+2*LG_E>,
    LG_BRICK_WIDTH/2
   }
   cone {
    <0, 0, LG_PLATE_INNER_HEIGHT>,LG_BRICK_WIDTH/2-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(77*pi/180)
    <0, 0, LG_BRICK_HEIGHT-LG_CORNER_SPACE+LG_CORNER_SPACE*cos(77*pi/180)>,LG_KNOB_RADIUS
   }
  }
 } 
 translate <0, 0, -LG_BRICK_HEIGHT>
}

#end
