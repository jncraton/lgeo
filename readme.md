LGEO Libray for POV-Ray
=======================

```
Lutz Uhlmann
http://www.digitalbricks.org
```

# 1. Information

## 1.1. Disclaimer

The LGEO library is a fan created collection of definitions for LEGO Geometrical Equivalent
Objects (called parts from here on) to be used with POV-Ray. It is no way related or sponsored by
the LEGO Group and free of charge. It may be redistributed freely while copyright of the
intellectual property remains with the author. The LEGO logo displayed on the studs is under
copyright of the LEGO Group.

## 1.2. History

I started creating the parts in 1997, when there was no other option to create POV-Ray renderings
from models created with James Jessiman's LDRAW program. Back then, there also was a l2p
program to convert the models, based on binary files _lg_color.tab_ and _lg_elmnt.tab_. Until some
point in 2000 irregular updates were published. Lars C. Hassing created the L3P program, which
not only performs the tasks of l2p but also is able to create POV-Ray code for parts not in the
LGEO library. As it was still depending on the _tab_ files, it was stuck to the LGEO parts created until

2000. In 2007, Lars and I came up to communicate frequently for new versions of L3P and LGEO
with better support for each other. The l2p program is officially out of support, as I will focus on
creating the LGEO parts. The _tab_ files were replaced by the better readable _lst_ files. Additionally, I
was given permission from Anton Raves to create shortcuts to some of the parts in his library, kept
distinct from the LGEO parts by prefixing with _ar_ instead of _lg_ , as I do not have and want the
copyright and reputation for his original creations. Also, all files have been checked to be usable
with stud logos correctly, and not to produce so many warnings as before when used with POV-Ray
3.1 or higher (initially, it was done for 3.0, which had less restrictive syntax). All errors reported and
collected by Lars during the years 2000 to 2007 have been fixed.

## 1.3. Contents

The full package should include the folder _lgeo_ , which includes _LGEO.pdf_ , _lg_element.lst_ and
_lg_colors.lst_. The two subfolders _ar_ and _l g_ contain the object definition files, named
_lg_xxxx.inc_ and _ar_xxxx.inc_ respectively, where xxxx is four or more alphanumeric characters
representing the corresponding LDRAW DAT file. The _lg_ folder also should contain the files
_lg_defs.inc_ a n d _lg_color.inc_. The LGEO colors include all colors defined in the
_ldconfig.ldr_ , adjusted a little to my personal preference, some of the colors seemed to bright in my
opinion.

## 1.4. Support

I stopped LGEO in 2000 because I ran out of time with my studies and a job for a living. I still
noticed renderings using the LGEO parts, which finally let me start over with it, also as I have more
time again. So, I hope to have fun with it for the future to create more and more parts. If you


encounter any problems with specific parts, feel free to mail me, so I can try to fix it. To be honest, I
think I have very high expectations towards quality of LGEO parts, that why I officially refuse to
include any sent material in the official distribution of this library in most cases. Some part of me is
sorry for that, some part wants the credit all for myself...
Anyway, I hope you have fun with the package!

# 2. Usage

## 2.1. Requirements

Basically, nothing more than POV-Ray version 3.1 or higher, or compatible Renderer is the only
requirement to make use of the files. To be used nicely with L3P, copy the
_lgeo_ and _ar_ folders to your LDRAW folder.

## 2.2. Installation

