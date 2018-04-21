/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980810 Lutz Uhlmann                                                       */
/* 19980810 Lutz Uhlmann moved from lg_0016 to lg_3596                         */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3596: Flag with Pole                                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3596)
#else
#declare lg_3596 =
union {
 object {
  lg_knob
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   cylinder {
    <0.155-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <0.155-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.155+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <-0.155+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.155-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <0.155-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.155+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <-0.155+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   box {
    <0.155-LG_CORNER_SPACE, 0.06, LG_KNOB_HEIGHT-LG_E>,
    <-0.155+LG_CORNER_SPACE, -0.06, 6.24>
   }
   box {
    <0.155, 0.06-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <-0.155, -0.06+LG_CORNER_SPACE, 6.24>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 torus {
  0.2-LG_CORNER_SPACE
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 6.24>
 }
 difference {
  sphere {
   <0, 0, 6.24>,
   0.2
  }
  cylinder {
   <0, 0, 6.24>,
   <0, 0, 5.9>,
   0.25
  }
 }
 cylinder {
  <0, 0, 6.24-LG_CORNER_SPACE>,
  <0, 0, 6.24+LG_E>,
  0.2-LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-2.56, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>
 }
 box {
  <-0.1, -0.06, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06, 6.24-LG_CORNER_SPACE>
 }
 box {
  <-0.1, -0.06+LG_CORNER_SPACE, 4.32>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24>
 }
}

#declare lg_3596_clear =
merge {
 object {
  lg_knob_clear
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CYLINDER_RADIUS 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+2*LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_KNOB_RADIUS
  }
 }
 difference {
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
   <0, 0, -LG_BRICK_HEIGHT>,
   LG_CYLINDER_RADIUS-LG_CORNER_SPACE 
  }
  cylinder {
   <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
   <0, 0, -LG_BRICK_HEIGHT-LG_E>,
   LG_KNOB_RADIUS+LG_CORNER_SPACE
  }
 }
 difference {
  merge {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
    <0, 0, -LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <0, 0, 0>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE 
   }
  }
  union {
   cylinder {
    <0, 0, -LG_BRICK_HEIGHT>,
    <0, 0, -LG_TOP_HEIGHT>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -LG_TOP_HEIGHT-LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space_clear
    translate <0, 0, -LG_TOP_HEIGHT>
   }
  }
 }
 torus {
  LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>
 }
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   cylinder {
    <0.155-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <0.155-LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.155+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <-0.155+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.155-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <0.155-LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-0.155+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <-0.155+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24>,
    LG_CORNER_SPACE
   }
   box {
    <0.155-LG_CORNER_SPACE, 0.06, LG_KNOB_HEIGHT-LG_E>,
    <-0.155+LG_CORNER_SPACE, -0.06, 6.24>
   }
   box {
    <0.155, 0.06-LG_CORNER_SPACE, LG_KNOB_HEIGHT-LG_E>,
    <-0.155, -0.06+LG_CORNER_SPACE, 6.24>
   }
   rotate <0, 0, 90*ROT>
  }
  #declare ROT = ROT + 1;
 #end
 torus {
  0.2-LG_CORNER_SPACE
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, 6.24>
 }
 difference {
  sphere {
   <0, 0, 6.24>,
   0.2
  }
  cylinder {
   <0, 0, 6.24>,
   <0, 0, 5.9>,
   0.25
  }
 }
 cylinder {
  <0, 0, 6.24-LG_CORNER_SPACE>,
  <0, 0, 6.24+LG_E>,
  0.2-LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.56+LG_CORNER_SPACE, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-2.56, -0.06+LG_CORNER_SPACE, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24-LG_CORNER_SPACE>
 }
 box {
  <-0.1, -0.06, 4.32+LG_CORNER_SPACE>,
  <-2.56+LG_CORNER_SPACE, 0.06, 6.24-LG_CORNER_SPACE>
 }
 box {
  <-0.1, -0.06+LG_CORNER_SPACE, 4.32>,
  <-2.56+LG_CORNER_SPACE, 0.06-LG_CORNER_SPACE, 6.24>
 }
}

#end
