--- config.def.h	2020-10-15 07:25:53.534866930 +0000
+++ config.h	2020-10-15 09:35:33.959730000 +0000
@@ -3,25 +3,25 @@
 /* appearance */
 static const unsigned int borderpx  = 0;        /* border pixel of windows */
 static const unsigned int snap      = 32;       /* snap pixel */
-static const unsigned int cornerrad = 4;
-static const unsigned int gappih    = 25;
-static const unsigned int gappiv    = 25;
-static const unsigned int gappoh    = 25;
-static const unsigned int gappov    = 25;
+static const unsigned int cornerrad = 6;
+static const unsigned int gappih    = 8;
+static const unsigned int gappiv    = 8;
+static const unsigned int gappoh    = 8;
+static const unsigned int gappov    = 8;
 static const int smartgaps          = 1;
 static const int showbar            = 1;        /* 0 means no bar */
 static const int topbar             = 1;        /* 0 means bottom bar */
-static const char *fonts[]          = { "monospace:size=10" };
-static const char dmenufont[]       = "monospace:size=10";
-static const char col_gray1[]       = "#222222";
-static const char col_gray2[]       = "#444444";
-static const char col_gray3[]       = "#bbbbbb";
-static const char col_gray4[]       = "#eeeeee";
-static const char col_cyan[]        = "#005577";
+static const char *fonts[]          = { "DejaVu Sans Mono:pixelsize=14:antialias=true:autohint=true" };
+static const char dmenufont[]       = "DejaVu Sans Mono:pixelsize=14:antialias=true:autohint=true";
+static const char col_gray1[]       = "#0c0d0e";
+static const char col_gray2[]       = "#737475";
+static const char col_gray3[]       = "#b7b8b9";
+static const char col_gray4[]       = "#fcfdfe";
+static const char col_main[]        = "#ffae42";
 static const char *colors[][3]      = {
 	/*               fg         bg         border   */
 	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
-	[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
+	[SchemeSel]  = { col_gray4, col_main,  col_main  },
 };
 
 /* tagging */
@@ -62,7 +62,7 @@
 
 /* commands */
 static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
-static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };
+static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_main, "-sf", col_gray4, NULL };
 static const char *termcmd[]  = { "st", NULL };
 
 static Key keys[] = {
