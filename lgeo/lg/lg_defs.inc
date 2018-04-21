/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970623 Lutz Uhlmann                                                       */
/* 2002xxxx Lutz Uhlmann added LGEO logo derived from Larc C. Hassings L3Logo  */
/* 20071112 Lutz Uhlmann added lg_knob_dot for patterned baseplates            */
/* 20071124 Lutz Uhlmann added lg_quality for L3P comptibility                 */
/* 20071129 Lutz Uhlmann added lg_tech_knob_logo for lg_quality > 3            */
/* 20080229 Lutz Uhlmann added lg_test variable for development                */
/* 20080720 Lutz Uhlmann added lg_studs variable                               */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_defs: Definitions of standard sub-parts and sizes                        */
/*                                                                             */
/*******************************************************************************/
#ifndef(lg_quality)
 #declare lg_quality = 2;
 // compatible to L3Ps L3Quality for these values supported
 // 2: normal studs
 // 3: solid studs have logo
 // 4: solid and hollow stud have logo
#end
#ifndef(lg_test)
 #declare lg_test = 0;
 // For internal use
 // 0: correct hollow studs
 // 1: hollow studs are scaled to 1/10 in height to check for logo orientation
#end
#ifndef(lg_studs)
 #declare lg_studs = 1;
 // compatible to L3Ps L3Studs
 // 0: no studs and bottom cylinders for preview renderings
 // 1: objects have studs.
 //
 // 20080720: Most parts do not evaluate this flag by now.
#end
#ifndef(lg_stud_logo)
 #declare lg_stud_logo = 0;
 // stud logo letters
 // 0: display LEGO
 // 1: display LGEO
#end
#ifdef(LG_DEFS_INC)
#else
#declare LG_DEFS_INC = 1;

/***********************************************************************
 *  Dimensions
 ***********************************************************************/

#declare LG_KNOB_RADIUS = 0.24;
#declare LG_KNOB_HEIGHT = 0.16;
#declare LG_KNOB_HEIGHT_LOGO = 0.16;
#declare LG_KNOB_INNER_RADIUS = 0.16;
#declare LG_WALL_WIDTH = 0.16;
#declare LG_BRICK_WIDTH = 0.8;
#declare LG_BRICK_HEIGHT = 0.96;
#declare LG_BRICK_INNER_HEIGHT = 0.84;
#declare LG_PLATE_HEIGHT = 0.32;
#declare LG_PLATE_INNER_HEIGHT = 0.2;
#declare LG_TOP_HEIGHT = LG_BRICK_HEIGHT-LG_BRICK_INNER_HEIGHT;
#declare LG_CYLINDER_RADIUS = (sqrt(2)*LG_BRICK_WIDTH/2-LG_KNOB_RADIUS);
#declare LG_CYLINDER_WALL_WIDTH = (LG_CYLINDER_RADIUS-LG_KNOB_RADIUS);
#declare LG_CORNER_SPACE = 0.016; //0.025
#declare LG_KNOB_CORNER_SPACE = LG_CORNER_SPACE * 1.5;
#declare LG_CROSSAXLE_WIDTH = 0.18;
#declare LG_GRID_WIDTH=LG_BRICK_WIDTH/sqrt(2)-2*LG_KNOB_RADIUS;
#declare LG_E = 0.01;

/***********************************************************************
 *  Stud Logo
 *
 *  Declare lg_quality < 3 if you do not want the LGEO logo on the studs.
 *  Remove the translate statements to rearrange letters of logo...
 *
 ***********************************************************************/