Copy the _lgeo_ folder wherever you want, just be sure to make POV-Ray find the files when
including them, best way is to add them to the search path for include files. Refer to your POV-Ray
manual on help for this topic. However, for the easiest use with L3P copy the
_lgeo_ folder to your LDRAW folder.
If you want to make use of Anton Raves parts, you need to download his library (not included for
copyright issues here) from his website [http://www.antonraves.nl/downloads.php.](http://www.antonraves.nl/downloads.php.) Select the Library
Link to download the latest version. As Anton uses version numbers in the filenames which can not
be foreseen, the _ar_ files refer to _ar_library.inc_ and _ar_material.inc_. So you have to rename or
symbolic link (alias) this files from Anton files, usually called _library_xxx.lib_ and
_material_xxx.lib_ , where xxx is the version number. Make sure also this files are found by POV-Ray.
The _ar_ files in this distribution just contain reference from part number to Anton's name of the parts
with scaling and orientation to match corresponding LDRAW parts.

## 2.3. Standalone usage

Well, it is possible but not recommended. LGEO uses a different coordinate system and scaling than
LDRAW, so it may be pretty hard to build a model by placing the parts by hand. In LGEO, for
historic reasons Y axis is the depth axis, and Z is the up axis, where also Z has switched sign to
LDRAW Y axis. Sorry for that, but my understanding of coordinate to this time was a flat standard
XY coordinate system with a third Z axis coming out of the plane. Scaling is to real measurements,
where 1 POV-Ray unit is 10mm. So 0.8 is 20 LDU (width of a LEGO brick) and 0.96 is 24 LDU
(height of a LEGO brick).
If you want to try, go ahead. But you should be familar with POV-Ray to have some success. LGEO
is clearly meant to work best with L3P, which is available for Linux,
Windows and Mac OS X.

## 2.4. Usage with L3P

L3P by Lars C. Hassing is a converter tool for LDRAW or compatible model files. It can be
downloaded from his website at [http://www.hassings.dk/l3/l3p.html.](http://www.hassings.dk/l3/l3p.html.) L3P needs to know where the
_lgeo_ folder is, because it uses _lg_colors.lst_ and _lg_elements.lst_ to gather information about which
colors and parts are available in LGEO. The easy way is to copy the _lgeo_ folder to your LDRAW
folder. If you would like to have the _lgeo_ folder elsewhere, then you must to set the environment
variable LGEODIR or use the -lgd option to tell L3P the location of this folder.
Output of L3P should be renderable by POV-Ray from scratch if all is set up correctly. If you are
experienced or want to learn about, feel free to play around with the files produced by L3P to
modify the scene to your likes.


# 3. Technical Information

This section is for the interested, but not necessarily needed if you just want to run L3P and render
the output files.

## 3.1. File and Object Names

The File names are basically the same as corresponding LDRAW parts names, prefixed with
_lg_ or _ar_ , and names (numbers mostly) expanded with leading 0s if shorter than 4 characters for
historical reasons (l2p based on numbers only). If parts come in different versions, characters as
a,b,c etc. Are suffixed, not touching the basic at least 4 characters. Sounds confusing? So,
_lg_0013b.inc_ refers to _13b.DAT_ in LDRAW, _lg_30030p01.inc_ refers to _30030p01.DAT._ The objects
to be used in POV-Ray have the same name as the filename, missing
the _.inc_ suffix. Characters not being usable in POV-Ray object names are replaced by underscore
characters “_”, as in _lg_3062_old.inc_ , referring to _3062-old.DAT_. All DAT and LGEO name
relations are listed in _lg_elements.lst_. Since official release in late 2008, lg_ _changes.txt_ lists all
additions and bug fixes applied to the LGEO library.

## 3.2. Color Names

Colors are defined in _lg_color.inc_. Color names are prosaic with _lg_ prefix, if not sure take a closer
look, all colors are noted with number from _ldrconfig.ldr_. Some colors have aliases, as
_lg_teal_ (old name) refers to _lg_dark_ _ _turquoise_. Also all color number and name relations are listed
in _lg_colors.lst_.

## 3.3. Global declarations

In _lg_defs.inc_ there are several global declarations you might to experiment with. Some parameters
are declared at the beginning of the file with explanations. As long as you prefer the LGEO parts to
render nicely, do not change the numeric declarations listed in the dimensions section.

## 3.4. Known Problems

There is a lot of precolored parts in the LDRAW library. In LGEO, they are created as reference to
the uncolored parts and a texture is added. For example lg_300101, Brick 2 x 4 is created of object
lg_3001 with material lg_white. Although this has a color, it could be specified to have another
color, though it does not have any effect in LDRAW. So if a model would use 300101.DAT in color
4 maybe, it still should be white. In POV-Ray, the white color from the lg_300101 would be
substituted with the other color 4. To avoid this, lg_300101 is created as union (lg_300101) of
object lg_3001, and the union attached material lg_white. So when using object lg_300101 and
specifing another color, it keeps white. But as there actually is only one object in lg_300101, POV-
Ray produces a warning for “Should have at least 2 objects in csg”. Currently, I do not know a fix
for this, and it works. My advice would be not to use precolored parts.

# 4. Notes

Recent development of LGEO library was done on an Intel-based Mac Mini running Mac
OS X 10.4.10/11, using MegaPOV 1.2.1 for rendering. MegaPOV 1.2.1 is based on POV-Ray 3.6.
There is still no official Intel-compiled version of POV-Ray for Mac OS X, so I used this version.
Basically, LGEO should work with any POV-Ray from 3.1 up.


