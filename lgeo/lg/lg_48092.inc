/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20080203 Lutz Uhlmann                                                       */
/* 20080606 Lutz Uhlmann fixed name in header                                  */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_48092: Brick 4 x 4 Corner Round                                          */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_48092)
#else
#declare lg_angle1=asin(LG_CORNER_SPACE/(4*LG_BRICK_WIDTH-LG_CORNER_SPACE));
#declare lg_angle2=asin(LG_CORNER_SPACE/(3*LG_BRICK_WIDTH+LG_CORNER_SPACE));
#declare lg_48092 =
union {
 union {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle1*180/pi>
 }
 union {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle2*180/pi>
 }
 union {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0,- 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle1*180/pi>
 }
 union {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle2*180/pi>
 }
 difference {
  union {
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_BRICK_HEIGHT>,
     <0, 0, -LG_CORNER_SPACE>,
     3*LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    union {
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT>,
      <0, 0, 0>,
      3*LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT-LG_E>,
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      3*LG_BRICK_WIDTH+LG_CORNER_SPACE
     }
    }
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, 0>
    rotate <0, 0, lg_angle2*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, 0>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(2,1)*180/pi>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, -atan2(2,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
   }
  }
 }
 difference {
  union {
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
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, 0>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_TOP_HEIGHT>,
    4*LG_BRICK_WIDTH-0.12
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, LG_E>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   box {
    <4*LG_BRICK_WIDTH, 0, -LG_E>,
    <3*LG_BRICK_WIDTH, LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH, -LG_E>,
    <-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1))+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2))-LG_E, -LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1))-LG_E, 0, -LG_BRICK_HEIGHT-LG_E>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2))+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(3,1)*180/pi>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, -atan2(3,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE>
 }
 intersection {
  union {
   #declare MIR = 0;
   #while (MIR < 2)
    union {
     box {
      <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
      <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+0.04, -LG_BRICK_HEIGHT>
     }
     box {
      <3*LG_BRICK_WIDTH-0.04, -2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
      <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT>
     }
     box {
      <3*LG_BRICK_WIDTH-0.04, -3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
      <2*LG_BRICK_WIDTH+0.04, -3*LG_BRICK_WIDTH+0.04, -LG_BRICK_HEIGHT>
     }
     #if (MIR = 1)
      rotate <0, 0, -90>
      scale <-1, 1, 1>
     #end
    }
    #declare MIR = MIR + 1;
   #end
  }
  difference {
   cylinder {
    <0, 0, 0>,
    <0, 0, -1>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -1>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 object {
  lg_knob
  translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob
  translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
}

#declare lg_48092_clear =
merge {
 merge {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle1*180/pi>
 }
 merge {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <3*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0, 0>
  rotate <0, 0, -lg_angle2*180/pi>
 }
 merge {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0,- 4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle1*180/pi>
 }
 merge {
  sphere {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  sphere {
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, -LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  translate <0, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
  rotate <0, 0, lg_angle2*180/pi>
 }
 difference {
  merge {
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   torus {
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   difference {
    cylinder {
     <0, 0, -LG_BRICK_HEIGHT>,
     <0, 0, -LG_CORNER_SPACE>,
     3*LG_BRICK_WIDTH+LG_WALL_WIDTH
    }
    union {
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT>,
      <0, 0, 0>,
      3*LG_BRICK_WIDTH
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT-LG_E>,
      <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      3*LG_BRICK_WIDTH+LG_CORNER_SPACE
     }
    }
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, 0>
    rotate <0, 0, lg_angle2*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, 0>
    rotate <0, 0, -lg_angle2*180/pi>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(2,1)*180/pi>
    translate <2.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, -atan2(2,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
   }
  }
 }
 difference {
  merge {
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
    translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, 0>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    4*LG_BRICK_WIDTH
   }
  }
  union {
   box {
    <0, 4, -1>,
    <-4, -4, LG_E>
    rotate <0, 0, lg_angle1*180/pi>
   }
   box {
    <4, 4, -1>,
    <-4, 0, LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -LG_TOP_HEIGHT>,
    4*LG_BRICK_WIDTH-0.12
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT-LG_E>,
    <0, 0, LG_E>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
   box {
    <4*LG_BRICK_WIDTH, 0, -LG_E>,
    <3*LG_BRICK_WIDTH, LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH, -LG_E>,
    <-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1))+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2))-LG_E, -LG_E>
   }
   box {
    <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1))-LG_E, 0, -LG_BRICK_HEIGHT-LG_E>,
    <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2))+LG_E, -LG_CORNER_SPACE, -LG_E>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, atan2(3,1)*180/pi>
    translate <3.5*LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS+LG_E, LG_KNOB_RADIUS+LG_E, -LG_BRICK_HEIGHT-LG_E>,
    <-LG_KNOB_RADIUS-LG_E, -LG_KNOB_RADIUS-LG_E, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT-LG_E>
    rotate <0, 0, -atan2(3,1)*180/pi>
    translate <1.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_inner_space
    translate <3.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH/2, -3.5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
   }
  }
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_CORNER_SPACE, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 box {
  <LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1+sin(lg_angle1)), 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <3*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <0, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE*(1+sin(lg_angle1)), -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_WALL_WIDTH, -3*LG_BRICK_WIDTH-LG_CORNER_SPACE*(1-sin(lg_angle2)), -LG_CORNER_SPACE>
 }
 intersection {
  merge {
   #declare MIR = 0;
   #while (MIR < 2)
    merge {
     box {
      <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
      <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+0.04, -LG_BRICK_HEIGHT>
     }
     box {
      <3*LG_BRICK_WIDTH-0.04, -2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
      <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT>
     }
     box {
      <3*LG_BRICK_WIDTH-0.04, -3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
      <2*LG_BRICK_WIDTH+0.04, -3*LG_BRICK_WIDTH+0.04, -LG_BRICK_HEIGHT>
     }
     #if (MIR = 1)
      rotate <0, 0, -90>
      scale <-1, 1, 1>
     #end
    }
    #declare MIR = MIR + 1;
   #end
  }
  difference {
   cylinder {
    <0, 0, 0>,
    <0, 0, -1>,
    4*LG_BRICK_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, 0>,
    <0, 0, -1>,
    3*LG_BRICK_WIDTH+LG_CORNER_SPACE
   }
  }
 }
 object {
  lg_knob_clear
  translate <3.5*LG_BRICK_WIDTH, -0.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <2.5*LG_BRICK_WIDTH, -2.5*LG_BRICK_WIDTH, 0>
 }
 object {
  lg_knob_clear
  translate <0.5*LG_BRICK_WIDTH, -3.5*LG_BRICK_WIDTH, 0>
 }
}

#end
