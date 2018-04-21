/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980616 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3688: Slope Brick 75 2 x 2 x 2 Quad. Convex                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3688)
#else
#declare lg_angle=atan2(0.5, 2*LG_BRICK_HEIGHT-0.2);
#declare lg_3688 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   sphere {
    <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.3+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+0.08, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+0.35>
   }
   difference {
    box {
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
     rotate <0, -lg_angle*180/pi, 0>
     translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    }
    union {
     box {
      <0, LG_BRICK_WIDTH, 0.1>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -(2*LG_BRICK_HEIGHT)/cos(lg_angle)>
      rotate <0, -lg_angle*180/pi, 0>
      translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
     box {
      <0, LG_BRICK_WIDTH, 0.1>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -(2*LG_BRICK_HEIGHT)/cos(lg_angle)>
      rotate <0, lg_angle*180/pi, 0>
      translate <-0.3+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -0.8>,
      LG_WALL_WIDTH
     }
     rotate <0, 0, 90>
    }
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_RADIUS
   }
   box {
    <0.04, 0.8*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT+0.2>,
    <-0.04, -0.8*LG_BRICK_WIDTH-LG_E, 0>
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -2>,
    LG_KNOB_RADIUS
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, lg_angle*180/pi, 0>
    translate <-0.3+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    rotate <0, 0, 90>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, lg_angle*180/pi, 0>
    translate <-0.3+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    rotate <0, 0, 90>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 difference {
  box {
   <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, 0>,
   <-0.3+LG_CORNER_SPACE, -0.3+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_WALL_WIDTH>,
   LG_KNOB_INNER_RADIUS
  }
 }
 object {
  lg_tech_knob
 }
}

#declare lg_3688_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   sphere {
    <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.3+LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+0.2-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+0.08, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+0.35>
   }
   difference {
    box {
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
     rotate <0, -lg_angle*180/pi, 0>
     translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    }
    union {
     box {
      <0, LG_BRICK_WIDTH, 0.1>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -(2*LG_BRICK_HEIGHT)/cos(lg_angle)>
      rotate <0, -lg_angle*180/pi, 0>
      translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
     box {
      <0, LG_BRICK_WIDTH, 0.1>,
      <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -(2*LG_BRICK_HEIGHT)/cos(lg_angle)>
      rotate <0, lg_angle*180/pi, 0>
      translate <-0.3+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -0.8>,
      LG_WALL_WIDTH
     }
     rotate <0, 0, 90>
    }
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    LG_CYLINDER_RADIUS
   }
   box {
    <0.04, 0.8*LG_BRICK_WIDTH+LG_E, -2*LG_BRICK_HEIGHT+0.2>,
    <-0.04, -0.8*LG_BRICK_WIDTH-LG_E, 0>
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -2>,
    LG_KNOB_RADIUS
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, lg_angle*180/pi, 0>
    translate <-0.3+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    rotate <0, 0, 90>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.1>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, lg_angle*180/pi, 0>
    translate <-0.3+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    rotate <0, 0, 90>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
  LG_CYLINDER_WALL_WIDTH/2
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
 }
 difference {
  box {
   <0.3-LG_CORNER_SPACE, 0.3-LG_CORNER_SPACE, 0>,
   <-0.3+LG_CORNER_SPACE, -0.3+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_WALL_WIDTH>,
   LG_KNOB_INNER_RADIUS
  }
 }
 object {
  lg_tech_knob_clear
 }
}

#declare lg_3688_slope =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  difference {
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_E, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -(2*LG_BRICK_HEIGHT-0.2)/cos(lg_angle)>
    rotate <0, -lg_angle*180/pi, 0>
    translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
   }
   union {
    box {
     <0, LG_BRICK_WIDTH, 0.1>,
     <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -(2*LG_BRICK_HEIGHT)/cos(lg_angle)>
     rotate <0, -lg_angle*180/pi, 0>
     translate <0.3-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    }
    box {
     <0, LG_BRICK_WIDTH, 0.1>,
     <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -(2*LG_BRICK_HEIGHT)/cos(lg_angle)>
     rotate <0, lg_angle*180/pi, 0>
     translate <-0.3+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -0.8>,
     LG_WALL_WIDTH
    }
    rotate <0, 0, 90>
   }
  rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}
 
#end
