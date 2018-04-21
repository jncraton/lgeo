/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6046: Bar 9 x 13                                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6046)
#else
#declare lg_6046 =
difference {
 union {
  sphere {
   <-4*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  sphere {
   <4*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  sphere {
   <4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  sphere {
   <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  #declare BAR_X = -6;
  #while ( BAR_X < 7)
   cylinder {
    <-4*LG_BRICK_WIDTH, BAR_X*LG_BRICK_WIDTH, 0>,
    <4*LG_BRICK_WIDTH, BAR_X*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   #declare BAR_X = BAR_X + 4;
  #end
  #declare BAR_Y = -4;
  #while ( BAR_Y < 5)
   cylinder {
    <BAR_Y*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, 0>,
    <BAR_Y*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   #declare BAR_Y = BAR_Y + 1;
  #end
 }
 union {
  cylinder {
   <-3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <-3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
  cylinder {
   <3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
  cylinder {
   <3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
  cylinder {
   <-3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <-3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
 }
}

#declare lg_6046_clear =
difference {
 merge {
  sphere {
   <-4*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  sphere {
   <4*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  sphere {
   <4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  sphere {
   <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, 0>,
   LG_KNOB_INNER_RADIUS
  } 
  #declare BAR_X = -6;
  #while ( BAR_X < 7)
   cylinder {
    <-4*LG_BRICK_WIDTH, BAR_X*LG_BRICK_WIDTH, 0>,
    <4*LG_BRICK_WIDTH, BAR_X*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   #declare BAR_X = BAR_X + 4;
  #end
  #declare BAR_Y = -4;
  #while ( BAR_Y < 5)
   cylinder {
    <BAR_Y*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, 0>,
    <BAR_Y*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, 0>,
    LG_KNOB_INNER_RADIUS
   }
   #declare BAR_Y = BAR_Y + 1;
  #end
 }
 union {
  cylinder {
   <-3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <-3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
  cylinder {
   <3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <3*LG_BRICK_WIDTH, -6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
  cylinder {
   <3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
  cylinder {
   <-3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, -LG_WALL_WIDTH-LG_E>,
   <-3*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH, LG_WALL_WIDTH+LG_E>,
   LG_KNOB_INNER_RADIUS/2
  }
 }
}

#end
