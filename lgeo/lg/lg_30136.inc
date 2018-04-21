/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001113 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30136: Log Brick 1 x 2                                                   */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30136)
#else
#declare lg_radius=sin(atan2(0.12,0.4))/0.4;
#declare lg_angle1=acos((LG_BRICK_WIDTH/2-LG_CORNER_SPACE)/(lg_radius-LG_CORNER_SPACE));
#declare lg_angle2=acos((LG_BRICK_WIDTH/2+2*LG_E)/lg_radius);
#declare lg_30136 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   #declare MIR2 = 0;
   #while (MIR2 < 2)
    union {
     difference {
      union {
       torus {
        lg_radius-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_CORNER_SPACE>
       }
       torus {
        lg_radius-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
       }
       cylinder {
        <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
        <0, 0, -LG_BRICK_HEIGHT>,
        lg_radius-LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        lg_radius
       }
      }
      union {
       box{
        <-lg_radius-LG_E, 0, LG_E>,
        <lg_radius+LG_E, lg_radius+LG_E, -LG_BRICK_HEIGHT-LG_E>
        rotate <0, 0, 90-lg_angle1*180/pi>
       }
       box{
        <-lg_radius-LG_E, 0, LG_E>,
        <lg_radius+LG_E, -lg_radius-LG_E, -LG_BRICK_HEIGHT-LG_E>
        rotate <0, 0, -90+lg_angle2*180/pi>
       }
       box {
        <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
        <-lg_radius-LG_E, -lg_radius-LG_E, -LG_BRICK_HEIGHT-LG_E>
       }
      }
      translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
     }
     union {
      sphere {
       <lg_radius-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      sphere {
       <lg_radius-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <lg_radius-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
       <lg_radius-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, 90-lg_angle1*180/pi>
      translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
     }
     box {
      <LG_KNOB_RADIUS, 0, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS+0.12, 0.12, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -45>
      translate <0, LG_BRICK_WIDTH/2, 0>
     }
     #if (MIR2 = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    union {
     intersection {
      cylinder {
       <0, 0, 0>,
       <0, 0, -LG_TOP_HEIGHT>,
       lg_radius-LG_CORNER_SPACE
       translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
      }
      box {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
       <-LG_E, -LG_E, -LG_TOP_HEIGHT-LG_E>
      }
     }
     intersection {
      cylinder {
       <0, 0, 0>,
       <0, 0, -LG_TOP_HEIGHT>,
       lg_radius-LG_CORNER_SPACE
       translate <lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
      }
      box {
       <LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
       <-LG_BRICK_WIDTH/2, -LG_E, -LG_TOP_HEIGHT-LG_E>
      }
     }
    }
    object {
     lg_knob_inner_space
     translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
   }
   object {
    lg_knob
    scale <1 1-2*MIR, 1>
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <LG_KNOB_RADIUS+LG_E, 0.3, 0>,
   <LG_BRICK_WIDTH, -0.3, -LG_BRICK_HEIGHT>
  }
 }
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <-LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <-LG_KNOB_RADIUS-LG_E, 0.3, 0>,
   <-LG_BRICK_WIDTH, -0.3, -LG_BRICK_HEIGHT>
  }
 }
}

#declare lg_30136_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   #declare MIR2 = 0;
   #while (MIR2 < 2)
    merge {
     difference {
      merge {
       torus {
        lg_radius-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_CORNER_SPACE>
       }
       torus {
        lg_radius-LG_CORNER_SPACE,
        LG_CORNER_SPACE
        rotate <90, 0, 0>
        translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
       }
       cylinder {
        <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
        <0, 0, -LG_BRICK_HEIGHT>,
        lg_radius-LG_CORNER_SPACE
       }
       cylinder {
        <0, 0, -LG_CORNER_SPACE>,
        <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
        lg_radius
       }
      }
      union {
       box{
        <-lg_radius-LG_E, 0, LG_E>,
        <lg_radius+LG_E, lg_radius+LG_E, -LG_BRICK_HEIGHT-LG_E>
        rotate <0, 0, 90-lg_angle1*180/pi>
       }
       box{
        <-lg_radius-LG_E, 0, LG_E>,
        <lg_radius+LG_E, -lg_radius-LG_E, -LG_BRICK_HEIGHT-LG_E>
        rotate <0, 0, -90+lg_angle2*180/pi>
       }
       box {
        <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
        <-lg_radius-LG_E, -lg_radius-LG_E, -LG_BRICK_HEIGHT-LG_E>
       }
      }
      translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
     }
     merge {
      sphere {
       <lg_radius-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      sphere {
       <lg_radius-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      cylinder {
       <lg_radius-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
       <lg_radius-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
       LG_CORNER_SPACE
      }
      rotate <0, 0, 90-lg_angle1*180/pi>
      translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
     }
     box {
      <LG_KNOB_RADIUS, 0, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS+0.12, 0.12, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -45>
      translate <0, LG_BRICK_WIDTH/2, 0>
     }
     #if (MIR2 = 1)
      matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     #end
    }
    #declare MIR2 = MIR2 + 1;
   #end
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)+lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    merge {
     intersection {
      cylinder {
       <0, 0, 0>,
       <0, 0, -LG_TOP_HEIGHT>,
       lg_radius-LG_CORNER_SPACE
       translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
      }
      box {
       <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
       <-LG_E, -LG_E, -LG_TOP_HEIGHT-LG_E>
      }
     }
     intersection {
      cylinder {
       <0, 0, 0>,
       <0, 0, -LG_TOP_HEIGHT>,
       lg_radius-LG_CORNER_SPACE
       translate <lg_radius-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
      }
      box {
       <LG_E, LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_E>,
       <-LG_BRICK_WIDTH/2, -LG_E, -LG_TOP_HEIGHT-LG_E>
      }
     }
    }
    object {
     lg_knob_inner_space_clear
     translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
    }
   }
   object {
    lg_knob_clear
    scale <1 1-2*MIR, 1>
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <LG_KNOB_RADIUS+LG_E, 0.3, 0>,
   <LG_BRICK_WIDTH, -0.3, -LG_BRICK_HEIGHT>
  }
 }
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <-LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <-LG_KNOB_RADIUS-LG_E, 0.3, 0>,
   <-LG_BRICK_WIDTH, -0.3, -LG_BRICK_HEIGHT>
  }
 }
}

#end
