/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971204 Lutz Uhlmann                                                       */
/* 20071201 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2476b: Plate 2 x 2 with Pin Type 2                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2476b)
#else
#declare lg_2476b = 
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
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
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
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 180*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, 180*ROT>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
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
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, LG_E>,
    <LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0, LG_E>,
    <-LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
  }
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
    <0, -LG_PLATE_INNER_HEIGHT-LG_E, 0>,
    0.3-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, -LG_PLATE_INNER_HEIGHT-LG_E, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_PLATE_INNER_HEIGHT-LG_E, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    <0, -LG_PLATE_INNER_HEIGHT-2*LG_E, 0>,
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
  matrix <1, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  cylinder {
   <0, 0, -LG_TOP_HEIGHT+LG_E>,
   <0, 0, -LG_PLATE_HEIGHT>,
   2.75*LG_WALL_WIDTH
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+2*LG_E>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    2.25*LG_WALL_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, LG_E>,
    <LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT>,
    0.12
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>,
    0.12
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0, LG_E>,
    <-LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT>,
    0.12
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>,
    0.12
   }
   box {
    <LG_BRICK_WIDTH, 0.12, LG_E>,
    <-LG_BRICK_WIDTH, -0.12, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, 10>
   }
   box {
    <LG_BRICK_WIDTH, 0.12, LG_E>,
    <-LG_BRICK_WIDTH, -0.12, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, 80>
   }
  }
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, -0.12, -LG_TOP_HEIGHT>,
    <LG_BRICK_WIDTH/2, -0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 10>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0.12, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2, 0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 10>
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0.12, -LG_TOP_HEIGHT>,
    <LG_BRICK_WIDTH/2, 0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 80>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -0.12, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2, -0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 80>
   }
  }
  cylinder {
   <0, 0, -LG_TOP_HEIGHT+2*LG_E>,
   <0, 0, -LG_PLATE_HEIGHT-LG_E>,
   2.25*LG_WALL_WIDTH
  }
 }
} 

#declare lg_2476b_clear = 
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
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
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
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 180*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, 180*ROT>
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
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
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, LG_E>,
    <LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0, LG_E>,
    <-LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT-LG_E>,
    0.12
   }
  }
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
    <0, -LG_PLATE_INNER_HEIGHT-LG_E, 0>,
    0.3-LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_WALL_WIDTH/2-LG_CORNER_SPACE, 0>,
    <0, -LG_PLATE_INNER_HEIGHT-LG_E, 0>,
    0.3
   }
   cylinder {
    <0, LG_BRICK_WIDTH, 0>,
    <0, -LG_PLATE_INNER_HEIGHT-LG_E, 0>,
    LG_KNOB_RADIUS
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH+LG_E, 0>,
    <0, -LG_PLATE_INNER_HEIGHT-2*LG_E, 0>,
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
  matrix <1, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, -LG_PLATE_HEIGHT>
 }
 difference {
  cylinder {
   <0, 0, -LG_TOP_HEIGHT+LG_E>,
   <0, 0, -LG_PLATE_HEIGHT>,
   2.75*LG_WALL_WIDTH
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT+2*LG_E>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    2.25*LG_WALL_WIDTH
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, LG_E>,
    <LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT>,
    0.12
   }
   cylinder {
    <0, LG_BRICK_WIDTH/2, LG_E>,
    <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>,
    0.12
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0, LG_E>,
    <-LG_BRICK_WIDTH/2, 0, -LG_TOP_HEIGHT>,
    0.12
   }
   cylinder {
    <0, -LG_BRICK_WIDTH/2, LG_E>,
    <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>,
    0.12
   }
   box {
    <LG_BRICK_WIDTH, 0.12, LG_E>,
    <-LG_BRICK_WIDTH, -0.12, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, 10>
   }
   box {
    <LG_BRICK_WIDTH, 0.12, LG_E>,
    <-LG_BRICK_WIDTH, -0.12, -LG_PLATE_HEIGHT-LG_E>
    rotate <0, 0, 80>
   }
  }
 }
 difference {
  union {
   cylinder {
    <LG_BRICK_WIDTH/2, -0.12, -LG_TOP_HEIGHT>,
    <LG_BRICK_WIDTH/2, -0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 10>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, 0.12, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2, 0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 10>
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0.12, -LG_TOP_HEIGHT>,
    <LG_BRICK_WIDTH/2, 0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 80>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2, -0.12, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2, -0.12, -LG_PLATE_HEIGHT>,
    0.37*LG_WALL_WIDTH
    rotate <0, 0, 80>
   }
  }
  cylinder {
   <0, 0, -LG_TOP_HEIGHT+2*LG_E>,
   <0, 0, -LG_PLATE_HEIGHT-LG_E>,
   2.25*LG_WALL_WIDTH
  }
 }
} 

#end
