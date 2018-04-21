/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970623 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2494: Window 1 x 4 x 5 Glass                                             */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2494)
#else
#declare LENGTH = 1;
#declare WIDTH = 4;
#declare HEIGHT = 5;
#declare lg_2494 = 
union {
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  union {
   sphere {
    <0.16, LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE-0.12*sin(pi/6)>, 0.12
   }
   sphere {
    <0.16, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE-0.12*sin(pi/6)>, 0.12
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
   <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
  }
 } 
 intersection {
  union {
   sphere {
    <0.16, LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE+0.12*sin(pi/6)>, 0.12
   }
   sphere {
    <0.16, -LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE+0.12*sin(pi/6)>, 0.12
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
  }
 }
}

#declare lg_2494_clear = 
merge {
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  union {
   sphere {
    <0.16, LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE-0.12*sin(pi/6)>, 0.12
   }
   sphere {
    <0.16, -LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_CORNER_SPACE-0.12*sin(pi/6)>, 0.12
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E>,
   <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, 0>
  }
 } 
 intersection {
  union {
   sphere {
    <0.16, LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE+0.12*sin(pi/6)>, 0.12
   }
   sphere {
    <0.16, -LG_BRICK_WIDTH, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE+0.12*sin(pi/6)>, 0.12
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
  }
 }
}

#end
