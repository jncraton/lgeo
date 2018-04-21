/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/* 20071029 Lutz Uhlmann added stud logo for QUAL > 2                          */
/* 20080302 Lutz Uhlmann changed QUAL to lg_quality                            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4599: Tap 1 x 1                                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4599)
#else
#declare lg_4599 =
union {
 cylinder {
  <0, 0, 0>,
  <0, 0, LG_KNOB_HEIGHT>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_CORNER_SPACE>,
  <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_RADIUS
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 #ifdef (lg_quality)
  #if (lg_quality > 2)
   object {
    lego_logo_text
    rotate <0, 0, 90>
    translate <0, 0, LG_KNOB_HEIGHT>
   }
  #end
 #end
 difference {
  union {
   torus {
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH,
    LG_WALL_WIDTH
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
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
 cylinder {
  <0, 0, LG_E>,
  <0, 0, -LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, -LG_KNOB_INNER_RADIUS>,
  <-LG_BRICK_WIDTH/2, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS 
 }
 cone {
  <-LG_BRICK_WIDTH/2, 0, -LG_KNOB_INNER_RADIUS>, LG_KNOB_INNER_RADIUS,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 0, -LG_KNOB_INNER_RADIUS>, 0.13
 }
 difference {
  union {
   cylinder {
    <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS
   }
  }
  cylinder {
   <-LG_BRICK_WIDTH-LG_E, 0, -LG_KNOB_INNER_RADIUS>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, 0, -LG_KNOB_INNER_RADIUS>,
   0.08
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>
 }
}

#declare lg_4599_clear =
merge {
 cylinder {
  <0, 0, 0>,
  <0, 0, LG_KNOB_HEIGHT>,
  LG_KNOB_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0, LG_CORNER_SPACE>,
  <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_RADIUS
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 #ifdef (lg_quality)
  #if (lg_quality > 2)
   object {
    lego_logo_text
    rotate <0, 0, 90>
    translate <0, 0, LG_KNOB_HEIGHT>
   }
  #end
 #end
 difference {
  merge {
   torus {
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH,
    LG_WALL_WIDTH
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_WALL_WIDTH-LG_E>,
    <0, 0, -LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
    LG_CYLINDER_RADIUS-LG_WALL_WIDTH
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
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
 cylinder {
  <0, 0, LG_E>,
  <0, 0, -LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, -LG_KNOB_INNER_RADIUS>,
  <-LG_BRICK_WIDTH/2, 0, -LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS 
 }
 cone {
  <-LG_BRICK_WIDTH/2, 0, -LG_KNOB_INNER_RADIUS>, LG_KNOB_INNER_RADIUS,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 0, -LG_KNOB_INNER_RADIUS>, 0.13
 }
 difference {
  merge {
   cylinder {
    <-LG_BRICK_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>,
    LG_KNOB_INNER_RADIUS
   }
  }
  cylinder {
   <-LG_BRICK_WIDTH-LG_E, 0, -LG_KNOB_INNER_RADIUS>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, 0, -LG_KNOB_INNER_RADIUS>,
   0.08
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, 0, -LG_KNOB_INNER_RADIUS>
 }
}

#end
