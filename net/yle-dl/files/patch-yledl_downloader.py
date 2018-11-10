--- yledl/downloader.py.orig	2018-11-03 11:44:25.000000000 +0200
+++ yledl/downloader.py	2018-11-10 23:02:03.150204000 +0200
@@ -7,6 +7,7 @@
 import logging
 import os.path
 import sys
+import subprocess
 from .utils import sane_filename
 from .backends import IOCapability, PreferredFileExtension, Subprocess
 from .exitcodes import to_external_rd_code, RD_SUCCESS, RD_INCOMPLETE, \
@@ -373,4 +374,4 @@
         if postprocess_command:
             args = [postprocess_command, videofile]
             args.extend(subtitlefiles)
-            return Subprocess().execute(args, None)
+            return subprocess.call(args)
