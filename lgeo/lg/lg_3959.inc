/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/* 20050122 Lars C. Hassing   Corrected name of clear part                     */
/* 20080803 Lutz Uhlmann changed Radius of Rims to fixed value                 */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3959: Space Gun                                                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3959)
#else
#declare lg_3959 =
union {
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     sphere {
      <0.64-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <0.64-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0.32, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <2*LG_WALL_WIDTH+LG_E, 0, 0>,
   <LG_BRICK_WIDTH, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.12+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.8, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.72, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.64, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.48, 0, 0>
 }
 cylinder {
  <-1.12, 0, 0>,
  <-0.48+LG_E, 0, 0>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <-1.12+LG_CORNER_SPACE, 0, 0>,
  <-0.8, 0, 0>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <2*LG_WALL_WIDTH+LG_E, 0, 0>,
  <-0.48, 0, 0>,
  LG_KNOB_INNER_RADIUS
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.7+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -0.7>,
  <0, 0, -0.7+LG_CORNER_SPACE+LG_E>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 } 
 cylinder {
  <0, 0, 0>,
  <0, 0, -0.7+LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS
 } 
 cylinder {
  <2*LG_WALL_WIDTH, 0, 0>,
  <2*LG_WALL_WIDTH+0.08, 0, 0>,
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
  <2*LG_WALL_WIDTH+0.08-LG_CORNER_SPACE, 0, 0>,
  LG_BRICK_WIDTH/2
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH+0.08-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <LG_BRICK_HEIGHT-LG_CORNER_SPACE-LG_E, 0, 0>,
    <LG_BRICK_HEIGHT, 0, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <LG_BRICK_HEIGHT+LG_E, 0, 0>,
    <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_HEIGHT+LG_E, 0, 0>,
    <LG_BRICK_HEIGHT-0.56-LG_E, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.08, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.16, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.24, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.32, 0, 0>
 }
}

#declare lg_3959_clear =
merge {
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     sphere {
      <0.64-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     cylinder {
      <0.64-0.08, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      <0.32, LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08>,
      0.08
     }
     rotate <90*ROT, 0, 0>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <2*LG_WALL_WIDTH+LG_E, 0, 0>,
   <LG_BRICK_WIDTH, 0, 0>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-1.12+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.8, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.72, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.64, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.56, 0, 0>
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.48, 0, 0>
 }
 cylinder {
  <-1.12, 0, 0>,
  <-0.48+LG_E, 0, 0>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 cylinder {
  <-1.12+LG_CORNER_SPACE, 0, 0>,
  <-0.8, 0, 0>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <2*LG_WALL_WIDTH+LG_E, 0, 0>,
  <-0.48, 0, 0>,
  LG_KNOB_INNER_RADIUS
 }
 torus {
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -0.7+LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, -0.7>,
  <0, 0, -0.7+LG_CORNER_SPACE+LG_E>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 } 
 cylinder {
  <0, 0, 0>,
  <0, 0, -0.7+LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS
 } 
 cylinder {
  <2*LG_WALL_WIDTH, 0, 0>,
  <2*LG_WALL_WIDTH+0.08, 0, 0>,
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE
 }
 cylinder {
  <2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>,
  <2*LG_WALL_WIDTH+0.08-LG_CORNER_SPACE, 0, 0>,
  LG_BRICK_WIDTH/2
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH+LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <2*LG_WALL_WIDTH+0.08-LG_CORNER_SPACE, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>,
    <2*LG_WALL_WIDTH-LG_E, 0, 0>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <LG_BRICK_HEIGHT-LG_CORNER_SPACE-LG_E, 0, 0>,
    <LG_BRICK_HEIGHT, 0, 0>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <LG_BRICK_HEIGHT+LG_E, 0, 0>,
    <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>,
    LG_KNOB_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_HEIGHT+LG_E, 0, 0>,
    <LG_BRICK_HEIGHT-0.56-LG_E, 0, 0>,
    LG_KNOB_RADIUS
   }
  }
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.08, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.16, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.24, 0, 0>
 }
 torus {
  LG_CYLINDER_RADIUS,
  0.024
  rotate <0, 0, 90>
  translate <LG_BRICK_HEIGHT-LG_KNOB_HEIGHT-LG_CORNER_SPACE-0.32, 0, 0>
 }
}

#end
