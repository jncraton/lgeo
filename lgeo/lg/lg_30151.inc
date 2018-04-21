/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990824 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30151: Cylinder 2 x 2 x 1 & 2/3 Half-Dome                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30151)
#else
#declare lg_30151 =
union {
 difference {
  union {
   sphere {
    <0, 0, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS
   }
  }
  union {
   sphere {
    <0, 0, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, 2*LG_E>,
    <0, 0, -0.3>,
    LG_KNOB_INNER_RADIUS
   }
   box {
    <1, 1, -LG_BRICK_WIDTH-LG_E>,
    <-1, -1, -2>
   }
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -2>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -5*LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0 ,0>
    translate <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -2>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
  }
 }
 object {
  lg_tech_knob
 }
}

#declare lg_30151_clear =
merge {
 difference {
  merge {
   sphere {
    <0, 0, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -0.1>,
    LG_KNOB_RADIUS
   }
  }
  union {
   sphere {
    <0, 0, -LG_BRICK_WIDTH>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, 2*LG_E>,
    <0, 0, -0.3>,
    LG_KNOB_INNER_RADIUS
   }
   box {
    <1, 1, -LG_BRICK_WIDTH-LG_E>,
    <-1, -1, -2>
   }
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -2>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH
   }
   cylinder {
    <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <0, 0, -5*LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   torus {
    LG_BRICK_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0 ,0>
    translate <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_WIDTH>,
    <0, 0, -2>,
    LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
   cylinder {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT-LG_E>,
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -5*LG_PLATE_HEIGHT+LG_TOP_HEIGHT+LG_E>,
    LG_KNOB_RADIUS+LG_E
   }
  }
 }
 object {
  lg_tech_knob_clear
 }
}

#end
