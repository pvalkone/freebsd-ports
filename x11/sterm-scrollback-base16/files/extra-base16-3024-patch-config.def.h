--- config.def.h	2018-10-19 22:04:52.018216000 +0300
+++ base16-3024-config.def.h	2018-10-19 22:07:36.643230000 +0300
@@ -82,44 +82,42 @@
  */
 unsigned int tabspaces = 8;
 
-/* Terminal colors (16 first used in escape sequence) */
+/*
+* base16-3024-theme.h
+*
+* Base16: (https://github.com/chriskempson/base16)
+*
+* Authors:
+*
+* Scheme: Jan T. Sott (http://github.com/idleberg)
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
+  "#090300", /* base00 */
+  "#db2d20", /* base08 */
+  "#01a252", /* base0B */
+  "#fded02", /* base0A */
+  "#01a0e4", /* base0D */
+  "#a16a94", /* base0E */
+  "#b5e4f4", /* base0C */
+  "#a5a2a2", /* base05 */
+  "#5c5855", /* base03 */
+  "#e8bbd0", /* base09 */
+  "#3a3432", /* base01 */
+  "#4a4543", /* base02 */
+  "#807d7c", /* base04 */
+  "#d6d5d4", /* base06 */
+  "#cdab53", /* base0F */
+  "#f7f7f7", /* base07 */
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
