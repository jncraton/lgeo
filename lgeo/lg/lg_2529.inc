/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990530 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2529: Window 1 x 2 x 3 Pane Latticed                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2529)
#else
#declare HEIGHT = 8*LG_PLATE_HEIGHT-LG_WALL_WIDTH;
#declare lg_2529 = 
union {
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -HEIGHT+LG_CORNER_SPACE>,
  0.1
 } 
 sphere {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  sphere {
   <0, 0, -0.12+0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, 0.2>,
   <0, 0, -0.2>,
   0.1
  }
 }
 intersection {
  sphere {
   <0, 0, -HEIGHT+0.12-0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, -HEIGHT-0.2>,
   <0, 0, -HEIGHT+0.2>,
   0.1
  }
 }
 box {
  <0.1, -0.13+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -0.13, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1, -1.3+0.23-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -1.3+0.23, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+0.23>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT>
 }
 box {
  <0.1, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  <-0.1, -0.13+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -0.23>,
  <-0.1+LG_CORNER_SPACE, 0, 0>
 }
 box {
  <0.1, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1, -0.13+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 intersection {
  box {
   <0.1+LG_E, LG_E, -0.2>,
   <-0.1-LG_E, -1.2, -HEIGHT+0.2>
  }
  union {
   #declare GRID = -1;
   #while (GRID < 2)
    #declare MIR = -45;
    #while (MIR < 90)
     union {
      cylinder {
       <0.1-LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <0.1-LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.1-LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <0.1-LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.1+LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1+LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.1+LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1+LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      box {
       <0.1-LG_CORNER_SPACE, LG_GRID_WIDTH/2, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1+LG_CORNER_SPACE, -LG_GRID_WIDTH/2, -LG_BRICK_WIDTH*sqrt(2)>
      }
      box {
       <0.1, LG_GRID_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>
      }
      rotate <MIR, 0, 0>
      translate <0, -0.6, -HEIGHT/2+GRID*LG_BRICK_WIDTH>
     } 
     #declare MIR = MIR + 90;
    #end
    #declare GRID = GRID + 1;
   #end
  }
 }
 rotate <0, 0, 90>
}

#declare lg_2529_clear = 
merge {
 cylinder {
  <0, 0, -LG_CORNER_SPACE>,
  <0, 0, -HEIGHT+LG_CORNER_SPACE>,
  0.1
 } 
 sphere {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 sphere {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -0.13+LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <0.1-LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  0.1-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 intersection {
  sphere {
   <0, 0, -0.12+0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, 0.2>,
   <0, 0, -0.2>,
   0.1
  }
 }
 intersection {
  sphere {
   <0, 0, -HEIGHT+0.12-0.12*sin(25*pi/180)>, 0.12
  }
  cylinder {
   <0, 0, -HEIGHT-0.2>,
   <0, 0, -HEIGHT+0.2>,
   0.1
  }
 }
 box {
  <0.1, -0.13+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -0.13, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1, -1.3+0.23-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-0.1, -1.3+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -1.3+0.23, -LG_CORNER_SPACE>,
  <-0.1+LG_CORNER_SPACE, -1.3, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -HEIGHT+0.23>,
  <-0.1+LG_CORNER_SPACE, 0, -HEIGHT>
 }
 box {
  <0.1, -1.3+0.23-LG_CORNER_SPACE, -HEIGHT+0.23-LG_CORNER_SPACE>,
  <-0.1, -0.13+LG_CORNER_SPACE, -HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <0.1-LG_CORNER_SPACE, -1.3+LG_CORNER_SPACE, -0.23>,
  <-0.1+LG_CORNER_SPACE, 0, 0>
 }
 box {
  <0.1, -1.3+0.23-LG_CORNER_SPACE, -0.23+LG_CORNER_SPACE>,
  <-0.1, -0.13+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 intersection {
  box {
   <0.1+LG_E, LG_E, -0.2>,
   <-0.1-LG_E, -1.2, -HEIGHT+0.2>
  }
  merge {
   #declare GRID = -1;
   #while (GRID < 2)
    #declare MIR = -45;
    #while (MIR < 90)
     merge {
      cylinder {
       <0.1-LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <0.1-LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <0.1-LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <0.1-LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.1+LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1+LG_CORNER_SPACE, LG_GRID_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      cylinder {
       <-0.1+LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1+LG_CORNER_SPACE, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>,
       LG_CORNER_SPACE
      }
      box {
       <0.1-LG_CORNER_SPACE, LG_GRID_WIDTH/2, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1+LG_CORNER_SPACE, -LG_GRID_WIDTH/2, -LG_BRICK_WIDTH*sqrt(2)>
      }
      box {
       <0.1, LG_GRID_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH*sqrt(2)>,
       <-0.1, -LG_GRID_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH*sqrt(2)>
      }
      rotate <MIR, 0, 0>
      translate <0, -0.6, -HEIGHT/2+GRID*LG_BRICK_WIDTH>
     } 
     #declare MIR = MIR + 90;
    #end
    #declare GRID = GRID + 1;
   #end
  }
 }
 rotate <0, 0, 90>
}

#end
