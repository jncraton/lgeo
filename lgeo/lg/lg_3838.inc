/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080110 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3838: Minifig Airtanks                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3838)
#else
#declare lg_3838 =
union {
 difference {
  torus {
   LG_KNOB_RADIUS+0.08,
   0.08
   rotate <90, 0, 0>
  }
  box {
   <0, -LG_BRICK_WIDTH, 0.1>,
   <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -0.1>
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <0, LG_KNOB_RADIUS+0.08, 0>,
    <-0.5*LG_BRICK_WIDTH-0.15, LG_KNOB_RADIUS+0.08, 0>,
    0.08
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.5*LG_BRICK_WIDTH-0.3, 0.5-LG_CORNER_SPACE, 0.28>
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.22-LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, 0.28>,
    <-0.5*LG_BRICK_WIDTH-0.22-LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, -0.1>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.38+LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, 0.28>,
    <-0.5*LG_BRICK_WIDTH-0.38+LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, -0.1>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     cylinder {
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14+LG_CORNER_SPACE>,
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, 0>,
      0.3
     }
     cylinder {
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14+LG_CORNER_SPACE+LG_E>,
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14>,
      0.3-LG_CORNER_SPACE
     }
     sphere {
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, 0>,
      0.3
      scale <1, 1, 0.5>
     }
    }
    cylinder {
     <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14-LG_E>,
     <-0.5*LG_BRICK_WIDTH-0.3, 0.3, 0>,
     0.15
    }
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0.28>,
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0>,
    0.1-LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0.28-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0>,
    0.1
   }
   torus {
    0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0.28-LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0.5-LG_CORNER_SPACE, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.3, -0.5+LG_CORNER_SPACE, 0.28>,
  0.08
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0.5, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.3, -0.5, 0.28>,
  0.08-LG_CORNER_SPACE
 }
 box {
  <-0.5*LG_BRICK_WIDTH-0.38, 0.5-LG_CORNER_SPACE, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.22, -0.5+LG_CORNER_SPACE, -0.1>
 }
 box {
  <-0.5*LG_BRICK_WIDTH-0.38+LG_CORNER_SPACE, 0.5, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.22-LG_CORNER_SPACE, -0.5, -0.1>
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0.38>,
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0>,
  0.08-LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0.38-LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0>,
  0.08
 }
 torus {
  0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-0.5*LG_BRICK_WIDTH-0.3, 0, 0.38-LG_CORNER_SPACE>
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0.1, -1.06>,
  <-0.5*LG_BRICK_WIDTH-0.3, -0.1, -1.06>,
  0.08
 }
 box {
  <-0.5*LG_BRICK_WIDTH-0.22, 0.1, -1.06>,
  <-0.5*LG_BRICK_WIDTH-0.38, -0.1, -0.1+LG_E>
 }
}

#declare lg_3838_clear =
union {
 difference {
  torus {
   LG_KNOB_RADIUS+0.08,
   0.08
   rotate <90, 0, 0>
  }
  box {
   <0, -LG_BRICK_WIDTH, 0.1>,
   <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -0.1>
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <0, LG_KNOB_RADIUS+0.08, 0>,
    <-0.5*LG_BRICK_WIDTH-0.15, LG_KNOB_RADIUS+0.08, 0>,
    0.08
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <-0.5*LG_BRICK_WIDTH-0.3, 0.5-LG_CORNER_SPACE, 0.28>
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.22-LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, 0.28>,
    <-0.5*LG_BRICK_WIDTH-0.22-LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, -0.1>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.38+LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, 0.28>,
    <-0.5*LG_BRICK_WIDTH-0.38+LG_CORNER_SPACE, 0.5-LG_CORNER_SPACE, -0.1>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     cylinder {
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14+LG_CORNER_SPACE>,
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, 0>,
      0.3
     }
     cylinder {
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14+LG_CORNER_SPACE+LG_E>,
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14>,
      0.3-LG_CORNER_SPACE
     }
     sphere {
      <-0.5*LG_BRICK_WIDTH-0.3, 0.3, 0>,
      0.3
      scale <1, 1, 0.5>
     }
    }
    cylinder {
     <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14-LG_E>,
     <-0.5*LG_BRICK_WIDTH-0.3, 0.3, 0>,
     0.15
    }
   }
   torus {
    0.3-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.5*LG_BRICK_WIDTH-0.3, 0.3, -1.14+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0.28>,
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0>,
    0.1-LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0.28-LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0>,
    0.1
   }
   torus {
    0.1-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.5*LG_BRICK_WIDTH-0.32, 0.3, 0.28-LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0.5-LG_CORNER_SPACE, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.3, -0.5+LG_CORNER_SPACE, 0.28>,
  0.08
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0.5, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.3, -0.5, 0.28>,
  0.08-LG_CORNER_SPACE
 }
 box {
  <-0.5*LG_BRICK_WIDTH-0.38, 0.5-LG_CORNER_SPACE, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.22, -0.5+LG_CORNER_SPACE, -0.1>
 }
 box {
  <-0.5*LG_BRICK_WIDTH-0.38+LG_CORNER_SPACE, 0.5, 0.28>,
  <-0.5*LG_BRICK_WIDTH-0.22-LG_CORNER_SPACE, -0.5, -0.1>
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0.38>,
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0>,
  0.08-LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0.38-LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH-0.3, 0, 0>,
  0.08
 }
 torus {
  0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-0.5*LG_BRICK_WIDTH-0.3, 0, 0.38-LG_CORNER_SPACE>
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-0.3, 0.1, -1.06>,
  <-0.5*LG_BRICK_WIDTH-0.3, -0.1, -1.06>,
  0.08
 }
 box {
  <-0.5*LG_BRICK_WIDTH-0.22, 0.1, -1.06>,
  <-0.5*LG_BRICK_WIDTH-0.38, -0.1, -0.1+LG_E>
 }
}

#end
