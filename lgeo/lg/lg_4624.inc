/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980829 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4624: Wheel Center                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4624)
#else
#declare lg_4624 =
union {
 difference {
  union {
   difference {
    union {
     cylinder {
      <-0.32, 0, 0>,
      <-0.16, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.16, 0, 0>,
      0.4
     }
     cone {
      <-0.16, 0, 0>, 0.4,
      <-0.08, 0, 0>, 0.3
     }
     cylinder {
      <0.32, 0, 0>,
      <0.16, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0.16, 0, 0>,
      0.4
     }
     cone {
      <0.16, 0, 0>, 0.4,
      <0.08, 0, 0>, 0.3
     }
     cylinder {
      <0.08, 0, 0>,
      <-0.08, 0, 0>,
      0.3
     }
    } 
    union {
     cylinder {
      <0.32, 0, 0>,
      <0, 0, 0>,
      0.24
     }
     cylinder {
      <LG_E, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cone {
      <0.32+LG_E, 0, 0>, 0.33
      <0.24, 0, 0>, 0.24
     }
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
  }
  intersection {
   union {
    box {
     <-0.32-LG_E, 0.07, 0.25>,
     <0.08+LG_E, -0.07, -0.25>
    }
    box {
     <-0.32-LG_E, 0.25, 0.07>,
     <0.08+LG_E, -0.25, -0.07>
    }
   }
   cylinder {
    <0.1, 0, 0>,
    <-0.32-LG_E, 0, 0>,
    0.24
   }
  }
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.32+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.32+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.16-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, 0, 0>,
  <0.24, 0, 0>,
  0.16
 }  
 cylinder {
  <0.32, 0, 0>,
  <0.24, 0, 0>,
  0.16-LG_CORNER_SPACE
 }  
 cylinder {
  <0.32-LG_CORNER_SPACE, 0.33, 0.06-LG_CORNER_SPACE>,
  <0.32-LG_CORNER_SPACE, -0.33, 0.06-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, 0.33, -0.06+LG_CORNER_SPACE>,
  <0.32-LG_CORNER_SPACE, -0.33, -0.06+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.33>,
  <0.32-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, -0.33>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.33>,
  <0.32-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, -0.33>,
  LG_CORNER_SPACE
 }
 box {
  <0.32, -0.06+LG_CORNER_SPACE, 0.33>,
  <0.24, 0.06-LG_CORNER_SPACE, -0.33>
 }
 box {
  <0.32-LG_CORNER_SPACE, -0.06, 0.33>,
  <0.24, 0.06, -0.33>
 }
 box {
  <0.32, 0.33, -0.06+LG_CORNER_SPACE>,
  <0.24, -0.33, 0.06-LG_CORNER_SPACE>
 }
 box {
  <0.32-LG_CORNER_SPACE, 0.33, -0.06>,
  <0.24, -0.33, 0.06>
 }
}

#declare lg_4624_clear =
merge {
 difference {
  merge {
   difference {
    merge {
     cylinder {
      <-0.32, 0, 0>,
      <-0.16, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.16, 0, 0>,
      0.4
     }
     cone {
      <-0.16, 0, 0>, 0.4,
      <-0.08, 0, 0>, 0.3
     }
     cylinder {
      <0.32, 0, 0>,
      <0.16, 0, 0>,
      0.4-LG_CORNER_SPACE
     }
     cylinder {
      <0.32-LG_CORNER_SPACE, 0, 0>,
      <0.16, 0, 0>,
      0.4
     }
     cone {
      <0.16, 0, 0>, 0.4,
      <0.08, 0, 0>, 0.3
     }
     cylinder {
      <0.08, 0, 0>,
      <-0.08, 0, 0>,
      0.3
     }
    } 
    union {
     cylinder {
      <0.32, 0, 0>,
      <0, 0, 0>,
      0.24
     }
     cylinder {
      <LG_E, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <-0.32+LG_CORNER_SPACE, 0, 0>,
      <-0.32-LG_E, 0, 0>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cone {
      <0.32+LG_E, 0, 0>, 0.33
      <0.24, 0, 0>, 0.24
     }
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-0.32+LG_CORNER_SPACE, 0, 0>
   }
  }
  intersection {
   merge {
    box {
     <-0.32-LG_E, 0.07, 0.25>,
     <0.08+LG_E, -0.07, -0.25>
    }
    box {
     <-0.32-LG_E, 0.25, 0.07>,
     <0.08+LG_E, -0.25, -0.07>
    }
   }
   cylinder {
    <0.1, 0, 0>,
    <-0.32-LG_E, 0, 0>,
    0.24
   }
  }
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.32+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.32+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.16-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.32-LG_CORNER_SPACE, 0, 0>
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, 0, 0>,
  <0.24, 0, 0>,
  0.16
 }  
 cylinder {
  <0.32, 0, 0>,
  <0.24, 0, 0>,
  0.16-LG_CORNER_SPACE
 }  
 cylinder {
  <0.32-LG_CORNER_SPACE, 0.33, 0.06-LG_CORNER_SPACE>,
  <0.32-LG_CORNER_SPACE, -0.33, 0.06-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, 0.33, -0.06+LG_CORNER_SPACE>,
  <0.32-LG_CORNER_SPACE, -0.33, -0.06+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 0.33>,
  <0.32-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, -0.33>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.32-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 0.33>,
  <0.32-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, -0.33>,
  LG_CORNER_SPACE
 }
 box {
  <0.32, -0.06+LG_CORNER_SPACE, 0.33>,
  <0.24, 0.06-LG_CORNER_SPACE, -0.33>
 }
 box {
  <0.32-LG_CORNER_SPACE, -0.06, 0.33>,
  <0.24, 0.06, -0.33>
 }
 box {
  <0.32, 0.33, -0.06+LG_CORNER_SPACE>,
  <0.24, -0.33, 0.06-LG_CORNER_SPACE>
 }
 box {
  <0.32-LG_CORNER_SPACE, 0.33, -0.06>,
  <0.24, -0.33, 0.06>
 }
}

#end
