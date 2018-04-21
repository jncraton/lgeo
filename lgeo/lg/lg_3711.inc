/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990923 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3711: Technic Chain Link                                                 */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3711)
#else
#declare lg_3711 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.64, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.64, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.64, 0.3-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.64, 0.3-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.64, 0.24+LG_CORNER_SPACE, 0>
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.64, 0.3-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.64, 0.24, 0>,
    <-0.64, 0.3, 0>,
    0.2-LG_CORNER_SPACE
   }
   cylinder {
    <-0.64, 0.24+LG_CORNER_SPACE, 0>,
    <-0.64, 0.3-LG_CORNER_SPACE, 0>,
    0.2
   }
   box {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2>,
    <-0.64, 0.3-LG_CORNER_SPACE, -0.2>
   }
   box {
    <-0.24-LG_CORNER_SPACE, 0.24, 0.2-LG_CORNER_SPACE>,
    <-0.64, 0.3, -0.2+LG_CORNER_SPACE>
   }
   torus {
    0.06-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.64, 0.4-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.64, 0.4, 0>,
    <-0.64, 0.4-LG_CORNER_SPACE-LG_E, 0>,
    0.06-LG_CORNER_SPACE
   }
   cylinder {
    <-0.64, 0.3-LG_E, 0>,
    <-0.64, 0.4-LG_CORNER_SPACE, 0>,
    0.06
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.24-LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.24-LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.44+LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2>,
    <-0.24-LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2>
   }
   box {
    <-0.24, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.44, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0, 0.3+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   box {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi)+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>
   }
   difference {
    union {
     box {
      <0, 0.3, 0.2-LG_CORNER_SPACE>,
      <-0.44+LG_CORNER_SPACE, 0.4, -0.2+LG_CORNER_SPACE>
     }
     box {
      <0, 0.3+LG_CORNER_SPACE, 0.2>,
      <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2>
     }
    }
    union {
     cylinder {
      <0, 0.3-LG_E, 0>,
      <0, 0.3+LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.4+LG_E, 0>,
      <0, 0.4-LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.3, 0>,
      <0, 0.4, 0>,
      0.06
     }
     box {
      <0, 0.4, -0.06-LG_CORNER_SPACE>,
      <0.3, 0.3, 0>
      rotate <0, 60, 0>
     }
     box {
      <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3-LG_E, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
      <LG_E, 0.4+LG_E, -0.2-LG_E>
     }
    }
   }
   difference {
    union {
     cylinder {
      <0, 0.3, 0>,
      <0, 0.4, 0>,
      0.2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.3+LG_CORNER_SPACE, 0>,
      <0, 0.4-LG_CORNER_SPACE, 0>,
      0.2
     }
     torus {
      0.2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.3+LG_CORNER_SPACE, 0>
     }
     torus {
      0.2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.4-LG_CORNER_SPACE, 0>
     }
    }
    union {
     cylinder {
      <0, 0.3-LG_E, 0>,
      <0, 0.3+LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.4+LG_E, 0>,
      <0, 0.4-LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.3, 0>,
      <0, 0.4, 0>,
      0.06
     }
     box {
      <0, 0.4+LG_E, -0.2-LG_E>,
      <-0.3, 0.3-LG_E, 0>
      rotate <0, -60, 0>
     }
     box {
      <-LG_E, 0.29, 0.2>,
      <-0.2, 0.41, -0.2>
     }
    }
   }
   difference {
    union {
     torus {
      0.06+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.3+LG_CORNER_SPACE, 0>
     }
     torus {
      0.06+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.4-LG_CORNER_SPACE, 0>
     }
    }
    union {
     difference {
      box {
       <0, 0.4+LG_E, -0.2-LG_E>,
       <-0.3, 0.3-LG_E, 0>
       rotate <0, -60, 0>
      }
      box {
       <-LG_E, 0.29, 0>,
       <-0.3, 0.42, -0.2>
      }
     }
     difference {
      box {
       <0, 0.4+LG_E, -0.12>,
       <0.3, 0.3-LG_E, 0>
       rotate <0, 60, 0>
      }
      box {
       <LG_E, 0.29, 0>,
       <0.3, 0.42, -0.2>
      }
     }
    }
   }
   union {
    cylinder {
     <0, 0.3, -0.13>,
     <0, 0.4, -0.13>,
     0.07-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0.3+LG_CORNER_SPACE, -0.13>,
     <0, 0.4-LG_CORNER_SPACE, -0.13>,
     0.07
    }
    torus {
     0.07-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.3+LG_CORNER_SPACE, -0.13>
    }
    torus {
     0.07-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.4-LG_CORNER_SPACE, -0.13>
    }
    rotate <0, -60, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-0.64, 0.25, 0>,
  <-0.64, -0.25, 0>,
  0.08
 }
 cylinder {
  <-0.32, 0.25, 0>,
  <-0.32, -0.25, 0>,
  0.06
 }
}

