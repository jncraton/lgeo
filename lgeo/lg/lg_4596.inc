/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990115 Lutz Uhlmann                                                       */
/* 20071104 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4596: Space Wing 4 x 2                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4596)
#else
#declare lg_angle = atan2(0.5, 2.6*LG_BRICK_WIDTH);
#declare lg_4596 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_plate_column
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   union {
    box {
     <0, 0, 0>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
    }
    box {
     <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
     <0, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    rotate <0, 0, -lg_angle*180/pi>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   intersection {
    union {
     box {
      <2, 0, 0>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <2, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <2, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2, 0, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     union {
      cylinder {
       <0, 0, 0>,
       <0.3, 0, 0>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0>,
       <0.3, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0>,
       LG_CORNER_SPACE
      }
      box {
       <0, 0, LG_CORNER_SPACE>,
       <0.3, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_E>
      }
      box {
       <0, LG_CORNER_SPACE, 0>,
       <0.3, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
      }
      rotate <0, -45, 0>
      translate <2.65*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
     }
     rotate <0, 0, -lg_angle*180/pi>
     translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    union {
     difference {
      cylinder {
       <3.1*LG_BRICK_WIDTH, 0, -0.08>,
       <3.2*LG_BRICK_WIDTH, 0, -0.08>,
       LG_CYLINDER_RADIUS
      }
      cylinder {
       <3*LG_BRICK_WIDTH, 0, -0.08>,
       <3.3*LG_BRICK_WIDTH, 0, -0.08>,
       LG_KNOB_INNER_RADIUS
      }
     }
     box {
      <3.1*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_WALL_WIDTH>,
      <2.8*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   difference {
    box {
     <-LG_E, LG_E, -0.08>,
     <0.9*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2, -0.24>
    }
    union {
     cylinder {
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     cylinder {
      <3.5*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <3.5*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     box {
      <LG_WALL_WIDTH, -2.6*LG_WALL_WIDTH, 0>
      <3.5*LG_WALL_WIDTH, -1.5*LG_WALL_WIDTH, -0.3>
     }
    }
    matrix 
     <1,-sin(lg_angle/2), 0, 0, 1, 0, 0, 0, 1, LG_BRICK_WIDTH/2, 0.8*LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_E, -0.1, -0.08>,
     <0.75*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2, -0.24>
    }
    union {
     cylinder {
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     cylinder {
      <2.75*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <2.75*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     box {
      <LG_WALL_WIDTH, -2.6*LG_WALL_WIDTH, 0>
      <2.75*LG_WALL_WIDTH, -1.5*LG_WALL_WIDTH, -0.3>
     }
    }
    matrix 
     <1,-sin(lg_angle/2), 0, 0, 1, 0, 0, 0, 1, 1.6*LG_BRICK_WIDTH, 0.8*LG_BRICK_WIDTH-1.1*LG_BRICK_WIDTH*sin(lg_angle/2), 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <3.1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -0.08>
 }
 difference {
  union {
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, -0.08>,
    <3.1*LG_BRICK_WIDTH, 0, -0.08>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>,
    <3.1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -0.08>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, -0.08>,
    <3.3*LG_BRICK_WIDTH, 0, -0.08>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH+LG_E, 0, -0.08>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, -0.08>,
    <3*LG_BRICK_WIDTH, 0, -0.08>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 difference {
  box {
   <2.5*LG_BRICK_WIDTH, 0.3, -0.08>,
   <3.1*LG_BRICK_WIDTH, -0.3, -0.24>
  }
  cylinder {
   <3.1*LG_BRICK_WIDTH, 0, 0>,
   <3.1*LG_BRICK_WIDTH, 0, -0.3>,
   LG_WALL_WIDTH
  }
 }
 cylinder {
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35, -LG_CORNER_SPACE>,
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.35, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35, -LG_CORNER_SPACE>,
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.35, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35, 0>,
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.35, -LG_PLATE_HEIGHT>
 }
 box {
  <2.55*LG_BRICK_WIDTH, 0.35, -LG_CORNER_SPACE>,
  <2.35*LG_BRICK_WIDTH, -0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5, -LG_CORNER_SPACE>,
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5, -LG_CORNER_SPACE>,
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5, 0>,
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5, -LG_PLATE_HEIGHT>
 }
 box {
  <1.6*LG_BRICK_WIDTH, 0.5, -LG_CORNER_SPACE>,
  <1.4*LG_BRICK_WIDTH, -0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#declare lg_4596_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_plate_column_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   merge {
    box {
     <0, 0, 0>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
    }
    box {
     <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    }
    cylinder {
     <0, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, -LG_CORNER_SPACE>,
     <2.6*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    rotate <0, 0, -lg_angle*180/pi>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   intersection {
    merge {
     box {
      <2, 0, 0>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <2, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <2, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <2, 0, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     merge {
      cylinder {
       <0, 0, 0>,
       <0.3, 0, 0>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0>,
       <0.3, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, 0>,
       LG_CORNER_SPACE
      }
      box {
       <0, 0, LG_CORNER_SPACE>,
       <0.3, -LG_WALL_WIDTH+2*LG_CORNER_SPACE, -LG_E>
      }
      box {
       <0, LG_CORNER_SPACE, 0>,
       <0.3, -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
      }
      rotate <0, -45, 0>
      translate <2.65*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
     }
     rotate <0, 0, -lg_angle*180/pi>
     translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
    merge {
     difference {
      cylinder {
       <3.1*LG_BRICK_WIDTH, 0, -0.08>,
       <3.2*LG_BRICK_WIDTH, 0, -0.08>,
       LG_CYLINDER_RADIUS
      }
      cylinder {
       <3*LG_BRICK_WIDTH, 0, -0.08>,
       <3.3*LG_BRICK_WIDTH, 0, -0.08>,
       LG_KNOB_INNER_RADIUS
      }
     }
     box {
      <3.1*LG_BRICK_WIDTH, LG_WALL_WIDTH, LG_WALL_WIDTH>,
      <2.8*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     }
    }
   }
   difference {
    box {
     <-LG_E, LG_E, -0.08>,
     <0.9*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2, -0.24>
    }
    union {
     cylinder {
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     cylinder {
      <3.5*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <3.5*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     box {
      <LG_WALL_WIDTH, -2.6*LG_WALL_WIDTH, 0>
      <3.5*LG_WALL_WIDTH, -1.5*LG_WALL_WIDTH, -0.3>
     }
    }
    matrix 
     <1,-sin(lg_angle/2), 0, 0, 1, 0, 0, 0, 1, LG_BRICK_WIDTH/2, 0.8*LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <-LG_E, -0.1, -0.08>,
     <0.75*LG_BRICK_WIDTH+LG_E, -LG_BRICK_WIDTH/2, -0.24>
    }
    union {
     cylinder {
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     cylinder {
      <2.75*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, 0>,
      <2.75*LG_WALL_WIDTH, -2.5*LG_WALL_WIDTH, -0.3>,
      LG_WALL_WIDTH
     }
     box {
      <LG_WALL_WIDTH, -2.6*LG_WALL_WIDTH, 0>
      <2.75*LG_WALL_WIDTH, -1.5*LG_WALL_WIDTH, -0.3>
     }
    }
    matrix 
     <1,-sin(lg_angle/2), 0, 0, 1, 0, 0, 0, 1, 1.6*LG_BRICK_WIDTH, 0.8*LG_BRICK_WIDTH-1.1*LG_BRICK_WIDTH*sin(lg_angle/2), 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <3.1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -0.08>
 }
 difference {
  merge {
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, -0.08>,
    <3.1*LG_BRICK_WIDTH, 0, -0.08>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>,
    <3.1*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -0.08>,
    LG_CYLINDER_RADIUS
   }
  }
  union {
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, -0.08>,
    <3.3*LG_BRICK_WIDTH, 0, -0.08>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH+LG_E, 0, -0.08>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, -0.08>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH, 0, -0.08>,
    <3*LG_BRICK_WIDTH, 0, -0.08>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
 difference {
  box {
   <2.5*LG_BRICK_WIDTH, 0.3, -0.08>,
   <3.1*LG_BRICK_WIDTH, -0.3, -0.24>
  }
  cylinder {
   <3.1*LG_BRICK_WIDTH, 0, 0>,
   <3.1*LG_BRICK_WIDTH, 0, -0.3>,
   LG_WALL_WIDTH
  }
 }
 cylinder {
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35, -LG_CORNER_SPACE>,
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.35, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35, -LG_CORNER_SPACE>,
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.35, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <2.55*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.35, 0>,
  <2.35*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.35, -LG_PLATE_HEIGHT>
 }
 box {
  <2.55*LG_BRICK_WIDTH, 0.35, -LG_CORNER_SPACE>,
  <2.35*LG_BRICK_WIDTH, -0.35, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5, -LG_CORNER_SPACE>,
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5, -LG_CORNER_SPACE>,
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <1.6*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5, 0>,
  <1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.5, -LG_PLATE_HEIGHT>
 }
 box {
  <1.6*LG_BRICK_WIDTH, 0.5, -LG_CORNER_SPACE>,
  <1.4*LG_BRICK_WIDTH, -0.5, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
}

#end





