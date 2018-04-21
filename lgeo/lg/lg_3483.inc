/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3483: Tyre Medium Offset Thread                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3483)
#else
#declare lg_3483 =
union {
 difference {
  union {
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0.38-LG_CORNER_SPACE, 0, 0>,
    0.98
   }
   cylinder {
    <-0.38, 0, 0>,
    <0.38, 0, 0>,
    0.98-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <0.2+LG_E, 0, 0>,
    0.84
   }
   cylinder {
    <0.38, 0, 0>,
    <0.2, 0, 0>,
    0.88
   }
   cylinder {
    <-0.38, 0, 0>,
    <-0.2, 0, 0>,
    0.88
   }
   cylinder {
    <0.38-LG_CORNER_SPACE, 0, 0>,
    <0.38+LG_E, 0, 0>,
    0.88+LG_CORNER_SPACE
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.38-LG_E, 0, 0>,
    0.88+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.38-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.98-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.38-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.98-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  union {
   cylinder {
    <0.38, 0, 0>,
    <-LG_CORNER_SPACE, 0, 0>,
    1.22-LG_CORNER_SPACE
   }
   cylinder {
    <0.38-LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    1.22
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.38-LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 22)
    box {
     <0.38+LG_E, -0.1, 1.22+LG_E>,
     <-LG_CORNER_SPACE-LG_E, 0.1, 0.92>
     rotate <ROT * 360/22, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  union {
   cylinder {
    <-0.38, 0, 0>,
    <LG_CORNER_SPACE, 0, 0>,
    1.22-LG_CORNER_SPACE
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    1.22
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.38+LG_CORNER_SPACE, 0, 0>
   }
  }
  union {
   #declare ROT = 0;
   #while (ROT < 22)
    box {
     <-0.38-LG_E, -0.1, 1.22+LG_E>,
     <LG_CORNER_SPACE+LG_E, 0.1, 0.92>
     rotate <(ROT+0.5) * 360/22, 0, 0>
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

#declare lg_3483_clear =
merge {
 difference {
  merge {
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0.38-LG_CORNER_SPACE, 0, 0>,
    0.98
   }
   cylinder {
    <-0.38, 0, 0>,
    <0.38, 0, 0>,
    0.98-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <0.2+LG_E, 0, 0>,
    0.84
   }
   cylinder {
    <0.38, 0, 0>,
    <0.2, 0, 0>,
    0.88
   }
   cylinder {
    <-0.38, 0, 0>,
    <-0.2, 0, 0>,
    0.88
   }
   cylinder {
    <0.38-LG_CORNER_SPACE, 0, 0>,
    <0.38+LG_E, 0, 0>,
    0.88+LG_CORNER_SPACE
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <-0.38-LG_E, 0, 0>,
    0.88+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.38-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.88+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.98-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.38-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.98-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.38+LG_CORNER_SPACE, 0, 0>
 }
 intersection {
  merge {
   cylinder {
    <0.38, 0, 0>,
    <-LG_CORNER_SPACE, 0, 0>,
    1.22-LG_CORNER_SPACE
   }
   cylinder {
    <0.38-LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    1.22
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.38-LG_CORNER_SPACE, 0, 0>
   }
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 22)
    box {
     <0.38+LG_E, -0.1, 1.22+LG_E>,
     <-LG_CORNER_SPACE-LG_E, 0.1, 0.92>
     rotate <ROT * 360/22, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
 intersection {
  merge {
   cylinder {
    <-0.38, 0, 0>,
    <LG_CORNER_SPACE, 0, 0>,
    1.22-LG_CORNER_SPACE
   }
   cylinder {
    <-0.38+LG_CORNER_SPACE, 0, 0>,
    <0, 0, 0>,
    1.22
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
   }
   torus {
    1.22-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.38+LG_CORNER_SPACE, 0, 0>
   }
  }
  merge {
   #declare ROT = 0;
   #while (ROT < 22)
    box {
     <-0.38-LG_E, -0.1, 1.22+LG_E>,
     <LG_CORNER_SPACE+LG_E, 0.1, 0.92>
     rotate <(ROT+0.5) * 360/22, 0, 0>
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
