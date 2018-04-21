/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080521 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_32083: Slope Brick 45  4 x 6 Double                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_32083)
#else
#declare lg_angle1=atan2(LG_BRICK_WIDTH+LG_CORNER_SPACE-LG_WALL_WIDTH*(1-sin(pi/4)), LG_BRICK_HEIGHT-LG_WALL_WIDTH*(1+sin(pi/4)))*180/pi;
#declare lg_angle2=90-lg_angle1;
#declare lg_32083 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <3*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH)/sin(pi*lg_angle1/180)>
    rotate <0, -lg_angle1, 0>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   difference {
    union {
     box {
      <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
     }
     object {
      lg_brick_column
      translate <2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
     }
     object {
      lg_brick_column
      translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
      rotate <0, -lg_angle1, 0>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
      rotate <0, lg_angle1, 0>
      translate <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
    }
   }
   object {
    lg_brick_column
    translate <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_column
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_column
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    object {
     lg_knob
     rotate <0, 0, 180*ROT>
     translate <1.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, 0>
    }
    object {
     lg_knob
     rotate <0, 0, 180*ROT>
     translate <0.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, 0>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    object {
     lg_knob_inner_space
     translate <1.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <0.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-0.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-1.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
}

#declare lg_32083_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <3*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_BRICK_WIDTH/cos(pi*lg_angle2/180)*sin(lg_angle2*pi/180)>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH)/sin(pi*lg_angle1/180)>
    rotate <0, -lg_angle1, 0>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   difference {
    merge {
     box {
      <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
     }
     object {
      lg_brick_column_clear
      translate <2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
     }
     object {
      lg_brick_column_clear
      translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
      rotate <0, -lg_angle1, 0>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <0, -2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(LG_BRICK_WIDTH-LG_CORNER_SPACE)/sin(pi*lg_angle2/180)>
      rotate <0, lg_angle1, 0>
      translate <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
    }
   }
   object {
    lg_brick_column_clear
    translate <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_column_clear
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_brick_column_clear
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH-0.06, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT>
   }
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    object {
     lg_knob_clear
     rotate <0, 0, 180*ROT>
     translate <1.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, 0>
    }
    object {
     lg_knob_clear
     rotate <0, 0, 180*ROT>
     translate <0.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, 0>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   #declare KNOB_X = -1.5;
   #while (KNOB_X < 2)
    object {
     lg_knob_inner_space_clear
     translate <1.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <0.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-0.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-1.5*LG_BRICK_WIDTH, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
}

#declare lg_32083_slope =
union {
 box {
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <-LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH)/sin(pi*lg_angle1/180)>
  rotate <0, -lg_angle1, 0>
  translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
 }
 box {
  <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <-LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(LG_BRICK_WIDTH)/sin(pi*lg_angle1/180)>
  rotate <0, -lg_angle1, 0>
  translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
  scale <-1, 1, 1>
 }
}

#end
