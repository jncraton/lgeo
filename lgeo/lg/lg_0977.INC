/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19960726 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0977: Minifig Hand (old version)                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0977)
#else
#declare lg_0977 =
union {
 intersection {
  union {
   difference {
    union {
     cylinder {
      <0, 0, -0.26>,
      <0, 0, 0.22>,
      0.24-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.26+LG_CORNER_SPACE>,
      <0, 0, 0.22-LG_CORNER_SPACE>,
      0.24
     }
    }
    union {
     cylinder {
      <0, 0, 0.22+LG_E>,
      <0, 0, 0.22-LG_CORNER_SPACE>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.26-LG_E>,
      <0, 0, -0.26+LG_CORNER_SPACE>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0.22>,
      <0, 0, -0.26>,
      0.16
     }
    }
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.22-LG_CORNER_SPACE>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.22-LG_CORNER_SPACE>
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.26+LG_CORNER_SPACE>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.26+LG_CORNER_SPACE>
   }
  }
  difference {
   union {
    box {
     <0.3, -0.3, 0.3>,
     <-0.3, 0, -0.3>
    }
    box {
     <0.3, 0.3, -0.02>,
     <-0.3, -0.3, 0.3>
    }
    cylinder {
     <0.3, 0, -0.02>,
     <-0.3, 0, -0.02>,
     0.24
    }
   }
   box {
    <0.14, 0, 0.3>,
    <-0.14, 0.3, -0.3>
   }
  }
  translate <0, 0.2, -0.1>
 }
 cylinder {
  <0, 0, -0.16>,
  <0, -0.5, -0.16>,
  0.1
 }
 cylinder {
  <0, 0, -0.16>,
  <0, -0.16, -0.16>,
  0.12
 }
}

#declare lg_0977_clear =
merge {
 intersection {
  merge {
   difference {
    merge {
     cylinder {
      <0, 0, -0.26>,
      <0, 0, 0.22>,
      0.24-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.26+LG_CORNER_SPACE>,
      <0, 0, 0.22-LG_CORNER_SPACE>,
      0.24
     }
    }
    union {
     cylinder {
      <0, 0, 0.22+LG_E>,
      <0, 0, 0.22-LG_CORNER_SPACE>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -0.26-LG_E>,
      <0, 0, -0.26+LG_CORNER_SPACE>,
      0.16+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0.22>,
      <0, 0, -0.26>,
      0.16
     }
    }
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.22-LG_CORNER_SPACE>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, 0.22-LG_CORNER_SPACE>
   }
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.26+LG_CORNER_SPACE>
   }
   torus {
    0.16+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -0.26+LG_CORNER_SPACE>
   }
  }
  difference {
   merge {
    box {
     <0.3, -0.3, 0.3>,
     <-0.3, 0, -0.3>
    }
    box {
     <0.3, 0.3, -0.02>,
     <-0.3, -0.3, 0.3>
    }
    cylinder {
     <0.3, 0, -0.02>,
     <-0.3, 0, -0.02>,
     0.24
    }
   }
   box {
    <0.14, 0, 0.3>,
    <-0.14, 0.3, -0.3>
   }
  }
  translate <0, 0.2, -0.1>
 }
 cylinder {
  <0, 0, -0.16>,
  <0, -0.5, -0.16>,
  0.1
 }
 cylinder {
  <0, 0, -0.16>,
  <0, -0.16, -0.16>,
  0.12
 }
}

#end
