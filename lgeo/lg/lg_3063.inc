/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971119 Lutz Uhlmann                                                       */
/* 20071227 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3063: Brick 2 x 2 Corner Round                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3063)
#else
#declare lg_angle1=atan2(LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE);
#declare lg_angle2=atan2(LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE);
#declare lg_3063 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>
   }
   box {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH-0.05, 0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   torus {
    LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <0, 0, -LG_BRICK_HEIGHT>,
     LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    union {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_BRICK_HEIGHT>,
      LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_HEIGHT-LG_E>,
      LG_BRICK_WIDTH+LG_CORNER_SPACE
     }
    }
   }
  }
  union {
   box {
    <1.2*LG_BRICK_WIDTH, 1.2*LG_BRICK_WIDTH, LG_E>,
    <-1.2*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <-1.2*LG_BRICK_WIDTH, 1.2*LG_BRICK_WIDTH, LG_E>,
    <0, -1.2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
   }
  }
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  union {
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      2*LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <0, 0, -LG_BRICK_HEIGHT>,
      2*LG_BRICK_WIDTH-LG_CORNER_SPACE
     }
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_BRICK_HEIGHT-LG_E>,
     2*LG_BRICK_WIDTH-0.09
    }
   }
  }
  union {
   box {
    <2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <-2.2*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <-2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <0, -2.2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, 0, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
    rotate <0, 0, 45>
   }
  }
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <-2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <-2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <LG_CORNER_SPACE, -2.2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 180>
  translate <0, -LG_BRICK_WIDTH, 0>
 }
}

#declare lg_3063_clear =
merge {
 #declare MIR = 0 ;
 #while (MIR < 2)
  merge {
   sphere {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>
   }
   box {
    <(2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH-0.05, 0.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <(LG_BRICK_WIDTH+LG_CORNER_SPACE)*cos(lg_angle2)-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  merge {
   torus {
    LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <0, 0, -LG_BRICK_HEIGHT>,
     LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    union {
     cylinder {
      <0, 0, 0>,
      <0, 0, -LG_BRICK_HEIGHT>,
      LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_HEIGHT-LG_E>,
      LG_BRICK_WIDTH+LG_CORNER_SPACE
     }
    }
   }
  }
  union {
   box {
    <1.2*LG_BRICK_WIDTH, 1.2*LG_BRICK_WIDTH, LG_E>,
    <-1.2*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <-1.2*LG_BRICK_WIDTH, 1.2*LG_BRICK_WIDTH, LG_E>,
    <0, -1.2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
   }
  }
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  merge {
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      2*LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <0, 0, -LG_BRICK_HEIGHT>,
      2*LG_BRICK_WIDTH-LG_CORNER_SPACE
     }
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_BRICK_HEIGHT-LG_E>,
     2*LG_BRICK_WIDTH-0.09
    }
   }
  }
  union {
   box {
    <2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <-2.2*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <-2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <0, -2.2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, 0, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
    rotate <0, 0, 45>
   }
  }
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <-2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -LG_TOP_HEIGHT-LG_E>
   }
   box {
    <-2.2*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, LG_E>,
    <LG_CORNER_SPACE, -2.2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
  translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 180>
  translate <0, -LG_BRICK_WIDTH, 0>
 }
}

#end
