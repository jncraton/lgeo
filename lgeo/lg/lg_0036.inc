/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001111 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0036: Tire Large                                                         */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_0036)
#else
#declare lg_0036 =
union {
 difference {
  cylinder {
   <0, -0.22, 0>,
   <0, 0.22, 0>,
   1.8
  }
  union {
   cylinder {
    <0, -0.22, 0>,
    <0, 0.22, 0>,
    1.68
   }
   cone {
    <0, -0.24, 0>, 1.78,
    <0, -0.14, 0>, 1.68
   }
   cone {
    <0, 0.24, 0>, 1.78,
    <0, 0.14, 0>, 1.68
   }
  }
 }
 difference {
  intersection {
   sphere {
    <0, 0, 0>, 2.12
   }
   cylinder {
    <0, 0.32, 0>,
    <0, -0.32, 0>,
    2.12+LG_E
   }
  }
  union {
   cylinder {
    <0, 0.32+LG_E, 0>,
    <0, -0.32-LG_E, 0>,
    1.76
   }
   cylinder {
    <0, 0.32+LG_E, 0>,
    <0, 0.32-LG_CORNER_SPACE, 0>,
    1.76+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.32-LG_E, 0>,
    <0, -0.32+LG_CORNER_SPACE, 0>,
    1.76+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.76+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 torus {
  1.76+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.3+LG_CORNER_SPACE, 0>
 }
 torus {
  1.84,
  LG_CORNER_SPACE
  translate <0, 0.32, 0>
 }
 torus {
  1.84,
  LG_CORNER_SPACE
  translate <0, -0.32, 0>
 }
 torus {
  1.92,
  LG_CORNER_SPACE
  translate <0, 0.32, 0>
 }
 torus {
  1.92,
  LG_CORNER_SPACE
  translate <0, -0.32, 0>
 }
 torus {
  2,
  LG_CORNER_SPACE
  translate <0, 0.32, 0>
 }
 torus {
  2,
  LG_CORNER_SPACE
  translate <0, -0.32, 0>
 }
 rotate <0, 0, 90>
}

#declare lg_0036_clear =
merge {
 difference {
  cylinder {
   <0, -0.22, 0>,
   <0, 0.22, 0>,
   1.8
  }
  union {
   cylinder {
    <0, -0.22, 0>,
    <0, 0.22, 0>,
    1.68
   }
   cone {
    <0, -0.24, 0>, 1.78,
    <0, -0.14, 0>, 1.68
   }
   cone {
    <0, 0.24, 0>, 1.78,
    <0, 0.14, 0>, 1.68
   }
  }
 }
 difference {
  intersection {
   sphere {
    <0, 0, 0>, 2.12
   }
   cylinder {
    <0, 0.32, 0>,
    <0, -0.32, 0>,
    2.12+LG_E
   }
  }
  union {
   cylinder {
    <0, 0.32+LG_E, 0>,
    <0, -0.32-LG_E, 0>,
    1.76
   }
   cylinder {
    <0, 0.32+LG_E, 0>,
    <0, 0.32-LG_CORNER_SPACE, 0>,
    1.76+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.32-LG_E, 0>,
    <0, -0.32+LG_CORNER_SPACE, 0>,
    1.76+LG_CORNER_SPACE
   }
  }
 }
 torus {
  1.76+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.32-LG_CORNER_SPACE, 0>
 }
 torus {
  1.76+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.3+LG_CORNER_SPACE, 0>
 }
 torus {
  1.84,
  LG_CORNER_SPACE
  translate <0, 0.32, 0>
 }
 torus {
  1.84,
  LG_CORNER_SPACE
  translate <0, -0.32, 0>
 }
 torus {
  1.92,
  LG_CORNER_SPACE
  translate <0, 0.32, 0>
 }
 torus {
  1.92,
  LG_CORNER_SPACE
  translate <0, -0.32, 0>
 }
 torus {
  2,
  LG_CORNER_SPACE
  translate <0, 0.32, 0>
 }
 torus {
  2,
  LG_CORNER_SPACE
  translate <0, -0.32, 0>
 }
 rotate <0, 0, 90>
}

#end
