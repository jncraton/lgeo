/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4265a: Technic Bush 1/2 Type I                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4265a)
#else
#declare lg_4265a =
union {
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/4, 0, 0>,
    <-LG_BRICK_WIDTH/4+0.08, 0, 0>,
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4+0.08+LG_CORNER_SPACE, 0, 0>,
    <-0.06-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2-0.02
   }
   cylinder {
    <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
    <0.06+LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2-0.02
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/4, 0, 0>,
    <-LG_BRICK_WIDTH/4, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
    <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    0.06
    rotate <0, 0, 90>
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.06+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/4+0.08+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.06-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  union {
   #declare ROT=0;
   #while (ROT<4)
    union {
     cylinder {
      <-LG_BRICK_WIDTH/4+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <-LG_BRICK_WIDTH/4+0.08, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/4+0.08, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
   <-LG_BRICK_WIDTH/4, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
 intersection {
  union {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
    }
    #declare ROT = ROT + 1;
   #end
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH/4+0.08, 0, 0>
  }
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_WALL_WIDTH/2+LG_E, 0, 0>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_WALL_WIDTH/2+LG_CORNER_SPACE+LG_E/5, 0, 0>,
      LG_BRICK_WIDTH/2-0.02
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_WALL_WIDTH+LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/4-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
 }
}

#declare lg_4265a_clear =
merge {
 difference {
  merge {
   cylinder {
    <LG_BRICK_WIDTH/4, 0, 0>,
    <-LG_BRICK_WIDTH/4+0.08, 0, 0>,
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/4+0.08+LG_CORNER_SPACE, 0, 0>,
    <-0.06-LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2-0.02
   }
   cylinder {
    <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
    <0.06+LG_CORNER_SPACE, 0, 0>,
    LG_BRICK_WIDTH/2-0.02
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH/4, 0, 0>,
    <-LG_BRICK_WIDTH/4, 0, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
    <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    0.06
    rotate <0, 0, 90>
   }
  }
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.06+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/4+0.08+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.06-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  merge {
   #declare ROT=0;
   #while (ROT<2)
    merge {
     cylinder {
      <-LG_BRICK_WIDTH/4+0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <LG_BRICK_WIDTH/4, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <0, 0, 90>
      translate <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2>,
      <-LG_BRICK_WIDTH/4+0.08, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08>,
      <-LG_BRICK_WIDTH/4+0.08, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     box {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE-LG_E, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4, LG_KNOB_RADIUS+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>
     }
     cylinder {
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08>,
      <LG_BRICK_WIDTH/4-LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     #if (ROT=1)
      matrix <1, 0, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0>
     #end
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <LG_BRICK_WIDTH/4+LG_E, 0, 0>,
   <-LG_BRICK_WIDTH/4, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
  }
 }
 intersection {
  merge {
   #declare ROT=0;
   #while (ROT<16)
    box {
     <LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <0.05, 0.1, 0.42>
     rotate <0, ROT*360/16, 0>
    }
    box {
     <-LG_E/2, -LG_CORNER_SPACE-2*LG_E, 0.2>,
     <-0.05, 0.1, 0.42>
     rotate <0, (ROT+0.5)*360/16, 0>
    }
    #declare ROT = ROT + 1;
   #end
   rotate <0, 0, 90>
   translate <-LG_BRICK_WIDTH/4+0.08, 0, 0>
  }
  merge {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_WALL_WIDTH/2+LG_E, 0, 0>,
      LG_BRICK_WIDTH/2-0.02-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_WALL_WIDTH/2+LG_CORNER_SPACE+LG_E/5, 0, 0>,
      LG_BRICK_WIDTH/2-0.02
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH/4, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_WALL_WIDTH+LG_E, 0, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <-LG_BRICK_WIDTH/4-LG_E, 0, 0>,
      <-LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
  }
 }
}

#end
