/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20080121 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6259: Cylinder 2 x 4 x 4                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6259)
#else
#declare lg_angle1=atan2(LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE);
#declare lg_angle2=atan2(LG_CORNER_SPACE, LG_KNOB_RADIUS+LG_CORNER_SPACE);
#declare lg_6259 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle1*180/pi>
   }
   sphere {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle1*180/pi>
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle1*180/pi>
   }
   sphere {
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
   }
   cylinder {
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
   }
   cylinder {
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
   }
   intersection {
    union {
     difference {
      object {
       lg_plate_cylinder
      }
      box {
       <0, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
       <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_E>
      }
     }
     box {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_CYLINDER_RADIUS, LG_PLATE_INNER_HEIGHT+LG_E>
     }
     cylinder {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     box {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_CYLINDER_RADIUS, LG_PLATE_INNER_HEIGHT+LG_E>
     }
     cylinder {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     rotate <0, 0, 45>
     translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT>
    }
    cylinder {
     <0, 0, -11*LG_PLATE_HEIGHT>,
     <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
     2*LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
   }
   cylinder {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CORNER_SPACE+LG_E, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-0.06, -4*LG_BRICK_HEIGHT>
   }
   box {
    <LG_CORNER_SPACE+LG_E, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -LG_CORNER_SPACE>,
    <0, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -LG_TOP_HEIGHT>
   }
   union {
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_E, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    rotate <0, 0, -45+atan2(LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*180/pi> 
   }
   union {
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <LG_E, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    rotate <0, 0, -45-atan2(LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*180/pi> 
   }
   object {
    lg_tech_knob_logo
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
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
    translate <0, 0, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, -4*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT+2*LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -45>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT+2*LG_CORNER_SPACE+LG_E>
    rotate <0, 0, 45>
   }
  }
 }
 difference {
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <0, 0, -LG_TOP_HEIGHT>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
   }
  }
  union {
   box {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
   }
  }
 }
 difference {
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_PLATE_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
   }
  }
  union {
   box {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
   }
  }
  translate <0, 0, -11*LG_PLATE_HEIGHT>
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_E>,
    <-2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <0, 0, -4*LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS
  }
  union {
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -11*LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -4*LG_BRICK_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, -11*LG_PLATE_HEIGHT>,
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_E>,
    <-2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  translate <0, 0, -11*LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <LG_BRICK_WIDTH, 0, -4*LG_BRICK_HEIGHT>
 }
 difference {
  union {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT>,
    <0, 0, -11*LG_PLATE_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -11*LG_PLATE_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -11*LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-0.09
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -45>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_E, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, 45>
   }
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, -11*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -11*LG_PLATE_HEIGHT-2*LG_E>,
   2*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, 0>,
    2*LG_BRICK_WIDTH-0.05
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, 0>,
    <-2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -11*LG_PLATE_HEIGHT-2*LG_E>,
   (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)
  }
  union {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, 0>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
    <-2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
}

#declare lg_6259_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle1*180/pi>
   }
   sphere {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle1*180/pi>
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle1*180/pi>
   }
   sphere {
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
   }
   cylinder {
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
   }
   cylinder {
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, LG_KNOB_RADIUS+LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
    rotate <0, 0, -lg_angle2*180/pi>
   }
   intersection {
    merge {
     difference {
      object {
       lg_plate_cylinder_clear
      }
      box {
       <0, LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT>,
       <0.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_E>
      }
     }
     box {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_CYLINDER_RADIUS, LG_PLATE_INNER_HEIGHT+LG_E>
     }
     cylinder {
      <0.6*LG_BRICK_WIDTH, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     box {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_CYLINDER_RADIUS, LG_PLATE_INNER_HEIGHT+LG_E>
     }
     cylinder {
      <0.6*LG_BRICK_WIDTH, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      <0, -LG_KNOB_RADIUS-LG_CYLINDER_WALL_WIDTH/2, LG_CYLINDER_WALL_WIDTH/2>,
      LG_CYLINDER_WALL_WIDTH/2
     }
     rotate <0, 0, 45>
     translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT>
    }
    cylinder {
     <0, 0, -11*LG_PLATE_HEIGHT>,
     <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
     2*LG_BRICK_WIDTH-LG_CORNER_SPACE
    }
   }
   cylinder {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CORNER_SPACE+LG_E, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <0, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_CORNER_SPACE, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-0.06, -4*LG_BRICK_HEIGHT>
   }
   box {
    <LG_CORNER_SPACE+LG_E, (LG_KNOB_RADIUS+LG_CORNER_SPACE)*cos(lg_angle2), -LG_CORNER_SPACE>,
    <0, (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1), -LG_TOP_HEIGHT>
   }
   merge {
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <-LG_E, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    rotate <0, 0, -45+atan2(LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*180/pi> 
   }
   merge {
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <0, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
     <LG_E, 2*LG_BRICK_WIDTH-0.09, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    }
    rotate <0, 0, -45-atan2(LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*180/pi> 
   }
   object {
    lg_tech_knob_logo_clear
    scale <1, 1-2*MIR, 1>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo_clear
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_tech_knob_logo_clear
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
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
    translate <0, 0, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, -4*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT+2*LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -45>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT+2*LG_CORNER_SPACE+LG_E>
    rotate <0, 0, 45>
   }
  }
 }
 difference {
  merge {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <0, 0, -LG_TOP_HEIGHT>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_TOP_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
   }
  }
  union {
   box {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
   }
  }
 }
 difference {
  merge {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_PLATE_HEIGHT-LG_E>,
     LG_KNOB_RADIUS
    }
   }
  }
  union {
   box {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <-LG_BRICK_WIDTH/2, LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
   }
  }
  translate <0, 0, -11*LG_PLATE_HEIGHT>
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_E>,
    <-2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -11*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <0, 0, -4*LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS
  }
  union {
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -11*LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -4*LG_BRICK_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, -11*LG_PLATE_HEIGHT>,
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -LG_TOP_HEIGHT>,
   2*LG_BRICK_WIDTH-LG_CORNER_SPACE
  }
  union {
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, LG_E>,
    <-2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
  translate <0, 0, -11*LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <LG_BRICK_WIDTH, 0, -4*LG_BRICK_HEIGHT>
 }
 difference {
  merge {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT>,
    <0, 0, -11*LG_PLATE_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -11*LG_PLATE_HEIGHT-LG_E>,
    2*LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -11*LG_PLATE_HEIGHT>,
    2*LG_BRICK_WIDTH-0.09
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -45>
   }
   box {
    <LG_KNOB_RADIUS+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH-LG_E, -11*LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS-LG_CORNER_SPACE, -LG_BRICK_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, 45>
   }
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, -11*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -11*LG_PLATE_HEIGHT-2*LG_E>,
   2*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, 0>,
    2*LG_BRICK_WIDTH-0.05
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, -LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   box {
    <0, -2*LG_BRICK_WIDTH-LG_E, LG_E>,
    <-2*LG_BRICK_WIDTH-LG_E, LG_WALL_WIDTH, -4*LG_BRICK_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+LG_E, 0>,
    <-2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -11*LG_PLATE_HEIGHT-2*LG_E>,
   (2*LG_BRICK_WIDTH-LG_CORNER_SPACE)*cos(lg_angle1)
  }
  union {
   cylinder {
    <0, 0, -4*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, 0>,
    2*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <0, 2*LG_BRICK_WIDTH+LG_E, 0>,
    <-2*LG_BRICK_WIDTH-LG_E, -2*LG_BRICK_WIDTH-LG_E, -4*LG_BRICK_HEIGHT-LG_E>
   }
  }
 }
}

#end
