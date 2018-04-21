/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970810 Lutz Uhlmann                                                       */
/* 20070905 Lutz Uhlmann  moved from lg_0007 to lg_3139                        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3139: Tire 14 x 10 Single Smooth                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3139)
#else
#declare lg_3139 =
union {
 difference {
  cylinder {
   <0, -0.16, 0>,
   <0, 0.16, 0>,
   0.4
  }
  union {
   cylinder {
    <0, -0.16, 0>,
    <0, 0.16, 0>,
    0.32
   }
   cone {
    <0, -0.2, 0>, 0.45,
    <0, -0.08, 0>, 0.3
   }
   cone {
    <0, 0.2, 0>, 0.45,
    <0, 0.08, 0>, 0.3
   }
  }
 }
 difference {
  intersection {
   sphere {
    <0, 0, 0>, 0.72
   }
   cylinder {
    <0, 0.2, 0>,
    <0, -0.2, 0>,
    0.72+LG_E
   }
  }
  union {
   cylinder {
    <0, 0.2+LG_E, 0>,
    <0, -0.2-LG_E, 0>,
    0.4
   }
   cylinder {
    <0, 0.2+LG_E, 0>,
    <0, 0.2-LG_CORNER_SPACE, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.2-LG_E, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.4+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.2-LG_CORNER_SPACE, 0>
 }  
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }  
 torus {
  0.52,
  LG_CORNER_SPACE
  translate <0, 0.2, 0>
 }  
 torus {
  0.52,
  LG_CORNER_SPACE
  translate <0, -0.2, 0>
 }  
 torus {
  0.62,
  LG_CORNER_SPACE
  translate <0, 0.2, 0>
 }  
 torus {
  0.62,
  LG_CORNER_SPACE
  translate <0, -0.2, 0>
 }  
}

#declare lg_3139_clear =
merge {
 difference {
  cylinder {
   <0, -0.16, 0>,
   <0, 0.16, 0>,
   0.4
  }
  union {
   cylinder {
    <0, -0.16, 0>,
    <0, 0.16, 0>,
    0.32
   }
   cone {
    <0, -0.2, 0>, 0.45,
    <0, -0.08, 0>, 0.3
   }
   cone {
    <0, 0.2, 0>, 0.45,
    <0, 0.08, 0>, 0.3
   }
  }
 }
 difference {
  intersection {
   sphere {
    <0, 0, 0>, 0.72
   }
   cylinder {
    <0, 0.2, 0>,
    <0, -0.2, 0>,
    0.72+LG_E
   }
  }
  union {
   cylinder {
    <0, 0.2+LG_E, 0>,
    <0, -0.2-LG_E, 0>,
    0.4
   }
   cylinder {
    <0, 0.2+LG_E, 0>,
    <0, 0.2-LG_CORNER_SPACE, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <0, -0.2-LG_E, 0>,
    <0, -0.2+LG_CORNER_SPACE, 0>,
    0.4+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.2-LG_CORNER_SPACE, 0>
 }  
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.2+LG_CORNER_SPACE, 0>
 }  
 torus {
  0.52,
  LG_CORNER_SPACE
  translate <0, 0.2, 0>
 }  
 torus {
  0.52,
  LG_CORNER_SPACE
  translate <0, -0.2, 0>
 }  
 torus {
  0.62,
  LG_CORNER_SPACE
  translate <0, 0.2, 0>
 }  
 torus {
  0.62,
  LG_CORNER_SPACE
  translate <0, -0.2, 0>
 }  
}

#end
