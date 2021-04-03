--- streamrip/downloader.py.orig	2021-04-03 09:17:14 UTC
+++ streamrip/downloader.py
@@ -107,7 +107,8 @@ class Track:
             # `load_meta` must be called at some point
             logger.debug("Track: meta not provided")
 
-        if (u := kwargs.get("cover_url")) is not None:
+        u = kwargs.get("cover_url")
+        if u is not None:
             logger.debug(f"Cover url: {u}")
             self.cover_url = u
 
@@ -168,7 +169,7 @@ class Track:
         )
 
         self.file_format = kwargs.get("track_format", TRACK_FORMAT)
-        self.folder = sanitize_filepath(self.folder, platform="auto")
+        self.folder = sanitize_filepath(self.folder, platform="Posix")
 
         os.makedirs(self.folder, exist_ok=True)
 
@@ -534,7 +535,8 @@ class Tracklist(list):
         self.__setitem__(key, val)
 
     def convert(self, codec="ALAC", **kwargs):
-        if (sr := kwargs.get("sampling_rate")) :
+        sr = kwargs.get("sampling_rate")
+        if sr:
             if sr < 44100:
                 logger.warning(
                     "Sampling rate %d is lower than 44.1kHz."
@@ -1253,7 +1255,8 @@ class Artist(Tracklist):
         """
         groups = dict()
         for album in self:
-            if (t := self.essence(album.title)) not in groups:
+            t = self.essence(album.title)
+            if t not in groups:
                 groups[t] = []
             groups[t].append(album)
 
