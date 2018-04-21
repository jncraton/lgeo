/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990615 Lutz Uhlmann                                                       */
/* 20071021 Lutz Uhlmann fixed missing torus on flag tip                       */
/* 20071021 Lutz Uhlmann moved from lg_0105 to 30322                           */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30322: Antenna Whip with Flag                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30322)
#else
#declare lg_angle=atan2(15,52);
#declare lg_30322 =
union {
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_KNOB_RADIUS+LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, LG_PLATE_HEIGHT-LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  (LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cone {
  <0, 0, 4*LG_PLATE_HEIGHT+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(45*pi/180)
  <0, 0, 4*LG_PLATE_HEIGHT+0.06+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, 0.1
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, LG_BRICK_HEIGHT/24*188-LG_KNOB_INNER_RADIUS>,
  0.1
 }
 sphere {
  <0, 0, LG_BRICK_HEIGHT/24*188-LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 union {
  cylinder {
   <0, 0.08, 0>,
   <0, -0.08, 0>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.08-LG_CORNER_SPACE, 0>,
   <0, -0.08+LG_CORNER_SPACE, 0>,
   0.08
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, 0.08-LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -0.08+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0.08-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, lg_angle*180/pi, 0>
  }
  cylinder {
   <0, -0.08+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), -0.08+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, lg_angle*180/pi, 0>
  }
  cylinder {
   <0, 0.08-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, -lg_angle*180/pi, 0>
  }
  cylinder {
   <0, -0.08+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), -0.08+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, -lg_angle*180/pi, 0>
  }
  box {
   <0, -0.08+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE+LG_E>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, -0.08>
   rotate <0, -lg_angle*180/pi, 0>
  }
  box {
   <0, -0.08+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE-LG_E>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, 0.08>
   rotate <0, lg_angle*180/pi, 0>
  }
  difference {
   box {
    <0, 0.08, 0.64>,
    <-2.3*LG_BRICK_WIDTH, -0.08, -0.64>
   }
   union {
    box {
     <0, -0.08-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
     <-2.6*LG_BRICK_WIDTH/cos(lg_angle), 0.08+LG_CORNER_SPACE, -1>
     rotate <0, -lg_angle*180/pi, 0>
    }
    box {
     <0, -0.08-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
     <-2.6*LG_BRICK_WIDTH/cos(lg_angle), 0.08+LG_CORNER_SPACE, 1>
     rotate <0, lg_angle*180/pi, 0>
    }
   }
  }
  translate <2.4*LG_BRICK_WIDTH-0.08, 0, 168*LG_BRICK_HEIGHT/24>
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#declare lg_30322_clear =
merge {
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_HEIGHT>,
   LG_CYLINDER_RADIUS
  }
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, LG_PLATE_INNER_HEIGHT>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_KNOB_RADIUS+LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_CORNER_SPACE>
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <0, 0, LG_PLATE_HEIGHT-LG_E>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE
 }
 torus {
  (LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, 4*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 cone {
  <0, 0, 4*LG_PLATE_HEIGHT+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, LG_KNOB_INNER_RADIUS-LG_CORNER_SPACE+LG_CORNER_SPACE*sin(45*pi/180)
  <0, 0, 4*LG_PLATE_HEIGHT+0.06+LG_CORNER_SPACE*sin(45*pi/180)-LG_CORNER_SPACE>, 0.1
 }
 cylinder {
  <0, 0, 4*LG_PLATE_HEIGHT>,
  <0, 0, 8*LG_BRICK_HEIGHT-LG_KNOB_INNER_RADIUS>,
  0.1
 }
 sphere {
  <0, 0, 8*LG_BRICK_HEIGHT-LG_KNOB_INNER_RADIUS>,
  LG_KNOB_INNER_RADIUS
 }
 merge {
  cylinder {
   <0, 0.08, 0>,
   <0, -0.08, 0>,
   0.08-LG_CORNER_SPACE
  }
  cylinder {
   <0, 0.08-LG_CORNER_SPACE, 0>,
   <0, -0.08+LG_CORNER_SPACE, 0>,
   0.08
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, 0.08-LG_CORNER_SPACE>
  }
  torus {
   0.08-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   translate <0, -0.08+LG_CORNER_SPACE>
  }
  cylinder {
   <0, 0.08-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, lg_angle*180/pi, 0>
  }
  cylinder {
   <0, -0.08+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), -0.08+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, lg_angle*180/pi, 0>
  }
  cylinder {
   <0, 0.08-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, -lg_angle*180/pi, 0>
  }
  cylinder {
   <0, -0.08+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), -0.08+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
   rotate <0, -lg_angle*180/pi, 0>
  }
  box {
   <0, -0.08+LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE+LG_E>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, -0.08>
   rotate <0, -lg_angle*180/pi, 0>
  }
  box {
   <0, -0.08+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE-LG_E>,
   <-2.4*LG_BRICK_WIDTH/cos(lg_angle), 0.08-LG_CORNER_SPACE, 0.08>
   rotate <0, lg_angle*180/pi, 0>
  }
  difference {
   box {
    <0, 0.08, 0.64>,
    <-2.3*LG_BRICK_WIDTH, -0.08, -0.64>
   }
   union {
    box {
     <0, -0.08-LG_CORNER_SPACE, -0.08+LG_CORNER_SPACE>,
     <-2.6*LG_BRICK_WIDTH/cos(lg_angle), 0.08+LG_CORNER_SPACE, -1>
     rotate <0, -lg_angle*180/pi, 0>
    }
    box {
     <0, -0.08-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
     <-2.6*LG_BRICK_WIDTH/cos(lg_angle), 0.08+LG_CORNER_SPACE, 1>
     rotate <0, lg_angle*180/pi, 0>
    }
   }
  }
  translate <2.4*LG_BRICK_WIDTH-0.08, 0, 168*LG_BRICK_HEIGHT/24>
 }
 translate <0, 0, -LG_PLATE_HEIGHT>
}

#end
