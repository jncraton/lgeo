/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980122 Lutz Uhlmann                                                       */
/* 20070904 Lutz Uhlmann   moved from lg_0006 to lg_3464                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3464: Wheel Center                                                       */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3464)
#else
#declare lg_3464 =
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
 cylinder {
  <0, 0.32, 0>,
  <0, -0.32, 0>,
  LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
 }
 cylinder {
  <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
  <0, -0.32+LG_KNOB_CORNER_SPACE, 0>,
  LG_KNOB_RADIUS
 }
 torus {
  LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
 }
 torus {
  LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  translate <0, -0.32+LG_KNOB_CORNER_SPACE, 0>
 }
 cylinder {
  <0, 0.48, 0>,
  <0, -0.48, 0>,
  0.08-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.48-LG_CORNER_SPACE, 0>,
  <0, -0.48+LG_CORNER_SPACE, 0>,
  0.08
 }
 torus {
  0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.48-LG_CORNER_SPACE, 0>
 }
 torus {
  0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.48+LG_CORNER_SPACE, 0>
 }
}

#declare lg_3464_clear =
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
 cylinder {
  <0, 0.32, 0>,
  <0, -0.32, 0>,
  LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE
 }
 cylinder {
  <0, 0.32-LG_KNOB_CORNER_SPACE, 0>,
  <0, -0.32+LG_KNOB_CORNER_SPACE, 0>,
  LG_KNOB_RADIUS
 }
 torus {
  LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  translate <0, 0.32-LG_KNOB_CORNER_SPACE, 0>
 }
 torus {
  LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  translate <0, -0.32+LG_KNOB_CORNER_SPACE, 0>
 }
 cylinder {
  <0, 0.48, 0>,
  <0, -0.48, 0>,
  0.08-LG_CORNER_SPACE
 }
 cylinder {
  <0, 0.48-LG_CORNER_SPACE, 0>,
  <0, -0.48+LG_CORNER_SPACE, 0>,
  0.08
 }
 torus {
  0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, 0.48-LG_CORNER_SPACE, 0>
 }
 torus {
  0.08-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  translate <0, -0.48+LG_CORNER_SPACE, 0>
 }
}

#end
