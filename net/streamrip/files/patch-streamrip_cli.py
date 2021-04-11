--- streamrip/cli.py.orig	2021-04-10 03:19:29 UTC
+++ streamrip/cli.py
@@ -56,7 +56,7 @@ def cli(ctx, **kwargs):
     config = Config()
 
     if config.session["check_for_updates"]:
-        from importlib import metadata
+        import importlib_metadata as metadata
 
         from packaging import version
 
