/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980707 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_0969: Trailor Stand                                                      */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_0969)
#else
#declare lg_0969 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    2*LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
   }
   torus {
    2*LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
   }
   cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
     2*LG_WALL_WIDTH
   }
   cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT>,
     <0, LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
     2*LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   intersection {
    box {
     <LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
     <-LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, 6*LG_PLATE_HEIGHT>
    }
    cylinder {
      <0, LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT>,
      <0, LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
      2*LG_WALL_WIDTH
    }
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    <0, LG_BRICK_WIDTH, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 4*LG_WALL_WIDTH, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT>
   }
   box {
    <-LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, LG_BRICK_WIDTH-LG_E, -8*LG_PLATE_HEIGHT>,
  <0, -LG_BRICK_WIDTH+LG_E, -8*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
  <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  LG_WALL_WIDTH
 }
}

#declare lg_0969_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   torus {
    LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   torus {
    2*LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
   }
   torus {
    2*LG_WALL_WIDTH-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
   }
   cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
     <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
     2*LG_WALL_WIDTH
   }
   cylinder {
     <0, LG_BRICK_WIDTH-LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT>,
     <0, LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
     2*LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   intersection {
    box {
     <LG_WALL_WIDTH, LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
     <-LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE-LG_E, 6*LG_PLATE_HEIGHT>
    }
    cylinder {
      <0, LG_BRICK_WIDTH-2*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT>,
      <0, LG_BRICK_WIDTH, -8*LG_PLATE_HEIGHT>,
      2*LG_WALL_WIDTH
    }
   }
   cylinder {
    <0, LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 0>,
    <0, LG_BRICK_WIDTH, 0>,
    LG_WALL_WIDTH-LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>,
    LG_CORNER_SPACE
   }
   box {
    <LG_WALL_WIDTH-LG_CORNER_SPACE, 4*LG_WALL_WIDTH, 0>,
    <-LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_WALL_WIDTH, -8*LG_PLATE_HEIGHT>
   }
   box {
    <-LG_WALL_WIDTH, 4*LG_WALL_WIDTH-LG_CORNER_SPACE, 0>,
    <LG_WALL_WIDTH, 3*LG_WALL_WIDTH+LG_CORNER_SPACE, -8*LG_PLATE_HEIGHT>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <0, LG_BRICK_WIDTH-LG_E, -8*LG_PLATE_HEIGHT>,
  <0, -LG_BRICK_WIDTH+LG_E, -8*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
  <0, -LG_BRICK_WIDTH+LG_WALL_WIDTH+LG_CORNER_SPACE, -4*LG_PLATE_HEIGHT>,
  LG_WALL_WIDTH
 }
 cylinder {
  <0, LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <0, -LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  LG_WALL_WIDTH
 }
}

#end
