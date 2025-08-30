--- m4/nut_check_libltdl.m4.orig	2025-08-31 00:00:22.384289000 +0300
+++ m4/nut_check_libltdl.m4	2025-08-31 00:02:01.246769000 +0300
@@ -10,10 +10,7 @@
 	dnl No NUT_CHECK_PKGCONFIG here: (lib)ltdl.pc was not seen on any OS
 
 	dnl save CFLAGS and LIBS
-	CFLAGS_ORIG="${CFLAGS}"
-	LIBS_ORIG="${LIBS}"
 	LIBS=""
-	CFLAGS=""
 	depLIBS=""
 	depCFLAGS=""
 	dnl For fallback below:
