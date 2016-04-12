--- network.c.orig	2013-08-16 05:57:44 UTC
+++ network.c
@@ -18,6 +18,7 @@
  
 ******************************************************************************/
 
+#include "netinet/in.h"
 #include "network.h"
 
 void *get_in_addr(struct sockaddr *sa) {
