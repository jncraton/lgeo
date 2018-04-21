/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990119 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2877: Brick 1 x 2 with Grille                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2877)
#else
#declare lg_2877 =
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
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
    <(LG_BRICK_WIDTH/2-0.08), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08), -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_column
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 #declare RIM = 0;
 #while (RIM < 6)
  union {
   sphere {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   box {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_WIDTH, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   rotate <0, 45, 0>
   translate <LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE, 0, -0.08-0.16*RIM>
  }
  #declare RIM = RIM + 1;
 #end
 #declare RIM = 0;
 #while (RIM < 10)
  union {
   sphere {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   box {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE+LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_HEIGHT/2, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE-LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   rotate <0, 45, 0>
   rotate <90, 0, 0>
   rotate <0, 0, 180>
   translate <-LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE, 0.72-0.16*RIM, -LG_BRICK_HEIGHT/2>
  }
  #declare RIM = RIM + 1;
 #end
}

#declare lg_2877_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
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
    <(LG_BRICK_WIDTH/2-0.08), LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08), -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <(LG_BRICK_WIDTH/2-0.08)-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-(LG_BRICK_WIDTH/2-0.08)+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_knob_clear
  translate <0, LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_knob_clear
  translate <0, -LG_BRICK_WIDTH/2, 0>
 }
 object {
  lg_brick_column_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 #declare RIM = 0;
 #while (RIM < 6)
  merge {
   sphere {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   box {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_WIDTH, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   rotate <0, 45, 0>
   translate <LG_BRICK_WIDTH/2-2*LG_CORNER_SPACE, 0, -0.08-0.16*RIM>
  }
  #declare RIM = RIM + 1;
 #end
 #declare RIM = 0;
 #while (RIM < 10)
  merge {
   sphere {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   sphere {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, 0>,
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>,
    LG_CORNER_SPACE
   }
   box {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE+LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), -LG_BRICK_HEIGHT/2, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, LG_BRICK_HEIGHT/2-LG_CORNER_SPACE-LG_E, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <LG_CORNER_SPACE, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, 0>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   box {
    <0, -LG_BRICK_HEIGHT/2+LG_CORNER_SPACE, LG_CORNER_SPACE>,
    <-0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2), LG_BRICK_HEIGHT/2-LG_CORNER_SPACE, -0.08*sqrt(2)+LG_CORNER_SPACE*sqrt(2)>
   }
   rotate <0, 45, 0>
   rotate <90, 0, 0>
   rotate <0, 0, 180>
   translate <-LG_BRICK_WIDTH/2+2*LG_CORNER_SPACE, 0.72-0.16*RIM, -LG_BRICK_HEIGHT/2>
  }
  #declare RIM = RIM + 1;
 #end
}

#end
