--- net.c.orig	2019-01-19 08:39:36 UTC
+++ net.c
@@ -2,6 +2,7 @@
 #include <ifaddrs.h>
 #include <netinet/in.h>
 #include "net.h"
+#include <sys/socket.h>
 
 static uint8_t is_loopback(struct sockaddr_in *addr)
 {
