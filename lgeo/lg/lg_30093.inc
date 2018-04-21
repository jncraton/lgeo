/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990616 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30093: Sea Grass                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30093)
#else
#declare lg_30093 =
union {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_PLATE_HEIGHT>
  <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_E>
  <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_CORNER_SPACE>
  <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  2*LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, 0>
  <0, 0, LG_PLATE_HEIGHT>,
  2*LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 sphere {
  <0, 1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 sphere {
  <0, 0.5*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 sphere {
  <0, -0.5*LG_BRICK_WIDTH, 5.2*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 sphere {
  <0, -1.5*LG_BRICK_WIDTH, 3.1*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 intersection {
  torus {
   0.24,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  box {
   <0.2, 0, 0>,
   <-0.2, -0.4, 0.4>
  }
  translate <0, 0.4, LG_PLATE_HEIGHT>
 }
 intersection {
  torus {
   0.32,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  box {
   <0.2, 0, 0>,
   <-0.2, 0.5, -0.5>
  }
  translate <0, 0.88, 0.88>
 }
 cylinder {
  <0, 0.88, 0.56>,
  <0, 0.4, 0.56>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 1.2, 0.88>,
  <0. 1.2, 1.2>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0.16, LG_CORNER_SPACE>,
  <0, 0.16, 1.04>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0.4, 4*0.48/sqrt(2)+1.04+0.24>,
  <0, 0.4, 3.2>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, -0.16, LG_CORNER_SPACE>,
  <0, -0.16, 1.6>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, -0.4, 4*0.48/sqrt(2)+1.6+0.24>,
  <0, -0.4, 4.16>,
  LG_WALL_WIDTH
 }
 union {
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    rotate <-45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
  }
  intersection {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   box {
    <0.2, 0, 0>,
    <-0.2, 0.9, -0.9>
    rotate <45, 0, 0>
   }
   translate <0, -0.48, 0>
   translate <0, 0.48-0.48/sqrt(2)+(0.48-0.48/sqrt(2))+0.24, 0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  cylinder {
   <0, 0.48-0.48/sqrt(2), 0.48/sqrt(2)>,
   <0, 0.48-0.48/sqrt(2)+0.24, 0.48/sqrt(2)+0.24>,
   LG_WALL_WIDTH
  }
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    rotate <45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
   translate <0, 0.24, 0.48/sqrt(2)+2*0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  translate <0, 0.16, 1.04>
 }
 union {
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    rotate <-45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
  }
  intersection {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   box {
    <0.2, 0, 0>,
    <-0.2, 0.9, -0.9>
    rotate <45, 0, 0>
   }
   translate <0, -0.48, 0>
   translate <0, 0.48-0.48/sqrt(2)+(0.48-0.48/sqrt(2))+0.24, 0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  cylinder {
   <0, 0.48-0.48/sqrt(2), 0.48/sqrt(2)>,
   <0, 0.48-0.48/sqrt(2)+0.24, 0.48/sqrt(2)+0.24>,
   LG_WALL_WIDTH
  }
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    rotate <45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
   translate <0, 0.24, 0.48/sqrt(2)+2*0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  rotate <0, 0, 180>
  translate <0, -0.16, 1.6>
 }
 intersection {
  torus {
   0.48,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  box {
   <0.2, 1, 1>,
   <-0.2, 0, 0>
  }
  translate <0, -0.64, LG_PLATE_HEIGHT+0.16>
 }
 difference {
  torus {
   0.48,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  union {
   box {
    <0.2, 0, 1>,
    <-0.2, 1, -1>
   }
   box {
    <0.2, 0, 1>,
    <-0.2, 1, -1>
    rotate <45, 0, 0>
   }
  }
  translate <0, -1.2-(0.48-0.48/sqrt(2))+0.48/sqrt(2), 1.44>
 }
 difference {
  torus {
   0.48,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  union {
   box {
    <0.2, -1, 1>,
    <-0.2, 1, 0>
   }
   box {
    <0.2, 0, 1>,
    <-0.2, -1, -1>
    rotate <45, 0, 0>
   }
  }
  translate <0, -1.68, 1.44+2*0.48/sqrt(2)>
 }
 cylinder {
  <0, -1.2, 1.44+2*0.48/sqrt(2)>,
  <0, -1.2, 2.48>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, -0.64, 0.96>,
  <0, -1.2-(0.48-0.48/sqrt(2))+0.48/sqrt(2), 0.96>,
  LG_WALL_WIDTH
 }
}

#declare lg_30093_clear =
merge {
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  2*LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -LG_PLATE_HEIGHT>
  <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_E>
  <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, LG_CORNER_SPACE>
  <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  2*LG_WALL_WIDTH
 }
 cylinder {
  <0, 0, 0>
  <0, 0, LG_PLATE_HEIGHT>,
  2*LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 sphere {
  <0, 1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 sphere {
  <0, 0.5*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 sphere {
  <0, -0.5*LG_BRICK_WIDTH, 5.2*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 sphere {
  <0, -1.5*LG_BRICK_WIDTH, 3.1*LG_BRICK_WIDTH>,
  LG_WALL_WIDTH
 }
 intersection {
  torus {
   0.24,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  box {
   <0.2, 0, 0>,
   <-0.2, -0.4, 0.4>
  }
  translate <0, 0.4, LG_PLATE_HEIGHT>
 }
 intersection {
  torus {
   0.32,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  box {
   <0.2, 0, 0>,
   <-0.2, 0.5, -0.5>
  }
  translate <0, 0.88, 0.88>
 }
 cylinder {
  <0, 0.88, 0.56>,
  <0, 0.4, 0.56>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 1.2, 0.88>,
  <0. 1.2, 1.2>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0.16, LG_CORNER_SPACE>,
  <0, 0.16, 1.04>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 0.4, 4*0.48/sqrt(2)+1.04+0.24>,
  <0, 0.4, 3.2>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, -0.16, LG_CORNER_SPACE>,
  <0, -0.16, 1.6>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, -0.4, 4*0.48/sqrt(2)+1.6+0.24>,
  <0, -0.4, 4.16>,
  LG_WALL_WIDTH
 }
 merge {
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    rotate <-45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
  }
  intersection {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   box {
    <0.2, 0, 0>,
    <-0.2, 0.9, -0.9>
    rotate <45, 0, 0>
   }
   translate <0, -0.48, 0>
   translate <0, 0.48-0.48/sqrt(2)+(0.48-0.48/sqrt(2))+0.24, 0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  cylinder {
   <0, 0.48-0.48/sqrt(2), 0.48/sqrt(2)>,
   <0, 0.48-0.48/sqrt(2)+0.24, 0.48/sqrt(2)+0.24>,
   LG_WALL_WIDTH
  }
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    rotate <45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
   translate <0, 0.24, 0.48/sqrt(2)+2*0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  translate <0, 0.16, 1.04>
 }
 merge {
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    rotate <-45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
  }
  intersection {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   box {
    <0.2, 0, 0>,
    <-0.2, 0.9, -0.9>
    rotate <45, 0, 0>
   }
   translate <0, -0.48, 0>
   translate <0, 0.48-0.48/sqrt(2)+(0.48-0.48/sqrt(2))+0.24, 0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  cylinder {
   <0, 0.48-0.48/sqrt(2), 0.48/sqrt(2)>,
   <0, 0.48-0.48/sqrt(2)+0.24, 0.48/sqrt(2)+0.24>,
   LG_WALL_WIDTH
  }
  difference {
   torus {
    0.48,
    LG_WALL_WIDTH
    rotate <0, 0, 90>
   }
   union {
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, 1.2>
    }
    box {
     <0.2, 1.2, 0>,
     <-0.2, -1.2, -1.2>
    rotate <45, 0, 0>
    }
   }
   translate <0, 0.48, 0>
   translate <0, 0.24, 0.48/sqrt(2)+2*0.48/sqrt(2)+0.48/sqrt(2)+0.24 >
  }
  rotate <0, 0, 180>
  translate <0, -0.16, 1.6>
 }
 intersection {
  torus {
   0.48,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  box {
   <0.2, 1, 1>,
   <-0.2, 0, 0>
  }
  translate <0, -0.64, LG_PLATE_HEIGHT+0.16>
 }
 difference {
  torus {
   0.48,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  union {
   box {
    <0.2, 0, 1>,
    <-0.2, 1, -1>
   }
   box {
    <0.2, 0, 1>,
    <-0.2, 1, -1>
    rotate <45, 0, 0>
   }
  }
  translate <0, -1.2-(0.48-0.48/sqrt(2))+0.48/sqrt(2), 1.44>
 }
 difference {
  torus {
   0.48,
   LG_WALL_WIDTH
   rotate <0, 0, 90>
  }
  union {
   box {
    <0.2, -1, 1>,
    <-0.2, 1, 0>
   }
   box {
    <0.2, 0, 1>,
    <-0.2, -1, -1>
    rotate <45, 0, 0>
   }
  }
  translate <0, -1.68, 1.44+2*0.48/sqrt(2)>
 }
 cylinder {
  <0, -1.2, 1.44+2*0.48/sqrt(2)>,
  <0, -1.2, 2.48>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, -0.64, 0.96>,
  <0, -1.2-(0.48-0.48/sqrt(2))+0.48/sqrt(2), 0.96>,
  LG_WALL_WIDTH
 }
}

#end
