--- config.def.h	2018-10-19 22:04:52.018216000 +0300
+++ base16-default-dark-config.def.h	2018-10-19 22:40:40.333469000 +0300
@@ -82,44 +82,42 @@
  */
 unsigned int tabspaces = 8;
 
-/* Terminal colors (16 first used in escape sequence) */
+/*
+* base16-default-dark-theme.h
+*
+* Base16: (https://github.com/chriskempson/base16)
+*
+* Authors:
+*
+* Scheme: Chris Kempson (http://chriskempson.com)
+* Template: Honza Pokorny <me@honza.ca>
+*
+*/
+
+
 static const char *colorname[] = {
-	/* 8 normal colors */
-	"black",
-	"red3",
-	"green3",
-	"yellow3",
-	"blue2",
-	"magenta3",
-	"cyan3",
-	"gray90",
-
-	/* 8 bright colors */
-	"gray50",
-	"red",
-	"green",
-	"yellow",
-	"#5c5cff",
-	"magenta",
-	"cyan",
-	"white",
-
-	[255] = 0,
-
-	/* more colors can be added after 255 to use with DefaultXX */
-	"#cccccc",
-	"#555555",
+  "#181818", /* base00 */
+  "#ab4642", /* base08 */
+  "#a1b56c", /* base0B */
+  "#f7ca88", /* base0A */
+  "#7cafc2", /* base0D */
+  "#ba8baf", /* base0E */
+  "#86c1b9", /* base0C */
+  "#d8d8d8", /* base05 */
+  "#585858", /* base03 */
+  "#dc9656", /* base09 */
+  "#282828", /* base01 */
+  "#383838", /* base02 */
+  "#b8b8b8", /* base04 */
+  "#e8e8e8", /* base06 */
+  "#a16946", /* base0F */
+  "#f8f8f8", /* base07 */
 };
 
-
-/*
- * Default colors (colorname index)
- * foreground, background, cursor, reverse cursor
- */
 unsigned int defaultfg = 7;
 unsigned int defaultbg = 0;
-static unsigned int defaultcs = 256;
-static unsigned int defaultrcs = 257;
+static unsigned int defaultcs = 13;
+static unsigned int defaultrcs = 0;
 
 /*
  * Default shape of cursor
