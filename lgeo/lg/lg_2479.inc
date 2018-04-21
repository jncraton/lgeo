/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971208 Lutz Uhlmann                                                       */
/* 20071201 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2479: Rotor 4 Blade                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2479)
#else
#declare lg_2479 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder {
    <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, 0, 0>,
      <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
    }
    box {
     <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, LG_E>,
     <1.4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_WALL_WIDTH-LG_E>
    }
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
    translate <2*LG_BRICK_WIDTH, 0, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH, 0, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <0.52, 0, -LG_WALL_WIDTH+LG_E>,
      <0.52, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      0.12
     }
     cylinder {
      <0.52, 0, -LG_BRICK_HEIGHT>,
      <0.52, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      0.12-LG_CORNER_SPACE
     }
     torus {
      0.12-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0.52, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0.52, 0.12-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, 0.12-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.52, -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.52, -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <0, 0.12-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
     }
     box {
      <0.52, -0.12, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, 0.12, -LG_WALL_WIDTH+LG_E>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_WALL_WIDTH-0.08>,
    0.3
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+0.08>,
    0.3
   }
  }
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#declare lg_2479_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder {
    <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     cylinder {
      <2*LG_BRICK_WIDTH, 0, 0>,
      <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>,
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE
     }
     cylinder {
      <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
      LG_BRICK_WIDTH/2
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <2*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
     }
     torus {
      LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <2*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
     }
    }
    box {
     <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_E, LG_E>,
     <1.4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_WALL_WIDTH-LG_E>
    }
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90>
    translate <2*LG_BRICK_WIDTH, 0, 0>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90>
    translate <LG_BRICK_WIDTH, 0, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder {
      <0.52, 0, -LG_WALL_WIDTH+LG_E>,
      <0.52, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      0.12
     }
     cylinder {
      <0.52, 0, -LG_BRICK_HEIGHT>,
      <0.52, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      0.12-LG_CORNER_SPACE
     }
     torus {
      0.12-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0.52, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0.52, 0.12-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, 0.12-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0.52, -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0.52, -0.12+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <0, 0.12-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
     }
     box {
      <0.52, -0.12, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, 0.12, -LG_WALL_WIDTH+LG_E>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
  }
  union {
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    0.3+LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_WALL_WIDTH-0.08>,
    0.3
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+0.08>,
    0.3
   }
  }
 }
 torus {
  0.3+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#end

