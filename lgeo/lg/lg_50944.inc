/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080707 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_50944: Wheel 11 x  8 with Center Groove                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_50944)
#else
#declare lg_angle=atan2(0.27+LG_CORNER_SPACE,0.05);
#declare lg_50944 =
union {
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.12+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.5+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.27-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.27-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.16+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.1-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   cylinder {
    <0.32, 0, 0>,
    <0.12, 0, 0>,
    0.56-LG_CORNER_SPACE
   }
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <0.12+LG_CORNER_SPACE, 0, 0>,
    0.56
   }
  }
  union {
   cylinder {
    <0.32+LG_E, 0, 0>,
    <0.32-LG_CORNER_SPACE, 0, 0>,
    0.5+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.27, 0, 0>,
    0.5
   }
   cylinder {
    <0.27, 0, 0,>,
    <0, 0, 0>,
    0.24-LG_E
   }
   cone {
    <0.27001, 0, 0>, 0.5,
    <0.16, 0, 0>, 0.32
   }
  }
 }
 difference {
  union {
   cylinder {
    <0.27, 0, 0,>,
    <0, 0, 0>,
    0.24-LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, 0, 0,>,
    <0, 0, 0>,
    0.24
   }
  }
  union {
   cylinder {
    <0.27+LG_E, 0, 0>,
    <0.27-LG_CORNER_SPACE, 0, 0>,
    0.2+LG_CORNER_SPACE
   }
   cylinder {
    <0.27, 0, 0>,
    <0.1, 0, 0>,
    0.2
   }
   cylinder {
    <0.1+LG_E, 0, 0>,
    <0.1-LG_CORNER_SPACE, 0, 0>,
    0.16+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, 0, 0>,
    <0.1+LG_E, 0, 0>,
    0.16
   }
  }
 }
 // Back
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.32+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.12-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.5+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    union {
     cylinder {
      <-0.32, 0, 0>,
      <-0.12, 0, 0>,
      0.56-LG_CORNER_SPACE
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.12-LG_CORNER_SPACE, 0, 0>,
      0.56
     }
    }
    union {
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      0.5+LG_CORNER_SPACE
     }
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <-0.27, 0, 0>,
      0.5
     }
     cylinder {
      <-0.27, 0, 0,>,
      <0.32, 0, 0>,
      0.24-LG_E
     }
     cone {
      <-0.27001, 0, 0>, 0.5,
      <-0.16, 0, 0>, 0.32
     }
    }
   }
  }
  union {
   box {
    <-0.32-LG_E, 0.1, 0.6>,
    <-0.26, -0.1, 0.4>
    rotate <37.5, 0, 0>
   }
   box {
    <-0.32-LG_E, 0.1, 0.6>,
    <-0.26, -0.1, 0.4>
    rotate <-37.5, 0, 0>
   }
  }
 }
 difference {
  union {
   cylinder {
    <-0.32, 0, 0,>,
    <0, 0, 0>,
    0.24-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, 0, 0,>,
    <0, 0, 0>,
    0.24
   }
  cylinder {
   <0.1201, 0, 0>,
   <-0.1201, 0, 0>,
   0.46
  }
  }
  union {
   cylinder {
    <LG_E, 0, 0>,
    <-0.32-LG_E, 0, 0>,
    0.16
   }
   box {
    <0.13, 0.04, 0.2>
    <-0.32-LG_E, -0.04, -0.2>
   }
   box {
    <0.13, 0.2, 0.04>
    <-0.32-LG_E, -0.2, -0.04>
   }
   cylinder {
    <0.14, 0, 0>,
    <0.1-LG_CORNER_SPACE, 0, 0>,
    0.16+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, 0, 0>,
    <0.1+LG_E, 0, 0>,
    0.16
   }
   cylinder {
    <0.14, 0, 0>,
    <0.1, 0, 0>,
    0.2
   }
  }
 }
 cylinder {
  <-0.32+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, -0.21>,
  <-0.32+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, -0.52>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.32+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, -0.21>,
  <-0.32+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, -0.52>,
  LG_CORNER_SPACE
 }
 box {
  <-0.32+LG_CORNER_SPACE+LG_E, -0.06+LG_CORNER_SPACE, -0.21>,
  <-0.32, 0.06-LG_CORNER_SPACE, -0.52>
 }
 box {
  <-0.32+LG_CORNER_SPACE, -0.06, -0.21>,
  <-0.16+LG_E, 0.06, -0.52>
 }
 #declare ROT = 0;
 #while (ROT < 5)
  union {
   cylinder {
    <0.27-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, -0.04-LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, -0.04-LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_E, 0.08-LG_CORNER_SPACE, 0>,
    <LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, (0.27+LG_CORNER_SPACE)/sin(lg_angle)>
    rotate <0, 90-lg_angle*180/pi, 0>
    translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
   }
   box {
    <-LG_E, -0.04-LG_CORNER_SPACE, 0>,
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, (0.27+LG_CORNER_SPACE)/sin(lg_angle)>
    rotate <0, 90-lg_angle*180/pi, 0>
    translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
   }
   difference {
    union {
     box {
      <0.32, 0.04, 0.50+LG_CORNER_SPACE>,
      <0.16, 0.08, 0.23-LG_CORNER_SPACE>
     }
     box {
      <0.32, -0.08, 0.50+LG_CORNER_SPACE>,
      <0.16, -0.04, 0.23-LG_CORNER_SPACE>
     }
    }
    box {
     <0.1, 0.08+LG_E, -LG_E>,
     <0, -0.08-LG_E, 0.3>
     rotate <0, 90-lg_angle*180/pi, 0>
     translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
    }
   }
   rotate <72*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_50944_clear =
merge {
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.12+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.5+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.2+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.27-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.27-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.16+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.1-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <0.32, 0, 0>,
    <0.12, 0, 0>,
    0.56-LG_CORNER_SPACE
   }
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <0.12+LG_CORNER_SPACE, 0, 0>,
    0.56
   }
  }
  union {
   cylinder {
    <0.32+LG_E, 0, 0>,
    <0.32-LG_CORNER_SPACE, 0, 0>,
    0.5+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.27, 0, 0>,
    0.5
   }
   cylinder {
    <0.27, 0, 0,>,
    <0, 0, 0>,
    0.24-LG_E
   }
   cone {
    <0.27001, 0, 0>, 0.5,
    <0.16, 0, 0>, 0.32
   }
  }
 }
 difference {
  merge {
   cylinder {
    <0.27, 0, 0,>,
    <0, 0, 0>,
    0.24-LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, 0, 0,>,
    <0, 0, 0>,
    0.24
   }
  }
  union {
   cylinder {
    <0.27+LG_E, 0, 0>,
    <0.27-LG_CORNER_SPACE, 0, 0>,
    0.2+LG_CORNER_SPACE
   }
   cylinder {
    <0.27, 0, 0>,
    <0.1, 0, 0>,
    0.2
   }
   cylinder {
    <0.1+LG_E, 0, 0>,
    <0.1-LG_CORNER_SPACE, 0, 0>,
    0.16+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, 0, 0>,
    <0.1+LG_E, 0, 0>,
    0.16
   }
  }
 }
 // Back
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.32+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.12-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.5+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
   difference {
    merge {
     cylinder {
      <-0.32, 0, 0>,
      <-0.12, 0, 0>,
      0.56-LG_CORNER_SPACE
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.12-LG_CORNER_SPACE, 0, 0>,
      0.56
     }
    }
    union {
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      0.5+LG_CORNER_SPACE
     }
     cylinder {
      <-0.32-LG_E, 0, 0>,
      <-0.27, 0, 0>,
      0.5
     }
     cylinder {
      <-0.27, 0, 0,>,
      <0.32, 0, 0>,
      0.24-LG_E
     }
     cone {
      <-0.27001, 0, 0>, 0.5,
      <-0.16, 0, 0>, 0.32
     }
    }
   }
  }
  union {
   box {
    <-0.32-LG_E, 0.1, 0.6>,
    <-0.26, -0.1, 0.4>
    rotate <37.5, 0, 0>
   }
   box {
    <-0.32-LG_E, 0.1, 0.6>,
    <-0.26, -0.1, 0.4>
    rotate <-37.5, 0, 0>
   }
  }
 }
 difference {
  merge {
   cylinder {
    <-0.32, 0, 0,>,
    <0, 0, 0>,
    0.24-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, 0, 0,>,
    <0, 0, 0>,
    0.24
   }
  cylinder {
   <0.1201, 0, 0>,
   <-0.1201, 0, 0>,
   0.46
  }
  }
  union {
   cylinder {
    <LG_E, 0, 0>,
    <-0.32-LG_E, 0, 0>,
    0.16
   }
   box {
    <0.13, 0.04, 0.2>
    <-0.32-LG_E, -0.04, -0.2>
   }
   box {
    <0.13, 0.2, 0.04>
    <-0.32-LG_E, -0.2, -0.04>
   }
   cylinder {
    <0.14, 0, 0>,
    <0.1-LG_CORNER_SPACE, 0, 0>,
    0.16+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_E, 0, 0>,
    <0.1+LG_E, 0, 0>,
    0.16
   }
   cylinder {
    <0.14, 0, 0>,
    <0.1, 0, 0>,
    0.2
   }
  }
 }
 cylinder {
  <-0.32+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, -0.21>,
  <-0.32+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, -0.52>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.32+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, -0.21>,
  <-0.32+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, -0.52>,
  LG_CORNER_SPACE
 }
 box {
  <-0.32+LG_CORNER_SPACE+LG_E, -0.06+LG_CORNER_SPACE, -0.21>,
  <-0.32, 0.06-LG_CORNER_SPACE, -0.52>
 }
 box {
  <-0.32+LG_CORNER_SPACE, -0.06, -0.21>,
  <-0.16+LG_E, 0.06, -0.52>
 }
 #declare ROT = 0;
 #while (ROT < 5)
  merge {
   cylinder {
    <0.27-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, -0.04-LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, -0.04-LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.27-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
    <0.32-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_E, 0.08-LG_CORNER_SPACE, 0>,
    <LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, (0.27+LG_CORNER_SPACE)/sin(lg_angle)>
    rotate <0, 90-lg_angle*180/pi, 0>
    translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
   }
   box {
    <-LG_E, -0.04-LG_CORNER_SPACE, 0>,
    <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, (0.27+LG_CORNER_SPACE)/sin(lg_angle)>
    rotate <0, 90-lg_angle*180/pi, 0>
    translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
   }
   difference {
    union {
     box {
      <0.32, 0.04, 0.50+LG_CORNER_SPACE>,
      <0.16, 0.08, 0.23-LG_CORNER_SPACE>
     }
     box {
      <0.32, -0.08, 0.50+LG_CORNER_SPACE>,
      <0.16, -0.04, 0.23-LG_CORNER_SPACE>
     }
    }
    box {
     <0.1, 0.08+LG_E, -LG_E>,
     <0, -0.08-LG_E, 0.3>
     rotate <0, 90-lg_angle*180/pi, 0>
     translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
    }
   }
   rotate <72*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
