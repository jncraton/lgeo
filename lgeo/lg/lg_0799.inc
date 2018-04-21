/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990922 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0799: Car Steering-Gear Axle                                             */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_0799)
#else
#declare lg_0799 =
union {
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, 5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -7*LG_PLATE_HEIGHT>,
  <0, 0, -8*LG_PLATE_HEIGHT>,
  0.28-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  0.28
 }
 cylinder {
  <0, 0, 5*LG_PLATE_HEIGHT>,
  <0, 0, 6.5*LG_PLATE_HEIGHT>,
  0.28-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, 5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  0.28
 }
 torus {
  0.16+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 intersection {
  union {
   box {
    <0.2-LG_CORNER_SPACE, 0.4, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-0.2+LG_CORNER_SPACE, -0.4, 9.25*LG_PLATE_HEIGHT>
   }
   box {
    <0.2, 0.4, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-0.2, -0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   cylinder {
    <0.2-LG_CORNER_SPACE, 0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.2-LG_CORNER_SPACE, -0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.2+LG_CORNER_SPACE, 0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.2+LG_CORNER_SPACE, -0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
  }
  difference {
   union {
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT+LG_E>,
     <0, 0, 9*LG_PLATE_HEIGHT>,
     0.28-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <0, 0, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-2*LG_E>,
     0.28
    }
    torus {
     0.28-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0 ,0>
     translate <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
   }
   union {
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT+LG_E>,
     <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     0.16+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT+LG_E>,
     <0, 0, 6*LG_PLATE_HEIGHT>,
     0.16
    }
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <0, 0, 5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
   0.28
  }
  union {
   box {
    <0.08, 0.08, 6*LG_PLATE_HEIGHT>,
    <0.3, 0.3, -8*LG_PLATE_HEIGHT>
   }
   box {
    <0.08, -0.08, 6*LG_PLATE_HEIGHT>,
    <0.3, -0.3, -8*LG_PLATE_HEIGHT>
   }
   box {
    <-0.08, 0.08, 6*LG_PLATE_HEIGHT>,
    <-0.3, 0.3, -8*LG_PLATE_HEIGHT>
   }
   box {
    <-0.08, -0.08, 6*LG_PLATE_HEIGHT>,
    <-0.3, -0.3, -8*LG_PLATE_HEIGHT>
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.18-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.18+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
  <-0.18+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT>
 }
 box {
  <0.18, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.18, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.18-LG_CORNER_SPACE, 0.24, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.18+LG_CORNER_SPACE, -0.24, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  cylinder {
   <0, 0, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
   0.28
  }
  box {
   <0.18, 0.24, -7.5*LG_PLATE_HEIGHT>,
   <-0.18, -0.24, -8.5*LG_PLATE_HEIGHT>
  }
 }
}

#declare lg_0799_clear =
merge {
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, 5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  0.28-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -7*LG_PLATE_HEIGHT>,
  <0, 0, -8*LG_PLATE_HEIGHT>,
  0.28-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  0.28
 }
 cylinder {
  <0, 0, 5*LG_PLATE_HEIGHT>,
  <0, 0, 6.5*LG_PLATE_HEIGHT>,
  0.28-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, 5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  0.28
 }
 torus {
  0.16+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0 ,0>
  translate <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 intersection {
  merge {
   box {
    <0.2-LG_CORNER_SPACE, 0.4, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-0.2+LG_CORNER_SPACE, -0.4, 9.25*LG_PLATE_HEIGHT>
   }
   box {
    <0.2, 0.4, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <-0.2, -0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   cylinder {
    <0.2-LG_CORNER_SPACE, 0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0.2-LG_CORNER_SPACE, -0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.2+LG_CORNER_SPACE, 0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.2+LG_CORNER_SPACE, -0.4, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
  }
  difference {
   merge {
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT+LG_E>,
     <0, 0, 9*LG_PLATE_HEIGHT>,
     0.28-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <0, 0, 6.5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-2*LG_E>,
     0.28
    }
    torus {
     0.28-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0 ,0>
     translate <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
   }
   union {
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT+LG_E>,
     <0, 0, 9.25*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     0.16+LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, 9.25*LG_PLATE_HEIGHT+LG_E>,
     <0, 0, 6*LG_PLATE_HEIGHT>,
     0.16
    }
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -7*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <0, 0, 5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
   0.28
  }
  union {
   box {
    <0.08, 0.08, 6*LG_PLATE_HEIGHT>,
    <0.3, 0.3, -8*LG_PLATE_HEIGHT>
   }
   box {
    <0.08, -0.08, 6*LG_PLATE_HEIGHT>,
    <0.3, -0.3, -8*LG_PLATE_HEIGHT>
   }
   box {
    <-0.08, 0.08, 6*LG_PLATE_HEIGHT>,
    <-0.3, 0.3, -8*LG_PLATE_HEIGHT>
   }
   box {
    <-0.08, -0.08, 6*LG_PLATE_HEIGHT>,
    <-0.3, -0.3, -8*LG_PLATE_HEIGHT>
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <0.18-LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.18+LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-0.18+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.18-LG_CORNER_SPACE, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
  <-0.18+LG_CORNER_SPACE, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT>
 }
 box {
  <0.18, 0.24-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.18, -0.24+LG_CORNER_SPACE, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.18-LG_CORNER_SPACE, 0.24, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.18+LG_CORNER_SPACE, -0.24, -9.5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  cylinder {
   <0, 0, -8*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
   0.28
  }
  box {
   <0.18, 0.24, -7.5*LG_PLATE_HEIGHT>,
   <-0.18, -0.24, -8.5*LG_PLATE_HEIGHT>
  }
 }
}

#end
