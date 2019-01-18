--- net.c.orig	2019-01-18 11:47:34.634795000 +0200
+++ net.c	2019-01-18 11:50:18.052147000 +0200
@@ -2,6 +2,7 @@
 #include <ifaddrs.h>
 #include <netinet/in.h>
 #include "net.h"
+#include <sys/socket.h>
 
 static uint8_t is_loopback(struct sockaddr_in *addr)
 {
