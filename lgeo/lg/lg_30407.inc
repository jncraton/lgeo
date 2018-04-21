/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081113 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30407: Hinge Plate 1 x 8 Locking with angled side extensions             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30407)
#else
#declare lg_angle1=atan2(0.16, 0.06);
#declare lg_angle2=atan2(0.6, 0.08);
#declare lg_angle3=atan2(LG_BRICK_WIDTH/2, LG_PLATE_HEIGHT);
#declare lg_angle4=atan2(2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2);
#declare lg_30407 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  difference {
   // hinge double finger locking
   union {
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    cylinder {
     <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
     <0.36, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    difference {
     union {
      box {
       <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS>
      }
     }
     union {
      box {
       <0.4, 0, 0>,
       <LG_WALL_WIDTH-LG_E, 0.3, 0.3>
       rotate <-45, 0, 0>
       translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.4, -LG_WALL_WIDTH, LG_KNOB_RADIUS+LG_E>,
       <LG_WALL_WIDTH-LG_E, 0, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
     }
    }
    cone {
     <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
     <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
    }
    box {
     <0.36-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
     rotate <-45, 0, 0>
     translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
    }
   }
   union {
    #declare ROT = -5;
    #while (ROT < 5)
     union {
      cylinder {
       <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
       <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
       0.04
      }
      difference {
       cylinder {
        <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      difference {
       cylinder {
        <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      rotate <(ROT+0.5)*90/4, 0, 0>
      translate <0, -LG_BRICK_WIDTH/2, 0>
     }
     #declare ROT = ROT + 1;
    #end
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
   translate <0, 0, -LG_BRICK_WIDTH/2+LG_PLATE_HEIGHT>
   rotate <0, 0, -90>
  }
  union {
   sphere {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
    <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #declare CYL_X = 0.5;
   #while (CYL_X < 6)
    cylinder {
     <CYL_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_PLATE_HEIGHT>,
     <CYL_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_CORNER_SPACE>,
     0.04
    }
    #declare CYL_X = CYL_X + 1;
   #end
   intersection {
    union {
     difference {
      box {
       <0, 0, LG_CORNER_SPACE>,
       <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT*sin(lg_angle3)+LG_CORNER_SPACE>
      }
      union {
       box {
        <LG_CORNER_SPACE, -LG_E, LG_CORNER_SPACE+LG_E>,
        <-LG_E, LG_BRICK_WIDTH+LG_E, 0>
       }
       box {
        <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E>,
        <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
        rotate <0, 0, -90+lg_angle4*180/pi>
        translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
       }
       box {
        <LG_CORNER_SPACE, 0, LG_CORNER_SPACE+LG_E>,
        <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
        rotate <0, 0, -90+lg_angle4*180/pi>
        translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
       }
       box {
        <LG_CORNER_SPACE, 0, LG_CORNER_SPACE+LG_E>,
        <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
        rotate <0, 0, -90+lg_angle4*180/pi>
        translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
       }
      }
     }
     cylinder {
      <0, 0, 0>,
      <-3*LG_BRICK_WIDTH, 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, -90+lg_angle4*180/pi>
      translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
     }
     cylinder {
      <LG_CORNER_SPACE, 0, 0>,
      <LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
      LG_CORNER_SPACE
      texture {lg_green}
     }
     translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
    box {
     <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_E>,
     <-LG_E, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>
    }
    matrix <1, 0, 0, 0, 1, -LG_PLATE_HEIGHT/LG_BRICK_WIDTH*2, 0, 0, 1, 0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE*LG_PLATE_HEIGHT/LG_BRICK_WIDTH*2>
   }
   difference {
    union {
     box {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    box {
     <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E>,
     <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     rotate <0, 0, -90+lg_angle4*180/pi>
     translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, LG_E>,
    <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+0.04
   }
  }
  translate <5.5*LG_BRICK_WIDTH, 0, 0>
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH+0.04, 0, -LG_PLATE_HEIGHT>,
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH+0.04, 0, -LG_CORNER_SPACE>,
  0.04
 }
 box {
  <LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 #declare CYL_X = 1;
 #while (CYL_X < 7)
  object {
   lg_plate_column
   translate <CYL_X*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
  }
  #declare CYL_X = CYL_X + 1;
 #end
 difference {
  box {
   <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <2.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <3.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <4.5*LG_BRICK_WIDTH, 0, 0>
 }
}

#declare lg_30407_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  difference {
   // hinge double finger locking
   union {
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    torus {
     LG_KNOB_RADIUS-LG_CORNER_SPACE,
     LG_CORNER_SPACE
     rotate <0, 0, 90>
     translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>
    }
    cylinder {
     <LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, 0>,
     <0.36, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS-LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, 0>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    sphere {
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, LG_E, 0.08-LG_CORNER_SPACE-LG_E>,
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     <0.36-LG_CORNER_SPACE, LG_E, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    difference {
     union {
      box {
       <0.36, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS+LG_CORNER_SPACE>,
       <LG_WALL_WIDTH, LG_E, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.36-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_KNOB_RADIUS>,
       <LG_WALL_WIDTH+LG_CORNER_SPACE, LG_E, LG_KNOB_RADIUS>
      }
     }
     union {
      box {
       <0.4, 0, 0>,
       <LG_WALL_WIDTH-LG_E, 0.3, 0.3>
       rotate <-45, 0, 0>
       translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
      box {
       <0.4, -LG_WALL_WIDTH, LG_KNOB_RADIUS+LG_E>,
       <LG_WALL_WIDTH-LG_E, 0, LG_KNOB_RADIUS-LG_CORNER_SPACE>
      }
     }
    }
    cone {
     <0.13, -LG_BRICK_WIDTH/2, 0>, 0.13
     <LG_WALL_WIDTH+LG_E, -LG_BRICK_WIDTH/2, 0>, LG_WALL_WIDTH+LG_E
    }
    box {
     <0.36-LG_CORNER_SPACE, 0, LG_CORNER_SPACE>,
     <LG_WALL_WIDTH+LG_CORNER_SPACE, 0.22, -LG_E>
     rotate <-45, 0, 0>
     translate <0, -LG_WALL_WIDTH, LG_KNOB_RADIUS-LG_CORNER_SPACE>
    }
   }
   union {
    #declare ROT = -5;
    #while (ROT < 5)
     union {
      cylinder {
       <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
       <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
       0.04
      }
      difference {
       cylinder {
        <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <0.36+LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <0.36-LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      difference {
       cylinder {
        <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
        <LG_WALL_WIDTH-LG_E, -LG_KNOB_RADIUS, 0>,
        0.04+LG_CORNER_SPACE
       }
       torus {
        0.04+LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <0, 0, 90>
        translate <LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_KNOB_RADIUS, 0>
       }
      }
      rotate <(ROT+0.5)*90/4, 0, 0>
      translate <0, -LG_BRICK_WIDTH/2, 0>
     }
     #declare ROT = ROT + 1;
    #end
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
   translate <0, 0, -LG_BRICK_WIDTH/2+LG_PLATE_HEIGHT>
   rotate <0, 0, -90>
  }
  union {
   sphere {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
    <5.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   #declare CYL_X = 0.5;
   #while (CYL_X < 6)
    cylinder {
     <CYL_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_PLATE_HEIGHT>,
     <CYL_X*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH+0.04, -LG_CORNER_SPACE>,
     0.04
    }
    #declare CYL_X = CYL_X + 1;
   #end
   intersection {
    union {
     difference {
      box {
       <0, 0, LG_CORNER_SPACE>,
       <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_TOP_HEIGHT*sin(lg_angle3)+LG_CORNER_SPACE>
      }
      union {
       box {
        <LG_CORNER_SPACE, -LG_E, LG_CORNER_SPACE+LG_E>,
        <-LG_E, LG_BRICK_WIDTH+LG_E, 0>
       }
       box {
        <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E>,
        <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
        rotate <0, 0, -90+lg_angle4*180/pi>
        translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
       }
       box {
        <LG_CORNER_SPACE, 0, LG_CORNER_SPACE+LG_E>,
        <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, 0>
        rotate <0, 0, -90+lg_angle4*180/pi>
        translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
       }
       box {
        <LG_CORNER_SPACE, 0, LG_CORNER_SPACE+LG_E>,
        <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
        rotate <0, 0, -90+lg_angle4*180/pi>
        translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
       }
      }
     }
     cylinder {
      <0, 0, 0>,
      <-3*LG_BRICK_WIDTH, 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, -90+lg_angle4*180/pi>
      translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0*LG_CORNER_SPACE, 0>
     }
     cylinder {
      <LG_CORNER_SPACE, 0, 0>,
      <LG_CORNER_SPACE, LG_BRICK_WIDTH, 0>,
      LG_CORNER_SPACE
      texture {lg_green}
     }
     translate <0, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
    box {
     <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_E>,
     <-LG_E, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>
    }
    matrix <1, 0, 0, 0, 1, -LG_PLATE_HEIGHT/LG_BRICK_WIDTH*2, 0, 0, 1, 0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE*LG_PLATE_HEIGHT/LG_BRICK_WIDTH*2>
   }
   difference {
    union {
     box {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
      <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_TOP_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    box {
     <LG_CORNER_SPACE, LG_CORNER_SPACE, LG_CORNER_SPACE+LG_E>,
     <-3*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
     rotate <0, 0, -90+lg_angle4*180/pi>
     translate <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   torus {
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <0, LG_BRICK_WIDTH/2+LG_E, LG_E>,
    <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+0.04
   }
  }
  translate <5.5*LG_BRICK_WIDTH, 0, 0>
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH+0.04, 0, -LG_PLATE_HEIGHT>,
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH+0.04, 0, -LG_CORNER_SPACE>,
  0.04
 }
 box {
  <LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
 }
 #declare CYL_X = 1;
 #while (CYL_X < 7)
  object {
   lg_plate_column_clear
   translate <CYL_X*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
  }
  #declare CYL_X = CYL_X + 1;
 #end
 difference {
  box {
   <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <0.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <0.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <1.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <2.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <3.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <4.5*LG_BRICK_WIDTH, 0, 0>
 }
}

#end
