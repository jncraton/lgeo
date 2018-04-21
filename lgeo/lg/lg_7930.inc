/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/* 19980413 Lutz Uhlmann moved from lg_0012 to lg_7930                         */
/* 20070912 Lutz Uhlmann added missing _clear keyword                          */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_7930: Door 1 x 3 x 4                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_7930)
#else
#declare HEIGHT = 11*LG_PLATE_HEIGHT-LG_WALL_WIDTH;
#declare lg_7930 = 
union {
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -HEIGHT+LG_CORNER_SPACE>,
  0.1
 } 
 sphere {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  sphere {
   <0, 0, -0.12+0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, 0.2>,
   <0, 0, -0.2>,
   0.1
  }
 }
 intersection {
  sphere {
   <0, 0, -HEIGHT+0.12-0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, -HEIGHT-0.2>,
   <0, 0, -HEIGHT+0.2>,
   0.1
  }
 }
 difference {
  union {
   box {
    <0.1, -0.34+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.1, 0, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -0.34, -LG_CORNER_SPACE>,
    <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.1, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+0.44, -LG_CORNER_SPACE>,
    <-0.1+LG_CORNER_SPACE, -1.94, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+0.44>,
    <-0.1+LG_CORNER_SPACE, 0, -HEIGHT>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
    <-0.1, -0.34+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -0.44>,
    <-0.1+LG_CORNER_SPACE, 0, 0>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
    <-0.1, -0.34+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+0.44, -(HEIGHT+0.15)/2>,
    <-LG_E, -0.34, -(HEIGHT-0.15)/2>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
    <-LG_E, -0.34+LG_CORNER_SPACE, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0, -0.1, -0.2>,
    <-0.2, -1.74, -HEIGHT+0.2> 
   }
   difference {
    box {
     <0.08, -0.05, -0.15>,
     <0.15, -1.79, -HEIGHT+0.15> 
    }
    box {
     <0, -0.15, -0.25>,
     <0.2, -1.69, -HEIGHT+0.25> 
    }
   }
  }
 }
 difference {
  union {
   cylinder {
    <0.15, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.15, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0.275, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0.35, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>
 }
 intersection {
  cylinder {
   <0.1-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
   <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
   LG_KNOB_RADIUS
  }
  box {
   <0.17, -1.94, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
   <0, -1.04, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>
  }
 }
 box {
  <-LG_E, -0.1-LG_E, -0.2-LG_E>,
  <-0.1, -1.74+LG_E, -HEIGHT+0.2+LG_E> 
  material { texture { lg_clear } interior { lg_ior } }
 }
}

#declare lg_7930_clear = 
merge {
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -HEIGHT+LG_CORNER_SPACE>,
  0.1
 } 
 sphere {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.34+LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.94+0.44-LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  sphere {
   <0, 0, -0.12+0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, 0.2>,
   <0, 0, -0.2>,
   0.1
  }
 }
 intersection {
  sphere {
   <0, 0, -HEIGHT+0.12-0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, -HEIGHT-0.2>,
   <0, 0, -HEIGHT+0.2>,
   0.1
  }
 }
 difference {
  merge {
   box {
    <0.1, -0.34+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.1, 0, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -0.34, -LG_CORNER_SPACE>,
    <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.1, -1.94+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+0.44, -LG_CORNER_SPACE>,
    <-0.1+LG_CORNER_SPACE, -1.94, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -HEIGHT+0.44>,
    <-0.1+LG_CORNER_SPACE, 0, -HEIGHT>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -HEIGHT+0.44-LG_CORNER_SPACE>,
    <-0.1, -0.34+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+LG_CORNER_SPACE, -0.44>,
    <-0.1+LG_CORNER_SPACE, 0, 0>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -0.44+LG_CORNER_SPACE>,
    <-0.1, -0.34+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <0.1-LG_CORNER_SPACE, -1.94+0.44, -(HEIGHT+0.15)/2>,
    <-LG_E, -0.34, -(HEIGHT-0.15)/2>
   }
   box {
    <0.1, -1.94+0.44-LG_CORNER_SPACE, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
    <-LG_E, -0.34+LG_CORNER_SPACE, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <0, -0.1, -0.2>,
    <-0.2, -1.74, -HEIGHT+0.2> 
   }
   difference {
    box {
     <0.08, -0.05, -0.15>,
     <0.15, -1.79, -HEIGHT+0.15> 
    }
    box {
     <0, -0.15, -0.25>,
     <0.2, -1.69, -HEIGHT+0.25> 
    }
   }
  }
 }
 difference {
  merge {
   cylinder {
    <0.15, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0.15, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
  }
  merge {
   cylinder {
    <0.275, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <0.35, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>
 }
 intersection {
  cylinder {
   <0.1-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
   <0.3-LG_CORNER_SPACE, -1.5+LG_KNOB_RADIUS, -HEIGHT/2>,
   LG_KNOB_RADIUS
  }
  box {
   <0.17, -1.94, -(HEIGHT+0.15)/2+LG_CORNER_SPACE>,
   <0, -1.04, -(HEIGHT-0.15)/2-LG_CORNER_SPACE>
  }
 }
 box {
  <-LG_E, -0.1-LG_E, -0.2-LG_E>,
  <-0.1, -1.74+LG_E, -HEIGHT+0.2+LG_E> 
  material { texture { lg_clear } interior { lg_ior } }
 }
}

#end
