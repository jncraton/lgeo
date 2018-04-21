/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970925 Lutz Uhlmann                                                       */
/* 20080121 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6177: Tile 8 x 8 Round with Center Studs                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6177)
#else
#declare lg_6177 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   box {
    <3*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <-2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, 0>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#declare lg_6177_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   box {
    <3*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    <-2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, 0>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   cylinder {
    <0, 0, -LG_TOP_HEIGHT>,
    <0, 0, -LG_PLATE_HEIGHT-LG_E>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
}

#end