#declare lg_3711_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.64, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.64, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.64, 0.3-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.64, 0.3-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.64, 0.24+LG_CORNER_SPACE, 0>
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.64, 0.3-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.64, 0.24, 0>,
    <-0.64, 0.3, 0>,
    0.2-LG_CORNER_SPACE
   }
   cylinder {
    <-0.64, 0.24+LG_CORNER_SPACE, 0>,
    <-0.64, 0.3-LG_CORNER_SPACE, 0>,
    0.2
   }
   box {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2>,
    <-0.64, 0.3-LG_CORNER_SPACE, -0.2>
   }
   box {
    <-0.24-LG_CORNER_SPACE, 0.24, 0.2-LG_CORNER_SPACE>,
    <-0.64, 0.3, -0.2+LG_CORNER_SPACE>
   }
   torus {
    0.06-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.64, 0.4-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <-0.64, 0.4, 0>,
    <-0.64, 0.4-LG_CORNER_SPACE-LG_E, 0>,
    0.06-LG_CORNER_SPACE
   }
   cylinder {
    <-0.64, 0.3-LG_E, 0>,
    <-0.64, 0.4-LG_CORNER_SPACE, 0>,
    0.06
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <-0.24-LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.24-LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.24-LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-0.44+LG_CORNER_SPACE, 0.24+LG_CORNER_SPACE, 0.2>,
    <-0.24-LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2>
   }
   box {
    <-0.24, 0.24+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0.44, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0, 0.4-LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    <-0, 0.3+LG_CORNER_SPACE, 0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.44+LG_CORNER_SPACE, 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   sphere {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.4-LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
    LG_CORNER_SPACE
   }
   box {
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi)+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2+LG_CORNER_SPACE>,
    <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3+LG_CORNER_SPACE, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>
   }
   difference {
    merge {
     box {
      <0, 0.3, 0.2-LG_CORNER_SPACE>,
      <-0.44+LG_CORNER_SPACE, 0.4, -0.2+LG_CORNER_SPACE>
     }
     box {
      <0, 0.3+LG_CORNER_SPACE, 0.2>,
      <-0.44+LG_CORNER_SPACE, 0.4-LG_CORNER_SPACE, -0.2>
     }
    }
    union {
     cylinder {
      <0, 0.3-LG_E, 0>,
      <0, 0.3+LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.4+LG_E, 0>,
      <0, 0.4-LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.3, 0>,
      <0, 0.4, 0>,
      0.06
     }
     box {
      <0, 0.4, -0.06-LG_CORNER_SPACE>,
      <0.3, 0.3, 0>
      rotate <0, 60, 0>
     }
     box {
      <(-0.06-LG_CORNER_SPACE)*sin(60/180*pi), 0.3-LG_E, (-0.06-LG_CORNER_SPACE)*cos(60/180*pi)>,
      <LG_E, 0.4+LG_E, -0.2-LG_E>
     }
    }
   }
   difference {
    merge {
     cylinder {
      <0, 0.3, 0>,
      <0, 0.4, 0>,
      0.2-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.3+LG_CORNER_SPACE, 0>,
      <0, 0.4-LG_CORNER_SPACE, 0>,
      0.2
     }
     torus {
      0.2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.3+LG_CORNER_SPACE, 0>
     }
     torus {
      0.2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.4-LG_CORNER_SPACE, 0>
     }
    }
    union {
     cylinder {
      <0, 0.3-LG_E, 0>,
      <0, 0.3+LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.4+LG_E, 0>,
      <0, 0.4-LG_CORNER_SPACE, 0>,
      0.06+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.3, 0>,
      <0, 0.4, 0>,
      0.06
     }
     box {
      <0, 0.4+LG_E, -0.2-LG_E>,
      <-0.3, 0.3-LG_E, 0>
      rotate <0, -60, 0>
     }
     box {
      <-LG_E, 0.29, 0.2>,
      <-0.2, 0.41, -0.2>
     }
    }
   }
   difference {
    merge {
     torus {
      0.06+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.3+LG_CORNER_SPACE, 0>
     }
     torus {
      0.06+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, 0.4-LG_CORNER_SPACE, 0>
     }
    }
    union {
     difference {
      box {
       <0, 0.4+LG_E, -0.2-LG_E>,
       <-0.3, 0.3-LG_E, 0>
       rotate <0, -60, 0>
      }
      box {
       <-LG_E, 0.29, 0>,
       <-0.3, 0.42, -0.2>
      }
     }
     difference {
      box {
       <0, 0.4+LG_E, -0.1>,
       <0.3, 0.3-LG_E, 0>
       rotate <0, 60, 0>
      }
      box {
       <LG_E, 0.29, 0>,
       <0.3, 0.42, -0.2>
      }
     }
    }
   }
   merge {
    cylinder {
     <0, 0.3, -0.13>,
     <0, 0.4, -0.13>,
     0.07-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0.3+LG_CORNER_SPACE, -0.13>,
     <0, 0.4-LG_CORNER_SPACE, -0.13>,
     0.07
    }
    torus {
     0.07-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.3+LG_CORNER_SPACE, -0.13>
    }
    torus {
     0.07-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <0, 0.4-LG_CORNER_SPACE, -0.13>
    }
    rotate <0, -60, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-0.64, 0.25, 0>,
  <-0.64, -0.25, 0>,
  0.08
 }
 cylinder {
  <-0.32, 0.25, 0>,
  <-0.32, -0.25, 0>,
  0.06
 }
}

#end
