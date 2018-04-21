/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081017 Lutz Uhlmann                                                       */
/* 20081102 Lutz Uhlmann fixed missing {                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3111: Brick 2 x 4 with Wheels Holder Shaft                               */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_3111)
#else
#declare lg_3111 =
difference {
 cylinder {
  <0, 0.34+LG_E, -0.4>,
  <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -0.4>,
  LG_KNOB_INNER_RADIUS+0.12
 }
 cylinder {
  <0, 0.34, -0.4>,
  <0, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -0.4>,
  LG_KNOB_INNER_RADIUS
 }
}

#declare lg_3111_clear =
object {
 lg_3111
}

#end
