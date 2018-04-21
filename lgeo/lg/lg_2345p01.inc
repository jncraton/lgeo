/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071118 Lutz Uhlmann                                                       */
/* 20071123 Lutz Uhlmann fixed stud notches height to fit studs with logo      */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2345p01: Castle Wall Corner 3 x 3 x 6 with black stripes pattern         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2345p01)
#else
#include "lg_2345.inc"
#declare lg_2345p01_decals = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   box {
    <1.5*LG_BRICK_WIDTH+0.0001, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-0.0001, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_PLATE_HEIGHT>
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH+0.0001-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+0.0001-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH+0.0001, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT>,
    <1.5*LG_BRICK_WIDTH-0.0001, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH+0.0001-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT>,
    <1.5*LG_BRICK_WIDTH+0.0001-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   box {
    <1.5*LG_BRICK_WIDTH+0.0001, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-0.0001, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH+0.0001-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH+0.0001-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   #if (MIR = 1)
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 difference {
  union {
   box {
    <LG_CORNER_SPACE-0.0001, 0, -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE+0.0001, -(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4), -LG_PLATE_HEIGHT>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0, 0>,
    <LG_CORNER_SPACE+0.0001, -(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4), -LG_PLATE_HEIGHT>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0, 0>,
    <LG_CORNER_SPACE+0.0001, -(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4), LG_PLATE_HEIGHT>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_HEIGHT>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0, 0>,
    <LG_CORNER_SPACE+0.0001, -(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4), LG_PLATE_HEIGHT>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0, LG_CORNER_SPACE>,
    <LG_CORNER_SPACE+0.0001, -(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4), LG_PLATE_HEIGHT>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0.32-(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4), -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE+0.0001, -(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4), -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0.16-(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4)/2, -4*LG_BRICK_HEIGHT>,
    <LG_CORNER_SPACE+0.0001, -0.16-(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4)/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0, -LG_CORNER_SPACE>,
    <LG_CORNER_SPACE+0.0001, -0.32, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <LG_CORNER_SPACE-0.0001, -0.1, -0.2>,
    <LG_CORNER_SPACE+0.0001, -0.36, -3>
    rotate <-18.9, 0, 0>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
   box {
    <LG_CORNER_SPACE-0.0001, 0.1, -0.2>,
    <LG_CORNER_SPACE+0.0001, 0.36, -3>
    rotate <18.9, 0, 0>
    translate <0, -(2*LG_BRICK_WIDTH+0.0001)/sin(pi/4),0>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
   }
  }
  union {
   box {
    <0.1, 3*LG_CORNER_SPACE/sin(pi/4), LG_E>
    <-0.1, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-3*LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0.1, 3*LG_CORNER_SPACE/sin(pi/4), -LG_E>
    <-0.1, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-3*LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT>
   }
   box {
    <0.1, 3*LG_CORNER_SPACE/sin(pi/4), LG_E>
    <-0.1, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-3*LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   }
   box {
    <0.1, 3*LG_CORNER_SPACE/sin(pi/4), -LG_E>
    <-0.1, 0, LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <1.5*LG_BRICK_WIDTH-3*LG_CORNER_SPACE, 0.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT>
    matrix <0, -1, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, LG_KNOB_HEIGHT+2*LG_E>
    rotate <0, 0, 45>
    translate <LG_BRICK_WIDTH, 0, -6*LG_BRICK_HEIGHT>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, LG_KNOB_HEIGHT+2*LG_E>
    rotate <0, 0, 45>
    translate <0, -LG_BRICK_WIDTH, -6*LG_BRICK_HEIGHT>
   }
  }
 }  
}

#declare lg_2345p01 =
union {
 object { lg_2345 }
 object {
  lg_2345p01_decals
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_2345p01_clear =
union {
 object { lg_2345_clear }
 object {
  lg_2345p01_decals
  material { texture { lg_black  normal { bumps 0.1 scale 2 } } }
 }
}

#end
