--- garglk/launchgtk.c.orig	2017-01-12 20:57:09 UTC
+++ garglk/launchgtk.c
@@ -149,24 +149,7 @@ void winbrowsefile(char *buffer)
 
 void winpath(char *buffer)
 {
-    char exepath[MaxBuffer] = {0};
-    ssize_t exelen;
-
-    exelen = readlink("/proc/self/exe", exepath, sizeof(exepath));
-
-    if (exelen <= 0 || exelen >= MaxBuffer)
-    {
-        winmsg("Unable to locate executable path");
-        exit(EXIT_FAILURE);
-    }
-
-    strcpy(buffer, exepath);
-
-    char *dirpos = strrchr(buffer, *DirSeparator);
-    if ( dirpos != NULL )
-        *dirpos = '\0';
-
-    return;
+    strcpy(buffer, "%%LOCALBASE%%/bin/garglk");
 }
 
 int winexec(const char *cmd, char **args)
