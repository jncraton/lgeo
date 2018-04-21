/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990115 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30031: Space Handlebars                                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30031)
#else
#declare lg_angle=16.26020471/180*pi;
#declare lg_30031 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, LG_WALL_WIDTH, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
   sphere {
    <-LG_WALL_WIDTH/2, 0.4, 1.75*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   sphere {
    <-2*LG_WALL_WIDTH, 1.04, 1.75*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2*LG_WALL_WIDTH, 1.04, 1.75*LG_PLATE_HEIGHT>,
    <-LG_WALL_WIDTH/2, 0.4, 1.75*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*sin(lg_angle)>,
    <(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-0.08, LG_WALL_WIDTH+LG_CORNER_SPACE, 0.56+(LG_WALL_WIDTH-LG_CORNER_SPACE)*sin(lg_angle)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*sin(lg_angle)>,
    <(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.56+(LG_WALL_WIDTH-LG_CORNER_SPACE)*sin(lg_angle)>,
    LG_CORNER_SPACE
   }
   union {
    box {
     <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH, 0>,
     <-0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>
    }
    box {
     <LG_KNOB_RADIUS, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <-0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>
    }
    cylinder {
     <-0.08+LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <-0.08+LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
     <-0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>,
     LG_CORNER_SPACE
    }
    rotate <0, -lg_angle*180/pi, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, 0.2, 0>,
  <0, -0.2, 0>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <-0.08, 0.4, 1.75*LG_PLATE_HEIGHT>,
  <-0.08, -0.4, 1.75*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 union {
  box {
   <LG_WALL_WIDTH, 0.2, 0>,
   <-LG_WALL_WIDTH, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  box {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.2, -LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
  }
  cylinder {
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  rotate <0, -lg_angle*180/pi, 0>
  translate <-0.08, 0, 0.56>
 }
}

#declare lg_30031_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, LG_WALL_WIDTH, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
   }
   sphere {
    <-LG_WALL_WIDTH/2, 0.4, 1.75*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   sphere {
    <-2*LG_WALL_WIDTH, 1.04, 1.75*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <-2*LG_WALL_WIDTH, 1.04, 1.75*LG_PLATE_HEIGHT>,
    <-LG_WALL_WIDTH/2, 0.4, 1.75*LG_PLATE_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
   cylinder {
    <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), LG_WALL_WIDTH+LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*sin(lg_angle)>,
    <(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-0.08, LG_WALL_WIDTH+LG_CORNER_SPACE, 0.56+(LG_WALL_WIDTH-LG_CORNER_SPACE)*sin(lg_angle)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_KNOB_RADIUS-LG_CORNER_SPACE)*cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (LG_KNOB_RADIUS-LG_CORNER_SPACE)*sin(lg_angle)>,
    <(LG_WALL_WIDTH-LG_CORNER_SPACE)*cos(lg_angle)-0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.56+(LG_WALL_WIDTH-LG_CORNER_SPACE)*sin(lg_angle)>,
    LG_CORNER_SPACE
   }
   merge {
    box {
     <LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_WALL_WIDTH, 0>,
     <-0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>
    }
    box {
     <LG_KNOB_RADIUS, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <-0.08, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>
    }
    cylinder {
     <-0.08+LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <-0.08+LG_CORNER_SPACE, LG_WALL_WIDTH+LG_CORNER_SPACE, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>,
     LG_CORNER_SPACE
    }
    cylinder {
     <-0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
     <-0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, (0.56-(0.08)*sin(lg_angle))/cos(lg_angle)>,
     LG_CORNER_SPACE
    }
    rotate <0, -lg_angle*180/pi, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, 0.2, 0>,
  <0, -0.2, 0>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <-0.08, 0.4, 1.75*LG_PLATE_HEIGHT>,
  <-0.08, -0.4, 1.75*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 merge {
  box {
   <LG_WALL_WIDTH, 0.2, 0>,
   <-LG_WALL_WIDTH, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>
  }
  box {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.2, -LG_WALL_WIDTH>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E>
  }
  cylinder {
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, 0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH+LG_CORNER_SPACE, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <LG_WALL_WIDTH-LG_CORNER_SPACE, 0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   <LG_WALL_WIDTH-LG_CORNER_SPACE, -0.2, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  rotate <0, -lg_angle*180/pi, 0>
  translate <-0.08, 0, 0.56>
 }
}

#end
