/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980802 Lutz Uhlmann                                                       */
/* 20021027 Lars C. Hassing   Corrected antenna height and spoke radius        */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3144: Antenna with Side Spokes                                           */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3144)
#else
#declare lg_3144 =
union {
 object {
  lg_knob
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
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
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_KNOB_HEIGHT-LG_E>,
  <0, 0, 12.5*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>,
  <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 2*LG_BRICK_WIDTH, 12.5*LG_PLATE_HEIGHT>,
  <0, -2*LG_BRICK_WIDTH, 12.5*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>
 }
 #declare SPOKE=-1.85;
 #while (SPOKE<2)
  union {
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   cylinder {
    <-1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <1.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    0.08
   }
   cylinder {
    <-1.4*LG_BRICK_WIDTH, 0, 0>,
    <1.4*LG_BRICK_WIDTH, 0, 0>,
    0.08-LG_CORNER_SPACE
   }
   translate <0, SPOKE*LG_BRICK_WIDTH, 12.5*LG_PLATE_HEIGHT>
  }
  #declare SPOKE = SPOKE +3.7/3;
 #end
}

#declare lg_3144_clear =
merge {
 object {
  lg_knob_clear
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
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
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, LG_KNOB_HEIGHT-LG_E>,
  <0, 0, 12.5*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>,
  <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, 2*LG_BRICK_WIDTH, 12.5*LG_PLATE_HEIGHT>,
  <0, -2*LG_BRICK_WIDTH, 12.5*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 12.5*LG_PLATE_HEIGHT>
 }
 #declare SPOKE=-1.85;
 #while (SPOKE<2)
  merge {
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
   }
   torus {
    0.08-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <-1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
   }
   cylinder {
    <-1.4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>,
    <1.4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>,
    0.08
   }
   cylinder {
    <-1.4*LG_BRICK_WIDTH, 0, 0>,
    <1.4*LG_BRICK_WIDTH, 0, 0>,
    0.08-LG_CORNER_SPACE
   }
   translate <0, SPOKE*LG_BRICK_WIDTH, 12.5*LG_PLATE_HEIGHT>
  }
  #declare SPOKE = SPOKE +3.7/3;
 #end
}

#end
