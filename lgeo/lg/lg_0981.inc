/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970713 Lutz Uhlmann                                                       */
/* 20081025 Lutz Uhlmann fixed orientation (reported by John Winning)          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0981: Minifig Arm Right                                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0981)
#else
#declare lg_angle1=atan2(0.3*LG_BRICK_WIDTH, 3.625*LG_PLATE_HEIGHT);
#declare lg_angle2=atan2(0.05,0.44);
#declare lg_angle3=atan2(0.15,0.44);
#declare lg_0981 =
union {
 difference {
  union {
   cylinder { 
    <0, 0.125, 0>,
    <0, -0.1, 0>,
    0.2
   }
   sphere {
    <0, 0.125, 0>,
    0.21
   }
  }
  cylinder {
   <0, 0.4, 0>,
   <0, -0.3, 0>,
   0.1
  }
 }
 difference {
  union {
   sphere { 
    <0, 0, 0>,
    0.25
   }
   cone {
    <0, 0, -0.25*sin(lg_angle2)>, 0.25*cos(lg_angle2)
    <0, 0, -0.44/cos(lg_angle3)-0.2*sin(lg_angle2)>, 0.2*cos(lg_angle2)
   }
   rotate <-lg_angle3*180/pi, 0, 0>
  }
  box {
   <0.5, 0.5, -0.5>,
   <-0.5, 0, -1>
  }
 }
 difference {
  sphere {
   <0, 0, -0.44/cos(lg_angle3)>,
   0.2
  }
  box {
   <0.3, 0.3, 0>,
   <-0.3, -0.3, -0.44-0.15*sin(lg_angle2)>
  }
  rotate <-lg_angle3*180/pi, 0, 0>
 }
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0.53-LG_CORNER_SPACE, 0, 0>,
    0.2
   }
   cylinder {
    <0.53, 0, 0>,
    <0.5, 0, 0>,
    0.2-LG_CORNER_SPACE
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.53-LG_CORNER_SPACE, 0, 0>
   }
  }
  cylinder {
   <0.1, 0, 0>,
   <0.531, 0, 0>,
   0.1
  }
  rotate <0, 45, 0>
  rotate <0, 0, 6>
  rotate <lg_angle1*180/pi, 0, 0>
  translate <0, -0.15, -0.44>
 }
 rotate <-lg_angle1*180/pi, 0, 0>
}

#declare lg_0981_clear =
merge {
 difference {
  merge {
   cylinder { 
    <0, 0.125, 0>,
    <0, -0.1, 0>,
    0.2
   }
   sphere {
    <0, 0.125, 0>,
    0.21
   }
  }
  cylinder {
   <0, 0.4, 0>,
   <0, -0.3, 0>,
   0.1
  }
 }
 difference {
  merge {
   sphere { 
    <0, 0, 0>,
    0.25
   }
   cone {
    <0, 0, -0.25*sin(lg_angle2)>, 0.25*cos(lg_angle2)
    <0, 0, -0.44/cos(lg_angle3)-0.2*sin(lg_angle2)>, 0.2*cos(lg_angle2)
   }
   rotate <-lg_angle3*180/pi, 0, 0>
  }
  box {
   <0.5, 0.5, -0.5>,
   <-0.5, 0, -1>
  }
 }
 difference {
  sphere {
   <0, 0, -0.44/cos(lg_angle3)>,
   0.2
  }
  box {
   <0.3, 0.3, 0>,
   <-0.3, -0.3, -0.44-0.2*sin(lg_angle2)>
  }
  rotate <-lg_angle3*180/pi, 0, 0>
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0.53-LG_CORNER_SPACE, 0, 0>,
    0.2
   }
   cylinder {
    <0.53, 0, 0>,
    <0.5, 0, 0>,
    0.2-LG_CORNER_SPACE
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <0, 0, 90>
    translate <0.53-LG_CORNER_SPACE, 0, 0>
   }
  }
  cylinder {
   <0.1, 0, 0>,
   <0.531, 0, 0>,
   0.1
  }
  rotate <0, 45, 0>
  rotate <0, 0, 6>
  rotate <lg_angle1*180/pi, 0, 0>
  translate <0, -0.2, -0.44>
 }
 rotate <-lg_angle1*180/pi, 0, 0>
}

#end