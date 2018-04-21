/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980313 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6584: Train Base 6 x 24                                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6584)
#else
#declare LENGTH = 24;
#declare WIDTH = 6;
#declare lg_6584 = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 8*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 7*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 6*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    box {
     <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>
    }
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>,
      <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>,
      <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
     }
    }
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+0.04, LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare CYL=LENGTH/2-1;
   #while (CYL > 4)
    object {
     lg_plate_cylinder
     translate <2*LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder
     translate <LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder
     translate <0, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder
     translate <-LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder
     translate <-2*LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    #declare CYL = CYL - 1;
   #end
   object {
    lg_plate_cylinder
    translate <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, LG_BRICK_WIDTH-0.04, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.04, 0>,
    <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, LG_E>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH-0.04, 0>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, LG_E>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   #declare KNOB = -LENGTH/2+0.5;
   #while (KNOB < LENGTH/2)
    object {
     lg_knob_inner_space
     translate <2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #if (!(abs(KNOB)=1.5))
     object {
      lg_knob_inner_space
      translate <0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <-0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    #end
    object {
     lg_knob_inner_space
     translate <-1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
   #end
   #declare CYL = -8;
   #while (CYL < 9)
    cylinder {
     <0, CYL*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <0, CYL*LG_BRICK_WIDTH, LG_E>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, CYL*LG_BRICK_WIDTH, 0>,
     <0, CYL*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
    #if (CYL = -6)
     #declare CYL = 6;
    #else
     #declare CYL = CYL + 1;
    #end
   #end
  }
 }
 #declare KNOB = -LENGTH/2+0.5;
 #while (KNOB < LENGTH/2)
  object {
   lg_knob
   translate <2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob
   translate <1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  #if (!(abs(KNOB)=1.5))
   object {
    lg_knob
    translate <0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    translate <-0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
   }
  #end
  object {
   lg_knob
   translate <-1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob
   translate <-2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB = KNOB + 1;
 #end
}

#declare lg_6584_clear = 
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 8*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 7*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 6*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    box {
     <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
     <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>
    }
    union {
     cylinder {
      <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>,
      <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
     }
     cylinder {
      <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, 0>,
      <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
     }
    }
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+0.04, LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #declare CYL=LENGTH/2-1;
   #while (CYL > 4)
    object {
     lg_plate_cylinder_clear
     translate <2*LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder_clear
     translate <LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder_clear
     translate <0, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder_clear
     translate <-LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    object {
     lg_plate_cylinder_clear
     translate <-2*LG_BRICK_WIDTH, CYL*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    #declare CYL = CYL - 1;
   #end
   object {
    lg_plate_cylinder_clear
    translate <-2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <WIDTH/2*LG_BRICK_WIDTH, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, LG_BRICK_WIDTH-0.04, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.04, 0>,
    <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, LG_E>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH-0.04, 0>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, LG_E>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+0.04+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   #declare KNOB = -LENGTH/2+0.5;
   #while (KNOB < LENGTH/2)
    object {
     lg_knob_inner_space_clear
     translate <2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #if (!(abs(KNOB)=1.5))
     object {
      lg_knob_inner_space_clear
      translate <0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <-0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
    #end
    object {
     lg_knob_inner_space_clear
     translate <-1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
   #end
   #declare CYL = -8;
   #while (CYL < 9)
    cylinder {
     <0, CYL*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <0, CYL*LG_BRICK_WIDTH, LG_E>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    cylinder {
     <0, CYL*LG_BRICK_WIDTH, 0>,
     <0, CYL*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
    #if (CYL = -6)
     #declare CYL = 6;
    #else
     #declare CYL = CYL + 1;
    #end
   #end
  }
 }
 #declare KNOB = -LENGTH/2+0.5;
 #while (KNOB < LENGTH/2)
  object {
   lg_knob_clear
   translate <2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob_clear
   translate <1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  #if (!(abs(KNOB)=1.5))
   object {
    lg_knob_clear
    translate <0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    translate <-0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
   }
  #end
  object {
   lg_knob_clear
   translate <-1.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob_clear
   translate <-2.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB = KNOB + 1;
 #end
}

#end
