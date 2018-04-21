/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071229 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0314e: Plate 5 x 2 Hinge Top smaller hole                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0314e)
#else
#declare lg_angle1=atan2(0.08+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE);
#declare lg_angle2=asin((1.5*LG_WALL_WIDTH+LG_CORNER_SPACE)/(LG_BRICK_WIDTH/2+LG_CORNER_SPACE));
#declare lg_0314e = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   box {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08>,
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE-LG_E>
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.5, 0.1, 0>,
      <-0.5, -0.1, -0.5>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 0.1, 0.5>,
      <-0.5, -0.1, -0.5>
      rotate <0, lg_angle2*180/pi, 0>
     }
    }
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.5, 0.1, 0>,
      <-0.5, -0.1, -0.5>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 0.1, 0.5>,
      <-0.5, -0.1, -0.5>
      rotate <0, lg_angle2*180/pi, 0>
     }
    }
    translate <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   difference {
    cylinder {
     <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <0, 0, 0>,
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E
    }
    union {
     cylinder {
      <0, -LG_WALL_WIDTH, 0>,
      <0, LG_E, 0>,
      LG_BRICK_WIDTH/2
     }
     box {
      <0.5, 0.1, 0>,
      <-0.5, -0.2, -0.5>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 0.1, 0.5>,
      <-0.5, -0.2, -0.5>
      rotate <0, lg_angle2*180/pi, 0>
     }
    }
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.08+LG_CORNER_SPACE+LG_E>,
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08>
   }
   difference {
    box {
     <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.08+LG_CORNER_SPACE>,
     <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
    }
    cylinder {
     <0, 0, 0>,
     <0, 1, 0>,
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE
    }
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   difference {
    union {
     box {
      <0, LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <-0.5, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_E>
     }
     box {
      <0, LG_BRICK_WIDTH/4, 0>,
      <-0.5, LG_BRICK_WIDTH/2, -1.5*LG_WALL_WIDTH>
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
      <-0.5, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0>,
      <-0.5, LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
     }
     rotate <0, -10, 0>
     translate <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), 0, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
    }
    cylinder {
     <0, 0, 0>,
     <0, 1, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE+LG_E>
 }
 box {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1)-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE+LG_E>,
    <4.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08>
   }
   box {
    <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <4.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
   }
  }
  sphere {
   <4.5*LG_BRICK_WIDTH, 0, 0.08>,
   0.1
   scale <1, 4, 1>
  }
 }
 difference {
  union {
   box {
    <4.32*LG_BRICK_WIDTH, 0.06, 0.08+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH, -0.06, LG_PLATE_HEIGHT>
   }
   box {
    <0.6*LG_BRICK_WIDTH, 0.16, 0.08+LG_CORNER_SPACE>,
    <1.4*LG_BRICK_WIDTH, -0.16, LG_PLATE_HEIGHT>
   }
  }
  union {
   cylinder {
    <0.9*LG_BRICK_WIDTH, 0, 0>,
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08+LG_E>,
    0.12
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, 0, 0>,
    <1.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 0, 0>,
    <2.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, 0>,
    <3.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
  }
 }
 object {
  lg_plate_cylinder
  translate <1.5*LG_BRICK_WIDTH, 0, 0.08>
 }
 object {
  lg_plate_cylinder
  translate <2.5*LG_BRICK_WIDTH, 0, 0.08>
 }
 object {
  lg_plate_cylinder
  translate <3.5*LG_BRICK_WIDTH, 0, 0.08>
 }
 torus {
  0.12+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
 }
 difference {
  box {
   <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08>,
   <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08+LG_E>,
    0.12+LG_CORNER_SPACE
   }
   cylinder {
    <0.9*LG_BRICK_WIDTH, 0, 0>,
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08+LG_E>,
    0.12
   }
   object {
    lg_knob_inner_space
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  union {
   box {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0.16>,
    <0, -LG_BRICK_WIDTH/2, 0.08+LG_CORNER_SPACE>
   }
  }
  cylinder {
   <0, -1, 0>,
   <0, 1, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  union {
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH/2+LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
}

#declare lg_0314e_clear = 
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   sphere {
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>,
    LG_CORNER_SPACE
   }
   box {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, (LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle2)>
   }
   cylinder {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08>,
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1)+LG_E, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE-LG_E>
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.5, 0.1, 0>,
      <-0.5, -0.1, -0.5>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 0.1, 0.5>,
      <-0.5, -0.1, -0.5>
      rotate <0, lg_angle2*180/pi, 0>
     }
    }
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    torus {
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE,
     LG_CORNER_SPACE
    }
    union {
     box {
      <0.5, 0.1, 0>,
      <-0.5, -0.1, -0.5>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 0.1, 0.5>,
      <-0.5, -0.1, -0.5>
      rotate <0, lg_angle2*180/pi, 0>
     }
    }
    translate <0, 0.8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   difference {
    cylinder {
     <0, -LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <0, 0, 0>,
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E
    }
    union {
     cylinder {
      <0, -LG_WALL_WIDTH, 0>,
      <0, LG_E, 0>,
      LG_BRICK_WIDTH/2
     }
     box {
      <0.5, 0.1, 0>,
      <-0.5, -0.2, -0.5>
      rotate <0, -lg_angle1*180/pi, 0>
     }
     box {
      <0, 0.1, 0.5>,
      <-0.5, -0.2, -0.5>
      rotate <0, lg_angle2*180/pi, 0>
     }
    }
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.08+LG_CORNER_SPACE+LG_E>,
    <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08>
   }
   difference {
    box {
     <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.08+LG_CORNER_SPACE>,
     <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
    }
    cylinder {
     <0, 0, 0>,
     <0, 1, 0>,
     LG_BRICK_WIDTH/2+LG_CORNER_SPACE
    }
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <0.3*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
   }
   difference {
    merge {
     box {
      <0, LG_BRICK_WIDTH/4+LG_CORNER_SPACE, LG_CORNER_SPACE>,
      <-0.5, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_E>
     }
     box {
      <0, LG_BRICK_WIDTH/4, 0>,
      <-0.5, LG_BRICK_WIDTH/2, -1.5*LG_WALL_WIDTH>
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
      <-0.5, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0>,
      <-0.5, LG_BRICK_WIDTH/4+LG_CORNER_SPACE, 0>,
      LG_CORNER_SPACE
     }
     rotate <0, -10, 0>
     translate <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), 0, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
    }
    cylinder {
     <0, 0, 0>,
     <0, 1, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE+LG_E>
 }
 box {
  <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1)-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE+LG_E>,
    <4.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08>
   }
   box {
    <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE>,
    <4.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
   }
  }
  sphere {
   <4.5*LG_BRICK_WIDTH, 0, 0.08>,
   0.1
   scale <1, 4, 1>
  }
 }
 difference {
  merge {
   box {
    <4.32*LG_BRICK_WIDTH, 0.06, 0.08+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH, -0.06, LG_PLATE_HEIGHT>
   }
   box {
    <0.6*LG_BRICK_WIDTH, 0.16, 0.08+LG_CORNER_SPACE>,
    <1.4*LG_BRICK_WIDTH, -0.16, LG_PLATE_HEIGHT>
   }
  }
  union {
   cylinder {
    <0.9*LG_BRICK_WIDTH, 0, 0>,
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08+LG_E>,
    0.12
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, 0, 0>,
    <1.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
   cylinder {
    <2.5*LG_BRICK_WIDTH, 0, 0>,
    <2.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, 0>,
    <3.5*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2
   }
  }
 }
 object {
  lg_plate_cylinder_clear
  translate <1.5*LG_BRICK_WIDTH, 0, 0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <2.5*LG_BRICK_WIDTH, 0, 0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <3.5*LG_BRICK_WIDTH, 0, 0.08>
 }
 torus {
  0.12+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>
 }
 difference {
  box {
   <4.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08>,
   <(LG_BRICK_WIDTH/2+LG_CORNER_SPACE)*cos(lg_angle1), -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08-LG_CORNER_SPACE>,
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08+LG_E>,
    0.12+LG_CORNER_SPACE
   }
   cylinder {
    <0.9*LG_BRICK_WIDTH, 0, 0>,
    <0.9*LG_BRICK_WIDTH, 0, LG_PLATE_HEIGHT+0.08+LG_E>,
    0.12
   }
   object {
    lg_knob_inner_space_clear
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT+0.08-LG_TOP_HEIGHT>
   }
  }
 }
 difference {
  merge {
   box {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0.08>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08+LG_CORNER_SPACE+LG_E>
   }
   box {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2, 0.16>,
    <0, -LG_BRICK_WIDTH/2, 0.08+LG_CORNER_SPACE>
   }
  }
  cylinder {
   <0, -1, 0>,
   <0, 1, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  merge {
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH/2, 0>,
    <0, -LG_BRICK_WIDTH/2, 0>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH/2+LG_E, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2-LG_E, 0>,
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
}

#end
