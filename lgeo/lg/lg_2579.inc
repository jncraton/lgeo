/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990119 Lutz Uhlmann                                                       */
/* 20071127 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2579: Scaffolding Top                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2579)
#else
#declare lg_2579 =
union {
 difference {
  union {
   box {
    <0.9*LG_BRICK_WIDTH, 0.9*LG_BRICK_WIDTH-0.08, 0>
    <-0.9*LG_BRICK_WIDTH, -0.9*LG_BRICK_WIDTH+0.08, -LG_TOP_HEIGHT>
   }
   box {
    <0.9*LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH, 0>
    <-0.9*LG_BRICK_WIDTH+0.08, -0.9*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, -0.4>,
    0.4
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -0.5>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <0.75*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
   <-0.75*LG_BRICK_WIDTH, -0.75*LG_BRICK_WIDTH, -0.4>
  }
  box {
   <0.6*LG_BRICK_WIDTH, 0.6*LG_BRICK_WIDTH, -LG_E>,
   <-0.6*LG_BRICK_WIDTH, -0.6*LG_BRICK_WIDTH, -0.4-LG_E>
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   cylinder {
    <0.9*LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH-0.08, 0>,
    <0.9*LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH-0.08, -LG_TOP_HEIGHT>,
    0.08
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    <0.25*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    0.04
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    <-0.25*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    0.04
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_2579_clear =
merge {
 difference {
  merge {
   box {
    <0.9*LG_BRICK_WIDTH, 0.9*LG_BRICK_WIDTH-0.08, 0>
    <-0.9*LG_BRICK_WIDTH, -0.9*LG_BRICK_WIDTH+0.08, -LG_TOP_HEIGHT>
   }
   box {
    <0.9*LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH, 0>
    <-0.9*LG_BRICK_WIDTH+0.08, -0.9*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -LG_E>,
    <0, 0, -0.4>,
    0.4
   }
  }
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -0.5>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 difference {
  box {
   <0.75*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
   <-0.75*LG_BRICK_WIDTH, -0.75*LG_BRICK_WIDTH, -0.4>
  }
  box {
   <0.6*LG_BRICK_WIDTH, 0.6*LG_BRICK_WIDTH, -LG_E>,
   <-0.6*LG_BRICK_WIDTH, -0.6*LG_BRICK_WIDTH, -0.4-LG_E>
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   cylinder {
    <0.9*LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH-0.08, 0>,
    <0.9*LG_BRICK_WIDTH-0.08, 0.9*LG_BRICK_WIDTH-0.08, -LG_TOP_HEIGHT>,
    0.08
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    <0.25*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    0.04
   }
   cylinder {
    <-0.5*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    <-0.25*LG_BRICK_WIDTH, 0.75*LG_BRICK_WIDTH, -0.36>,
    0.04
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
