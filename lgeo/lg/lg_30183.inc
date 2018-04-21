/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990109 Lutz Uhlmann                                                       */
/* 20080129 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30183: Slope Brick 45 6 x 4 Inverted Double with Hole                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30183)
#else
#declare lg_angle = atan2(LG_BRICK_WIDTH, LG_BRICK_WIDTH);
#declare lg_30183 =
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.06, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 0.3, -LG_CORNER_SPACE>
    rotate <0, 0, 135>
    translate <1.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS/sqrt(2), 1.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS/sqrt(2), 0>
   }
   box {
    <0.06, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 0.3, -LG_CORNER_SPACE>
    rotate <0, 0, -135>
    translate <-1.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS/sqrt(2), 1.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS/sqrt(2), 0>
   }
   box {
    <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.06, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, 1.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, 1.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, 0.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, 0.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, -0.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, -0.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, -1.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, -1.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   difference {
    box {
     <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-0.12, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    union {
     box {
      <LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH>
      rotate <0, -lg_angle*180/pi, 0>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH>
      rotate <0, lg_angle*180/pi, 0>
      translate <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-0.12, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-0.12, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_WALL_WIDTH>
    rotate <0, -lg_angle*180/pi, 0>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.12, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
    <3*LG_BRICK_WIDTH-0.12, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <3*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   difference {
    union {
     difference {
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     difference {
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     difference {
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     difference {
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, 1.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, 0.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, -0.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, -1.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
     <0, -2*LG_BRICK_WIDTH, LG_WALL_WIDTH/2>
     rotate <0, -lg_angle*180/pi, 0>
     translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  box {
   <LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
   <-LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
}

#declare lg_30183_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.06, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 0.3, -LG_CORNER_SPACE>
    rotate <0, 0, 135>
    translate <1.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS/sqrt(2), 1.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS/sqrt(2), 0>
   }
   box {
    <0.06, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 0.3, -LG_CORNER_SPACE>
    rotate <0, 0, -135>
    translate <-1.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS/sqrt(2), 1.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS/sqrt(2), 0>
   }
   box {
    <LG_BRICK_WIDTH+LG_E, LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2+0.06, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2-0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+0.06, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2-0.06, LG_BRICK_WIDTH+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+0.06, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-0.04-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, 0>
    rotate <0, 0, 90>
   }
   difference {
    box {
     <-LG_KNOB_RADIUS-LG_E, -LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_CORNER_SPACE>
    }
    box {
     <LG_WALL_WIDTH, 0, 0>,
     <-LG_WALL_WIDTH, -LG_KNOB_RADIUS, -LG_BRICK_HEIGHT>
     rotate <0,0,45>
     translate <-LG_KNOB_RADIUS*sin(pi/4), -LG_BRICK_WIDTH/2+LG_KNOB_RADIUS*sin(pi/4), 0> 
    }
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
    translate <1.5*LG_BRICK_WIDTH, 0, 0>
    rotate <0, 0, 90>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, 1.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, 1.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, 0.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, 0.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, -0.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, -0.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-0.12+LG_E, -1.5*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.16, -1.5*LG_BRICK_WIDTH+0.04, -LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.12+LG_E, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-0.16, -LG_CORNER_SPACE>
   }
   difference {
    box {
     <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
     <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-0.12, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    union {
     box {
      <LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH>
      rotate <0, -lg_angle*180/pi, 0>
      translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <-LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH+LG_E, 0>,
      <-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH>
      rotate <0, lg_angle*180/pi, 0>
      translate <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-0.12, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-0.12, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_WALL_WIDTH>
    rotate <0, -lg_angle*180/pi, 0>
    translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-0.12, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH>,
    <3*LG_BRICK_WIDTH-0.12, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <3*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   difference {
    merge {
     difference {
      merge {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     difference {
      merge {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     difference {
      merge {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     difference {
      merge {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
        LG_KNOB_RADIUS-LG_CORNER_SPACE
       }
      }
      union {
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
        LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
       }
       cylinder {
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
        <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
        LG_KNOB_INNER_RADIUS 
       }
      }
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, 1.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, 0.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, -0.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <2.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS-LG_E, -1.5*LG_BRICK_WIDTH-0.06, 0>,
      <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+0.06, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>,
     <0, -2*LG_BRICK_WIDTH, LG_WALL_WIDTH/2>
     rotate <0, -lg_angle*180/pi, 0>
     translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90-180*ROT>
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  box {
   <LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
   <-LG_BRICK_WIDTH-LG_E, LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT+LG_E>,
    <0, 0, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <-LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
    <LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-1.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-0.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
}

#declare lg_30183_slope =
merge {
 box {
  <LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2>
  rotate <0, -lg_angle*180/pi, 0>
  translate <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_WALL_WIDTH/2>
  rotate <0, lg_angle*180/pi, 0>
  translate <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
}

#end
