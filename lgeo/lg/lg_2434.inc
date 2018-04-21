/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970712 Lutz Uhlmann                                                       */
/* 20071201 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2434: Brick 2 x 4 x 2 with Studs on Sides                                */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2434)
#else
#declare lg_2434 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   box {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
   }
  }
  box {
   <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>
  }
 }
 #declare CYL_X = -1.5;
 #while (CYL_X < 2)
  object {
   lg_tech_knob_logo
   translate <-LG_BRICK_WIDTH/2, CYL_X*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_tech_knob_logo
   translate <LG_BRICK_WIDTH/2, CYL_X*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_tech_knob_logo
   rotate <0, 0, 180>
   rotate <0, 90, 0>
   translate <LG_BRICK_WIDTH, -CYL_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  object {
   lg_tech_knob_logo
   rotate <0, 0, 180>
   rotate <0, -90, 0>
   translate <-LG_BRICK_WIDTH, CYL_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  object {
   lg_tech_knob_logo
   rotate <0, 0, 180>
   rotate <0, 90, 0>
   translate <LG_BRICK_WIDTH, CYL_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2>
  }
  object {
   lg_tech_knob_logo
   rotate <0, 0, 180>
   rotate <0, -90, 0>
   translate <-LG_BRICK_WIDTH, CYL_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2>
  }
  #declare CYL_X = CYL_X + 1;
 #end
 #declare COL_X = -1;
 #while ( COL_X < 2 )
  difference {
   cylinder {
    <0, COL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <0, COL_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, COL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
    <0, COL_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
  }
  torus {
   LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
   LG_CYLINDER_WALL_WIDTH/2
   rotate <90, 0, 0>
   translate <0, COL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
  }
  box {
   <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, COL_X*LG_BRICK_WIDTH-0.04, -2*LG_BRICK_HEIGHT+0.225+COL_X*COL_X*0.64>,
   <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, COL_X*LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT+LG_E>
  }
  box {
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, COL_X*LG_BRICK_WIDTH-0.04, -2*LG_BRICK_HEIGHT+0.225+COL_X*COL_X*0.64>,
   <-LG_CYLINDER_RADIUS+LG_CORNER_SPACE, COL_X*LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT+LG_E>
  }
  #declare COL_X = COL_X + 1;
 #end
}

#declare lg_2434_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
   }
  }
  box {
   <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT-LG_E>
  }
 }
 #declare CYL_X = -1.5;
 #while (CYL_X < 2)
  object {
   lg_tech_knob_logo_clear
   translate <-LG_BRICK_WIDTH/2, CYL_X*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_tech_knob_logo_clear
   translate <LG_BRICK_WIDTH/2, CYL_X*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_tech_knob_logo_clear
   rotate <0, 0, 180>
   rotate <0, 90, 0>
   translate <LG_BRICK_WIDTH, -CYL_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  object {
   lg_tech_knob_logo_clear
   rotate <0, 0, 180>
   rotate <0, -90, 0>
   translate <-LG_BRICK_WIDTH, CYL_X*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
  }
  object {
   lg_tech_knob_logo_clear
   rotate <0, 0, 180>
   rotate <0, 90, 0>
   translate <LG_BRICK_WIDTH, CYL_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2>
  }
  object {
   lg_tech_knob_logo_clear
   rotate <0, 0, 180>
   rotate <0, -90, 0>
   translate <-LG_BRICK_WIDTH, CYL_X*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH/2>
  }
  #declare CYL_X = CYL_X + 1;
 #end
 #declare COL_X = -1;
 #while ( COL_X < 2 )
  difference {
   cylinder {
    <0, COL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
    <0, COL_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    LG_CYLINDER_RADIUS
   }
   cylinder {
    <0, COL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT>,
    <0, COL_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+2*LG_E>,
    LG_KNOB_RADIUS
   }
  }
  torus {
   LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2,
   LG_CYLINDER_WALL_WIDTH/2
   rotate <90, 0, 0>
   translate <0, COL_X*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
  }
  box {
   <LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, COL_X*LG_BRICK_WIDTH-0.04, -2*LG_BRICK_HEIGHT+0.225+COL_X*COL_X*0.64>,
   <LG_CYLINDER_RADIUS-LG_CORNER_SPACE, COL_X*LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT+LG_E>
  }
  box {
   <-LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, COL_X*LG_BRICK_WIDTH-0.04, -2*LG_BRICK_HEIGHT+0.225+COL_X*COL_X*0.64>,
   <-LG_CYLINDER_RADIUS+LG_CORNER_SPACE, COL_X*LG_BRICK_WIDTH+0.04, -LG_TOP_HEIGHT+LG_E>
  }
  #declare COL_X = COL_X + 1;
 #end
}

#end





