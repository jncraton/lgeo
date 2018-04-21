/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001119 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3740: Technic Tyre 24 x 43                                               */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3740)
#else
#declare lg_angle1=asin((0.26-LG_CORNER_SPACE)/(4.14-LG_CORNER_SPACE));
#declare lg_angle2=asin((0.26-LG_CORNER_SPACE)/(3.5-LG_CORNER_SPACE));
#declare lg_3740 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    2.15+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   torus {
    3.5-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   #declare ROT = 0;
   #while (ROT < 28)
    union {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      union {
       sphere {
        <0, 1.2-LG_CORNER_SPACE, 4.14-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0.26-LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        <0.26-LG_CORNER_SPACE, 0, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        LG_CORNER_SPACE
       }
       #if (MIR2 = 1)
        matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
       #end
      }
      cylinder {
       <0.26-LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <0.26-LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (3.5-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.26+LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <-0.26+LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (3.5-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      difference {
       torus {
        4.14-LG_CORNER_SPACE,
        LG_CORNER_SPACE
       }
       union {
        box {
         <4.2, 0.1, 4.2>,
         <0, -0.1, -4.2>
         rotate <0, lg_angle1*180/pi, 0>
        }
        box {
         <-4.2, 0.1, 4.2>,
         <0, -0.1, -4.2>
         rotate <0, -lg_angle1*180/pi, 0>
        }
       }
       translate <0, 1.2-LG_CORNER_SPACE, 0>
      }
      #declare MIR2 = MIR2 + 1;
     #end
     rotate <0, (360/28)*(ROT+1/4), 0>
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
  4.14-LG_CORNER_SPACE,
  LG_CORNER_SPACE
 }
 rotate <0, 0, 90>
}

#declare lg_3740_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    2.15+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   torus {
    3.5-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 1.2-LG_CORNER_SPACE, 0>
   }
   #declare ROT = 0;
   #while (ROT < 28)
    merge {
     #declare MIR2 = 0;
     #while (MIR2 < 2)
      merge {
       sphere {
        <0, 1.2-LG_CORNER_SPACE, 4.14-LG_CORNER_SPACE>,
        LG_CORNER_SPACE
        rotate <0, lg_angle1*180/pi, 0>
       }
       cylinder {
        <0.26-LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        <0.26-LG_CORNER_SPACE, 0, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
        LG_CORNER_SPACE
       }
       #if (MIR2 = 1)
        matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
       #end
      }
      cylinder {
       <0.26-LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <0.26-LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (3.5-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.26+LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (4.14-LG_CORNER_SPACE)*cos(lg_angle1)>,
       <-0.26+LG_CORNER_SPACE, 1.2-LG_CORNER_SPACE, (3.5-LG_CORNER_SPACE)*cos(lg_angle2)>,
       LG_CORNER_SPACE
      }
      difference {
       torus {
        4.14-LG_CORNER_SPACE,
        LG_CORNER_SPACE
       }
       union {
        box {
         <4.2, 0.1, 4.2>,
         <0, -0.1, -4.2>
         rotate <0, lg_angle1*180/pi, 0>
        }
        box {
         <-4.2, 0.1, 4.2>,
         <0, -0.1, -4.2>
         rotate <0, -lg_angle1*180/pi, 0>
        }
       }
       translate <0, 1.2-LG_CORNER_SPACE, 0>
      }
      #declare MIR2 = MIR2 + 1;
     #end
     rotate <0, (360/28)*(ROT+1/4), 0>
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
  4.14-LG_CORNER_SPACE,
  LG_CORNER_SPACE
 }
 rotate <0, 0, 90>
}

#declare lg_3740_slope =
union {
 difference {
  union {
   cylinder {
    <0, 1.2-LG_CORNER_SPACE, 0>,
    <0, -1.2+LG_CORNER_SPACE, 0>,
    3.5
   }
   cylinder {
    <0, 1.2, 0>,
    <0, -1.2, 0>,
    3.5-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 1.2-LG_CORNER_SPACE, 0>,
    <0, 1.2+LG_E, 0>,
    2.15+LG_CORNER_SPACE
   }
   cylinder {
    <0, -1.2+LG_CORNER_SPACE, 0>,
    <0, -1.2-LG_E, 0>,
    2.15+LG_CORNER_SPACE
   }
   cylinder {
    <0, 1.2, 0>,
    <0, -1.2, 0>,
    2.15
   }
  }
 }
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   #declare ROT = 0;
   #while (ROT < 28)
    union {
     intersection {
      cylinder {
       <0, 1.2, 0>,
       <0, -LG_CORNER_SPACE, 0>,
       4.14-LG_CORNER_SPACE
      }
      box {
       <0.26-LG_CORNER_SPACE, 1.2+LG_E, 4.14>,
       <-0.26+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E, 3.4>
      }
     }
     difference {
      cylinder {
       <0, 1.2-LG_CORNER_SPACE, 0>,
       <0, 0, 0>,
       4.14
      }
      union {
       box {
        <0, LG_E, 4.2>,
        <2, -1.5, 3.6>
        rotate <0, lg_angle1*180/pi, 0>
        translate <0, 1.2-LG_CORNER_SPACE, 0>
       }
       box {
        <0, LG_E, 4.2>,
        <-2, -1.5, 3.6>
        rotate <0, -lg_angle1*180/pi, 0>
        translate <0, 1.2-LG_CORNER_SPACE, 0>
       }
       box {
        <4.2, -LG_E, 3.9>,
        <-4.2, 1.2+LG_E, -4.2>
       }
      }
     }
     difference {
      cylinder {
       <0, 1.2-LG_CORNER_SPACE, 0>,
       <0, 0, 0>,
       4.14-LG_CORNER_SPACE
      }
      union {
       box {
        <0, 0, 4.2>,
        <3, -1.5, 3.1>
        translate <0.26, 1.2, 0>
       }
       box {
        <0, 0, 4.2>,
        <-3, -1.5, 3.1>
        translate <-0.26, 1.2, 0>
       }
       box {
        <4.2, -LG_E, 3.2>,
        <-4.2, 1.2, -4.2>
       }
      }
     }
     rotate <0, (360/28)*(ROT+1/4), 0>
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
