/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4093b: Train Base 6 x 28 with 6 holes                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4093b)
#else
#declare LENGTH = 28;
#declare WIDTH = 6;
#declare lg_4093b =
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
   #declare CYL = LENGTH/2-4;
   #while (CYL > 7)
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <0, CYL*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    }
    #declare CYL = CYL - 1;
   #end
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
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+0.04+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+0.04+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+0.04+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   #declare CYL=LENGTH/2-1;
   #while (CYL > 6)
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
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
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
   #declare CYL = -10;
   #while (CYL < 11)
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
    #if (CYL = -8)
     #declare CYL = 8;
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

#declare lg_4093b_clear =
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
   #declare CYL = LENGTH/2-4;
   #while (CYL > 7)
    torus {
     LG_KNOB_RADIUS+LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <90, 0, 0>
     translate <0, CYL*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    }
    #declare CYL = CYL - 1;
   #end
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
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+0.04+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+0.04+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-0.04-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+0.04+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   #declare CYL=LENGTH/2-1;
   #while (CYL > 6)
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
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_cylinder_clear
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
   #declare CYL = -10;
   #while (CYL < 11)
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
    #if (CYL = -8)
     #declare CYL = 8;
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
