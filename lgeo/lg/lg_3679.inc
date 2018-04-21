/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970924 Lutz Uhlmann                                                       */
/* 20071029 Lutz Uhlmann added stud logo for QUAL > 2                          */
/* 20080101 Lutz Uhlmann change QUAL to lg_quality                             */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3679: Turntable 2 x 2 Plate Top                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3679)
#else
#declare lg_3679 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
   }
   intersection {
    cylinder {
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>,
     LG_BRICK_WIDTH-0.08
    }
   }
   #ifdef (lg_quality)
    #if (lg_quality > 2)
     object {
      lego_logo_text
      rotate <0, 0, -90*ROT>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>
     }
    #end
   #end
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-0.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.1>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH-0.08
   }
   cylinder {
    <0, 0, -0.1+LG_E>,
    <0, 0, -0.3>,
    LG_KNOB_INNER_RADIUS
   }
   torus {
    LG_KNOB_INNER_RADIUS,
    0.06
    rotate <90, 0, 0>
    translate <0, 0, -0.24>
   }
  }
  union {
   cylinder {
    <0, 0, -0.1-LG_E>,
    <0, 0, -0.3-LG_E>,
    LG_KNOB_INNER_RADIUS/2
   }
   box {
    <0.02, LG_KNOB_RADIUS, -0.15>,
    <-0.02, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
   }
   intersection {
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
    }
    cylinder {
     <0, 0, -0.1-LG_E>,
     <0, 0, LG_E>,
     LG_BRICK_WIDTH-0.12
    }
   }
  }
 }
 torus {
  LG_BRICK_WIDTH-0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#declare lg_3679_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>,
    LG_KNOB_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>,
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
    LG_KNOB_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>
   }
   intersection {
    cylinder {
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <0, 0, LG_CORNER_SPACE+LG_E>,
     <0, 0, -LG_CORNER_SPACE-LG_E>,
     LG_BRICK_WIDTH-0.08
    }
   }
   #ifdef (lg_quality)
    #if (lg_quality > 2)
     object {
      lego_logo_text
      rotate <0, 0, -90*ROT>
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, LG_KNOB_HEIGHT>
     }
    #end
   #end
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_CORNER_SPACE-LG_E>,
    LG_BRICK_WIDTH-0.08-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -0.1>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH-0.08
   }
   cylinder {
    <0, 0, -0.1+LG_E>,
    <0, 0, -0.3>,
    LG_KNOB_INNER_RADIUS
   }
   torus {
    LG_KNOB_INNER_RADIUS,
    0.06
    rotate <90, 0, 0>
    translate <0, 0, -0.24>
   }
  }
  union {
   cylinder {
    <0, 0, -0.1-LG_E>,
    <0, 0, -0.3-LG_E>,
    LG_KNOB_INNER_RADIUS/2
   }
   box {
    <0.02, LG_KNOB_RADIUS, -0.15>,
    <-0.02, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT>
   }
   intersection {
    union {
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
     object {
      lg_knob_inner_space
      translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -0.1-LG_E>
     }
    }
    cylinder {
     <0, 0, -0.1-LG_E>,
     <0, 0, LG_E>,
     LG_BRICK_WIDTH-0.12
    }
   }
  }
 }
 torus {
  LG_BRICK_WIDTH-0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#end
