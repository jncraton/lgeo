/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4349: Town Loudhailer                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4349)
#else
#declare lg_angle = atan2(LG_WALL_WIDTH, LG_BRICK_WIDTH);
#declare lg_4349 =
union {
 difference {
  union {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_WALL_WIDTH
   }
   #declare RING = 0;
   #while ( RING < 8)
    torus {
     LG_CYLINDER_RADIUS-0.055,
     0.055
     rotate <0, 0, -90>
     translate <LG_WALL_WIDTH-0.055-0.11*RING, 0, 0>
    }
    #declare RING = RING + 1;
   #end
   cylinder {
    <LG_WALL_WIDTH, 0, 0>,
    <-0.72, 0, 0>,
    LG_CYLINDER_RADIUS-0.055
   }
  }
  cylinder {
   <LG_WALL_WIDTH+LG_E, 0, 0>,
   <-0.6, 0, 0>,
   LG_KNOB_INNER_RADIUS
  }
 }
 object {
  lg_tech_knob_logo
  rotate <0, 0, 90>
  rotate <0, -90, 0>
  translate <-0.72, 0, 0>
 }
 union {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  difference {
   union {
    cone {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle)), 0, 0>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE*(1-cos(lg_angle)),
     <-LG_CORNER_SPACE*(1+sin(lg_angle)), 0, 0>, LG_KNOB_RADIUS-LG_CORNER_SPACE*(1-cos(lg_angle))
    }
    cylinder {
     <LG_BRICK_WIDTH, 0, 0>,
     <LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
   }
   intersection {
    cone {
     <1.2*LG_BRICK_WIDTH, 0, 0>, 0.28,
     <-2*LG_CORNER_SPACE, 0, 0>, 0.16
    }
    cylinder {
     <LG_BRICK_WIDTH+LG_E, 0, 0>,
     <-LG_WALL_WIDTH, 0, 0>,
     LG_KNOB_RADIUS
    }
   }
  }
  translate <LG_WALL_WIDTH, 0, 0>
 }
}

#declare lg_4349_clear =
merge {
 difference {
  merge {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_WIDTH+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_BRICK_WIDTH+LG_CORNER_SPACE>,
    LG_WALL_WIDTH
   }
   #declare RING = 0;
   #while ( RING < 8)
    torus {
     LG_CYLINDER_RADIUS-0.055,
     0.055
     rotate <0, 0, 90>
     translate <LG_WALL_WIDTH-0.055-0.11*RING, 0, 0>
    }
    #declare RING = RING + 1;
   #end
   cylinder {
    <LG_WALL_WIDTH, 0, 0>,
    <-0.72, 0, 0>,
    LG_CYLINDER_RADIUS-0.055
   }
  }
  cylinder {
   <LG_WALL_WIDTH+LG_E, 0, 0>,
   <-0.6, 0, 0>,
   LG_KNOB_INNER_RADIUS
  }
 }
 object {
  lg_tech_knob_logo_clear
  rotate <0, 0, -90>
  rotate <0, -90, 0>
  translate <-0.72, 0, 0>
 }
 merge {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <0, 0, 90>
   translate <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  }
  difference {
   merge {
    cone {
     <LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle)), 0, 0>, LG_BRICK_WIDTH/2-LG_CORNER_SPACE*(1-cos(lg_angle)),
     <-LG_CORNER_SPACE*(1+sin(lg_angle)), 0, 0>, LG_KNOB_RADIUS-LG_CORNER_SPACE*(1-cos(lg_angle))
    }
    cylinder {
     <LG_BRICK_WIDTH, 0, 0>,
     <LG_BRICK_WIDTH-2*LG_CORNER_SPACE, 0, 0>,
     LG_BRICK_WIDTH/2-LG_CORNER_SPACE
    }
   }
   intersection {
    cone {
     <1.2*LG_BRICK_WIDTH, 0, 0>, 0.28,
     <-2*LG_CORNER_SPACE, 0, 0>, 0.16
    }
    cylinder {
     <LG_BRICK_WIDTH+LG_E, 0, 0>,
     <-LG_WALL_WIDTH, 0, 0>,
     LG_KNOB_RADIUS
    }
   }
  }
  translate <LG_WALL_WIDTH, 0, 0>
 }
}

#end
