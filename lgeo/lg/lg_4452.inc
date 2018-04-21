/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19971029 Lutz Uhlmann                                                       */
/* 20080114 Lutz Uhlmann fixed stud orientation                                */
/* 20080114 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4452: Sand Box 6 x 6                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4452)
#else
#declare lg_4452 =
union {
 #declare ROT = 0;
 #while (ROT < 4)
  union {
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <2*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   object {
    lg_tech_knob
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
   <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT+LG_E>,
      <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     object {
      lg_knob_inner_space
      translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space
      translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#declare lg_4452_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 4)
  merge {
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <3*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <2*LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   object {
    lg_tech_knob_clear
    translate <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90*ROT>
    translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
   <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
  }
  union {
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder {
      <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT+LG_E>,
      <1.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>,
      LG_KNOB_INNER_RADIUS
     }
     object {
      lg_knob_inner_space_clear
      translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     object {
      lg_knob_inner_space_clear
      translate <1.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
  }
 }
}

#end
