/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980315 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3855: Window  1 x 4 x 3 Glass                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3855)
#else
#declare LENGTH = 1;
#declare WIDTH = 4;
#declare HEIGHT = 3;
#declare lg_3855 = 
union {
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  union {
   sphere {
    <0.16, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.12*sin(pi/4), -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2>, 0.12
   }
   sphere {
    <0.16, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.12*sin(pi/4), -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2>, 0.12
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2+0.12>,
   <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2-0.12>
  }
 } 
}

#declare lg_3855_clear = 
merge {
 box {
  <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  merge {
   sphere {
    <0.16, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-0.12*sin(pi/4), -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2>, 0.12
   }
   sphere {
    <0.16, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH+0.12*sin(pi/4), -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2>, 0.12
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2+0.12>,
   <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH, -LG_WALL_WIDTH-(8*LG_PLATE_HEIGHT-LG_WALL_WIDTH)/2-0.12>
  }
 } 
}

#end
