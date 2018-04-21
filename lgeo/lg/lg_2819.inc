/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19981025 Lutz Uhlmann                                                       */
/* 20071223 Lutz Uhlmann fixed radius and spoke orientation                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2819: Technic Steering Wheel                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2819)
#else
#declare lg_2819 =
union {
 object {
  lg_tech_knob
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
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, -2*LG_PLATE_HEIGHT>, 
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_E> 
   }
   box {
    <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, -2*LG_PLATE_HEIGHT>, 
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_E> 
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, -2*LG_PLATE_HEIGHT>,
    <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, -LG_E>,
    LG_CROSSAXLE_WIDTH/2
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
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
 torus {
  1.12,
  0.16
  rotate <90, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  box {
   <-LG_E, LG_WALL_WIDTH, 0>,
   <-LG_BRICK_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH>
   rotate <0, 10, 0>
   translate <-LG_KNOB_RADIUS, 0, -0.08>
   rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#declare lg_2819_clear =
merge {
 object {
  lg_tech_knob_clear
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
  }
 }
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   box {
    <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH, -2*LG_PLATE_HEIGHT>, 
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_E> 
   }
   box {
    <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH/2, -2*LG_PLATE_HEIGHT>, 
    <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_E> 
   }
   cylinder {
    <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, -2*LG_PLATE_HEIGHT>,
    <LG_CROSSAXLE_WIDTH, LG_CROSSAXLE_WIDTH, -LG_E>,
    LG_CROSSAXLE_WIDTH/2
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
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
 torus {
  1.12,
  0.16
  rotate <90, 0, 0>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  box {
   <-LG_E, LG_WALL_WIDTH, 0>,
   <-LG_BRICK_WIDTH, -LG_WALL_WIDTH, -LG_WALL_WIDTH>
   rotate <0, 10, 0>
   translate <-LG_KNOB_RADIUS, 0, -0.08>
   rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
}

#end
