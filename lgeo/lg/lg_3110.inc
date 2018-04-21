/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20081017 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3111: Brick 2 x 4 with Wheels Holder Bottom                              */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_7049)
#else
#declare lg_3110 =
union {
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-0.08>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 }
 material { texture { lg_clear } interior { lg_ior } }
}

#declare lg_3110_clear =
merge {
 box {
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-0.08>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
 }
 material { texture { lg_clear } interior { lg_ior } }
}


#end
