/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_73092: Trains Magnet                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_73092)
#else
#declare lg_73092 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <0, 0.74, 0>,
    <0, 0.74-LG_CORNER_SPACE-LG_E, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.55, 0>,
    <0, 0.74-LG_CORNER_SPACE, 0>,
    0.08
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.74-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.35-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.35+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.35-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.35+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   cylinder {
    <0.35, 0, 0>,
    <-0.35, 0, 0>,
    0.6-LG_CORNER_SPACE
   }
   cylinder {
    <0.35-LG_CORNER_SPACE, 0, 0>,
    <-0.35+LG_CORNER_SPACE, 0, 0>,
    0.6
   }
  }
  union {
   cylinder {
    <0.35, 0, 0>,
    <-0.35, 0, 0>,
    0.52
   }
   cylinder {
    <0.35+LG_E, 0, 0>,
    <0.35-LG_CORNER_SPACE, 0, 0>,
    0.52+LG_CORNER_SPACE
   }
   cylinder {
    <-0.35-LG_E, 0, 0>,
    <-0.35+LG_CORNER_SPACE, 0, 0>,
    0.52+LG_CORNER_SPACE
   }
  }
 }
 union {
  cylinder {
   <0.35, 0, 0>,
   <-0.35, 0, 0>,
   0.52-LG_CORNER_SPACE
  }
  cylinder {
   <0.35-LG_CORNER_SPACE, 0, 0>,
   <-0.35+LG_CORNER_SPACE, 0, 0>,
   0.52
  }
  torus {
   0.52-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <0.35-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   0.52-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-0.35+LG_CORNER_SPACE, 0, 0>
  }
  texture {
   pigment { color Gray25 }
   finish {
    diffuse 0.8
    metallic
    roughness 3
    reflection 0.15
   }
   normal{ bumps 0.3 scale 0.02 }
  }
 }
}

#declare lg_73092_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   cylinder {
    <0, 0.74, 0>,
    <0, 0.74-LG_CORNER_SPACE-LG_E, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0.55, 0>,
    <0, 0.74-LG_CORNER_SPACE, 0>,
    0.08
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.74-LG_CORNER_SPACE, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.35-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.6-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.35+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.35-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.52+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.35+LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <0.35, 0, 0>,
    <-0.35, 0, 0>,
    0.6-LG_CORNER_SPACE
   }
   cylinder {
    <0.35-LG_CORNER_SPACE, 0, 0>,
    <-0.35+LG_CORNER_SPACE, 0, 0>,
    0.6
   }
  }
  union {
   cylinder {
    <0.35, 0, 0>,
    <-0.35, 0, 0>,
    0.52
   }
   cylinder {
    <0.35+LG_E, 0, 0>,
    <0.35-LG_CORNER_SPACE, 0, 0>,
    0.52+LG_CORNER_SPACE
   }
   cylinder {
    <-0.35-LG_E, 0, 0>,
    <-0.35+LG_CORNER_SPACE, 0, 0>,
    0.52+LG_CORNER_SPACE
   }
  }
 }
 union {
  cylinder {
   <0.35, 0, 0>,
   <-0.35, 0, 0>,
   0.52-LG_CORNER_SPACE
  }
  cylinder {
   <0.35-LG_CORNER_SPACE, 0, 0>,
   <-0.35+LG_CORNER_SPACE, 0, 0>,
   0.52
  }
  torus {
   0.52-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <0.35-LG_CORNER_SPACE, 0, 0>
  }
  torus {
   0.52-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <-0.35+LG_CORNER_SPACE, 0, 0>
  }
  texture {
   pigment { color Gray25 }
   finish {
    diffuse 0.8
    metallic
    roughness 3
    reflection 0.15
   }
   normal{ bumps 0.3 scale 0.02 }
  }
 }
}

#end
