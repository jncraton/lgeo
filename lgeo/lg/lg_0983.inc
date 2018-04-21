/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980725 Lutz Uhlmann                                                       */
/* 20081025 Lutz Uhlmann fixed orientation (reported by John Winning)          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0983: Minifig Hand                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0983)
#else
#declare lg_angle=14.5;
#declare lg_0983 =
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
  rotate <-lg_angle, 0, 0>
  translate <0, 0.24, -0.08>
 }
 cylinder {
  <0, 0, -0.16>,
  <0, -0.68, -0.16>,
  0.1
 }
 cylinder {
  <0, 0.04, -0.16>,
  <0, -0.16, -0.16>,
  0.12
 }
 rotate <0, 0, -90>
 translate <0.16, 0.00, 0.16>
}

#declare lg_0983_clear =
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
  rotate <-lg_angle, 0, 0>
  translate <0, 0.24, -0.08>
 }
 cylinder {
  <0, 0, -0.16>,
  <0, -0.68, -0.16>,
  0.1
 }
 cylinder {
  <0, 0.04, -0.16>,
  <0, -0.16, -0.16>,
  0.12
 }
 rotate <0, 0, -90>
 translate <0.16, 0.00, 0.16>
}

#end
