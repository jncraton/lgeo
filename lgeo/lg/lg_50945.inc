/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080729 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_50945: Tire 11 x 6 Smooth                                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_50945)
#else
#declare lg_50945 =
union {
 #declare MIR = 0
 #while (MIR < 2)
  union {
   torus {
    0.56+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.74-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1
 #end
 difference {
  union {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    0.74
   }
   cylinder {
    <0.32, 0, 0>,
    <-0.32, 0, 0>,
    0.74-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.32, 0, 0>,
    <-0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.12-LG_E, 0, 0>,
    <0.12+LG_E, 0, 0>,
    0.48
   }
  }
 }
}

#declare lg_50945_clear =
merge {
 #declare MIR = 0
 #while (MIR < 2)
  merge {
   torus {
    0.56+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.74-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.32-LG_CORNER_SPACE, 0, 0>
   }
   #if (MIR = 1)
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1
 #end
 difference {
  merge {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    0.74
   }
   cylinder {
    <0.32, 0, 0>,
    <-0.32, 0, 0>,
    0.74-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0.32-LG_CORNER_SPACE, 0, 0>,
    <0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <-0.32+LG_CORNER_SPACE, 0, 0>,
    <-0.32+LG_E, 0, 0>,
    0.56+LG_CORNER_SPACE
   }
   cylinder {
    <0.32, 0, 0>,
    <0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.32, 0, 0>,
    <-0.12, 0, 0>,
    0.56
   }
   cylinder {
    <-0.12-LG_E, 0, 0>,
    <0.12+LG_E, 0, 0>,
    0.48
   }
  }
 }
}

#end
