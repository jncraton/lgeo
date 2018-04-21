/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990610 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0915: Baseplate 24 x 32 Fire Department                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0915)
#else
#declare LENGTH = 24;
#declare WIDTH = 32;
#declare lg_0915 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT-LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, LG_E>
     }
     box {
      <-LENGTH/2*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-3*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT-LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, LG_E>
     }
    }
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   difference {
    union {
     box {
      <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
     }
     box {
      <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <LENGTH/2*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <-LENGTH/2*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, LG_E>,
      <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <LENGTH/2*LG_BRICK_WIDTH+LG_E, -WIDTH/2*LG_BRICK_WIDTH-LG_E, LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <-LENGTH/2*LG_BRICK_WIDTH-LG_E, -WIDTH/2*LG_BRICK_WIDTH-LG_E, LG_E>,
      <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
    }
   }
   #declare ROT = 0;
   #while (ROT < 2)
    difference {
     union {
      cylinder {
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       1.5*LG_BRICK_WIDTH
      }
      cylinder {
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       1.5*LG_BRICK_WIDTH
      }
      cylinder {
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, 0>,
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
       1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, 0>,
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
       1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
     }
     union {
      box {
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT-LG_E>,
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, LG_E>
      }
      box {
       <-LENGTH/2*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-3*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT-LG_E>,
       <LENGTH/2*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, LG_E>
      }
     }
     #if (ROT=1)
      rotate <0, 0, 180>
     #end
    }
    #declare ROT = ROT +1;
   #end
  } 
  union {
   #declare CYL_X = 0;
   #while (CYL_X < WIDTH)
    #declare CYL_Y = 0;
    #while (CYL_Y < LENGTH)
     #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 0)
      #declare CYL_Y = 1;
     #end 
     #if (((CYL_X > 2 & CYL_X < 7) | (CYL_X > 9 & CYL_X < 14) | (CYL_X > 16 & CYL_X < 21)) & CYL_Y = 0)
      #declare CYL_Y = 20;
     #end 
     cylinder {
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, LG_E>,
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_KNOB_CORNER_SPACE>,
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE
     }
     #declare CYL_Y = CYL_Y + 1;
     #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 23)
      #declare CYL_Y = 24;
     #end 
    #end
    #declare CYL_X = CYL_X + 1;
   #end
  }
 }
 union {
  #declare CYL_X = 0;
  #while (CYL_X < WIDTH)
   #declare CYL_Y = 0;
   #while (CYL_Y < LENGTH)
    #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 0)
     #declare CYL_Y = 1;
    #end 
    #if (((CYL_X > 2 & CYL_X < 7) | (CYL_X > 9 & CYL_X < 14) | (CYL_X > 16 & CYL_X < 21)) & CYL_Y = 0)
     #declare CYL_Y = 20;
    #end 
    torus {
     (LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE),
     LG_KNOB_CORNER_SPACE
     rotate <90, 0, 0>
     translate <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_KNOB_CORNER_SPACE>
    }
    object {
     lg_knob
     translate <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, 0>
    }
    #declare CYL_Y = CYL_Y + 1;
    #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 23)
     #declare CYL_Y = 24;
    #end 
   #end
   #declare CYL_X = CYL_X + 1;
  #end
 }
}

#declare lg_0915_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
     torus {
      1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90,0,0>
      translate <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
    }
    merge {
     box {
      <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT-LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, LG_E>
     }
     box {
      <-LENGTH/2*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-3*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT-LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, LG_E>
     }
    }
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   difference {
    merge {
     box {
      <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
     }
     box {
      <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
      <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
     }
    }
    merge {
     box {
      <LENGTH/2*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <-LENGTH/2*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, LG_E>,
      <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <LENGTH/2*LG_BRICK_WIDTH+LG_E, -WIDTH/2*LG_BRICK_WIDTH-LG_E, LG_E>,
      <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
     box {
      <-LENGTH/2*LG_BRICK_WIDTH-LG_E, -WIDTH/2*LG_BRICK_WIDTH-LG_E, LG_E>,
      <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
     }
    }
   }
   #declare ROT = 0;
   #while (ROT < 2)
    difference {
     merge {
      cylinder {
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       1.5*LG_BRICK_WIDTH
      }
      cylinder {
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
       1.5*LG_BRICK_WIDTH
      }
      cylinder {
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, 0>,
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
       1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      cylinder {
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, 0>,
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
       1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
     }
     merge {
      box {
       <-LENGTH/2*LG_BRICK_WIDTH+1.5*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH+LG_E, -LG_TOP_HEIGHT-LG_E>,
       <LENGTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH-LG_E, LG_E>
      }
      box {
       <-LENGTH/2*LG_BRICK_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-3*LG_BRICK_WIDTH-LG_E, -LG_TOP_HEIGHT-LG_E>,
       <LENGTH/2*LG_BRICK_WIDTH+LG_E, WIDTH/2*LG_BRICK_WIDTH-1.5*LG_BRICK_WIDTH, LG_E>
      }
     }
     #if (ROT=1)
      rotate <0, 0, 180>
     #end
    }
    #declare ROT = ROT +1;
   #end
  } 
  merge {
   #declare CYL_X = 0;
   #while (CYL_X < WIDTH)
    #declare CYL_Y = 0;
    #while (CYL_Y < LENGTH)
     #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 0)
      #declare CYL_Y = 1;
     #end 
     #if (((CYL_X > 2 & CYL_X < 7) | (CYL_X > 9 & CYL_X < 14) | (CYL_X > 16 & CYL_X < 21)) & CYL_Y = 0)
      #declare CYL_Y = 20;
     #end 
     cylinder {
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, LG_E>,
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_KNOB_CORNER_SPACE>,
      <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE
     }
     #declare CYL_Y = CYL_Y + 1;
     #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 23)
      #declare CYL_Y = 24;
     #end 
    #end
    #declare CYL_X = CYL_X + 1;
   #end
  }
 }
 merge {
  #declare CYL_X = 0;
  #while (CYL_X < WIDTH)
   #declare CYL_Y = 0;
   #while (CYL_Y < LENGTH)
    #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 0)
     #declare CYL_Y = 1;
    #end 
    #if (((CYL_X > 2 & CYL_X < 7) | (CYL_X > 9 & CYL_X < 14) | (CYL_X > 16 & CYL_X < 21)) & CYL_Y = 0)
     #declare CYL_Y = 20;
    #end 
    torus {
     (LG_KNOB_INNER_RADIUS+LG_KNOB_CORNER_SPACE),
     LG_KNOB_CORNER_SPACE
     rotate <90, 0, 0>
     translate <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_KNOB_CORNER_SPACE>
    }
    object {
     lg_knob_clear
     translate <(LENGTH/2-0.5-CYL_Y)*LG_BRICK_WIDTH, (WIDTH/2-0.5-CYL_X)*LG_BRICK_WIDTH, 0>
    }
    #declare CYL_Y = CYL_Y + 1;
    #if ((CYL_X = 0 | CYL_X = 31) & CYL_Y = 23)
     #declare CYL_Y = 24;
    #end 
   #end
   #declare CYL_X = CYL_X + 1;
  #end
 }
}

#end