#if (lg_quality > 2)
 #declare lego_logo_text =
  union {
   union {
    /* Letter L */
    sphere {<-59, 0, -96>, 6}
    cylinder {<-59, 0, -96>, <59, 0, -122>, 6}
    sphere {<59, 0, -122>, 6}
    cylinder {<59, 0, -122>, <59, 0, -84>, 6}
    sphere {<59, 0, -84>, 6}
   }
   union {
     /* Letter E */
    sphere {<-59, 0, -36>, 6}
    cylinder {<-59, 0, -36>, <-59, 0, 1>, 6}
    sphere {<-59, 0, 1>, 6}
    cylinder {<0, 0, -49>, <0, 0, -25>, 6}
    sphere {<0, 0, -25>, 6}
    sphere {<59, 0, -62>, 6}
    cylinder {<59, 0, -62>, <59, 0, -24>, 6}
    sphere {<59, 0, -24>, 6}
    cylinder {<-59, 0, -36>, <59, 0, -62>, 6}
    #if (lg_stud_logo > 0)
     translate <0, 0, 60>
    #end
   }
   union {
    /* Letter G */
    sphere {<-35.95, 0, 57>, 6}
    torus {18.45, 6 clipped_by{plane{<40, 0, -9>, 0}} translate<-40, 0, 39>}
    cylinder {<-44.05, 0, 21>, <35.95, 0, 3>, 6}
    torus {18.45, 6 clipped_by{plane{<-40, 0, 9>, 0}} translate<40, 0, 21>}
    cylinder {<44.05, 0, 39>, <0, 0, 49>, 6}
    sphere {<0, 0, 49>, 6}
    cylinder {<0, 0, 49>, <0, 0, 34>, 6}
    sphere {<0, 0, 34>, 6}
    #if (lg_stud_logo > 0)
     translate <0, 0, -65>
    #end
   }
   union {
    /* Letter O */
    torus {18.45, 6 clipped_by{plane{<40, 0, -9>, 0}} translate<-40, 0, 99>}
    cylinder {<-44.05, 0, 81>, <35.95, 0, 63>, 6}
    torus {18.45, 6 clipped_by{plane{<-40, 0, 9>, 0}} translate<40, 0, 81>}
    cylinder {<44.05, 0, 99>, <-35.95, 0, 117>, 6}
   }
   scale 4.5/128
   rotate y*90
   rotate x*-90
   scale <-1, 1, 1>
   scale .08 * LG_KNOB_RADIUS * 2
  }

 #declare lego_logo_text_clear =
  merge {
   merge {
    /* Letter L */
    sphere {<-59, 0, -96>, 6}
    cylinder {<-59, 0, -96>, <59, 0, -122>, 6}
    sphere {<59, 0, -122>, 6}
    cylinder {<59, 0, -122>, <59, 0, -84>, 6}
    sphere {<59, 0, -84>, 6}
   }
   merge {
    /* Letter E */
    sphere {<-59, 0, -36>, 6}
    cylinder {<-59, 0, -36>, <-59, 0, 1>, 6}
    sphere {<-59, 0, 1>, 6}
    cylinder {<0, 0, -49>, <0, 0, -25>, 6}
    sphere {<0, 0, -25>, 6}
    sphere {<59, 0, -62>, 6}
    cylinder {<59, 0, -62>, <59, 0, -24>, 6}
    sphere {<59, 0, -24>, 6}
    cylinder {<-59, 0, -36>, <59, 0, -62>, 6}
    #if (lg_stud_logo > 0)
     translate <0, 0, 60>
    #end
   }
   merge {
    /* Letter G */
    sphere {<-35.95, 0, 57>, 6}
    torus {18.45, 6 clipped_by{plane{<40, 0, -9>, 0}} translate<-40, 0, 39>}
    cylinder {<-44.05, 0, 21>, <35.95, 0, 3>, 6}
    torus {18.45, 6 clipped_by{plane{<-40, 0, 9>, 0}} translate<40, 0, 21>}
    cylinder {<44.05, 0, 39>, <0, 0, 49>, 6}
    sphere {<0, 0, 49>, 6}
    cylinder {<0, 0, 49>, <0, 0, 34>, 6}
    sphere {<0, 0, 34>, 6}
    #if (lg_stud_logo > 0)
     translate <0, 0, -65>
    #end
   }
   merge {
    /* Letter O */
    torus {18.45, 6 clipped_by{plane{<40, 0, -9>, 0}} translate<-40, 0, 99>}
    cylinder {<-44.05, 0, 81>, <35.95, 0, 63>, 6}
    torus {18.45, 6 clipped_by{plane{<-40, 0, 9>, 0}} translate<40, 0, 81>}
    cylinder {<44.05, 0, 99>, <-35.95, 0, 117>, 6}
   }
   scale 4.5/128
   rotate y*90
   rotate x*-90
   scale <-1, 1, 1>
   scale .08 * LG_KNOB_RADIUS * 2
  }
#end

/***********************************************************************
 *  LGEO Primitives
 ***********************************************************************/

