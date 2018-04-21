/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970911 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2927: Train Wheel Small                                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2927)
#else
#declare lg_2927 =
union {
 difference {
  union {
   cylinder {
    <0, 0.32, 0>,
    <0, 0.32-LG_CORNER_SPACE+LG_E, 0>,
    0.26-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_CORNER_SPACE, 0>,
    <0, 0, 0>,
    0.26
   }
  }
  union {
   cylinder {
    <0, 0.32, 0>,
    <0, -LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0.32+LG_E, 0>,
    <0, 0.32-LG_CORNER_SPACE, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 torus {
  0.26-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, 0.32, 0>,
    <0, 0.22, 0>,
    0.725-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_CORNER_SPACE, 0>,
    <0, 0.22+LG_CORNER_SPACE, 0>,
    0.725
   }
   cone {
    <0, 0.22+LG_CORNER_SPACE*(1-cos(pi/10)), 0>, 0.725-LG_CORNER_SPACE*(1-sin(pi/10)),
    <0, 0.22+LG_CORNER_SPACE*(1-cos(pi/10))-(0.325-LG_CORNER_SPACE*(1-sin(pi/10)))*sin(pi/10), 0>, 0.4
   }
  }
  union {
   cone {
    <0, 0.32+LG_E, 0>, 0.625+LG_E/sin(0.291456),
    <0, 0.245, 0>, 0.26
   }
   cylinder {
    <0, 0.32, 0>,
    <0, -LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
  }
 } 
 torus {
  0.725-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 torus {
  0.725-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.22+LG_CORNER_SPACE, 0>
 }
 difference {
  union {
   cylinder {
    <0, 0.22, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.4
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -0.2, 0>,
    0.4-LG_CORNER_SPACE
   }
  }
  union {
   cone {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8))-LG_E, 0>, 0.32+LG_CORNER_SPACE*(1-cos(pi/8))+LG_E*sin(pi/8),
    <0, -0.08, 0>, 0.32+LG_CORNER_SPACE*(1-cos(pi/8))-(0.12+LG_CORNER_SPACE*(1-sin(pi/8)))*sin(pi/8)
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8)), 0>,
    <0, -0.2-LG_E, 0>,
    0.32+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.08-LG_E, 0>,
    <0, -0.08+LG_CORNER_SPACE, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.32, 0>,
    <0, -0.2-LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.32+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.08+LG_CORNER_SPACE, 0>
 }
 rotate <0, 0, 90>
}

#declare lg_2927_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0.32, 0>,
    <0, 0.32-LG_CORNER_SPACE+LG_E, 0>,
    0.26-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_CORNER_SPACE, 0>,
    <0, 0, 0>,
    0.26
   }
  }
  union {
   cylinder {
    <0, 0.32, 0>,
    <0, -LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0, 0.32+LG_E, 0>,
    <0, 0.32-LG_CORNER_SPACE, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 torus {
  0.26-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, 0.32, 0>,
    <0, 0.22, 0>,
    0.725-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.32-LG_CORNER_SPACE, 0>,
    <0, 0.22+LG_CORNER_SPACE, 0>,
    0.725
   }
   cone {
    <0, 0.22+LG_CORNER_SPACE*(1-cos(pi/10)), 0>, 0.725-LG_CORNER_SPACE*(1-sin(pi/10)),
    <0, 0.22+LG_CORNER_SPACE*(1-cos(pi/10))-(0.325-LG_CORNER_SPACE*(1-sin(pi/10)))*sin(pi/10), 0>, 0.4
   }
  }
  union {
   cone {
    <0, 0.32+LG_E, 0>, 0.625+LG_E/sin(0.291456),
    <0, 0.245, 0>, 0.26
   }
   cylinder {
    <0, 0.32, 0>,
    <0, -LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
  }
 } 
 torus {
  0.725-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 torus {
  0.725-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.22+LG_CORNER_SPACE, 0>
 }
 difference {
  merge {
   cylinder {
    <0, 0.22, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.4
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
    <0, -0.2, 0>,
    0.4-LG_CORNER_SPACE
   }
  }
  union {
   cone {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8))-LG_E, 0>, 0.32+LG_CORNER_SPACE*(1-cos(pi/8))+LG_E*sin(pi/8),
    <0, -0.08, 0>, 0.32+LG_CORNER_SPACE*(1-cos(pi/8))-(0.12+LG_CORNER_SPACE*(1-sin(pi/8)))*sin(pi/8)
   }
   cylinder {
    <0, -0.2+LG_CORNER_SPACE*(1-sin(pi/8)), 0>,
    <0, -0.2-LG_E, 0>,
    0.32+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.08-LG_E, 0>,
    <0, -0.08+LG_CORNER_SPACE, 0>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.32, 0>,
    <0, -0.2-LG_E, 0>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 torus {
  0.32+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.08+LG_CORNER_SPACE, 0>
 }
 rotate <0, 0, 90>
}

#end
