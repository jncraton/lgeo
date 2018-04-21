/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980808 Lutz Uhlmann                                                       */
/* 20041104 Lars C. Hassing   Corrected rotations (Mark Riley hint)            */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3741: Flower Stem                                                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3741)
#else
#declare lg_3741 =
union {
 object {
  lg_knob
 }
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  cylinder {
   <0, 0, -LG_TOP_HEIGHT>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  union {
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_CYLINDER_RADIUS-0.08, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_CYLINDER_RADIUS-0.08, 0, -LG_CORNER_SPACE>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_CYLINDER_RADIUS-0.08, 0.08-LG_CORNER_SPACE, 0>,
    <-LG_KNOB_RADIUS, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_CYLINDER_RADIUS-0.08, -0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, 0.08, -LG_CORNER_SPACE>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0, -LG_PLATE_HEIGHT>,
    <-LG_CYLINDER_RADIUS-0.08, 0, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0, -LG_CORNER_SPACE>,
    <-LG_CYLINDER_RADIUS-0.08, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.08
   }
   rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 cylinder {
  <-0.88, 0, 0.96>,
  <-LG_CYLINDER_RADIUS-0.08, 0, -0.05>,
  0.08
 }
 sphere {
  <-0.88, 0, 0.96>,
  0.08
 }
 cylinder {
  <-1.04, 0, 1.28>,
  <-LG_CYLINDER_RADIUS-0.08, 0, -0.05>,
  0.08
  rotate <0, 0, 120>
 }
 sphere {
  <-1.04, 0, 1.28>,
  0.08
  rotate <0, 0, 120>
 }
 cylinder {
  <-0.96, 0, 1.12>,
  <-LG_CYLINDER_RADIUS-0.08, 0, -0.05>,
  0.08
  rotate <0, 0, -120>
 }
 sphere {
  <-0.96, 0, 1.12>,
  0.08
  rotate <0, 0, -120>
 }
}

#declare lg_3741_clear =
merge {
 object {
  lg_knob_clear
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -2*LG_PLATE_HEIGHT>,
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CYLINDER_RADIUS
   }
  }
  cylinder {
   <0, 0, -LG_TOP_HEIGHT>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   LG_KNOB_RADIUS
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -2*LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 3)
  merge {
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_CYLINDER_RADIUS-0.08, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   torus {
    LG_WALL_WIDTH/2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <-LG_CYLINDER_RADIUS-0.08, 0, -LG_CORNER_SPACE>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, 0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, 0.08-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, -0.08+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-LG_CYLINDER_RADIUS-0.08, 0.08-LG_CORNER_SPACE, 0>,
    <-LG_KNOB_RADIUS, -0.08+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <-LG_CYLINDER_RADIUS-0.08, -0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS, 0.08, -LG_CORNER_SPACE>
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0, -LG_PLATE_HEIGHT>,
    <-LG_CYLINDER_RADIUS-0.08, 0, 0>,
    0.08-LG_CORNER_SPACE
   }
   cylinder {
    <-LG_CYLINDER_RADIUS-0.08, 0, -LG_CORNER_SPACE>,
    <-LG_CYLINDER_RADIUS-0.08, 0, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    0.08
   }
   rotate <0, 0, 120*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 cylinder {
  <-0.88, 0, 0.96>,
  <-LG_CYLINDER_RADIUS-0.08, 0, -0.05>,
  0.08
 }
 sphere {
  <-0.88, 0, 0.96>,
  0.08
 }
 cylinder {
  <-1.04, 0, 1.28>,
  <-LG_CYLINDER_RADIUS-0.08, 0, -0.05>,
  0.08
  rotate <0, 0, 120>
 }
 sphere {
  <-1.04, 0, 1.28>,
  0.08
  rotate <0, 0, 120>
 }
 cylinder {
  <-0.96, 0, 1.12>,
  <-LG_CYLINDER_RADIUS-0.08, 0, -0.05>,
  0.08
  rotate <0, 0, -120>
 }
 sphere {
  <-0.96, 0, 1.12>,
  0.08
  rotate <0, 0, -120>
 }
}

#end
