/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 20071229 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0020: Wheel center small for steel axle                                  */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0020)
#else
#declare lg_0020 = 
union {
 cylinder {
  <0, -0.2, 0>,
  <0, -0.16, 0>,
  0.4-LG_CORNER_SPACE
 }
 cylinder {
  <0, -0.2+LG_CORNER_SPACE, 0>,
  <0, -0.16, 0>,
  0.4
 }
 cylinder {
  <0, 0.2, 0>,
  <0, 0.16, 0>,
  0.4-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.2-LG_CORNER_SPACE, 0>,
  <0, 0.16, 0>,
  0.4
 }
 cone {
  <0, -0.16, 0>, 0.4,
  <0, -0.048, 0>, 0.26
 }
 cone {
  <0, 0.16, 0>, 0.4,
  <0, 0.048, 0>, 0.26
 }
 cylinder {
  <0, 0.08, 0>,
  <0, -0.08, 0>,
  0.26
 }
 difference {
  union {
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.2-LG_CORNER_SPACE, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.2+LG_CORNER_SPACE, 0>
   }
  }
  cylinder {
   <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
   <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
   0.4+LG_E
  }
 }
 object {
  lg_knob
  rotate <-90, 0, 0>
  rotate <0, 180, 0>
  translate <0, 0.32-LG_KNOB_HEIGHT, 0>
 }
 cone {
  <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
  <0, -0.3, 0>, 0.25
 }
 rotate <0, 0, -90>
}

#declare lg_0020_clear = 
merge {
 cylinder {
  <0, -0.2, 0>,
  <0, -0.16, 0>,
  0.4-LG_CORNER_SPACE
 }
 cylinder {
  <0, -0.2+LG_CORNER_SPACE, 0>,
  <0, -0.16, 0>,
  0.4
 }
 cylinder {
  <0, 0.2, 0>,
  <0, 0.16, 0>,
  0.4-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.2-LG_CORNER_SPACE, 0>,
  <0, 0.16, 0>,
  0.4
 }
 cone {
  <0, -0.16, 0>, 0.4,
  <0, -0.048, 0>, 0.26
 }
 cone {
  <0, 0.16, 0>, 0.4,
  <0, 0.048, 0>, 0.26
 }
 cylinder {
  <0, 0.08, 0>,
  <0, -0.08, 0>,
  0.26
 }
 difference {
  merge {
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 0.2-LG_CORNER_SPACE, 0>
   }
   torus {
    0.4-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, -0.2+LG_CORNER_SPACE, 0>
   }
  }
  cylinder {
   <0, 0.2-LG_CORNER_SPACE-LG_E, 0>,
   <0, -0.2+LG_CORNER_SPACE+LG_E, 0>,
   0.4+LG_E
  }
 }
 object {
  lg_knob_clear
  rotate <-90, 0, 0>
  rotate <0, 180, 0>
  translate <0, 0.32-LG_KNOB_HEIGHT, 0>
 }
 cone {
  <0, -0.2, 0>, 0.4-LG_CORNER_SPACE,
  <0, -0.3, 0>, 0.25
 }
 rotate <0, 0, -90>
}

#end
