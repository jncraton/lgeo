/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071101 Lutz Uhlmann                                                       */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0309p04: Baseplate 32 x 32 island with white and green lines pattern     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0309p04)
#else
#include "lg_0309"
#declare lg_0309p04_decals =
union {
 difference {
 	box {
 	 <10.4*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.001>,
 	 <-8.4*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.001>
 	}
 	union {
 	 box {
 	  <3.6*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, -LG_E>
 	  <0.4*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, LG_E>
 	 }
 	 cylinder {
 	  <2*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, -LG_E>,
 	  <2*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, LG_E>,
 	  1.6*LG_BRICK_WIDTH
 	 }
 	 cylinder {
 	  <2*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, -LG_E>,
 	  <2*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, LG_E>,
 	  1.6*LG_BRICK_WIDTH
 	 }
 	 box {
 	  <0, -3, LG_E>,
 	  <3 ,0, -LG_E>
 	  rotate <0, 0, 45>
 	  translate <8.4*LG_BRICK_WIDTH, 15.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, 0>
 	 }
 	 box {
 	  <8.4*LG_BRICK_WIDTH, 15.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_E>,
 	  <10*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, -LG_E>
 	 }
 	 box {
 	  <0, 0, LG_E>,
 	  <3 ,3, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <8.4*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH+LG_KNOB_INNER_RADIUS, 0>
 	 }
 	 box {
 	  <8.4*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH+LG_KNOB_INNER_RADIUS, LG_E>,
 	  <10*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH, -LG_E>
 	 }
 	 box {
 	  <-6.4*LG_BRICK_WIDTH, 13.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, LG_E>,
 	  <-9*LG_BRICK_WIDTH-LG_E, -13.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_E>
 	 }
 	 box {
 	  <0, -3, LG_E>,
 	  <-3 ,0, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <-6.4*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0>
 	 }
 	 box {
 	  <0, -3, LG_E>,
 	  <-3 ,0, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <-6.4*LG_BRICK_WIDTH, 13.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, 0>
 	 }
   #declare STRIPE_X = 1;
   #while (STRIPE_X < 9)
    box {
     <(3.6+7/9*STRIPE_X)*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_E>,
     <(3.6+7/9*(STRIPE_X + 1))*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_E>
    }
    box {
     <(0.4-7/9*STRIPE_X)*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, LG_E>,
     <(0.4-7/9*(STRIPE_X + 1))*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_E>
    }
    #declare STRIPE_X = STRIPE_X + 2;
   #end
 	}
  material { texture { lg_grey  normal { bumps 0.1 scale 2 } } }
 }
 difference {
  union {
   box {
    <3.6*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, -0.001>
    <0.4*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, 0.001>
   }
   cylinder {
    <2*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, -0.001>,
    <2*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, 0.001>,
    1.6*LG_BRICK_WIDTH
   }
   cylinder {
    <2*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, -0.001>,
    <2*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, 0.001>,
    1.6*LG_BRICK_WIDTH
   }
  }
  union {
   box {
    <3.1*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, -LG_E>
    <0.9*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, LG_E>
   }
   cylinder {
    <2*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, -LG_E>,
    <2*LG_BRICK_WIDTH, 7.6*LG_BRICK_WIDTH, LG_E>,
    1.1*LG_BRICK_WIDTH
   }
   cylinder {
    <2*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, -LG_E>,
    <2*LG_BRICK_WIDTH, -7.6*LG_BRICK_WIDTH, LG_E>,
    1.1*LG_BRICK_WIDTH
   }
  }
 	material { texture { lg_green  normal { bumps 0.1 scale 2 } } }
 }
 difference {
 	box {
 	 <-8.9*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.001>,
 	 <-6.4*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.001>
 	}
 	union {
 	 box {
 	  <-6.9*LG_BRICK_WIDTH, 13.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, LG_E>,
 	  <-9*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, -LG_E>
 	 }
 	 box {
 	  <0, -3, LG_E>,
 	  <-3 ,0, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <-6.9*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0>
 	 }
 	 box {
 	  <0, -3, LG_E>,
 	  <-3 ,0, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <-6.9*LG_BRICK_WIDTH, 13.5*LG_BRICK_WIDTH+LG_KNOB_RADIUS, 0>
 	 }
 	 box {
 	  <0, -3, LG_E>,
 	  <3 ,0, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <-6.4*LG_BRICK_WIDTH, -13.7*LG_BRICK_WIDTH-LG_KNOB_RADIUS, 0>
 	 }
 	 box {
 	  <0, 3, LG_E>,
 	  <-3 ,0, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <-6.4*LG_BRICK_WIDTH, 13.7*LG_BRICK_WIDTH+LG_KNOB_RADIUS, 0>
 	 }
 	}
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 difference {
 	box {
 	 <10.9*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.001>,
 	 <8.4*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.001>
 	}
 	union {
 	 box {
 	  <0, -3, LG_E>,
 	  <3 ,0, -LG_E>
 	  rotate <0, 0, 45>
 	  translate <8.9*LG_BRICK_WIDTH, 15.5*LG_BRICK_WIDTH-0.08, 0>
 	 }
 	 box {
 	  <8.9*LG_BRICK_WIDTH, 15.5*LG_BRICK_WIDTH-0.08, LG_E>,
 	  <10*LG_BRICK_WIDTH, 16*LG_BRICK_WIDTH, -LG_E>
 	 }
 	 box {
 	  <0, 0, LG_E>,
 	  <3 ,3, -LG_E>
 	  rotate <0, 0, -45>
 	  translate <8.9*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH+0.08, 0>
 	 }
 	 box {
 	  <8.9*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH+0.08, LG_E>,
 	  <10*LG_BRICK_WIDTH, -16*LG_BRICK_WIDTH, -LG_E>
 	 }
 	 box {
 	  <8*LG_BRICK_WIDTH, 13.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, LG_E>,
 	  <10.4*LG_BRICK_WIDTH, -13.5*LG_BRICK_WIDTH+LG_KNOB_INNER_RADIUS, -LG_E>
 	 }
 	 box {
 	  <0, -2*LG_BRICK_WIDTH*sqrt(2), LG_E>,
 	  <-2*LG_BRICK_WIDTH*sqrt(2) ,0, -LG_E>
 	  rotate <0, 0, 45>
 	  translate <8.4*LG_BRICK_WIDTH, 15.5*LG_BRICK_WIDTH-LG_KNOB_INNER_RADIUS, 0>
 	 }
 	 box {
 	  <0, 0, LG_E>,
 	  <-2*LG_BRICK_WIDTH*sqrt(2), 2*LG_BRICK_WIDTH*sqrt(2), -LG_E>
 	  rotate <0, 0, -45>
 	  translate <8.4*LG_BRICK_WIDTH, -15.5*LG_BRICK_WIDTH+LG_KNOB_INNER_RADIUS, 0>
 	 }
 	}
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
 union {
  #declare STRIPE_X = 1;
  #while (STRIPE_X < 9)
   box {
    <(3.6+7/9*STRIPE_X)*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0.001>,
    <(3.6+7/9*(STRIPE_X + 1))*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -0.001>
   }
   box {
    <(0.4-7/9*STRIPE_X)*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, 0.001>,
    <(0.4-7/9*(STRIPE_X + 1))*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -0.001>
   }
   #declare STRIPE_X = STRIPE_X + 2;
  #end
  material { texture { lg_white  normal { bumps 0.1 scale 2 } } }
 }
}

#declare lg_0309p04 = 
union {
 object { lg_0309 }
 object { lg_0309p04_decals }
}

#declare lg_0309p04_clear = 
union {
 object { lg_0309_clear }
 object { lg_0309p04_decals }
}
#end