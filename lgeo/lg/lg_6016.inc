/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6016: Bar 1 x 4 x 3 Window                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6016)
#else
#declare lg_6016 =
union {
 sphere {
  <0, 1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, -1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, 1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, -1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, -1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  <0, -1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, 1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, 0.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, -0.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, -0.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, -1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 box {
  <-0.1, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  <0.1, 1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
 }
 box {
  <-0.1, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  <0.1, -1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
 }
 intersection {
  sphere {
   <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.12*sin(pi/4),0>,
   0.12
  }
  box {
   <-0.1, 2*LG_BRICK_WIDTH, LG_KNOB_INNER_RADIUS>,
   <0.1, 1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
  }
 }
 intersection {
  sphere {
   <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.12*sin(pi/4),0>,
   0.12
  }
  box {
   <-0.1, -2*LG_BRICK_WIDTH, LG_KNOB_INNER_RADIUS>,
   <0.1, -1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
  }
 }
}

#declare lg_6016_clear =
merge {
 sphere {
  <0, 1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, -1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, 1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 sphere {
  <0, -1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, -1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  <0, -1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, 1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, 0.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, 0.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, -0.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, -0.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 cylinder {
  <0, -1.5*LG_BRICK_WIDTH, 13/4*LG_PLATE_HEIGHT>,
  <0, -1.5*LG_BRICK_WIDTH, -13/4*LG_PLATE_HEIGHT>,
  LG_KNOB_INNER_RADIUS
 }
 box {
  <-0.1, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  <0.1, 1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
 }
 box {
  <-0.1, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, LG_KNOB_INNER_RADIUS>,
  <0.1, -1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
 }
 intersection {
  sphere {
   <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.12*sin(pi/4),0>,
   0.12
  }
  box {
   <-0.1, 2*LG_BRICK_WIDTH, LG_KNOB_INNER_RADIUS>,
   <0.1, 1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
  }
 }
 intersection {
  sphere {
   <0, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.12*sin(pi/4),0>,
   0.12
  }
  box {
   <-0.1, -2*LG_BRICK_WIDTH, LG_KNOB_INNER_RADIUS>,
   <0.1, -1.5*LG_BRICK_WIDTH, -LG_KNOB_INNER_RADIUS>
  }
 }
}

#end
