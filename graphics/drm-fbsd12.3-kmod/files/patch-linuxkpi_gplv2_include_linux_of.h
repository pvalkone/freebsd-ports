--- linuxkpi/gplv2/include/linux/of.h.orig	2022-03-16 16:46:34 UTC
+++ linuxkpi/gplv2/include/linux/of.h
@@ -47,10 +47,4 @@ of_node_get(struct device_node *node)
 
 static inline void of_node_put(struct device_node *node) { }
 
-static inline int
-of_node_to_nid(struct device_node *device)
-{
-	return (-1);
-}
-
 #endif
