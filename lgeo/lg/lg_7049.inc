/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990922 Lutz Uhlmann                                                       */
/* 20071013 Lutz Uhlmann fixed stud orientation                                */
/* 20080309 Lutz Uhlmann fixed material statement                              */
/* 20081017 Lutz Uhlmann extracted subparts                                    */
/* 20081102 Lutz Uhlmann added references to subparts                          */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_7049: Brick 2 x 4 with Wheels Holder                                     */
/*                                                                             */
/*******************************************************************************/
#ifdef(lg_7049)
#else
#include "lg_3109.inc"
#include "lg_3110.inc"
#include "lg_3111.inc"
#include "lg_3112.inc"
#declare lg_7049=
union {
 object {
  lg_3109
 }
 object {
  lg_3110_clear
  material { texture { lg_clear } interior { lg_ior } }
 }
 object {
  lg_3112
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3111
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3111
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
  matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
 }
}

#declare lg_7049a =
object {
 lg_3109
}

#declare lg_7049b =
object {
 lg_3110
}

#declare lg_7049c =
object {
 lg_3112
}

#declare lg_7049d =
object {
 lg_3112
}

#declare lg_7049_clear =
union {
 object {
  lg_3109_clear
 }
 object {
  lg_3110_clear
  material { texture { lg_clear } interior { lg_ior } }
 }
 object {
  lg_3112
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3111
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
 }
 object {
  lg_3111
  material { texture { lg_red  normal { bumps 0.1 scale 2 } } }
  matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
 }
}

#declare lg_7049a =
object {
 lg_3109_clear
}

#declare lg_7049b =
object {
 lg_3110_clear
}

#declare lg_7049c =
object {
 lg_3112_clear
}

#declare lg_7049d =
object {
 lg_3112_clear
}

#end
