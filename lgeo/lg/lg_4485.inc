/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990123 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4485: Minifig Cap                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4485)
#else
#declare lg_4485 =
union {
 difference {
  union {
   difference {
    union {
     torus {
      0.6-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0.4, 0, LG_CORNER_SPACE>
     }
     torus {
      0.6-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0.4, 0, 0.08-LG_CORNER_SPACE>
     }
     cylinder {
      <0.4, 0, 0>,
      <0.4, 0, 0.08>,
      0.6-LG_CORNER_SPACE
     }
     cylinder {
      <0.4, 0, LG_CORNER_SPACE>,
      <0.4, 0, 0.08-LG_CORNER_SPACE>,
      0.6
     }
    }
    box {
     <0.4, 0.61, -0.01>,
     <-0.2, -0.61, 0.1>
    }
   }
   difference {
    union {
     torus {
      0.6-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, LG_CORNER_SPACE+LG_E>,
      0.6-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0.1>,
      <0, 0, LG_CORNER_SPACE>,
      0.6
     }
     difference {
      sphere {
       <0, 0, 0>, 0.6
       scale <1, 1, 0.8>
       translate <0, 0, 0.1>
      }
      box {
       <0.61, 0.61, 0.1-LG_E>,
       <-0.61, -0.61, -0.5>
      }
     }
    }
    box {
     <0.7, 0.61, -0.01>,
     <0, -0.61, 1>
    }
   }
   difference {
    union {
     sphere {
      <0, 0, 0>, 0.6
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -0.3>,
      0.6
      rotate <0, -20, 0>
     }
     box {
      <-0.2, 0.6, 0>,
      <0, -0.6, -0.2>
      rotate <0, -20, 0>
     }
     scale <0.75, 1, 0.8>
     translate <0, 0, 0.1>
    }
    union {
     box {
      <0.61, 0.61, LG_CORNER_SPACE+LG_E>,
      <-0.61, -0.61, -0.4>
     }
     box {
      <-0.7, 0.61, -0.01>,
      <0, -0.61, 1>
     }
    }
   }
   cylinder {
    <0.4, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <0, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4, 0.6-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0, 0.6-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <0, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4, -0.6+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0, -0.6+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.4, -0.6+LG_CORNER_SPACE, 0>,
    <0, 0.6-LG_CORNER_SPACE, 0.08>
   }
   box {
    <0.4, -0.6, LG_CORNER_SPACE>,
    <0, 0.6, 0.08-LG_CORNER_SPACE>
   }
   rotate <0, -10, 0>
   translate <0, 0, -0.2>
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
}

#declare lg_4485_clear =
merge {
 difference {
  merge {
   difference {
    merge {
     torus {
      0.6-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0.4, 0, LG_CORNER_SPACE>
     }
     torus {
      0.6-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0.4, 0, 0.08-LG_CORNER_SPACE>
     }
     cylinder {
      <0.4, 0, 0>,
      <0.4, 0, 0.08>,
      0.6-LG_CORNER_SPACE
     }
     cylinder {
      <0.4, 0, LG_CORNER_SPACE>,
      <0.4, 0, 0.08-LG_CORNER_SPACE>,
      0.6
     }
    }
    box {
     <0.4, 0.61, -0.01>,
     <-0.2, -0.61, 0.1>
    }
   }
   difference {
    merge {
     torus {
      0.6-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, LG_CORNER_SPACE+LG_E>,
      0.6-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0.1>,
      <0, 0, LG_CORNER_SPACE>,
      0.6
     }
     difference {
      sphere {
       <0, 0, 0>, 0.6
       scale <1, 1, 0.8>
       translate <0, 0, 0.1>
      }
      box {
       <0.61, 0.61, 0.1-LG_E>,
       <-0.61, -0.61, -0.5>
      }
     }
    }
    box {
     <0.7, 0.61, -0.01>,
     <0, -0.61, 1>
    }
   }
   difference {
    merge {
     sphere {
      <0, 0, 0>, 0.6
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -0.3>,
      0.6
      rotate <0, -20, 0>
     }
     box {
      <-0.2, 0.6, 0>,
      <0, -0.6, -0.2>
      rotate <0, -20, 0>
     }
     scale <0.75, 1, 0.8>
     translate <0, 0, 0.1>
    }
    union {
     box {
      <0.61, 0.61, LG_CORNER_SPACE+LG_E>,
      <-0.61, -0.61, -0.4>
     }
     box {
      <-0.7, 0.61, -0.01>,
      <0, -0.61, 1>
     }
    }
   }
   cylinder {
    <0.4, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <0, 0.6-LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4, 0.6-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0, 0.6-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <0, -0.6+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.4, -0.6+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0, -0.6+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.4, -0.6+LG_CORNER_SPACE, 0>,
    <0, 0.6-LG_CORNER_SPACE, 0.08>
   }
   box {
    <0.4, -0.6, LG_CORNER_SPACE>,
    <0, 0.6, 0.08-LG_CORNER_SPACE>
   }
   rotate <0, -10, 0>
   translate <0, 0, -0.2>
  }
  intersection {
   cylinder {
    <0, 0, -0.3>,
    <0, 0, 0.5>,
    0.51
   }
   merge {
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
}

#end
