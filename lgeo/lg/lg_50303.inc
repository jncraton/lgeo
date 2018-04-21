/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080208 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_50303: Boat Bow Plate 6 x 7 with stud notches                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_50303)
#else
#declare lg_angle1=atan2(LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH);
#declare lg_angle2=atan2(LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH);
#declare lg_50303 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    union {
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <0, 2.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS, 1.5*LG_KNOB_RADIUS, -LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
     }
    }
   }
   difference {
    union {
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <2*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     cylinder {
      <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
     }
     cylinder {
      <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_E
     }
    }
   }
   object {
    lg_plate_cylinder
    translate <-2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <-2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <-1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   difference {
    object {
     lg_plate_cylinder
     translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    box {
     <-LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, LG_E>,
     <2*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     rotate <0, 0, -lg_angle2*180/pi>
     translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
   }
   difference {
    object {
     lg_plate_cylinder
     translate <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    box {
     <-LG_WALL_WIDTH, 0, LG_E>,
     <3*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     rotate <0, 0, -lg_angle1*180/pi>
     translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-3*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <0, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <0, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-3.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <2.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder
  translate <-2.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 difference {
  box {
   <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <1*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <0, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <-3*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <3.5*LG_BRICK_WIDTH/cos(lg_angle1)+LG_E, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <3.5*LG_BRICK_WIDTH/cos(lg_angle1)+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
 }
}

#declare lg_50303_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   difference {
    merge {
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <3*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <3*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     cylinder {
      <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <0, 2.5*LG_BRICK_WIDTH, 0>
     }
     box {
      <LG_KNOB_RADIUS, 1.5*LG_KNOB_RADIUS, -LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle1*180/pi>
      translate <-LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
     }
    }
   }
   difference {
    merge {
     box {
      <0, 0, -LG_PLATE_HEIGHT>,
      <2*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <2*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
     }
     cylinder {
      <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
    }
    union {
     box {
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>,
      <-LG_KNOB_RADIUS, -LG_KNOB_RADIUS, -LG_PLATE_HEIGHT-LG_E>
      rotate <0, 0, -lg_angle2*180/pi>
      translate <2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
     }
     cylinder {
      <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>,
      <3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      LG_KNOB_RADIUS+LG_E
     }
    }
   }
   object {
    lg_plate_cylinder_clear
    translate <-2.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <-2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <-1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <-1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <-0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   difference {
    object {
     lg_plate_cylinder_clear
     translate <2.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    box {
     <-LG_WALL_WIDTH, -LG_WALL_WIDTH+LG_CORNER_SPACE+LG_E, LG_E>,
     <2*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     rotate <0, 0, -lg_angle2*180/pi>
     translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
   }
   difference {
    object {
     lg_plate_cylinder_clear
     translate <0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
    }
    box {
     <-LG_WALL_WIDTH, 0, LG_E>,
     <3*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>
     rotate <0, 0, -lg_angle1*180/pi>
     translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
    }
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-3*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <0, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <0, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-3.5*LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <2.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-0.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 object {
  lg_plate_cylinder_clear
  translate <-2.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
 } 
 difference {
  box {
   <3.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-3.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <1*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <0, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-2*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <-3*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <3.5*LG_BRICK_WIDTH/cos(lg_angle1)+LG_E, LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <3.5*LG_BRICK_WIDTH/cos(lg_angle1)+LG_E, -LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <2*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, -2*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
  }
 }
}

#end
