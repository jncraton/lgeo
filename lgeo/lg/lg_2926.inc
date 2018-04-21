/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970808 Lutz Uhlmann                                                       */
/* 20071225 Lutz Uhlmann fixed hollow stud logo and orientation                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2926: Plate 1 x 4 with Wheel Holders                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2926)
#else
#declare LENGTH = 1;
#declare WIDTH = 4;
#declare lg_angle=25;
#declare lg_2926 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   intersection {
    union {
     sphere {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     sphere {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>
     }
     cylinder {
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08, -0.1-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <0, LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, -0.1>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT>
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, -0.1>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT>
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <-0.06, 2*LG_KNOB_RADIUS+LG_E, -LG_TOP_HEIGHT+LG_E>,
      <0.06, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2, -0.5>
    }
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH, -0.2>,
    <0, 2*LG_BRICK_WIDTH+0.08, -0.2>,
    0.2-LG_CORNER_SPACE
   }
   difference {
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2>,
     <0, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.2>,
     0.2
    }
    box {
     <0.2+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_PLATE_HEIGHT+LG_E>,
     <-0.2-LG_E, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.4-LG_E>
    }
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.2>
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.2>
   }
   difference {
    union {
     cylinder {
      <0, 2*LG_BRICK_WIDTH+0.08-LG_E, -0.2>,
      <0, 2*LG_BRICK_WIDTH+0.56, -0.2>,
      LG_KNOB_INNER_RADIUS
     }
     torus {
      LG_KNOB_INNER_RADIUS,
      LG_CORNER_SPACE
      translate <0, 2*LG_BRICK_WIDTH+0.56-LG_CORNER_SPACE, -0.2>
     }
     torus {
      LG_KNOB_INNER_RADIUS,
      LG_CORNER_SPACE
      translate <0, 2*LG_BRICK_WIDTH+0.48+LG_CORNER_SPACE, -0.2>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH+0.48+LG_CORNER_SPACE, -0.2>,
      <0, 2*LG_BRICK_WIDTH+0.56-LG_CORNER_SPACE, -0.2>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
    union {
     box {
      <0.03, 2*LG_BRICK_WIDTH+0.56+LG_E, 0>,
      <-0.03, 2*LG_BRICK_WIDTH+0.3, -0.4-LG_E>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH+0.3, 0>,
      <0, 2*LG_BRICK_WIDTH+0.3, -0.4-LG_E>,
      0.03
     }
    }
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
  }
 }
 #declare KNOB_X  = -1.5;
 #while (KNOB_X < 2)
  object {
   lg_tech_knob_logo
   translate <0, KNOB_X*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder
  translate <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
} 

#declare lg_2926_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   intersection {
    merge {
     sphere {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     sphere {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     sphere {
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <0, 0, 0>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>
     }
     cylinder {
      <0, 0, 0>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), 0, 0>,
      LG_CORNER_SPACE
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>
     }
     cylinder {
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     cylinder {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08, -0.1-LG_CORNER_SPACE>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
     box {
      <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.1>,
      <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
     }
     box {
      <0, LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, -0.1>,
      <-(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT>
      rotate <0, 0, lg_angle>
      translate <-0.2+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, LG_CORNER_SPACE, -0.1-LG_CORNER_SPACE>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <0, 0, -0.1>,
      <(0.175+LG_CORNER_SPACE)/cos(lg_angle*pi/180), -0.08, -LG_PLATE_HEIGHT>
      rotate <0, 0, -lg_angle>
      translate <0.2-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, 0>
     }
     box {
      <-0.06, 2*LG_KNOB_RADIUS+LG_E, -LG_TOP_HEIGHT+LG_E>,
      <0.06, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
     }
    }
    box {
     <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, 0>,
     <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 2, -0.5>
    }
   }
   cylinder {
    <0, 2*LG_BRICK_WIDTH, -0.2>,
    <0, 2*LG_BRICK_WIDTH+0.08, -0.2>,
    0.2-LG_CORNER_SPACE
   }
   difference {
    cylinder {
     <0, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -0.2>,
     <0, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.2>,
     0.2
    }
    box {
     <0.2+LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_PLATE_HEIGHT+LG_E>,
     <-0.2-LG_E, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.4-LG_E>
    }
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -0.2>
   }
   torus {
    0.2-LG_CORNER_SPACE,
    LG_CORNER_SPACE
    translate <0, 2*LG_BRICK_WIDTH+0.08-LG_CORNER_SPACE, -0.2>
   }
   difference {
    merge {
     cylinder {
      <0, 2*LG_BRICK_WIDTH+0.08-LG_E, -0.2>,
      <0, 2*LG_BRICK_WIDTH+0.56, -0.2>,
      LG_KNOB_INNER_RADIUS
     }
     torus {
      LG_KNOB_INNER_RADIUS,
      LG_CORNER_SPACE
      translate <0, 2*LG_BRICK_WIDTH+0.56-LG_CORNER_SPACE, -0.2>
     }
     torus {
      LG_KNOB_INNER_RADIUS,
      LG_CORNER_SPACE
      translate <0, 2*LG_BRICK_WIDTH+0.48+LG_CORNER_SPACE, -0.2>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH+0.48+LG_CORNER_SPACE, -0.2>,
      <0, 2*LG_BRICK_WIDTH+0.56-LG_CORNER_SPACE, -0.2>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
    }
    merge {
     box {
      <0.03, 2*LG_BRICK_WIDTH+0.56+LG_E, 0>,
      <-0.03, 2*LG_BRICK_WIDTH+0.3, -0.4-LG_E>
     }
     cylinder {
      <0, 2*LG_BRICK_WIDTH+0.3, 0>,
      <0, 2*LG_BRICK_WIDTH+0.3, -0.4-LG_E>,
      0.03
     }
    }
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
  }
  box {
   <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
   <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT-LG_E>
  }
 }
 #declare KNOB_X  = -1.5;
 #while (KNOB_X < 2)
  object {
   lg_tech_knob_logo_clear
   translate <0, KNOB_X*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_X = KNOB_X + 1;
 #end
 object {
  lg_plate_cylinder_clear
  translate <0, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
 }
} 

#end
