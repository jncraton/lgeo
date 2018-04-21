/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4267: Technic Tyre 20 x 30                                               */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_4267)
#else
#declare lg_angle1=asin((0.24-LG_CORNER_SPACE)/(3.14-LG_CORNER_SPACE));
#declare lg_angle2=asin((0.24-LG_CORNER_SPACE)/(2.67-LG_CORNER_SPACE));
#declare lg_4267 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    1.5+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   torus {
    2.67-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   #declare ROT = 0;
   #while (ROT < 24)
    union {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      union {
       sphere {
        <0, 1-LG_CORNER_SPACE, 3.14-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0.24-LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        <0.24-LG_CORNER_SPACE, 0, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        LG_CORNER_SPACE
       }
       #if (MIR2 = 1)
        matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
       #end
      }
      cylinder {
       <0.24-LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <0.24-LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (2.67-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.24+LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <-0.24+LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (2.67-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      difference {
       torus {
        3.14-LG_CORNER_SPACE,
        LG_CORNER_SPACE
       }
       union {
        box {
         <3.2, 0.1, 3.2>,
         <0, -0.1, -3.2>
         rotate <0, lg_angle1*180/pi, 0>
        }
        box {
         <-3.2, 0.1, 3.2>,
         <0, -0.1, -3.2>
         rotate <0, -lg_angle1*180/pi, 0>
        }
       }
       translate <0, 1-LG_CORNER_SPACE, 0>
      }
      #declare MIR2 = MIR2 + 1;
     #end
     rotate <0, 3.75+15*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
   #if (MIR = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  3.14-LG_CORNER_SPACE,
  LG_CORNER_SPACE
 }
 rotate <0, 0, 90>
}

#declare lg_4267_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    1.5+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   torus {
    2.67-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1-LG_CORNER_SPACE, 0>
   }
   #declare ROT = 0;
   #while (ROT < 24)
    merge {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      merge {
       sphere {
        <0, 1-LG_CORNER_SPACE, 3.14-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0.24-LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        <0.24-LG_CORNER_SPACE, 0, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        LG_CORNER_SPACE
       }
       #if (MIR2 = 1)
        matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
       #end
      }
      cylinder {
       <0.24-LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <0.24-LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (2.67-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.24+LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (3.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <-0.24+LG_CORNER_SPACE, 1-LG_CORNER_SPACE, (2.67-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      difference {
       torus {
        3.14-LG_CORNER_SPACE,
        LG_CORNER_SPACE
       }
       union {
        box {
         <3.2, 0.1, 3.2>,
         <0, -0.1, -3.2>
         rotate <0, lg_angle1*180/pi, 0>
        }
        box {
         <-3.2, 0.1, 3.2>,
         <0, -0.1, -3.2>
         rotate <0, -lg_angle1*180/pi, 0>
        }
       }
       translate <0, 1-LG_CORNER_SPACE, 0>
      }
      #declare MIR2 = MIR2 + 1;
     #end
     rotate <0, 3.75+15*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
   #if (MIR = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 torus {
  3.14-LG_CORNER_SPACE,
  LG_CORNER_SPACE
 }
 rotate <0, 0, 90>
}

#declare lg_4267_slope =
union {
 difference {
  union {
   cylinder {
    <0, 1-LG_CORNER_SPACE, 0>,
    <0, -1+LG_CORNER_SPACE, 0>,
    2.67
   }
   cylinder {
    <0, 1, 0>,
    <0, -1, 0>,
    2.67-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 1-LG_CORNER_SPACE, 0>,
    <0, 1+LG_E, 0>,
    1.5+LG_CORNER_SPACE
   }
   cylinder {
    <0, -1+LG_CORNER_SPACE, 0>,
    <0, -1-LG_E, 0>,
    1.5+LG_CORNER_SPACE
   }
   cylinder {
    <0, 1, 0>,
    <0, -1, 0>,
    1.5
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   #declare ROT = 0;
   #while (ROT < 24)
    union {
     intersection {
      cylinder {
       <0, 1, 0>,
       <0, -LG_CORNER_SPACE, 0>,
       3.14-LG_CORNER_SPACE
      }
      box {
       <0.24-LG_CORNER_SPACE, 1+LG_E, 3.14>,
       <-0.24+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E, 2.5>
      }
     }
     difference {
      cylinder {
       <0, 1-LG_CORNER_SPACE, 0>,
       <0, 0, 0>,
       3.14
      }
      union {
       box {
        <0, LG_E, 3.2>,
        <2, -1.5, 2.6>
        rotate <0, lg_angle1*180/pi, 0>
        translate <0, 1-LG_CORNER_SPACE, 0>
       }
       box {
        <0, LG_E, 3.2>,
        <-2, -1.5, 2.6>
        rotate <0, -lg_angle1*180/pi, 0>
        translate <0, 1-LG_CORNER_SPACE, 0>
       }
       box {
        <3.2, -LG_E, 2.9>,
        <-3.2, 1+LG_E, -3.2>
       }
      }
     }
     difference {
      cylinder {
       <0, 1-LG_CORNER_SPACE, 0>,
       <0, 0, 0>,
       3.14-LG_CORNER_SPACE
      }
      union {
       box {
        <0, 0, 3.2>,
        <2, -1.5, 2.4>
        translate <0.24, 1, 0>
       }
       box {
        <0, 0, 3.2>,
        <-2, -1.5, 2.4>
        translate <-0.24, 1, 0>
       }
       box {
        <3.2, -LG_E, 2.5>,
        <-3.2, 1, -3.2>
       }
      }
     }
     rotate <0, 3.75+15*ROT, 0>
    }
    #declare ROT = ROT + 1;
   #end
   #if (MIR = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 rotate <0, 0, 90>
}

#end
