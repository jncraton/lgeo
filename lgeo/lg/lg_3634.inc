/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981223 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3634: Tyre 17 x 43                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3634)
#else
#declare lg_3634 =
union {
 difference {
  union {
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0.78-LG_CORNER_SPACE, 0, 0>,
    1.70
   }
   cylinder {
    <-0.38, 0, 0>,
    <0.78, 0, 0>,
    1.70-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <0.2+LG_E, 0, 0>,
    0.84
   }
   cylinder {
    <0.8, 0, 0>,
    <0.2, 0, 0>,
    0.88
   }
   cylinder {
    <-0.38, 0, 0>,
    <-0.2, 0, 0>,
    0.88
   }
   cone {
    <0.78+LG_E, 0, 0>, 1.28+LG_E,
    <0.38-LG_E, 0, 0>, 0.88-LG_E
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.38-LG_E, 0, 0>,
    0.88+LG_CORNER_SPACE
   }
   difference {
    cylinder {
     <-0.38-LG_E, 0, 0>,
     <0.5, 0, 0>,
     1.6
    }
    union {
     cylinder {
      <-0.6, 0, 0>,
      <0.6, 0, 0>,
      1
     }
     cone {
      <0.63+LG_E, 0, 0>, 1.28+LG_E,
      <0.23-LG_E, 0, 0>, 0.88-LG_E
     }
     #declare ROT = 0;
     #while (ROT < 6)
      box {
       <-0.5, 0.06, 1.7>,
       <0.6, -0.06, -1.7>
       rotate <30*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
  }
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.70-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.78-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.70-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  union {
   cylinder {
    <0.78, 0, 0>,
    <0.20-LG_CORNER_SPACE, 0, 0>,
    2.15-LG_CORNER_SPACE
   }
   cylinder {
    <0.78-LG_CORNER_SPACE, 0, 0>,
    <0.20, 0, 0>,
    2.15
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.20, 0, 0>
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.78-LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 20)
    box {
     <0.78+LG_E, -0.2, 2.15+LG_E>,
     <0.20-LG_CORNER_SPACE-LG_E, 0.2, 1.6>
     rotate <ROT * 360/20, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  union {
   cylinder {
    <-0.38, 0, 0>,
    <0.20+LG_CORNER_SPACE, 0, 0>,
    2.15-LG_CORNER_SPACE
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0.20, 0, 0>,
    2.15
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.2, 0, 0>
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.38+LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 20)
    box {
     <-0.38-LG_E, -0.2, 2.15+LG_E>,
     <0.2+LG_CORNER_SPACE+LG_E, 0.2, 1.6>
     rotate <(ROT+0.5) * 360/20, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 8)
  union {
   cone {
    <0.16, 0, 0.76>, 0.04,
    <0.16, 0, 0.88>, 0.10
   }
   cone {
    <-0.16, 0, 0.76>, 0.04,
    <-0.16, 0, 0.88>, 0.10
   }
   difference {
    box {
     <0.16, 0.12, 0.88>,
     <-0.16, -0.12, 0.76>
    }
    union {
     box {
      <0.2, 0, -LG_E>,
      <-0.2, -0.2, 0.2>
      rotate <atan2(1,2)*180/pi, 0, 0>
      translate <0, -0.04, 0.76>
     }
     box {
      <0.2, 0, -LG_E>,
      <-0.2, 0.2, 0.2>
      rotate <-atan2(1,2)*180/pi, 0, 0>
      translate <0, 0.04, 0.76>
     }
    }
   }
   rotate <45*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_3634_clear =
merge {
 difference {
  merge {
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0.78-LG_CORNER_SPACE, 0, 0>,
    1.70
   }
   cylinder {
    <-0.38, 0, 0>,
    <0.78, 0, 0>,
    1.70-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <0.2+LG_E, 0, 0>,
    0.84
   }
   cylinder {
    <0.8, 0, 0>,
    <0.2, 0, 0>,
    0.88
   }
   cylinder {
    <-0.38, 0, 0>,
    <-0.2, 0, 0>,
    0.88
   }
   cone {
    <0.78+LG_E, 0, 0>, 1.28+LG_E,
    <0.38-LG_E, 0, 0>, 0.88-LG_E
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.38-LG_E, 0, 0>,
    0.88+LG_CORNER_SPACE
   }
   difference {
    cylinder {
     <-0.38-LG_E, 0, 0>,
     <0.5, 0, 0>,
     1.6
    }
    union {
     cylinder {
      <-0.6, 0, 0>,
      <0.6, 0, 0>,
      1
     }
     cone {
      <0.63+LG_E, 0, 0>, 1.28+LG_E,
      <0.23-LG_E, 0, 0>, 0.88-LG_E
     }
     #declare ROT = 0;
     #while (ROT < 6)
      box {
       <-0.5, 0.06, 1.7>,
       <0.6, -0.06, -1.7>
       rotate <30*ROT, 0, 0>
      }
      #declare ROT = ROT + 1;
     #end
    }
   }
  }
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.70-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.78-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  1.70-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  merge {
   cylinder {
    <0.78, 0, 0>,
    <0.20-LG_CORNER_SPACE, 0, 0>,
    2.15-LG_CORNER_SPACE
   }
   cylinder {
    <0.78-LG_CORNER_SPACE, 0, 0>,
    <0.20, 0, 0>,
    2.15
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.20, 0, 0>
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.78-LG_CORNER_SPACE, 0, 0>
   }
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 20)
    box {
     <0.78+LG_E, -0.2, 2.15+LG_E>,
     <0.20-LG_CORNER_SPACE-LG_E, 0.2, 1.6>
     rotate <ROT * 360/20, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  merge {
   cylinder {
    <-0.38, 0, 0>,
    <0.20+LG_CORNER_SPACE, 0, 0>,
    2.15-LG_CORNER_SPACE
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0.20, 0, 0>,
    2.15
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.2, 0, 0>
   }
   torus {
    2.15-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.38+LG_CORNER_SPACE, 0, 0>
   }
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 20)
    box {
     <-0.38-LG_E, -0.2, 2.15+LG_E>,
     <0.2+LG_CORNER_SPACE+LG_E, 0.2, 1.6>
     rotate <(ROT+0.5) * 360/20, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 #declare ROT = 0;
 #while (ROT < 8)
  merge {
   cone {
    <0.16, 0, 0.76>, 0.04,
    <0.16, 0, 0.88>, 0.10
   }
   cone {
    <-0.16, 0, 0.76>, 0.04,
    <-0.16, 0, 0.88>, 0.10
   }
   difference {
    box {
     <0.16, 0.12, 0.88>,
     <-0.16, -0.12, 0.76>
    }
    union {
     box {
      <0.2, 0, -LG_E>,
      <-0.2, -0.2, 0.2>
      rotate <atan2(1,2)*180/pi, 0, 0>
      translate <0, -0.04, 0.76>
     }
     box {
      <0.2, 0, -LG_E>,
      <-0.2, 0.2, 0.2>
      rotate <-atan2(1,2)*180/pi, 0, 0>
      translate <0, 0.04, 0.76>
     }
    }
   }
   rotate <45*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
