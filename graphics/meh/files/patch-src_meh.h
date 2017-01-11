--- src/meh.h.orig	2017-01-11 19:44:33 UTC
+++ src/meh.h
@@ -2,6 +2,7 @@
 #define MEH_H MEH_H
 
 #include <stdio.h>
+#include <sys/select.h>
 
 struct image;
 
