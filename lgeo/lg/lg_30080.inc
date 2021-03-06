/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981125 Lutz Uhlmann                                                       */
/* 20080127 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30080: Panel 3 x 4 x 3 Sloped with Porthole                              */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30080)
#else
#declare lg_angle=atan2(1.6,2*LG_BRICK_WIDTH);
#declare lg_30080 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    union {
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_WALL_WIDTH
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      LG_WALL_WIDTH-LG_CORNER_SPACE
     }
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_E>,
     <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT-LG_E>
    }
   }
   difference {
    union {
     box {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>
     }
     box {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE+LG_E>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>,
      <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     rotate <0, lg_angle*180/pi, 0>
     translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE,  0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, 0>,
     <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT>
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.6-LG_CORNER_SPACE>
   }
   box {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.6-LG_CORNER_SPACE>
   }
   difference {
    union {
     box {
      <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
     }
     box {
      <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH+0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
     }
     box {
      <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
     }
     box {
      <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
     }
     box {
      <LG_KNOB_RADIUS, 1.5*LG_BRICK_WIDTH-0.04, -2*LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
      }
     }
     box {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <LG_BRICK_WIDTH, 0, 0>
     rotate <0, lg_angle*180/pi, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
    }
   }
   object {
    lg_plate_column
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT>
   }
   object {
    lg_tech_knob_logo
    scale <1, 1-2*MIR, 1>
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_tech_knob_logo
    scale <1, 1-2*MIR, 1>
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  difference {
   union {
    box {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
     <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
     <1.26, 0, 0.04-LG_CORNER_SPACE>,
     <1.26, 0, 0>,
     0.9
    }
    cylinder {
     <1.26, 0, 0.04>,
     <1.26, 0, 0>,
     0.9-LG_CORNER_SPACE
    }
   }
   union {
    cylinder {
     <1.26, 0, 0.04-LG_CORNER_SPACE>,
     <1.26, 0, 0.04+LG_E>,
     0.75+LG_CORNER_SPACE
    }
    cylinder {
     <1.26, 0, 0.04>,
     <1.26, 0, -LG_WALL_WIDTH>,
     0.75
    }
   }
   rotate <0, lg_angle*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
  }
  box {
   <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, 0>,
   <0, -2*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
 }
 union {
  torus {
   0.9-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <1.26, 0, 0.04-LG_CORNER_SPACE>
  }
  torus {
   0.75+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <1.26, 0, 0.04-LG_CORNER_SPACE>
  }
  rotate <0, lg_angle*180/pi, 0>
  translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
 }
 object {
  lg_plate_column
  translate <2*LG_BRICK_WIDTH, 0, -3*LG_BRICK_HEIGHT>
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
   <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
   box {
   <0, 2*LG_BRICK_WIDTH, LG_WALL_WIDTH>,
   <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, 0>
   rotate <0, lg_angle*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
 }
 box {
  <2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
 }
 box {
  <1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   cylinder {
    <1.26, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.26, 0, -LG_TOP_HEIGHT-0.08>,
    0.9
   }
   intersection {
    sphere {
     <1.26, 0, -3.96>,
     4
    }
    cylinder {
     <1.26, 0, LG_E>,
     <1.26, 0, -LG_TOP_HEIGHT-0.08>,
     0.8
    }
   }
  }
  intersection {
   sphere {
    <1.26, 0, -3.96>,
    3.88
   }
   cylinder {
    <1.26, 0, LG_E>,
    <1.26, 0, -LG_TOP_HEIGHT-0.08>,
    0.62
   }
  }   
  rotate <0, lg_angle*180/pi, 0>
  translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
  material { texture { lg_clear_cyan } interior { lg_ior } }
 }
 translate <-LG_BRICK_WIDTH, 0, 5*LG_PLATE_HEIGHT>
}

#declare lg_30080_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   intersection {
    merge {
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_WALL_WIDTH
     }
     cylinder {
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>,
      <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
      LG_WALL_WIDTH-LG_CORNER_SPACE
     }
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      LG_WALL_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_E>,
     <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH+LG_E, -2*LG_PLATE_HEIGHT-LG_E>
    }
   }
   difference {
    merge {
     box {
      <0, 2*LG_BRICK_WIDTH, 0>,
      <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>
     }
     box {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE+LG_E>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>,
      <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+2*LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     rotate <0, lg_angle*180/pi, 0>
     translate <LG_BRICK_WIDTH/2+LG_CORNER_SPACE,  0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
    }
    box {
     <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, 0>,
     <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    }
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT>
   }
   box {
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.6-LG_CORNER_SPACE>
   }
   box {
    <2.5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -1.6-LG_CORNER_SPACE>
   }
   difference {
    merge {
     box {
      <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH+0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
     }
     box {
      <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH+0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
     }
     box {
      <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT>
     }
     box {
      <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-0.08, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
     }
     box {
      <LG_KNOB_RADIUS, 1.5*LG_BRICK_WIDTH-0.04, -2*LG_PLATE_HEIGHT>,
      <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH+0.04, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_E>
      }
     }
     box {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_WALL_WIDTH>,
     <LG_BRICK_WIDTH, 0, 0>
     rotate <0, lg_angle*180/pi, 0>
     translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
    }
   }
   object {
    lg_plate_column_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT>
   }
   object {
    lg_tech_knob_logo_clear
    scale <1, 1-2*MIR, 1>
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_tech_knob_logo_clear
    scale <1, 1-2*MIR, 1>
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  difference {
   merge {
    box {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_CORNER_SPACE>,
     <(2*LG_BRICK_WIDTH-2*LG_CORNER_SPACE)/cos(lg_angle), -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
     <1.26, 0, 0.04-LG_CORNER_SPACE>,
     <1.26, 0, 0>,
     0.9
    }
    cylinder {
     <1.26, 0, 0.04>,
     <1.26, 0, 0>,
     0.9-LG_CORNER_SPACE
    }
   }
   union {
    cylinder {
     <1.26, 0, 0.04-LG_CORNER_SPACE>,
     <1.26, 0, 0.04+LG_E>,
     0.75+LG_CORNER_SPACE
    }
    cylinder {
     <1.26, 0, 0.04>,
     <1.26, 0, -LG_WALL_WIDTH>,
     0.75
    }
   }
   rotate <0, lg_angle*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
  }
  box {
   <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, 0>,
   <0, -2*LG_BRICK_WIDTH-LG_E, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
 }
 union {
  torus {
   0.9-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <1.26, 0, 0.04-LG_CORNER_SPACE>
  }
  torus {
   0.75+LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90, 0, 0>
   translate <1.26, 0, 0.04-LG_CORNER_SPACE>
  }
  rotate <0, lg_angle*180/pi, 0>
  translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
 }
 object {
  lg_plate_column_clear
  translate <2*LG_BRICK_WIDTH, 0, -3*LG_BRICK_HEIGHT>
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
  <LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>,
   <0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
   box {
   <0, 2*LG_BRICK_WIDTH, LG_WALL_WIDTH>,
   <LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, 0>
   rotate <0, lg_angle*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
  }
 }
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
 }
 box {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
 }
 box {
  <2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <2.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.6-LG_CORNER_SPACE>
 }
 box {
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
 }
 box {
  <1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <2.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
  <1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   cylinder {
    <1.26, 0, -LG_TOP_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <1.26, 0, -LG_TOP_HEIGHT-0.08>,
    0.9
   }
   intersection {
    sphere {
     <1.26, 0, -3.96>,
     4
    }
    cylinder {
     <1.26, 0, LG_E>,
     <1.26, 0, -LG_TOP_HEIGHT-0.08>,
     0.8
    }
   }
  }
  intersection {
   sphere {
    <1.26, 0, -3.96>,
    3.88
   }
   cylinder {
    <1.26, 0, LG_E>,
    <1.26, 0, -LG_TOP_HEIGHT-0.08>,
    0.62
   }
  }   
  rotate <0, lg_angle*180/pi, 0>
  translate <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE-2*LG_CORNER_SPACE/cos(lg_angle)*sin(lg_angle)>
  material { texture { lg_clear_cyan } interior { lg_ior } }
 }
 translate <-LG_BRICK_WIDTH, 0, 5*LG_PLATE_HEIGHT>
}

#end
