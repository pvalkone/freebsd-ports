--- setup.py.orig	2020-09-24 15:19:33 UTC
+++ setup.py
@@ -28,7 +28,7 @@ install_requires = [
     'cached-property >= 1.2.0, < 2',
     'docopt >= 0.6.1, < 1',
     'PyYAML >= 3.10, < 6',
-    'requests >= 2.20.0, < 3',
+    'requests >= 2.6.1, != 2.11.0, != 2.12.2, != 2.18.0, < 3',
     'texttable >= 0.9.0, < 2',
     'websocket-client >= 0.32.0, < 1',
     'distro >= 1.5.0, < 2',
