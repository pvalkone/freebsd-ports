--- streamrip/bases.py.orig	2021-04-30 16:46:05.193709000 +0300
+++ streamrip/bases.py	2021-04-30 16:50:02.341841000 +0300
@@ -93,7 +93,8 @@
         if isinstance(kwargs.get("meta"), TrackMetadata):
             self.meta = kwargs["meta"]
 
-        if (u := kwargs.get("cover_url")) is not None:
+        u = kwargs.get("cover_url")
+        if u is not None:
             logger.debug(f"Cover url: {u}")
             self.cover_url = u
 
@@ -135,7 +136,7 @@
         self.folder = kwargs["parent_folder"] or self.folder
 
         self.file_format = kwargs.get("track_format", TRACK_FORMAT)
-        self.folder = sanitize_filepath(self.folder, platform="auto")
+        self.folder = sanitize_filepath(self.folder, platform="Posix")
         self.format_final_path()
 
         os.makedirs(self.folder, exist_ok=True)
@@ -832,7 +833,8 @@
         :param codec:
         :param kwargs:
         """
-        if (sr := kwargs.get("sampling_rate")) :
+        sr = kwargs.get("sampling_rate")
+        if sr:
             if sr < 44100:
                 logger.warning(
                     "Sampling rate %d is lower than 44.1kHz."
