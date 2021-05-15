--- streamrip/bases.py.orig	2021-05-10 07:31:44 UTC
+++ streamrip/bases.py
@@ -141,7 +141,7 @@ class Track:
         self.folder = kwargs["parent_folder"] or self.folder
 
         self.file_format = kwargs.get("track_format", TRACK_FORMAT)
-        self.folder = sanitize_filepath(self.folder, platform="auto")
+        self.folder = sanitize_filepath(self.folder, platform="Posix")
         self.format_final_path()
 
         os.makedirs(self.folder, exist_ok=True)
