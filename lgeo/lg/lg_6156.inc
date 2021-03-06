/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990114 Lutz Uhlmann                                                       */
/* 20080120 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6156: Panel 1 x 4 x 3 Window                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6156)
#else
#declare lg_6156 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 difference {
  union {
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0.5*LG_BRICK_WIDTH-0.16, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    <-0.5*LG_BRICK_WIDTH+0.16, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>
   }
  }
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_E, 1, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <-1.5*LG_WALL_WIDTH, -1, -8.5*LG_PLATE_HEIGHT>
 }
 difference {
  union {
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, -0.04>,
    <0, LG_BRICK_WIDTH, -0.26>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, -0.04>,
    <0, 0, -0.26>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -0.04>,
    <0, -LG_BRICK_WIDTH, -0.26>,
    LG_WALL_WIDTH
   }
   box {
    <LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>,
    <-2*LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.08>
   }
  }
 }
 difference {
  union {
   box {
    <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-0.5, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <0, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-0.5, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-0.5, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-0.5, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-0.5, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-0.5, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   box {
    <0, 2*LG_BRICK_WIDTH-1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT+0.04>,
    <-0.32, -2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>
   }
   box {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT+LG_E>
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 object {
  lg_plate_column
  translate <0, -LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, 0, -3*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_column
  translate <0, LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT>
 }
 object {
  lg_knob
  translate <0, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <0, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <0, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <0, 1.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  merge {
   cylinder {
    <0, LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>,
    <0, LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <0, 0, -9*LG_PLATE_HEIGHT>,
    <0, 0, -8*LG_PLATE_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>,
    <0, -LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>,
    0.06
   }
   box {
    <LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   box {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   box {
    <-1.5*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT+0.04>,
    <-0.32, -2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>
   }
   box {
    <-1.5*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH, -0.04>,
    <0, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, -0.04>,
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -0.04>,
    <0, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    LG_WALL_WIDTH
   }
   box {
    <LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.08>
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.5, LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    0.08
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.5, -LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    0.08
   }
   box {
    <-0.5, 2*LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT-LG_E>
   }
  }
  material { texture { lg_clear_cyan } interior { lg_ior } }
 }
} 

#declare lg_6156_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <-0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 sphere {
  <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -(3*3-1)*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,LG_CORNER_SPACE
 }
 difference {
  merge {
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <0.5*LG_BRICK_WIDTH-0.16, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
    <-0.5*LG_BRICK_WIDTH+0.16, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT-LG_E>
   }
  }
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_E, 1, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
  <-1.5*LG_WALL_WIDTH, -1, -8.5*LG_PLATE_HEIGHT>
 }
 difference {
  merge {
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, -0.04>,
    <0, LG_BRICK_WIDTH, -0.26>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, -0.04>,
    <0, 0, -0.26>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -0.04>,
    <0, -LG_BRICK_WIDTH, -0.26>,
    LG_WALL_WIDTH
   }
   box {
    <LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>,
    <-2*LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.08>
   }
  }
 }
 difference {
  merge {
   box {
    <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
    <-0.5*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>
   }
  }
  union {
   box {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-0.5, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <0, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-0.5, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-0.5, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-0.5, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-0.5, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-0.5, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   box {
    <0, 2*LG_BRICK_WIDTH-1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT+0.04>,
    <-0.32, -2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>
   }
   box {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT+LG_E>
   }
   cylinder {
    <0, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 object {
  lg_plate_column_clear
  translate <0, -LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_column_clear
  translate <0, 0, -3*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_column_clear
  translate <0, LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT>
 }
 object {
  lg_knob_clear
  translate <0, -1.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, 0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0, 1.5*LG_BRICK_WIDTH, 0>
 }
 difference {
  merge {
   cylinder {
    <0, LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>,
    <0, LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <0, 0, -9*LG_PLATE_HEIGHT>,
    <0, 0, -8*LG_PLATE_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>,
    <0, -LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT-LG_E>,
    0.06
   }
   box {
    <LG_WALL_WIDTH/2, LG_BRICK_WIDTH+LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, -LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   box {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+2*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_E, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   box {
    <-1.5*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-1.5*LG_WALL_WIDTH, -LG_TOP_HEIGHT+0.04>,
    <-0.32, -2*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>
   }
   box {
    <-1.5*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, -2*LG_BRICK_WIDTH+3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <-1.5*LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.32, 2*LG_BRICK_WIDTH-3*LG_WALL_WIDTH, -7*LG_PLATE_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, LG_BRICK_WIDTH, -0.04>,
    <0, LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, 0, -0.04>,
    <0, 0, -LG_TOP_HEIGHT+LG_E>,
    LG_WALL_WIDTH
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -0.04>,
    <0, -LG_BRICK_WIDTH, -LG_TOP_HEIGHT+LG_E>,
    LG_WALL_WIDTH
   }
   box {
    <LG_WALL_WIDTH, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-2*LG_WALL_WIDTH, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.08>
   }
  }
  union {
   cylinder {
    <0, LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.5, LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    0.08
   }
   cylinder {
    <0, -LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    <-0.5, -LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT>,
    0.08
   }
   box {
    <-0.5, 2*LG_BRICK_WIDTH, 0>,
    <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT-LG_E>
   }
  }
  material { texture { lg_clear_cyan } interior { lg_ior } }
 }
} 

#end
