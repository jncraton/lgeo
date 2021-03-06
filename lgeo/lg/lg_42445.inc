/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080803 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_42445: Bar 12L with Plate 1 x 2 and Hollow Stud                          */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_42445)
#else
#declare lg_42445 = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   scale <1, 1-2*MIR, 1>
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-4.5*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  union {
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, 0>,
    <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
    <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    <-4.5*LG_BRICK_WIDTH, 0, LG_E>,
    LG_WALL_WIDTH
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0, -LG_WALL_WIDTH>,
  <-4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>,
  <-5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0, -LG_WALL_WIDTH>,
  <-6*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>
 }
 difference {
  box {
   <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <5.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_column
  translate <5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <5.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob
  rotate <0, 0, -90>
  translate <4.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_tech_knob
  rotate <0, 0, -90>
  translate <-4.5*LG_BRICK_WIDTH, 0, 0>
 }
}

#declare lg_42445_clear = 
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_CORNER_SPACE>,
    <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   scale <1, 1-2*MIR, 1>
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <6*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-4.5*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 difference {
  merge {
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, 0>,
    <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
    <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>,
    <-4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT-LG_E>,
    LG_BRICK_WIDTH/2-LG_WALL_WIDTH
   }
   cylinder {
    <-4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT-LG_E>,
    <-4.5*LG_BRICK_WIDTH, 0, LG_E>,
    LG_WALL_WIDTH
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0, -LG_WALL_WIDTH>,
  <-4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 0, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>,
  <-5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 0, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 0, -LG_WALL_WIDTH>,
  <-6*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>,
  LG_WALL_WIDTH-LG_CORNER_SPACE
 }
 torus {
  LG_WALL_WIDTH-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, -LG_WALL_WIDTH>
 }
 difference {
  box {
   <6*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <5.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4.5*LG_BRICK_WIDTH, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 object {
  lg_plate_column_clear
  translate <5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <5.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_knob_clear
  rotate <0, 0, -90>
  translate <4.5*LG_BRICK_WIDTH, 0, 0>
 }
 object {
  lg_tech_knob_clear
  rotate <0, 0, -90>
  translate <-4.5*LG_BRICK_WIDTH, 0, 0>
 }
}

#end
