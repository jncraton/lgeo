/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_71076: Exhaust Pipe Straight                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_71076)
#else
#declare lg_71076 =
union {
 object {
  lg_tech_knob
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -5*LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
}

#declare lg_71076_clear =
merge {
 object {
  lg_tech_knob_clear
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -5*LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -5*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -5*LG_PLATE_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_INNER_RADIUS
   }
  }
 }
}

#end
