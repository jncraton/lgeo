/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990113 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_30028: Tyre Slick Smooth                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_30028)
#else
#declare lg_30028 =
union {
 difference {
  union {
   cylinder {
    <0.6-LG_KNOB_CORNER_SPACE, 0, 0>,
    <-0.2+LG_KNOB_CORNER_SPACE, 0, 0>,
    0.72
   }
   cylinder {
    <0.6, 0, 0>,
    <-0.2, 0, 0>,
    0.72-LG_KNOB_CORNER_SPACE
   }
  }
  union {
   intersection {
    union {
     cone {
      <0.02, 0, 0>, 0.42,
      <0.1, 0, 0>, 0.34
     }
     cone {
      <0.38, 0, 0>, 0.42,
      <0.3, 0, 0>, 0.34
     }
    }
    cylinder {
     <0, 0, 0>,
     <0.4, 0, 0>,
     0.4
    }
   }
   cylinder {
    <0, 0, 0>,
    <0.4, 0, 0>,
    0.37
   }
   cylinder {
    <0.6+LG_E, 0, 0>,
    <0.6-LG_CORNER_SPACE, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <-0.2+LG_CORNER_SPACE, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, 0, 0>,
    <0.04, 0, 0>,
    0.4
   }
   cylinder {
    <0.6, 0, 0>,
    <0.36, 0, 0>,
    0.4
   }
  }
 }
 torus {
  0.72-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.6-LG_KNOB_CORNER_SPACE, 0, 0>
 }
 torus {
  0.72-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_KNOB_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.6-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_CORNER_SPACE, 0, 0>
 }
 rotate <0, 0, -90>
}

#declare lg_30028_clear =
merge {
 difference {
  merge {
   cylinder {
    <0.6-LG_KNOB_CORNER_SPACE, 0, 0>,
    <-0.2+LG_KNOB_CORNER_SPACE, 0, 0>,
    0.72
   }
   cylinder {
    <0.6, 0, 0>,
    <-0.2, 0, 0>,
    0.72-LG_KNOB_CORNER_SPACE
   }
  }
  union {
   intersection {
    union {
     cone {
      <0.02, 0, 0>, 0.42,
      <0.1, 0, 0>, 0.34
     }
     cone {
      <0.38, 0, 0>, 0.42,
      <0.3, 0, 0>, 0.34
     }
    }
    cylinder {
     <0, 0, 0>,
     <0.4, 0, 0>,
     0.4
    }
   }
   cylinder {
    <0, 0, 0>,
    <0.4, 0, 0>,
    0.37
   }
   cylinder {
    <0.6+LG_E, 0, 0>,
    <0.6-LG_CORNER_SPACE, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2-LG_E, 0, 0>,
    <-0.2+LG_CORNER_SPACE, 0, 0>,
    0.4+LG_CORNER_SPACE
   }
   cylinder {
    <-0.2, 0, 0>,
    <0.04, 0, 0>,
    0.4
   }
   cylinder {
    <0.6, 0, 0>,
    <0.36, 0, 0>,
    0.4
   }
  }
 }
 torus {
  0.72-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.6-LG_KNOB_CORNER_SPACE, 0, 0>
 }
 torus {
  0.72-LG_KNOB_CORNER_SPACE,
  LG_KNOB_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_KNOB_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <0.6-LG_CORNER_SPACE, 0, 0>
 }
 torus {
  0.4+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <0, 0, 90>
  translate <-0.2+LG_CORNER_SPACE, 0, 0>
 }
 rotate <0, 0, -90>
}

#end
