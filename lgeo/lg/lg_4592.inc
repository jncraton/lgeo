/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/* 20071030 Lutz Uhlmann moved from lg_4592 to lg_4592                         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4592: Lever small Base                                                   */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4592)
#else
#declare lg_4592 =
union {
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   sphere {
    <0, 0, 0>, LG_CYLINDER_RADIUS
    scale <1, 1, 0.7>
   }
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -LG_CYLINDER_RADIUS-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-LG_BRICK_WIDTH/2, -0.08, 0>,
    <LG_BRICK_WIDTH/2, 0.08, LG_CYLINDER_RADIUS>
   }
   box {
    <-0.22, -0.08, -LG_TOP_HEIGHT-LG_E>,
    <0.22, 0.08, LG_E>
   }
   intersection {
    box {
     <-LG_BRICK_WIDTH/2, -0.08, -LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2, 0.08, LG_E>
    }
    difference {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS
     }
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
    }
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#declare lg_4592_clear =
merge {
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   sphere {
    <0, 0, 0>, LG_CYLINDER_RADIUS
    scale <1, 1, 0.7>
   }
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -LG_CYLINDER_RADIUS-LG_E>,
    LG_KNOB_RADIUS
   }
   box {
    <-LG_BRICK_WIDTH/2, -0.08, 0>,
    <LG_BRICK_WIDTH/2, 0.08, LG_CYLINDER_RADIUS>
   }
   box {
    <-0.22, -0.08, -LG_TOP_HEIGHT-LG_E>,
    <0.22, 0.08, LG_E>
   }
   intersection {
    box {
     <-LG_BRICK_WIDTH/2, -0.08, -LG_CORNER_SPACE>,
     <LG_BRICK_WIDTH/2, 0.08, LG_E>
    }
    difference {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS
     }
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
    }
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
}

#end
