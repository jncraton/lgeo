/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970821 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2348b: Car Roof 4 x 4 Sunroof Glass                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2348b)
#else
#include "lg_2348a.inc"
#declare lg_2348b =
union {
 object { lg_2348a }
 #declare CYL = -1.5*LG_BRICK_WIDTH;
 #while (CYL < 0)
  cylinder {
   <CYL, 1.5*LG_BRICK_WIDTH-0.12, LG_WALL_WIDTH/2>,
   <CYL, -1.5*LG_BRICK_WIDTH+0.12, LG_WALL_WIDTH/2>,
   0.01
  }
  #declare CYL = CYL + 0.25;
 #end
}

#declare lg_2348b_clear =
merge {
 object { lg_2348a_clear }
 #declare CYL = -1.5*LG_BRICK_WIDTH;
 #while (CYL < 0)
  cylinder {
   <CYL, 1.5*LG_BRICK_WIDTH-0.12, LG_WALL_WIDTH/2>,
   <CYL, -1.5*LG_BRICK_WIDTH+0.12, LG_WALL_WIDTH/2>,
   0.01
  }
  #declare CYL = CYL + 0.25;
 #end
}

#end