// solid stud
#declare lg_knob =
union {
 union {
  cylinder {
   <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
   <0, 0, -LG_E>,
   (LG_KNOB_RADIUS)
  }
  cylinder {
   <0, 0, LG_KNOB_HEIGHT>,
   <0, 0, -LG_E>,
   (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE)
  }
 }
 torus {
  (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE),
  (LG_KNOB_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE)>
 }
 #if (lg_quality > 2)
  object { lego_logo_text translate <0,0,LG_KNOB_HEIGHT> }
 #end
}

// solid stud top for dotted baseplates
#declare lg_knob_dot =
intersection {
 object { lg_knob translate <0, 0, 0.001> }
 cylinder {
  <0, 0, LG_KNOB_HEIGHT-0.001>,
  <0, 0, LG_KNOB_HEIGHT+0.1>,
  LG_KNOB_INNER_RADIUS
 }
}

// hollow stud
#declare lg_tech_knob =
union{
 difference {
  union {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_E>,
    (LG_KNOB_RADIUS)
   }
   difference {
    cylinder {
     <0, 0, LG_KNOB_HEIGHT>,
     <0, 0, -LG_E>,
     (LG_KNOB_RADIUS-LG_CORNER_SPACE)
    }
    cylinder {
     <0, 0, LG_KNOB_HEIGHT+LG_E>,
     <0, 0, -2*LG_E>,
     (LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)
    }
   }
  }
  cylinder {
   <0, 0, (LG_KNOB_HEIGHT+2*LG_E)>,
   <0, 0, -3*LG_E>,
   (LG_KNOB_INNER_RADIUS)
  }
 }
 torus {
  (LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_CORNER_SPACE)>
 }
 torus {
  (LG_KNOB_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_CORNER_SPACE)>
 }
}

// hollow stud with logo
#declare lg_tech_knob_logo =
#if (lg_quality > 3)
union {
#end
 object { lg_tech_knob 
  #if (lg_test > 0)
   scale <1, 1, .1>
  #end
 }
 #if (lg_quality > 3)
  object { lego_logo_text scale <3/4, 3/4, 3/4> }
 #end
#if (lg_quality > 3)
}
#end

// brick inner cylinder to fit stud inside
#declare lg_brick_cylinder =
union {
 difference {
  cylinder {
   <0, 0, LG_BRICK_INNER_HEIGHT+LG_E>,
   <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>,
   (LG_CYLINDER_RADIUS)
  }
  cylinder {
   <0, 0, LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, 0>,
   (LG_KNOB_RADIUS)
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2),
  (LG_CYLINDER_WALL_WIDTH/2)
  rotate <90, 0, 0>
  translate <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>
 }
}

// plate inner cylinder to fit stud inside
#declare lg_plate_cylinder =
union {
 difference {
  cylinder {
   <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>,
   (LG_CYLINDER_RADIUS)
  }
  cylinder {
   <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, 0>,
   (LG_KNOB_RADIUS)
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2),
  (LG_CYLINDER_WALL_WIDTH/2)
  rotate <90, 0, 0>
  translate <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>
 }
}

// brick inner cylinder to fit into hollow stud
#declare lg_brick_column =
cylinder {
 <0, 0, LG_BRICK_INNER_HEIGHT+LG_E>,
 <0, 0, 0>,
 (LG_KNOB_INNER_RADIUS)
}

// plate inner cylinder to fit into hollow stud
#declare lg_plate_column =
difference {
 cylinder {
  <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
  <0, 0, 0>,
  (LG_KNOB_INNER_RADIUS)
 }
 cylinder {
  <0, 0, 1>,
  <0, 0, -1>,
  (0.06)
 }
}

// wall between brick cylinder and brick wall
#declare lg_support_wall =
box {
 <-LG_CYLINDER_WALL_WIDTH/2, -LG_E, 0.225>,
 <LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_RADIUS-LG_WALL_WIDTH+LG_E, LG_BRICK_HEIGHT>
}

// cutout for solid stud
#declare lg_knob_inner_space =
cylinder {
 <0, 0, -LG_CORNER_SPACE>,
 <0, 0, 0.15>,
 (0.125)
}

/***********************************************************************
 *  LGEO Primitives Clear versions
 ***********************************************************************/

