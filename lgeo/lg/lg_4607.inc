/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080116 Lutz Uhlmann fixed stud orientation                                */
/* 20080116 Lutz Uhlmann changed to round corners                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4607: Plate 4 x 16 with 24 Studs                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4607)
#else
#declare LENGTH = 16;
#declare WIDTH = 4;
#declare lg_4607 = 
union {
 cylinder {
  <2*LG_WALL_WIDTH, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <2*LG_WALL_WIDTH, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, 2*LG_WALL_WIDTH, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <2*LG_WALL_WIDTH, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <2*LG_WALL_WIDTH, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), 2*LG_WALL_WIDTH, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 4)
  difference {
   union {
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
     <0, 0, 0>,
     <0, 0, LG_PLATE_HEIGHT>,
     2*LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_CORNER_SPACE>,
     <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     2*LG_WALL_WIDTH
    }
   }
   union {
    cylinder {
     <0, 0, -LG_E>,
     <0, 0, LG_PLATE_INNER_HEIGHT>,
     LG_WALL_WIDTH
    }
    box {
     <-LG_BRICK_WIDTH/2, 0, -LG_E>,
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>
    }
    box {
     <0, -LG_BRICK_WIDTH/2, -LG_E>,
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>
    }
   }
   rotate <0, 0, MIR*90>
   #if (MIR=0)
    translate <2*LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>
   #end
   #if (MIR=1)
    translate <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>
   #end
   #if (MIR=2)
    translate <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
   #end
   #if (MIR=3)
    translate <2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   box {
    <LG_CORNER_SPACE, 2*LG_WALL_WIDTH, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_WALL_WIDTH, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>
   }
   box {
    <0, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_WALL_WIDTH, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
   }
   #declare KS_X = 2;
   #while (KS_X < LENGTH-2)
    #declare KS_Y = 0;
    #while (KS_Y < WIDTH)
     object {
      lg_knob_inner_space
      translate <(KS_X+0.5)*LG_BRICK_WIDTH, (KS_Y+0.5)*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
     }
     #declare KS_Y = KS_Y + 1;
     #end
    #declare KS_X = KS_X + 1;
    #if (KS_X = 4)
     #declare KS_X = 7;
    #end
    #if (KS_X = 9)
     #declare KS_X = 12;
    #end
   #end
  }
 }
 #declare CYL_X = 1;
 #while (CYL_X < LENGTH)
  #declare CYL_Y = 1;
  #while (CYL_Y < WIDTH)
   object {
    lg_plate_cylinder
    translate <CYL_X*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, 0>
   }
   #declare CYL_Y = CYL_Y + 1;
  #end
  #declare CYL_X = CYL_X + 1;
 #end
 #declare KNOB_X = 2;
 #while (KNOB_X < LENGTH-2)
  #declare KNOB_Y = 0;
  #while (KNOB_Y < WIDTH)
   object {
    lg_knob
    rotate <0, 0, -90>
    translate <(0.5+KNOB_X)*LG_BRICK_WIDTH, (0.5+KNOB_Y)*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
   }
   #declare KNOB_Y = KNOB_Y + 1;
  #end
  #declare KNOB_X = KNOB_X + 1;
  #if (KNOB_X = 4)
   #declare KNOB_X = 7;
  #end
  #if (KNOB_X = 9)
   #declare KNOB_X = 12;
  #end
 #end
 translate <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 rotate <0, 0, 90>
}

#declare lg_4607_clear = 
merge {
 cylinder {
  <2*LG_WALL_WIDTH, LG_CORNER_SPACE, LG_CORNER_SPACE>,
  <(LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH), LG_CORNER_SPACE, LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <2*LG_WALL_WIDTH, LG_CORNER_SPACE, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE 
 }
 cylinder {
  <LG_CORNER_SPACE, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, 2*LG_WALL_WIDTH, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <LG_CORNER_SPACE, ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  <2*LG_WALL_WIDTH, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <2*LG_WALL_WIDTH, ((WIDTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), 2*LG_WALL_WIDTH, (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  <((LENGTH*LG_BRICK_WIDTH)-LG_CORNER_SPACE), ((WIDTH*LG_BRICK_WIDTH)-2*LG_WALL_WIDTH), (LG_PLATE_HEIGHT-LG_CORNER_SPACE)>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 4)
  difference {
   merge {
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
     <0, 0, 0>,
     <0, 0, LG_PLATE_HEIGHT>,
     2*LG_WALL_WIDTH-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_CORNER_SPACE>,
     <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     2*LG_WALL_WIDTH
    }
   }
   union {
    cylinder {
     <0, 0, -LG_E>,
     <0, 0, LG_PLATE_INNER_HEIGHT>,
     LG_WALL_WIDTH
    }
    box {
     <-LG_BRICK_WIDTH/2, 0, -LG_E>,
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>
    }
    box {
     <0, -LG_BRICK_WIDTH/2, -LG_E>,
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+LG_E>
    }
   }
   rotate <0, 0, MIR*90>
   #if (MIR=0)
    translate <2*LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>
   #end
   #if (MIR=1)
    translate <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>
   #end
   #if (MIR=2)
    translate <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
   #end
   #if (MIR=3)
    translate <2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   box {
    <LG_CORNER_SPACE, 2*LG_WALL_WIDTH, 0>,
    <LENGTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_WALL_WIDTH, LG_CORNER_SPACE, 0>,
    <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT>
   }
   box {
    <0, 2*LG_WALL_WIDTH, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH, WIDTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_WALL_WIDTH, 0, LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
  }
  merge {
   box {
    <LG_WALL_WIDTH, LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LENGTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_PLATE_INNER_HEIGHT>
   }
   #declare KS_X = 2;
   #while (KS_X < LENGTH-2)
    #declare KS_Y = 0;
    #while (KS_Y < WIDTH)
     object {
      lg_knob_inner_space_clear
      translate <(KS_X+0.5)*LG_BRICK_WIDTH, (KS_Y+0.5)*LG_BRICK_WIDTH, LG_PLATE_INNER_HEIGHT>
     }
     #declare KS_Y = KS_Y + 1;
     #end
    #declare KS_X = KS_X + 1;
    #if (KS_X = 4)
     #declare KS_X = 7;
    #end
    #if (KS_X = 9)
     #declare KS_X = 12;
    #end
   #end
  }
 }
 #declare CYL_X = 1;
 #while (CYL_X < LENGTH)
  #declare CYL_Y = 1;
  #while (CYL_Y < WIDTH)
   object {
    lg_plate_cylinder_clear
    translate <CYL_X*LG_BRICK_WIDTH, CYL_Y*LG_BRICK_WIDTH, 0>
   }
   #declare CYL_Y = CYL_Y + 1;
  #end
  #declare CYL_X = CYL_X + 1;
 #end
 #declare KNOB_X = 2;
 #while (KNOB_X < LENGTH-2)
  #declare KNOB_Y = 0;
  #while (KNOB_Y < WIDTH)
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    translate <(0.5+KNOB_X)*LG_BRICK_WIDTH, (0.5+KNOB_Y)*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>
   }
   #declare KNOB_Y = KNOB_Y + 1;
  #end
  #declare KNOB_X = KNOB_X + 1;
  #if (KNOB_X = 4)
   #declare KNOB_X = 7;
  #end
  #if (KNOB_X = 9)
   #declare KNOB_X = 12;
  #end
 #end
 translate <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 rotate <0, 0, 90>
}

#end
