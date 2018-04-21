/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970623 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6160b: Window 1 x 4 x 6 Glass                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6160b)
#else
#declare LENGTH = 1;
#declare WIDTH = 4;
#declare HEIGHT = 6;
#declare lg_6160b = 
box {
 <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-0.12-LG_E, -0.14-LG_E>,
 <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+0.12+LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>
}

#declare lg_6160b_clear = 
box {
 <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, WIDTH/2*LG_BRICK_WIDTH-0.12-LG_E, -0.14-LG_E>,
 <LENGTH/2*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+0.12+LG_E, -HEIGHT*LG_BRICK_HEIGHT+LG_PLATE_HEIGHT+LG_E>
}

#end
