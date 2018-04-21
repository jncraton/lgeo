/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980401 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2496: Wheels Trolley                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2496)
#else
#declare lg_2496 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   difference {
    union {
     cylinder {
      <0, 0.72, 0>,
      <0, 0.92, 0>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.72+LG_CORNER_SPACE, 0>,
      <0, 0.92-LG_CORNER_SPACE, 0>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, 0.86, 0>,
      <0, 0.92, 0>,
      0.2
     }
     cylinder {
      <0, 0.92-LG_CORNER_SPACE, 0>,
      <0, 0.92+LG_E, 0>,
      0.2+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.72+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.92-LG_CORNER_SPACE, 0>
   }
   torus {
    0.2+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.92-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.32-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, 0.32, 0>,
  <0, -0.32, 0>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.32-LG_CORNER_SPACE, 0>,
  <0, -0.32+LG_CORNER_SPACE, 0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0.74, 0>,
  <0, -0.74, 0>,
  0.08
 }
}

#declare lg_2496_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   difference {
    union {
     cylinder {
      <0, 0.72, 0>,
      <0, 0.92, 0>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.72+LG_CORNER_SPACE, 0>,
      <0, 0.92-LG_CORNER_SPACE, 0>,
      LG_BRICK_WIDTH/2
     }
    }
    union {
     cylinder {
      <0, 0.86, 0>,
      <0, 0.92, 0>,
      0.2
     }
     cylinder {
      <0, 0.92-LG_CORNER_SPACE, 0>,
      <0, 0.92+LG_E, 0>,
      0.2+LG_CORNER_SPACE
     }
    }
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.72+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.92-LG_CORNER_SPACE, 0>
   }
   torus {
    0.2+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.92-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.32-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, 0.32, 0>,
  <0, -0.32, 0>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.32-LG_CORNER_SPACE, 0>,
  <0, -0.32+LG_CORNER_SPACE, 0>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0.74, 0>,
  <0, -0.74, 0>,
  0.08
 }
}

#end
