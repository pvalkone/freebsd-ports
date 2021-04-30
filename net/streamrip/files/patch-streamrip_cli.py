--- streamrip/cli.py.orig	2021-04-30 16:52:02.434474000 +0300
+++ streamrip/cli.py	2021-04-30 16:52:35.318662000 +0300
@@ -59,7 +59,7 @@
         return
 
     if config.session["check_for_updates"]:
-        from importlib import metadata
+        import importlib_metadata as metadata
 
         from packaging import version
 
