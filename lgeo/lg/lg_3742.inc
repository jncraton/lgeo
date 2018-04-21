/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980727 Lutz Uhlmann                                                       */
/* 20071022 Lutz Uhlmann fixed stud                                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3742: Flower                                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3742)
#else
#declare lg_3742 =
union {
 difference {
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_E>,
    (LG_KNOB_RADIUS)
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_E>,
    (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE)
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -0.08>,
    0.32
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -0.08+LG_CORNER_SPACE>,
    0.32+LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_KNOB_HEIGHT>,
    0.08
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    0.08+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.08+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  0.32,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.32,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.08+LG_CORNER_SPACE>
 }
 torus {
  (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE),
  (LG_KNOB_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE)>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  union {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -LG_CORNER_SPACE>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -0.08+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.32, 0, -0.08>,
    <-0.32, 0, 0>,
    0.16-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32, 0, -0.08+LG_CORNER_SPACE>,
    <-0.32, 0, -LG_CORNER_SPACE>,
    0.16
   }
   rotate <0, 0, 120*ROT>
  }
  union {
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -LG_CORNER_SPACE>
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -0.08+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.32, 0, -0.08>,
    <-0.32, 0, 0>,
    0.2-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32, 0, -0.08+LG_CORNER_SPACE>,
    <-0.32, 0, -LG_CORNER_SPACE>,
    0.2
   }
   rotate <0, 0, 60+120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_3742_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
    <0, 0, -LG_E>,
    (LG_KNOB_RADIUS)
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_E>,
    (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE)
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -0.08>,
    0.32
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -0.08+LG_CORNER_SPACE>,
    0.32+LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT>,
    <0, 0, -LG_KNOB_HEIGHT>,
    0.08
   }
   cylinder {
    <0, 0, LG_KNOB_HEIGHT+LG_E>,
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    0.08+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.08+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  0.32,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.32,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.08+LG_CORNER_SPACE>
 }
 torus {
  (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE),
  (LG_KNOB_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE)>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  merge {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -LG_CORNER_SPACE>
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -0.08+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.32, 0, -0.08>,
    <-0.32, 0, 0>,
    0.16-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32, 0, -0.08+LG_CORNER_SPACE>,
    <-0.32, 0, -LG_CORNER_SPACE>,
    0.16
   }
   rotate <0, 0, 120*ROT>
  }
  merge {
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -LG_CORNER_SPACE>
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-0.32, 0, -0.08+LG_CORNER_SPACE>
   }
   cylinder {
    <-0.32, 0, -0.08>,
    <-0.32, 0, 0>,
    0.2-LG_CORNER_SPACE
   }
   cylinder {
    <-0.32, 0, -0.08+LG_CORNER_SPACE>,
    <-0.32, 0, -LG_CORNER_SPACE>,
    0.2
   }
   rotate <0, 0, 60+120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
