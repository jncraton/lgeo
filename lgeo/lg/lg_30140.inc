/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20001119 Lutz Uhlmann                                                       */
/* 20080128 Lutz Uhlmann fixed hollow stud logo and orientation                */
/* 20081102 Lutz Uhlmann fixed orientation                                     */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30140: Log Wall 2 x 6 x 6                                                */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_30140)
#else
#declare lg_radius=sin(atan2(0.12,0.4))/0.4;
#declare lg_angle1=acos((LG_BRICK_WIDTH/2-LG_CORNER_SPACE)/(lg_radius-LG_CORNER_SPACE));
#declare lg_angle2=acos((LG_BRICK_WIDTH/2+2*LG_E)/lg_radius);
#declare lg_30140 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, 5*LG_BRICK_WIDTH/2, 0>
   }
   difference {
    union {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -6*LG_BRICK_HEIGHT>,
      lg_radius-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
    }
    union {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      lg_radius-LG_WALL_WIDTH/2
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      rotate <0, 0, 90-lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, -6*LG_BRICK_HEIGHT-LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -5*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      rotate <0, 0, 90-lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 90-lg_angle2*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH/2, 0>
   }
   difference {
    union {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -6*LG_BRICK_HEIGHT>,
      lg_radius-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
    }
    union {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      lg_radius-LG_WALL_WIDTH/2
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 90-lg_angle2*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   difference {
    union {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT>,
      <0, 0, -5*LG_BRICK_HEIGHT>,
      lg_radius-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
    }
    union {
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 90-lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, 5*LG_BRICK_WIDTH/2, 0>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -14*LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -14*LG_PLATE_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -14*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -14*LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_WALL_WIDTH>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <0.06, 2*LG_BRICK_WIDTH-LG_E, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_tech_knob_logo
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <0, 2.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   difference {
    union {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-2*LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    union {
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-2*LG_E>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     rotate <0, 0, 45>
     translate <LG_KNOB_RADIUS, 0, 0>
    }
    box {
     <LG_KNOB_RADIUS+LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
    }
    translate <0, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     rotate <0, 0, 45>
     translate <-LG_KNOB_RADIUS, 0, 0>
    }
    box {
     <-LG_KNOB_RADIUS-LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
     <-LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
    }
    translate <0, LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, 3*LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, -LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, 3*LG_BRICK_WIDTH/2, 0>
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, LG_BRICK_WIDTH/2, 0>
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, -LG_BRICK_WIDTH/2, 0>
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare COL = -1;
 #while (COL < 2)
  intersection {
   difference {
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_PLATE_HEIGHT-LG_E>,
     lg_radius-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -6*LG_BRICK_HEIGHT-2*LG_E>,
     lg_radius-LG_WALL_WIDTH/2
    }
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   difference {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_PLATE_HEIGHT-2*LG_E>,
     lg_radius-LG_CORNER_SPACE
    }
    union {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -6*LG_BRICK_HEIGHT-2*LG_E>,
      lg_radius-LG_WALL_WIDTH/2
     }
     box {
      <0, lg_radius, 0.2>,
      <-lg_radius, -lg_radius, -1>
     }
    }
    translate <0, -LG_BRICK_WIDTH/2, 0>
   }
   translate <-lg_radius+LG_BRICK_WIDTH/2, COL*LG_BRICK_WIDTH, 0>
  }
  #declare COL = COL + 1;
 #end
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
  <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <LG_KNOB_RADIUS+LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
   <LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
  }
 }
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <-LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <-LG_KNOB_RADIUS-LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
   <-LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
  }
 }
 intersection {
  union {
   #declare COL = -3;
   #while (COL < 4)
    difference {
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
     union {
      box{
       <-lg_radius-LG_E, 0, LG_E>,
       <lg_radius+LG_E, lg_radius+LG_E, -6*LG_BRICK_HEIGHT-LG_E>
       rotate <0, 0, 90-lg_angle2*180/pi>
      }
      box{
       <-lg_radius-LG_E, 0, LG_E>,
       <lg_radius+LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
       rotate <0, 0, -90+lg_angle2*180/pi>
      }
      box {
       <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
       <-lg_radius-LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      }
     }
     matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     translate <lg_radius+LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.12, COL*LG_BRICK_WIDTH, 0>
    }
    #declare COL = COL + 1;
   #end
  }
  union {
   box {
    <LG_BRICK_WIDTH/2-0.12-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -17*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-0.12-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -14*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-0.12-LG_E, -3*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -14*LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#declare lg_30140_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    merge {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
    }
    union {
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, 5*LG_BRICK_WIDTH/2, 0>
   }
   difference {
    merge {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -6*LG_BRICK_HEIGHT>,
      lg_radius-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
    }
    union {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      lg_radius-LG_WALL_WIDTH/2
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      rotate <0, 0, 90-lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, -6*LG_BRICK_HEIGHT-LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -5*LG_BRICK_HEIGHT-LG_CORNER_SPACE>
      rotate <0, 0, 90-lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 90-lg_angle2*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH/2, 0>
   }
   difference {
    merge {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <0, 0, -6*LG_BRICK_HEIGHT>,
      lg_radius-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
    }
    union {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -LG_PLATE_HEIGHT-LG_E>,
      lg_radius-LG_WALL_WIDTH/2
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 90-lg_angle2*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2, 0>
   }
   difference {
    merge {
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
     }
     torus {
      lg_radius-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, 0>
      translate <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT>,
      <0, 0, -5*LG_BRICK_HEIGHT>,
      lg_radius-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
      <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
    }
    union {
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, lg_radius+LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, 90-lg_angle1*180/pi>
     }
     box{
      <-lg_radius-LG_E, 0, LG_E>,
      <lg_radius+LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
      rotate <0, 0, -90+lg_angle2*180/pi>
     }
     box {
      <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
      <-lg_radius-LG_E, -lg_radius-LG_E, -5*LG_BRICK_HEIGHT-LG_E>
     }
    }
    translate <-lg_radius+LG_BRICK_WIDTH/2, 5*LG_BRICK_WIDTH/2, 0>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -14*LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -14*LG_PLATE_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -14*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -14*LG_PLATE_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH/2, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT-LG_WALL_WIDTH>,
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT-LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, -LG_PLATE_HEIGHT-2*LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH/2, 0>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
   }
   box {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>
   }
   box {
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <-0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-0.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_PLATE_HEIGHT-LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <0.06, 2*LG_BRICK_WIDTH-LG_E, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-0.06, 2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <-LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_tech_knob_logo_clear
    rotate <0, 0, -90>
    scale <1, 1-2*MIR, 1>
    translate <0, 2.5*LG_BRICK_WIDTH, -3*LG_PLATE_HEIGHT>
   }
   difference {
    merge {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 1.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-2*LG_E>,
      <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 1.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    merge {
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE-LG_E>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-LG_E>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_RADIUS
     }
    }
    union {
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, 0.5*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT-2*LG_E>,
      <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      LG_KNOB_INNER_RADIUS
     }
    }
   }
   torus {
    LG_KNOB_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   torus {
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0.5*LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
   }
   difference {
    box {
     <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     rotate <0, 0, 45>
     translate <LG_KNOB_RADIUS, 0, 0>
    }
    box {
     <LG_KNOB_RADIUS+LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
     <LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
    }
    translate <0, LG_BRICK_WIDTH, 0>
   }
   difference {
    box {
     <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
     <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
     rotate <0, 0, 45>
     translate <-LG_KNOB_RADIUS, 0, 0>
    }
    box {
     <-LG_KNOB_RADIUS-LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
     <-LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
    }
    translate <0, LG_BRICK_WIDTH, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, 3*LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, -LG_BRICK_WIDTH/2, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, 3*LG_BRICK_WIDTH/2, 0>
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, LG_BRICK_WIDTH/2, 0>
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   }
   box {
    <LG_KNOB_RADIUS, 0, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+0.12, 0.12, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -45>
    translate <0, -LG_BRICK_WIDTH/2, 0>
    matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 #declare COL = -1;
 #while (COL < 2)
  intersection {
   difference {
    cylinder {
     <0, 0, 0>,
     <0, 0, -LG_PLATE_HEIGHT-LG_E>,
     lg_radius-LG_CORNER_SPACE
    }
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -6*LG_BRICK_HEIGHT-2*LG_E>,
     lg_radius-LG_WALL_WIDTH/2
    }
    translate <0, LG_BRICK_WIDTH/2, 0>
   }
   difference {
    cylinder {
     <0, 0, LG_E>,
     <0, 0, -LG_PLATE_HEIGHT-2*LG_E>,
     lg_radius-LG_CORNER_SPACE
    }
    merge {
     cylinder {
      <0, 0, LG_E>,
      <0, 0, -6*LG_BRICK_HEIGHT-2*LG_E>,
      lg_radius-LG_WALL_WIDTH/2
     }
     box {
      <0, lg_radius, 0.2>,
      <-lg_radius, -lg_radius, -1>
     }
    }
    translate <0, -LG_BRICK_WIDTH/2, 0>
   }
   translate <-lg_radius+LG_BRICK_WIDTH/2, COL*LG_BRICK_WIDTH, 0>
  }
  #declare COL = COL + 1;
 #end
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -6*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
  <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -17*LG_PLATE_HEIGHT>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <-1.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 box {
  <-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <(lg_radius-LG_CORNER_SPACE)*sin(lg_angle1)-lg_radius+LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH/2, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <LG_KNOB_RADIUS+LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
   <LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
  }
 }
 difference {
  box {
   <LG_WALL_WIDTH/2, LG_WALL_WIDTH/2, -17*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
   <-LG_WALL_WIDTH/2, -LG_WALL_WIDTH/2, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   rotate <0, 0, 45>
   translate <-LG_KNOB_RADIUS, 0, 0>
  }
  box {
   <-LG_KNOB_RADIUS-LG_E, 0.3, -17*LG_PLATE_HEIGHT>,
   <-LG_BRICK_WIDTH, -0.3, -6*LG_BRICK_HEIGHT>
  }
 }
 intersection {
  merge {
   #declare COL = -3;
   #while (COL < 4)
    difference {
     cylinder {
      <0, 0, -LG_CORNER_SPACE>,
      <0, 0, -6*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
      lg_radius
     }
     union {
      box{
       <-lg_radius-LG_E, 0, LG_E>,
       <lg_radius+LG_E, lg_radius+LG_E, -6*LG_BRICK_HEIGHT-LG_E>
       rotate <0, 0, 90-lg_angle2*180/pi>
      }
      box{
       <-lg_radius-LG_E, 0, LG_E>,
       <lg_radius+LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
       rotate <0, 0, -90+lg_angle2*180/pi>
      }
      box {
       <lg_radius-LG_WALL_WIDTH, lg_radius+LG_E, 0>,
       <-lg_radius-LG_E, -lg_radius-LG_E, -6*LG_BRICK_HEIGHT-LG_E>
      }
     }
     matrix <-1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0>
     translate <lg_radius+LG_BRICK_WIDTH/2-LG_WALL_WIDTH-0.12, COL*LG_BRICK_WIDTH, 0>
    }
    #declare COL = COL + 1;
   #end
  }
  merge {
   box {
    <LG_BRICK_WIDTH/2-0.12-LG_E, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -17*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-0.12-LG_E, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -14*LG_PLATE_HEIGHT-LG_E>
   }
   box {
    <LG_BRICK_WIDTH/2-0.12-LG_E, -3*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, -3*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -14*LG_PLATE_HEIGHT-LG_E>
   }
  }
 }
 translate <LG_BRICK_WIDTH/2, 0, 0>
}

#end
