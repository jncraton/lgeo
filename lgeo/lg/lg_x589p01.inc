/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/* 20071115 Lutz Uhlmann changed pattern to work with stud logo                */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/* 20081018 Lutz Uhlmann moved to x589p01                                      */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_x589p01: Baseplate 24 x 40 Gravel Quarry Pattern                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_x589p01)
#else
#declare LENGTH = 24;
#declare WIDTH = 40;
#declare lg_x589p01 = 
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
     #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 0)
      #declare CYL_Y = 1;
     #end 
     #if (((CYL_X > 11 & CYL_X < 16) | (CYL_X > 19 & CYL_X < 24)) & CYL_Y = 0)
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
     #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 23)
      #declare CYL_Y = 24;
     #end 
     #if ((CYL_X > 2 | CYL_X < 10) & CYL_Y = 6)
      #declare CYL_Y = 14;
     #end 
     #if ((CYL_X > 27 & CYL_X < 32) & CYL_Y = 14)
      #declare CYL_Y = 32;
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
    #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 0)
     #declare CYL_Y = 1;
    #end 
    #if (((CYL_X > 11 & CYL_X < 16) | (CYL_X > 19 & CYL_X < 24)) & CYL_Y = 0)
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
    #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 23)
     #declare CYL_Y = 24;
    #end 
    #if ((CYL_X > 2 & CYL_X < 9) & CYL_Y = 6)
     #declare CYL_Y = 14;
    #end 
    #if ((CYL_X > 27 & CYL_X < 32) & CYL_Y = 14)
     #declare CYL_Y = 32;
    #end 
   #end
   #declare CYL_X = CYL_X + 1;
  #end
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <0.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-1.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-2.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-3.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-4.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-5.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-6.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-6.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -16.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -16.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-1.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-2.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-3.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-6.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_x589p01_clear = 
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
     #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 0)
      #declare CYL_Y = 1;
     #end 
     #if (((CYL_X > 11 & CYL_X < 16) | (CYL_X > 19 & CYL_X < 24)) & CYL_Y = 0)
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
     #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 23)
      #declare CYL_Y = 24;
     #end 
     #if ((CYL_X > 2 | CYL_X < 10) & CYL_Y = 6)
      #declare CYL_Y = 14;
     #end 
     #if ((CYL_X > 27 & CYL_X < 32) & CYL_Y = 14)
      #declare CYL_Y = 32;
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
    #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 0)
     #declare CYL_Y = 1;
    #end 
    #if (((CYL_X > 11 & CYL_X < 16) | (CYL_X > 19 & CYL_X < 24)) & CYL_Y = 0)
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
    #if ((CYL_X = 0 | CYL_X = 39) & CYL_Y = 23)
     #declare CYL_Y = 24;
    #end 
    #if ((CYL_X > 2 & CYL_X < 9) & CYL_Y = 6)
     #declare CYL_Y = 14;
    #end 
    #if ((CYL_X > 27 & CYL_X < 32) & CYL_Y = 14)
     #declare CYL_Y = 32;
    #end 
   #end
   #declare CYL_X = CYL_X + 1;
  #end
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <0.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-1.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-2.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-3.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-4.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-5.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-6.5*LG_BRICK_WIDTH, 17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-6.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -5.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -6.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -14.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -16.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -16.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-0.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-1.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-2.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-3.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-6.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_dot
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
  translate <-7.5*LG_BRICK_WIDTH, -17.5*LG_BRICK_WIDTH, 0>
 }
}

#end
