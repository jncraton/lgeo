/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20880520 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32059: Plate 4 x 6 without corners                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32059)
#else
#declare lg_angle=atan2(LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH);
#declare lg_32059 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    box {
     <0.06, LG_E, -LG_PLATE_HEIGHT>,
     <-0.06, -LG_WALL_WIDTH, -LG_CORNER_SPACE>
     translate <KNOB_X*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
    }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <KNOB_X*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
    #declare KNOB_X = KNOB_X + 1;
   #end
   difference {
    union {
     cylinder {
      <-2*LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <-(2*LG_BRICK_WIDTH)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-(2*LG_BRICK_WIDTH)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <-1.9*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
      <1.55*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <-0.26, LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_E>,
      <0.26, -LG_BRICK_WIDTH/4, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
     }
     cylinder {
      <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS
     }
    }
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_column
    translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <-3*LG_BRICK_WIDTH/cos(lg_angle), 0, -LG_WALL_WIDTH>,
    <LG_E, LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, -lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-3*LG_BRICK_WIDTH/cos(lg_angle), 0, -LG_WALL_WIDTH>,
    <LG_E, -LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   #declare MIR = 0;
   #while (MIR < 2)
    object {
     lg_knob_inner_space
     translate <1.5*LG_BRICK_WIDTH, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <LG_BRICK_WIDTH/2, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-LG_BRICK_WIDTH/2, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-1.5*LG_BRICK_WIDTH, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <1.5*LG_BRICK_WIDTH, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <LG_BRICK_WIDTH/2, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-LG_BRICK_WIDTH/2, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-1.5*LG_BRICK_WIDTH, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-LG_BRICK_WIDTH/2, 5*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-1.5*LG_BRICK_WIDTH, 5*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare MIR = MIR + 1;
   #end
  }
 }
}

#declare lg_32059_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    box {
     <0.06, LG_E, -LG_PLATE_HEIGHT>,
     <-0.06, -LG_WALL_WIDTH, -LG_CORNER_SPACE>
     translate <KNOB_X*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>
    }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <KNOB_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <KNOB_X*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
    #declare KNOB_X = KNOB_X + 1;
   #end
   difference {
    merge {
     cylinder {
      <-2*LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <-(2*LG_BRICK_WIDTH)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <-(2*LG_BRICK_WIDTH)/cos(lg_angle), LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle*180/pi>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
     }
     box {
      <-1.9*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
      <1.55*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
     }
    }
    union {
     box {
      <-0.26, LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_E>,
      <0.26, -LG_BRICK_WIDTH/4, -LG_TOP_HEIGHT>
      rotate <0, 0, lg_angle*180/pi>
      translate <0.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
     }
     cylinder {
      <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      LG_KNOB_RADIUS
     }
    }
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-1.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH/2, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <-LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_column_clear
    translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <-LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <-3*LG_BRICK_WIDTH/cos(lg_angle), 0, -LG_WALL_WIDTH>,
    <LG_E, LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, -lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-3*LG_BRICK_WIDTH/cos(lg_angle), 0, -LG_WALL_WIDTH>,
    <LG_E, -LG_BRICK_WIDTH, LG_E>
    rotate <0, 0, lg_angle*180/pi>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   #declare MIR = 0;
   #while (MIR < 2)
    object {
     lg_knob_inner_space_clear
     translate <1.5*LG_BRICK_WIDTH, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <LG_BRICK_WIDTH/2, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-LG_BRICK_WIDTH/2, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-1.5*LG_BRICK_WIDTH, (1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <1.5*LG_BRICK_WIDTH, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <LG_BRICK_WIDTH/2, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-LG_BRICK_WIDTH/2, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-1.5*LG_BRICK_WIDTH, 3*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-LG_BRICK_WIDTH/2, 5*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-1.5*LG_BRICK_WIDTH, 5*(1-2*MIR)*LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
    #declare MIR = MIR + 1;
   #end
  }
 }
}

#end
