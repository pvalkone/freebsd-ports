--- util.c.orig	2017-06-02 08:44:36 UTC
+++ util.c
@@ -705,7 +705,7 @@ char const *get_userdata_dir()
 
 char *read_bundled_file(char *name, uint32_t *sizeret)
 {
-	char *exe_dir = get_exe_dir();
+	char *exe_dir = "/usr/local/share/blastem";
 	if (!exe_dir) {
 		if (sizeret) {
 			*sizeret = -1;
@@ -768,14 +768,7 @@ char const *get_config_dir()
 
 char const *get_config_dir()
 {
-	static char* confdir;
-	if (!confdir) {
-		char const *base = get_home_dir();
-		if (base) {
-			confdir = alloc_concat(base, CONFIG_PREFIX PATH_SEP "blastem");
-		}
-	}
-	return confdir;
+	return "/usr/local/etc/blastem";
 }
 
 char const *get_userdata_dir()
