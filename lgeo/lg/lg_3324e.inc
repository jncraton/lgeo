/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970827 Lutz Uhlmann                                                       */
/* 20071230 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3324e: Plate 9 x 2 Hinge Base                                            */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3324e)
#else
#declare lg_3324e = 
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    <0.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0.32*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE+LG_E>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>
   }
   box {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0.32*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    <0.2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    union {
     box {
      <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08>,
      <0.5, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>
     }
     box {
      <0, LG_BRICK_WIDTH/2, 0.08-LG_CORNER_SPACE>,
      <0.5, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
     }
    }
    cylinder {
     <0, 0, 0>,
     <0, 1, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   difference {
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, LG_BRICK_WIDTH/2, 0>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_E, 0>,
      <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>
 }
 cylinder {
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE+LG_E>,
  <8.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>
 }
 box {
  <8.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  <8.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder
  translate <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder
  translate <2.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder
  translate <3.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder
  translate <4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder
  translate <5.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder
  translate <6.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder
  translate <7.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <1.5*LG_BRICK_WIDTH, 0, 0.08-LG_CORNER_SPACE>
 }
 difference {
  box {
   <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08>,
   <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <1.5*LG_BRICK_WIDTH, 0, 0.08-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH, 0, 0.08+LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, 0, 0.1>,
    <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08+LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space
    translate <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <8*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
  }
 }
}

#declare lg_3324e_clear = 
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    <0.2*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0.32*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE+LG_E>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>
   }
   box {
    <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_WALL_WIDTH, 0.08-LG_CORNER_SPACE>,
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    <0.32*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    <0.2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>
   }
   torus {
    LG_CYLINDER_RADIUS-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   difference {
    merge {
     box {
      <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0.08>,
      <0.5, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>
     }
     box {
      <0, LG_BRICK_WIDTH/2, 0.08-LG_CORNER_SPACE>,
      <0.5, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
     }
    }
    cylinder {
     <0, 0, 0>,
     <0, 1, 0>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE+LG_E
    }
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR ,1>
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08>
   }
   difference {
    merge {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, LG_BRICK_WIDTH/2, 0>,
      LG_CYLINDER_RADIUS-LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
      LG_CYLINDER_RADIUS
     }
    }
    union {
     cylinder {
      <0, LG_BRICK_WIDTH, 0>,
      <0, LG_BRICK_WIDTH/2, 0>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
      <0, LG_BRICK_WIDTH+LG_E, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, LG_BRICK_WIDTH/2-LG_E, 0>,
      <0, LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
      LG_KNOB_RADIUS+LG_CORNER_SPACE
     }
    }
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE+LG_E>
 }
 box {
  <0.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>,
  <0.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>
 }
 cylinder {
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE+LG_E>,
  <8.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08>
 }
 box {
  <8.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08-LG_CORNER_SPACE>,
  <8.3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+0.08+LG_CORNER_SPACE>
 }
 object {
  lg_plate_cylinder_clear
  translate <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <2.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <3.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <4.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <5.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <6.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 object {
  lg_plate_cylinder_clear
  translate <7.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <1.5*LG_BRICK_WIDTH, 0, 0.08-LG_CORNER_SPACE>
 }
 difference {
  box {
   <8.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.08>,
   <0.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.08-LG_TOP_HEIGHT>
  }
  union {
   cylinder {
    <1.5*LG_BRICK_WIDTH, 0, 0.08-LG_CORNER_SPACE>,
    <1.5*LG_BRICK_WIDTH, 0, 0.08+LG_E>,
    LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
   }
   cylinder {
    <1.5*LG_BRICK_WIDTH, 0, 0.1>,
    <1.5*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT+0.08+LG_E>,
    LG_KNOB_INNER_RADIUS
   }
   object {
    lg_knob_inner_space_clear
    translate <8*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <8*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <7*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <6*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <6*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <4*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <2*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
   object {
    lg_knob_inner_space_clear
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2, 0.08-LG_TOP_HEIGHT>
   }
  }
 }
}

#end
