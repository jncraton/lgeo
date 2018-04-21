/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970821 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2348a: Car Roof 4 x 4 Sunroof Glass No Ridges                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2348a)
#else
#declare lg_2348a =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0>,
    <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   } 
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    LG_WALL_WIDTH
   }
   difference {
    box {
     <0, 1.5*LG_BRICK_WIDTH, 0>,
     <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-0.12, 0.08+LG_E>
    }
    box {
     <0, 1.5*LG_BRICK_WIDTH+LG_E, 0>,
     <0.2, 1.5*LG_BRICK_WIDTH-0.12-LG_E, -0.2>
     rotate <0, 45, 0>
     translate <-1.5*LG_BRICK_WIDTH, 0, 0.08>
    }
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  difference {
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH, 0>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
    LG_WALL_WIDTH/2
   }
  }
  box {
   <LG_WALL_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E>
  }
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
 }
 box {
  <0, 1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH/2>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2>
 }
}

#declare lg_2348a_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0>,
    <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   } 
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    LG_WALL_WIDTH
   }
   difference {
    box {
     <0, 1.5*LG_BRICK_WIDTH, 0>,
     <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-0.12, 0.08+LG_E>
    }
    box {
     <0, 1.5*LG_BRICK_WIDTH+LG_E, 0>,
     <0.2, 1.5*LG_BRICK_WIDTH-0.12-LG_E, -0.2>
     rotate <0, 45, 0>
     translate <-1.5*LG_BRICK_WIDTH, 0, 0.08>
    }
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH/2>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 intersection {
  difference {
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH, 0>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
    <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0>,
    LG_WALL_WIDTH/2
   }
  }
  box {
   <LG_WALL_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_WALL_WIDTH+LG_E>
  }
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH>
 }
 box {
  <0, 1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH/2>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2>
 }
}

#end
