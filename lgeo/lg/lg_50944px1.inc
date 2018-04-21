/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080707 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_50944px1: Wheel 11 x  8 with Center Groove Chrome Silver Pattern         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_50944px1)
#else
#include "lg_50944.inc"
#declare lg_50944px1_decals =
union {
 difference {
  union {
   torus {
    0.56-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.5+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   difference {
    cylinder {
     <0.32, 0, 0>,
     <0.12, 0, 0>,
     0.56-LG_CORNER_SPACE
    }
    cylinder {
     <0.32+LG_E, 0, 0>,
     <0.32-LG_CORNER_SPACE, 0, 0>,
     0.5+LG_CORNER_SPACE
    }
   }
  }
  cylinder {
   <0.32-LG_CORNER_SPACE/6, 0, 0>,
   <0.1, 0, 0>,
   0.56+LG_CORNER_SPACE
  }
 }
 difference {
  union {
   torus {
    0.24-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.27-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.2+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.27-LG_CORNER_SPACE, 0, 0>
   }
   difference {
    cylinder {
     <0.27, 0, 0>,
     <0.12, 0, 0>,
     0.24-LG_CORNER_SPACE
    }
    cylinder {
     <0.27+LG_E, 0, 0>,
     <0.27-LG_CORNER_SPACE, 0, 0>,
     0.2+LG_CORNER_SPACE
    }
   }
  }
  cylinder {
   <0.27-LG_CORNER_SPACE/6, 0, 0>,
   <0.1, 0, 0>,
   0.24+LG_CORNER_SPACE
  }
 }
 #declare ROT = 0;
 #while (ROT < 5)
  difference {
   union {
    cylinder {
     <0.27-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
     <0.32-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.27-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
     <0.32-LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.27-LG_CORNER_SPACE, -0.04-LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
     <0.32-LG_CORNER_SPACE, -0.04-LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    cylinder {
     <0.27-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0.23-LG_CORNER_SPACE>,
     <0.32-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, 0.50+LG_CORNER_SPACE>,
     LG_CORNER_SPACE
    }
    box {
     <-LG_CORNER_SPACE 0.08-LG_CORNER_SPACE, 0>,
     <LG_CORNER_SPACE, 0.04+LG_CORNER_SPACE, (0.27+LG_CORNER_SPACE)/sin(lg_angle)>
     rotate <0, 90-lg_angle*180/pi, 0>
     translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
    }
    box {
     <-LG_CORNER_SPACE, -0.04-LG_CORNER_SPACE, 0>,
     <LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE, (0.27+LG_CORNER_SPACE)/sin(lg_angle)>
     rotate <0, 90-lg_angle*180/pi, 0>
     translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
    }
   }
   box {
    <0.1, 0.08+LG_E, -LG_CORNER_SPACE/6>,
    <0, -0.08-LG_E, -0.1>
    rotate <0, 90-lg_angle*180/pi, 0>
    translate <0.27-LG_CORNER_SPACE, 0, 0.23-LG_CORNER_SPACE>
   }
   rotate <72*ROT, 0, 0>
  }
  #declare ROT = ROT + 1;
 #end
 translate <0.0001, 0, 0>
}

#declare lg_50944px1 =
union {
 object {
  lg_50944
 }
 object {
  lg_50944px1_decals
  material { texture { lg_chrome } }
 }
}

#declare lg_50944px1_clear =
union {
 object {
  lg_50944_clear
 }
 object {
  lg_50944px1_decals
  material { texture { lg_chrome } }
 }
}

#end
