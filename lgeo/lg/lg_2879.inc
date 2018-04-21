/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980329 Lutz Uhlmann                                                       */
/* 20060306 Robert Seifert (seifrobAThotmailDOTcom)   Fixed bad offset         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2879: Train Wheel                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2879)
#else
#declare lg_2879 =
union {
 difference {
  union {
   cylinder {
    <0, 0.2, 0>,
    <0, -0.2, 0>,
    0.24-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.24
   }
  }
  cylinder {
   <0, 0.2+LG_E, 0>,
   <0, -0.2-LG_E, 0>,
   0.1
  }
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.2-LG_CORNER_SPACE, 0>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, 0.2, 0>,
    <0, 0.1, 0>,
    1.16-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, 0.1+LG_CORNER_SPACE, 0>,
    1.16
   }
   cone {
    <0, 0.1+LG_CORNER_SPACE*(1-cos(pi/10)), 0>, 1.16-LG_CORNER_SPACE*(1-sin(pi/10)),
    <0, 0.1+LG_CORNER_SPACE*(1-cos(pi/10))-(0.32-LG_CORNER_SPACE*(1-sin(pi/10)))*sin(pi/10), 0>, 0.84
   }
  }
  union {
   cone {
    <0, 0.2+LG_E, 0>, 0.84+LG_E,
    <0, 0.125, 0>, 0.765
   }
   cylinder {
    <0, 0.2, 0>,
    <0, -LG_E, 0>,
    0.1
   }
  }
 } 
 torus {
  1.16-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.2-LG_CORNER_SPACE, 0>
 }
 torus {
  1.16-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.1+LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, 0.22, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.8
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -0.2, 0>,
    0.8-LG_CORNER_SPACE
   }
  }
  union {
   cone {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8))-LG_E, 0>, 0.72+LG_CORNER_SPACE*(1-cos(pi/8))+LG_E*sin(pi/8),
    <0, -0.08, 0>, 0.72+LG_CORNER_SPACE*(1-cos(pi/8))-(0.12+LG_CORNER_SPACE*(1-sin(pi/8)))*sin(pi/8)
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8)), 0>,
    <0, -0.2-LG_E, 0>,
    0.72+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2+LG_E, 0>,
    <0, -0.2-LG_E, 0>,
    0.1
   }
  }
 }
 torus {
  0.8-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.72+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 rotate <0, 0, 90>
 translate <-0.12, 0, 0> // was: translate <0.12, 0, 0>
}

#declare lg_2879_clear=
merge {
 difference {
  merge {
   cylinder {
    <0, 0.2, 0>,
    <0, -0.2, 0>,
    0.24-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.24
   }
  }
  cylinder {
   <0, 0.2+LG_E, 0>,
   <0, -0.2-LG_E, 0>,
   0.1
  }
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.2-LG_CORNER_SPACE, 0>
 }
 torus {
  0.24-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, 0.2, 0>,
    <0, 0.1, 0>,
    1.16-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2-LG_CORNER_SPACE, 0>,
    <0, 0.1+LG_CORNER_SPACE, 0>,
    1.16
   }
   cone {
    <0, 0.1+LG_CORNER_SPACE*(1-cos(pi/10)), 0>, 1.16-LG_CORNER_SPACE*(1-sin(pi/10)),
    <0, 0.1+LG_CORNER_SPACE*(1-cos(pi/10))-(0.32-LG_CORNER_SPACE*(1-sin(pi/10)))*sin(pi/10), 0>, 0.84
   }
  }
  union {
   cone {
    <0, 0.2+LG_E, 0>, 0.84+LG_E,
    <0, 0.125, 0>, 0.765
   }
   cylinder {
    <0, 0.12, 0>,
    <0, -LG_E, 0>,
    0.1
   }
  }
 } 
 torus {
  1.16-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.2-LG_CORNER_SPACE, 0>
 }
 torus {
  1.16-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.1+LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, 0.1, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.8
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -0.2, 0>,
    0.8-LG_CORNER_SPACE
   }
  }
  union {
   cone {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8))-LG_E, 0>, 0.72+LG_CORNER_SPACE*(1-cos(pi/8))+LG_E*sin(pi/8),
    <0, -0.08, 0>, 0.72+LG_CORNER_SPACE*(1-cos(pi/8))-(0.12+LG_CORNER_SPACE*(1-sin(pi/8)))*sin(pi/8)
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8)), 0>,
    <0, -0.2-LG_E, 0>,
    0.72+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.2+LG_E, 0>,
    <0, -0.2-LG_E, 0>,
    0.1
   }
  }
 }
 torus {
  0.8-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.72+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 rotate <0, 0, 90>
 translate <-0.12, 0, 0> //was: translate <0.12, 0, 0>
}

#end
