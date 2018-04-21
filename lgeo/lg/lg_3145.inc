/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980429 Lutz Uhlmann                                                       */
/* 20071014 Lutz Uhlmann fixed stud orientation                                */
/* 20071202 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3145: Tipper End Old                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3145)
#else
#declare lg_angle=pi/6;
#declare lg_height=4*LG_BRICK_WIDTH*cos(lg_angle);
#declare lg_3145 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+2*LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, 0>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height>
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -lg_height+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_E, 4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE-0.04/sin(lg_angle)>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE-0.04/sin(lg_angle)>
     rotate <-lg_angle*180/pi, 0, 0>
     translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2-LG_E, -LG_WALL_WIDTH, -4.5*LG_BRICK_WIDTH/sin(lg_angle)>
     rotate <-lg_angle*180/pi, 0, 0>
     translate <0, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_E, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE, -3.8*LG_BRICK_WIDTH>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder
    rotate <0, 90, 0>
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
   }
   object {
    lg_plate_cylinder
    rotate <0, 90, 0>
    translate <0, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>
   }
   cylinder {
    <1.04, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    <1.04-LG_CORNER_SPACE-LG_E, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0.39, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    <1.04-LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.04-LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>
   }
   union {
    object {
     lg_tech_knob_logo
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    object {
     lg_tech_knob_logo
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    object {
     lg_tech_knob_logo
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    object {
     lg_tech_knob_logo
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    rotate <-90-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, 0, -lg_height>,
  <0, 0, -lg_height+LG_PLATE_INNER_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.15*LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.15*LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_WALL_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_WALL_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.16-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.04+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.16-LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <LG_WALL_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.04+2*LG_CORNER_SPACE, 0>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE+LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  union {
   box {
    <0.5, 0, 0.5>,
    <-0.5, 0.5, 0>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   box {
    <0.5, 0, 0.5>,
    <-0.5, -0.5, 0>
    rotate <lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -lg_height>
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -lg_height+LG_PLATE_HEIGHT>
   }
  }
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.1*LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.1*LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 object {
  lg_plate_cylinder
  rotate <0, 90, 0>
  translate <0, 0, -LG_BRICK_WIDTH>
 }
 object {
  lg_plate_cylinder
  rotate <0, 90, 0>
  translate <0, 0, -2*LG_BRICK_WIDTH>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, -3*LG_BRICK_WIDTH+0.04+2*LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
  }
  union {
   box {
    <0.5, 0, 3.5>,
    <0, 2, 0>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   box {
    <0.5, 0, 5.5>,
    <0, -2, 0>
    rotate <lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   object {
    lg_knob_inner_space
    rotate <0, 90, 0>
    translate <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
   }
   object {
    lg_knob_inner_space
    rotate <0, 90, 0>
    translate <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, -lg_height+3*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -lg_height+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, -lg_height+3*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH/4, 0, -lg_height+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_WALL_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -lg_height+3*LG_WALL_WIDTH>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob
  rotate <0, 0, 90>
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
}

#declare lg_3145_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_WALL_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH+2*LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE-LG_E, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-LG_CORNER_SPACE, -0.04/sin(lg_angle)-0.5*LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, 0>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height>
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -lg_height+LG_CORNER_SPACE+LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_E, 4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE-0.04/sin(lg_angle)>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2, -LG_WALL_WIDTH, 4*LG_BRICK_WIDTH-2*LG_CORNER_SPACE-0.04/sin(lg_angle)>
     rotate <-lg_angle*180/pi, 0, 0>
     translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
    }
    box {
     <LG_BRICK_WIDTH/2, 0, 0>,
     <-LG_BRICK_WIDTH/2-LG_E, -LG_WALL_WIDTH, -4.5*LG_BRICK_WIDTH/sin(lg_angle)>
     rotate <-lg_angle*180/pi, 0, 0>
     translate <0, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>
    }
   }
   box {
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_E, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE, -3.8*LG_BRICK_WIDTH>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder_clear
    rotate <0, 90, 0>
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_WIDTH>
   }
   object {
    lg_plate_cylinder_clear
    rotate <0, 90, 0>
    translate <0, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>
   }
   cylinder {
    <1.04, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    <1.04-LG_CORNER_SPACE-LG_E, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0.39, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    <1.04-LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>,
    LG_WALL_WIDTH
   }
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <1.04-LG_CORNER_SPACE, LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH>
   }
   merge {
    object {
     lg_tech_knob_logo_clear
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    object {
     lg_tech_knob_logo_clear
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    object {
     lg_tech_knob_logo_clear
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -2.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    object {
     lg_tech_knob_logo_clear
     rotate <0, 0, 180-180*MIR>
     scale <1, 1-2*MIR, 1>
     translate <0, -3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_CORNER_SPACE>
    }
    rotate <-90-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, 0, -lg_height>,
  <0, 0, -lg_height+LG_PLATE_INNER_HEIGHT+LG_E>,
  LG_WALL_WIDTH
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.15*LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.15*LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_WALL_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_WALL_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.16-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.04+2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <LG_WALL_WIDTH/2, 3*LG_BRICK_WIDTH-0.16+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.16-LG_CORNER_SPACE, -LG_WALL_WIDTH>
 }
 box {
  <LG_WALL_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+0.04+2*LG_CORNER_SPACE, 0>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE+LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_CORNER_SPACE>
  }
  union {
   box {
    <0.5, 0, 0.5>,
    <-0.5, 0.5, 0>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   box {
    <0.5, 0, 0.5>,
    <-0.5, -0.5, 0>
    rotate <lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -lg_height>
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_WALL_WIDTH, -lg_height+LG_PLATE_HEIGHT>
   }
  }
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 1.1*LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -1.1*LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  rotate <0, 90, 0>
  translate <0, 0, -LG_BRICK_WIDTH>
 }
 object {
  lg_plate_cylinder_clear
  rotate <0, 90, 0>
  translate <0, 0, -2*LG_BRICK_WIDTH>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-0.04-2*LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, -3*LG_BRICK_WIDTH+0.04+2*LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
  }
  union {
   box {
    <0.5, 0, 3.5>,
    <0, 2, 0>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   box {
    <0.5, 0, 5.5>,
    <0, -2, 0>
    rotate <lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -lg_height+LG_CORNER_SPACE>
   }
   object {
    lg_knob_inner_space_clear
    rotate <0, 90, 0>
    translate <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
   }
   object {
    lg_knob_inner_space_clear
    rotate <0, 90, 0>
    translate <LG_BRICK_WIDTH/2-LG_TOP_HEIGHT, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
   }
   cylinder {
    <LG_BRICK_WIDTH/2+LG_E, 0, -lg_height+3*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -lg_height+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH/2, 0, -lg_height+3*LG_WALL_WIDTH>,
    <LG_BRICK_WIDTH/4, 0, -lg_height+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 torus {
  LG_WALL_WIDTH+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -lg_height+3*LG_WALL_WIDTH>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
 object {
  lg_knob_clear
  rotate <0, 0, 90>
  rotate <0, 90, 0>
  translate <LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>
 }
}

#end
