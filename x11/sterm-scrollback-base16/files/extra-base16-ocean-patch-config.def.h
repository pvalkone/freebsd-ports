--- config.def.h	2018-10-19 22:04:52.018216000 +0300
+++ base16-ocean-config.def.h	2018-10-19 22:08:26.065335000 +0300
@@ -82,44 +82,42 @@
  */
 unsigned int tabspaces = 8;
 
-/* Terminal colors (16 first used in escape sequence) */
+/*
+* base16-ocean-theme.h
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
+  "#2b303b", /* base00 */
+  "#bf616a", /* base08 */
+  "#a3be8c", /* base0B */
+  "#ebcb8b", /* base0A */
+  "#8fa1b3", /* base0D */
+  "#b48ead", /* base0E */
+  "#96b5b4", /* base0C */
+  "#c0c5ce", /* base05 */
+  "#65737e", /* base03 */
+  "#d08770", /* base09 */
+  "#343d46", /* base01 */
+  "#4f5b66", /* base02 */
+  "#a7adba", /* base04 */
+  "#dfe1e8", /* base06 */
+  "#ab7967", /* base0F */
+  "#eff1f5", /* base07 */
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
