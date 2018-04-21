/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4448: Window 4 x 4 x 3 Roof Glass                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4448)
#else
#declare lg_angle=atan2(8.5*LG_PLATE_HEIGHT,3*LG_BRICK_WIDTH);
#declare lg_4448 =
union {
 difference {
  box {
   <0.1, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 1.5*LG_BRICK_HEIGHT/sin(lg_angle)>,
   <-0.1, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.3*LG_BRICK_HEIGHT/sin(lg_angle)>
   rotate <0, -90+lg_angle*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH+(3*LG_BRICK_WIDTH-3.75*LG_PLATE_HEIGHT/sin(lg_angle)*cos(lg_angle))-LG_WALL_WIDTH*(1/sin(lg_angle)+0.5), 0, -4.25*LG_PLATE_HEIGHT>
  }
  union {
   box {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <0, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
   }
   box {
    <0.45*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
    <0, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <3.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT+LG_E>,
    <2.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>
   }
   box {
    <3.125*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT+LG_E>,
    <3.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>
   }
  }
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+(3*LG_BRICK_WIDTH-3.75*LG_PLATE_HEIGHT/sin(lg_angle)*cos(lg_angle))-LG_WALL_WIDTH*(1/sin(lg_angle)+0.5), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -4.25*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH/2+LG_E
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+(3*LG_BRICK_WIDTH-3.75*LG_PLATE_HEIGHT/sin(lg_angle)*cos(lg_angle))-LG_WALL_WIDTH*(1/sin(lg_angle)+0.5), -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -4.25*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH/2+LG_E
 }
}

#declare lg_4448_clear =
merge {
 difference {
  box {
   <0.1, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, 1.5*LG_BRICK_HEIGHT/sin(lg_angle)>,
   <-0.1, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -1.3*LG_BRICK_HEIGHT/sin(lg_angle)>
   rotate <0, -90+lg_angle*180/pi, 0>
   translate <0.5*LG_BRICK_WIDTH+(3*LG_BRICK_WIDTH-3.75*LG_PLATE_HEIGHT/sin(lg_angle)*cos(lg_angle))-LG_WALL_WIDTH*(1/sin(lg_angle)+0.5), 0, -4.25*LG_PLATE_HEIGHT>
  }
  union {
   box {
    <LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_PLATE_HEIGHT>,
    <0, -2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>
   }
   box {
    <0.45*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0>,
    <0, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <3.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT+LG_E>,
    <2.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>
   }
   box {
    <3.125*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -7*LG_PLATE_HEIGHT+LG_E>,
    <3.5*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -9*LG_PLATE_HEIGHT>
   }
  }
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+(3*LG_BRICK_WIDTH-3.75*LG_PLATE_HEIGHT/sin(lg_angle)*cos(lg_angle))-LG_WALL_WIDTH*(1/sin(lg_angle)+0.5), 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -4.25*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH/2+LG_E
 }
 sphere {
  <0.5*LG_BRICK_WIDTH+(3*LG_BRICK_WIDTH-3.75*LG_PLATE_HEIGHT/sin(lg_angle)*cos(lg_angle))-LG_WALL_WIDTH*(1/sin(lg_angle)+0.5), -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -4.25*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH/2+LG_E
 }
}

#end
