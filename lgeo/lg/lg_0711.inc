/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971218 Lutz Uhlmann                                                       */
/* 20041126 Lars C. Hassing   Corrected ifdef and name of clear part           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0711: Plate 5 x 6 with Hole                                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0711)
#else
#declare lg_0711 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <-2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 #declare CYL_Y = -2;
 #while (CYL_Y < 3)
  object {
   lg_plate_cylinder
   translate <-1.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder
   translate <-0.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #if (abs(CYL_Y)>0)
   object {
    lg_plate_cylinder
    translate <0.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
  #end
  object {
   lg_plate_cylinder
   translate <1.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL_Y = CYL_Y + 1;
 #end
 #declare KNOB_Y = -2.5;
 #while (KNOB_Y < 3)
  object {
   lg_knob
   translate <-2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob
   translate <-LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob
   translate <0, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob
   translate <LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob
   translate <2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_Y = KNOB_Y + 1;
 #end
 difference {
  box {
   <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   #declare KNOB_Y = -2.5;
   #while (KNOB_Y < 3)
    object {
     lg_knob_inner_space
     translate <-2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <0, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB_Y = KNOB_Y + 1;
   #end
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT-LG_E>,
    0.32
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 0, LG_E>,
    0.32+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.32+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>
 }
}

#declare lg_0711_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <-2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <2.5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 #declare CYL_Y = -2;
 #while (CYL_Y < 3)
  object {
   lg_plate_cylinder_clear
   translate <-1.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder_clear
   translate <-0.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #if (abs(CYL_Y)>0)
   object {
    lg_plate_cylinder_clear
    translate <0.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
  #end
  object {
   lg_plate_cylinder_clear
   translate <1.5*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL_Y = CYL_Y + 1;
 #end
 #declare KNOB_Y = -2.5;
 #while (KNOB_Y < 3)
  object {
   lg_knob_clear
   translate <-2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob_clear
   translate <-LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob_clear
   translate <0, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob_clear
   translate <LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob_clear
   translate <2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_Y = KNOB_Y + 1;
 #end
 difference {
  box {
   <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   #declare KNOB_Y = -2.5;
   #while (KNOB_Y < 3)
    object {
     lg_knob_inner_space_clear
     translate <-2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <0, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <2*LG_BRICK_WIDTH, KNOB_Y*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB_Y = KNOB_Y + 1;
   #end
   cylinder {
    <LG_BRICK_WIDTH/2, 0, 0>,
    <LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT-LG_E>,
    0.32
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, 0, LG_E>,
    0.32+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.32+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH/2, 0, -LG_CORNER_SPACE>
 }
}

#end
