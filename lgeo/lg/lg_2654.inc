/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971012 Lutz Uhlmann                                                       */
/* 20071223 Lutz Uhlmann missing torus and cylinder                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2654: Boat Stud 2 x 2                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2654)
#else
#declare lg_radius=1.4533333333;
#declare lg_2654 =
union {
 intersection {
  union {
   cylinder {
    <0, 0, -0.04-LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -0.04-LG_CORNER_SPACE-LG_E>,
    <0, 0, -0.04>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  difference {
   sphere {
    <0, 0, lg_radius-LG_PLATE_HEIGHT>, lg_radius
   }
   sphere {
    <0, 0, lg_radius-LG_PLATE_HEIGHT>, lg_radius-0.12
   }
  }
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.04-LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -0.08>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -0.1>,
   LG_BRICK_WIDTH-0.15
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -0.04-LG_CORNER_SPACE>,
   LG_BRICK_WIDTH
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -0.1>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E
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
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
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
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
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
   intersection {
    cylinder {
     <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     <0, 0, -LG_PLATE_HEIGHT>,
     LG_BRICK_WIDTH
    }
    sphere {
     <0, 0, lg_radius-LG_PLATE_HEIGHT+LG_E>, lg_radius
    }
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
}

#declare lg_2654_clear =
merge {
 intersection {
  merge {
   cylinder {
    <0, 0, -0.04-LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -0.04-LG_CORNER_SPACE-LG_E>,
    <0, 0, -0.04>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
  }
  difference {
   sphere {
    <0, 0, lg_radius-LG_PLATE_HEIGHT>, lg_radius
   }
   sphere {
    <0, 0, lg_radius-LG_PLATE_HEIGHT>, lg_radius-0.12
   }
  }
 }
 torus {
  LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -0.08>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -0.1>,
   LG_BRICK_WIDTH-0.15
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -0.04-LG_CORNER_SPACE>,
   LG_BRICK_WIDTH
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -0.1>,
   LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E
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
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT>,
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
        <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
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
   intersection {
    cylinder {
     <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
     <0, 0, -LG_PLATE_HEIGHT>,
     LG_BRICK_WIDTH
    }
    sphere {
     <0, 0, lg_radius-LG_PLATE_HEIGHT+LG_E>, lg_radius
    }
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
  }
 }
}

#end
