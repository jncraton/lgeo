/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971203 Lutz Uhlmann                                                       */
/* 20080126 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30000: Brick 2 x 2 with Pins                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30000)
#else
#declare lg_30000 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      0.3-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
     }
     torus {
      2*LG_KNOB_RADIUS,
      0.04
      scale <1/2, 1, 1/2>
       translate <0, LG_BRICK_WIDTH-0.04, 0>
     }
     cylinder {
      <0, LG_WALL_WIDTH/2, 0>,
      <0, -LG_E, 0>,
      0.3-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
      <0, -LG_E, 0>,
      0.3
     }
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, -LG_E, 0>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <0, -2*LG_E, 0>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <0, 0.56, LG_KNOB_RADIUS+LG_E>,
      <0, 0.56, -LG_KNOB_RADIUS-LG_E>,
      0.04
     }
     box {
      <0.04, 0.56, LG_CYLINDER_RADIUS>,
      <-0.04, LG_BRICK_WIDTH+LG_E, -LG_CYLINDER_RADIUS>
     }
    }
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
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
 object {
  lg_knob
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 intersection {
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
} 

#declare lg_30000_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     torus {
      0.3-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>
     }
     torus {
      2*LG_KNOB_RADIUS,
      0.04
      scale <1/2, 1, 1/2>
       translate <0, LG_BRICK_WIDTH-0.04, 0>
     }
     cylinder {
      <0, LG_WALL_WIDTH/2, 0>,
      <0, -LG_E, 0>,
      0.3-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
      <0, -LG_E, 0>,
      0.3
     }
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, -LG_E, 0>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      <0, -2*LG_E, 0>,
      LG_KNOB_INNER_RADIUS
     }
     cylinder {
      <0, 0.56, LG_KNOB_RADIUS+LG_E>,
      <0, 0.56, -LG_KNOB_RADIUS-LG_E>,
      0.04
     }
     box {
      <0.04, 0.56, LG_CYLINDER_RADIUS>,
      <-0.04, LG_BRICK_WIDTH+LG_E, -LG_CYLINDER_RADIUS>
     }
    }
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, LG_E>,
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
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_cylinder_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 intersection {
  merge {
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -2*LG_PLATE_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -2*LG_PLATE_HEIGHT>
     }
     sphere {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -2*LG_PLATE_HEIGHT>,
      0.08
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
  cylinder {
   <0, 0, LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
} 

#end
