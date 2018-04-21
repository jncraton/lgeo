/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990124 Lutz Uhlmann                                                       */
/* 20031005 Lutz Uhlmann added clear version                                   */
/* 20081124 Lutz Uhlmann added semicolon                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3833: Minifig Construction Helmet                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3833)
#else
#declare lg_angle=14.250032695;
#declare lg_3833 =
union {
 difference {
  union {
   difference {
    union {
     sphere {
      <0, 0, 0>,
      0.6
     }
     torus {
      0.6,
      0.04
     }
     torus {
      0.6,
      0.04
      rotate <0, 0, 45>
     }
     torus {
      0.6,
      0.04
      rotate <0, 0, 90>
     }
     torus {
      0.6,
      0.04
      rotate <0, 0, 135>
     }
    }
    union {
     cylinder {
      <0, 0, 0.62>,
      <0, 0, 0.65>,
      0.4
     }
     cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, -0.65>,
      0.65
     }
    }
    translate <0, 0, -0.24>
   }
   cylinder {
    <0, 0, -0.24+LG_CORNER_SPACE>,
    <0, 0, -0.16-LG_CORNER_SPACE>,
    0.64
   }
   cylinder {
    <0, 0, -0.24>,
    <0, 0, -0.16>,
    0.64-LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, -0.16-LG_CORNER_SPACE>
    <0.32, 0, -0.24+LG_CORNER_SPACE>,
    0.56
   }
   cylinder {
    <0.32, 0, -0.16>
    <0.32, 0, -0.24>,
    0.56-LG_CORNER_SPACE
   }
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.32, 0, -0.24+LG_CORNER_SPACE>
   }
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.32, 0, -0.16-LG_CORNER_SPACE>
   }
   union {
    cylinder {
     <0, -0.56+LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     <-0.35, -0.56+LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -0.56+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     <-0.35, -0.56+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0, -0.56, -0.24+LG_CORNER_SPACE>,
     <-0.35, -0.56+LG_CORNER_SPACE+LG_E, -0.16-LG_CORNER_SPACE>
    }
    box {
     <0, -0.5, -0.24>,
     <-0.35, -0.56+LG_CORNER_SPACE, -0.16>
    }
    rotate <0, 0, lg_angle>
    translate <0.32, 0, 0>
   }
   union {
    cylinder {
     <0, 0.56-LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     <-0.35, 0.56-LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -.56-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     <-0.35, 0.56-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0, 0.56, -0.24+LG_CORNER_SPACE>,
     <-0.35, 0.56-LG_CORNER_SPACE-LG_E, -0.16-LG_CORNER_SPACE>
    }
    box {
     <0, 0.5, -0.24>,
     <-0.35, 0.56-LG_CORNER_SPACE, -0.16>
    }
    rotate <0, 0, -lg_angle>
    translate <0.32, 0, 0>
   }
  }
  intersection {
   cylinder {
    <0, 0, -0.3>,
    <0, 0, 0.5>,
    0.51
   }
   union {
    cone {
     <0, 0, -0.6>, 0.93  
     <0, 0, 0.15>, 0.3
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, 0.2>,
     0.24+LG_E
    }
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, 0.18>,
   0.34
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, 0.2+LG_E>,
   0.24
  }
 }
 torus {
  0.15-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.38-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, 0.38>,
  <0, 0, 0.38-LG_CORNER_SPACE-LG_E>,
  0.15-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, 0.3>,
  <0, 0, 0.38-LG_CORNER_SPACE>,
  0.15
 }
 torus {
  0.64-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.24+LG_CORNER_SPACE>
 }
 torus {
  0.64-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.16-LG_CORNER_SPACE>
 }
}


#declare lg_3833_clear =
union {
 difference {
  merge {
   difference {
    merge {
     sphere {
      <0, 0, 0>,
      0.6
     }
     torus {
      0.6,
      0.04
     }
     torus {
      0.6,
      0.04
      rotate <0, 0, 45>
     }
     torus {
      0.6,
      0.04
      rotate <0, 0, 90>
     }
     torus {
      0.6,
      0.04
      rotate <0, 0, 135>
     }
    }
    union {
     cylinder {
      <0, 0, 0.62>,
      <0, 0, 0.65>,
      0.4
     }
     cylinder {
      <0, 0, LG_CORNER_SPACE>,
      <0, 0, -0.65>,
      0.65
     }
    }
    translate <0, 0, -0.24>
   }
   cylinder {
    <0, 0, -0.24+LG_CORNER_SPACE>,
    <0, 0, -0.16-LG_CORNER_SPACE>,
    0.64
   }
   cylinder {
    <0, 0, -0.24>,
    <0, 0, -0.16>,
    0.64-LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, -0.16-LG_CORNER_SPACE>
    <0.32, 0, -0.24+LG_CORNER_SPACE>,
    0.56
   }
   cylinder {
    <0.32, 0, -0.16>
    <0.32, 0, -0.24>,
    0.56-LG_CORNER_SPACE
   }
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.32, 0, -0.24+LG_CORNER_SPACE>
   }
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0.32, 0, -0.16-LG_CORNER_SPACE>
   }
   merge {
    cylinder {
     <0, -0.56+LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     <-0.35, -0.56+LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -0.56+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     <-0.35, -0.56+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0, -0.56, -0.24+LG_CORNER_SPACE>,
     <-0.35, -0.56+LG_CORNER_SPACE+LG_E, -0.16-LG_CORNER_SPACE>
    }
    box {
     <0, -0.5, -0.24>,
     <-0.35, -0.56+LG_CORNER_SPACE, -0.16>
    }
    rotate <0, 0, lg_angle>
    translate <0.32, 0, 0>
   }
   merge {
    cylinder {
     <0, 0.56-LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     <-0.35, 0.56-LG_CORNER_SPACE, -0.16-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -.56-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     <-0.35, 0.56-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <0, 0.56, -0.24+LG_CORNER_SPACE>,
     <-0.35, 0.56-LG_CORNER_SPACE-LG_E, -0.16-LG_CORNER_SPACE>
    }
    box {
     <0, 0.5, -0.24>,
     <-0.35, 0.56-LG_CORNER_SPACE, -0.16>
    }
    rotate <0, 0, -lg_angle>
    translate <0.32, 0, 0>
   }
  }
  intersection {
   cylinder {
    <0, 0, -0.3>,
    <0, 0, 0.5>,
    0.51
   }
   union {
    cone {
     <0, 0, -0.6>, 0.93  
     <0, 0, 0.15>, 0.3
    }                                                  
    cylinder {
     <0, 0, 0>,
     <0, 0, 0.2>,
     0.24+LG_E
    }
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, 0.18>,
   0.34
  }
  cylinder {
   <0, 0, -LG_E>,
   <0, 0, 0.2+LG_E>,
   0.24
  }
 }
 torus {
  0.15-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 0.38-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, 0.38>,
  <0, 0, 0.38-LG_CORNER_SPACE-LG_E>,
  0.15-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, 0.3>,
  <0, 0, 0.38-LG_CORNER_SPACE>,
  0.15
 }
 torus {
  0.64-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.24+LG_CORNER_SPACE>
 }
 torus {
  0.64-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.16-LG_CORNER_SPACE>
 }
}


#end
