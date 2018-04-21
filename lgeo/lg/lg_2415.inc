/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980401 Lutz Uhlmann                                                       */
/* 20071201 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2415: Wheels Holder Plane                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2415)
#else
#declare lg_angle1=30;
#declare lg_angle2=atan2(0.32, 0.68);
#declare lg_angle3=atan2(0.16, 0.68);
#declare lg_2415 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90+180*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 90+180*ROT>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
  }
  box {
   <-LG_E, 2*LG_WALL_WIDTH, 0>,
   <LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH>
   rotate <0, 12, 0>
   translate <-LG_BRICK_WIDTH, 0, -0.08>
  }
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   difference {
    union {
     difference {
      box {
       <-0.32-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_E>,
       <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -0.84>
      }
      union {
       box {
        <LG_BRICK_WIDTH/2, 2*LG_WALL_WIDTH-LG_E, LG_E>,
        <0, 3*LG_WALL_WIDTH+LG_E, -0.68/cos(lg_angle2)>
        rotate <0, lg_angle2*180/pi, 0>
        translate <-0.24-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>
       }
       box {
        <-LG_BRICK_WIDTH/2, 2*LG_WALL_WIDTH-LG_E, LG_E>,
        <0, 3*LG_WALL_WIDTH+LG_E, -0.68/cos(lg_angle3)>
        rotate <0, lg_angle3*180/pi, 0>
        translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
      }
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH, -0.84>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>,
      LG_KNOB_RADIUS
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH, -0.84>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>,
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_E, -0.84>,
      0.08+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.84>,
      0.08+LG_CORNER_SPACE
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <LG_KNOB_RADIUS+LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <-LG_KNOB_RADIUS-LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, -lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
    }
   }
   difference {
    union {
     torus {
      0.08+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>
     }
     torus {
      0.08+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>
     }
    }
    union {
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <LG_KNOB_RADIUS+LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <-LG_KNOB_RADIUS-LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, -lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
    }
   }
   union {
    cylinder {
     <LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>,
     <LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
     0.08-LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     0.08
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    rotate <0, lg_angle1, 0>
    translate <-LG_BRICK_WIDTH, 0, -0.84>
   }
   union {
    cylinder {
     <-LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>,
     <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
     0.08-LG_CORNER_SPACE
    }
    cylinder {
     <-LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     0.08
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <-LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    rotate <0, -lg_angle1, 0>
    translate <-LG_BRICK_WIDTH, 0, -0.84>
   }
   union {
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.68/cos(lg_angle2)>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_E>,
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle2)>,
     LG_CORNER_SPACE
    }
    box {
     <LG_CORNER_SPACE, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <-LG_E, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle2)>
    }
    rotate <0, lg_angle2*180/pi, 0>
    translate <-0.24-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>
   }
   union {
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.68/cos(lg_angle3)>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_E>,
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle3)>,
     LG_CORNER_SPACE
    }
    box {
     <-LG_CORNER_SPACE, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <LG_E, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle2)>
    }
    rotate <0, lg_angle3*180/pi, 0>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
} 

#declare lg_2415_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90+180*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 90+180*ROT>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
  }
  box {
   <-LG_E, 2*LG_WALL_WIDTH, 0>,
   <LG_BRICK_WIDTH, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH>
   rotate <0, 12, 0>
   translate <-LG_BRICK_WIDTH, 0, -0.08>
  }
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   difference {
    merge {
     difference {
      box {
       <-0.32-LG_CORNER_SPACE, 2*LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_E>,
       <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -0.84>
      }
      union {
       box {
        <LG_BRICK_WIDTH/2, 2*LG_WALL_WIDTH-LG_E, LG_E>,
        <0, 3*LG_WALL_WIDTH+LG_E, -0.68/cos(lg_angle2)>
        rotate <0, lg_angle2*180/pi, 0>
        translate <-0.24-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>
       }
       box {
        <-LG_BRICK_WIDTH/2, 2*LG_WALL_WIDTH-LG_E, LG_E>,
        <0, 3*LG_WALL_WIDTH+LG_E, -0.68/cos(lg_angle3)>
        rotate <0, lg_angle3*180/pi, 0>
        translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
       }
      }
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH, -0.84>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>,
      LG_KNOB_RADIUS
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>
     }
     torus {
      LG_KNOB_RADIUS-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>
     }
    }
    union {
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH, -0.84>,
      0.08
     }
     cylinder {
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>,
      <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH-LG_E, -0.84>,
      0.08+LG_CORNER_SPACE
     }
     cylinder {
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>,
      <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH+LG_E, -0.84>,
      0.08+LG_CORNER_SPACE
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <LG_KNOB_RADIUS+LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <-LG_KNOB_RADIUS-LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, -lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
    }
   }
   difference {
    merge {
     torus {
      0.08+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.84>
     }
     torus {
      0.08+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <-LG_BRICK_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.84>
     }
    }
    union {
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <LG_KNOB_RADIUS+LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
     box {
      <0, 2*LG_WALL_WIDTH-LG_E, 0>,
      <-LG_KNOB_RADIUS-LG_E, 3*LG_WALL_WIDTH+LG_E, -LG_KNOB_RADIUS-LG_E>
      rotate <0, -lg_angle1, 0>
      translate <-LG_BRICK_WIDTH, 0, -0.84>
     }
    }
   }
   merge {
    cylinder {
     <LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>,
     <LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
     0.08-LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     0.08
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    rotate <0, lg_angle1, 0>
    translate <-LG_BRICK_WIDTH, 0, -0.84>
   }
   merge {
    cylinder {
     <-LG_WALL_WIDTH, 2*LG_WALL_WIDTH, 0>,
     <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH, 0>,
     0.08-LG_CORNER_SPACE
    }
    cylinder {
     <-LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
     <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
     0.08
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <-LG_WALL_WIDTH, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
    }
    torus {
     0.08-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     translate <-LG_WALL_WIDTH, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>
    }
    rotate <0, -lg_angle1, 0>
    translate <-LG_BRICK_WIDTH, 0, -0.84>
   }
   merge {
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.68/cos(lg_angle2)>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_E>,
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle2)>,
     LG_CORNER_SPACE
    }
    box {
     <LG_CORNER_SPACE, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <-LG_E, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle2)>
    }
    rotate <0, lg_angle2*180/pi, 0>
    translate <-0.24-LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>
   }
   merge {
    cylinder {
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <0, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, -0.68/cos(lg_angle3)>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, LG_E>,
     <0, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle3)>,
     LG_CORNER_SPACE
    }
    box {
     <-LG_CORNER_SPACE, 2*LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E>,
     <LG_E, 3*LG_WALL_WIDTH-LG_CORNER_SPACE, -0.68/cos(lg_angle2)>
    }
    rotate <0, lg_angle3*180/pi, 0>
    translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
} 

#end