#declare lg_knob_clear =
merge {
 merge {
  cylinder {
   <0, 0, LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE>,
   <0, 0, -LG_E>,
   (LG_KNOB_RADIUS)
  }
  cylinder {
   <0, 0, LG_KNOB_HEIGHT>,
   <0, 0, -LG_E>,
   (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE)
  }
 }
 torus {
  (LG_KNOB_RADIUS-LG_KNOB_CORNER_SPACE),
  (LG_KNOB_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_KNOB_CORNER_SPACE)>
 }
 #if (lg_quality > 2)
  object { lego_logo_text_clear translate <0,0,LG_KNOB_HEIGHT> }
 #end
}

#declare lg_tech_knob_clear =
merge{
 difference {
  merge {
   cylinder {
    <0, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
    <0, 0, -LG_E>,
    (LG_KNOB_RADIUS)
   }
   difference {
    cylinder {
     <0, 0, LG_KNOB_HEIGHT>,
     <0, 0, -LG_E>,
     (LG_KNOB_RADIUS-LG_CORNER_SPACE)
    }
    cylinder {
     <0, 0, LG_KNOB_HEIGHT+LG_E>,
     <0, 0, -2*LG_E>,
     (LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE)
    }
   }
  }
  cylinder {
   <0, 0, (LG_KNOB_HEIGHT+2*LG_E)>,
   <0, 0, -3*LG_E>,
   (LG_KNOB_INNER_RADIUS)
  }
 }
 torus {
  (LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_CORNER_SPACE)>
 }
 torus {
  (LG_KNOB_RADIUS-LG_CORNER_SPACE),
  (LG_CORNER_SPACE)
  rotate <90, 0, 0>
  translate <0, 0, (LG_KNOB_HEIGHT-LG_CORNER_SPACE)>
 }
}

#declare lg_tech_knob_logo_clear =
#if (lg_quality > 3)
union {
#end
 object { lg_tech_knob_clear }
 #if (lg_quality > 3)
  object { lego_logo_text scale <3/4, 3/4, 3/4> }
 #end
#if (lg_quality > 3)
}
#end

#declare lg_brick_cylinder_clear =
merge {
 difference {
  cylinder {
   <0, 0, LG_BRICK_INNER_HEIGHT+LG_E>,
   <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>,
   (LG_CYLINDER_RADIUS)
  }
  cylinder {
   <0, 0, LG_BRICK_INNER_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, 0>,
   (LG_KNOB_RADIUS)
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2),
  (LG_CYLINDER_WALL_WIDTH/2)
  rotate <90, 0, 0>
  translate <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>
 }
}

#declare lg_plate_cylinder_clear =
merge {
 difference {
  cylinder {
   <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
   <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>,
   (LG_CYLINDER_RADIUS)
  }
  cylinder {
   <0, 0, LG_PLATE_INNER_HEIGHT+LG_CORNER_SPACE>,
   <0, 0, 0>,
   (LG_KNOB_RADIUS)
  }
 }
 torus {
  (LG_CYLINDER_RADIUS-LG_CYLINDER_WALL_WIDTH/2),
  (LG_CYLINDER_WALL_WIDTH/2)
  rotate <90, 0, 0>
  translate <0, 0, (LG_CYLINDER_WALL_WIDTH/2)>
 }
}

#declare lg_brick_column_clear =
cylinder {
 <0, 0, LG_BRICK_INNER_HEIGHT+LG_E>,
 <0, 0, 0>,
 (LG_KNOB_INNER_RADIUS)
}

#declare lg_plate_column_clear =
difference {
 cylinder {
  <0, 0, LG_PLATE_INNER_HEIGHT+LG_E>,
  <0, 0, 0>,
  (LG_KNOB_INNER_RADIUS)
 }
 cylinder {
  <0, 0, 1>,
  <0, 0, -1>,
  (0.06)
 }
}

#declare lg_support_wall_clear =
box {
 <-LG_CYLINDER_WALL_WIDTH/2, -LG_E, 0.225>,
 <LG_CYLINDER_WALL_WIDTH/2, LG_BRICK_WIDTH-LG_CYLINDER_RADIUS-LG_WALL_WIDTH+LG_E, LG_BRICK_HEIGHT>
}

#declare lg_knob_inner_space_clear =
cylinder {
 <0, 0, -LG_CORNER_SPACE>,
 <0, 0, 0.15>,
 (0.125)
}

#end